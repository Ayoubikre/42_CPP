#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& tmp): csv(tmp.csv) {}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& tmp)
{
    if(this!=&tmp)
        csv=tmp.csv;

    return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::ft_load_csv()
{
    size_t n;
    std::string tmp;

    std::ifstream in_f("data.csv");

    if(!in_f)
        throw std::runtime_error("Error: Csv file not found");
    
    std::getline(in_f,tmp);
    while(std::getline(in_f,tmp))
    {
        if(tmp.empty())
            continue;
        n=tmp.find(",");
        if (n != std::string::npos)
            csv[ft_trim(tmp.substr(0,n))]= static_cast<float>(std::strtod(tmp.substr(n+1).c_str(),NULL)) ;
    }

    in_f.close();
}

std::string BitcoinExchange::ft_trim(const std::string& str)
{
    size_t first = str.find_first_not_of(" \t\n\r\f\v");
    if (first == std::string::npos)
            return "" ;

    size_t last = str.find_last_not_of(" \t\n\r\f\v");

    return str.substr(first, (last - first + 1));
}

std::string BitcoinExchange::ft_split(std::string tmp, int x, char c)
{
    size_t n=tmp.find(c);
    if(n==std::string::npos)
        return "";
    else
    {
        if(!x)
        {
            return ft_trim(tmp.substr(0,n));
        }
        else
        {
            return ft_trim(tmp.substr(n+1));
        }
    }
        return "";
}

int BitcoinExchange::ft_is_number(std::string tmp)
{
    long i=0;

    if(tmp.size()==1 && !isdigit(tmp[0]))
        return -1;

    if(tmp[0]=='-'|| tmp[0]=='+')
    {
        if(!isdigit(tmp[1]) && tmp[1]!='.')
            return -1;
        i++;
    }
    while(tmp[i])
    {
        if(!isdigit(tmp[i]))
            break;
        i++;
    }
    if(!tmp[i])
        return 1;
    
    if(tmp[i++]=='.')
    {
        while(tmp[i])
        {
            if(!isdigit(tmp[i]))
                break;
            i++;
        }
        if(tmp[i]=='\0')
            return 2;
    }
    return -1;
}

int BitcoinExchange::ft_check_value(std::string tmp)
{

    if(tmp.empty() || ft_is_number(tmp) == -1)
        return 0;

    double X=std::strtod(tmp.c_str(),NULL);

    if(X < 0)
        throw std::runtime_error("Error: not a positive number.");

    if(X > 1000)
        throw std::runtime_error("Error: too large a number.");

    return 1;
}

int BitcoinExchange::ft_check_date(std::string tmp)
{
    if(tmp.empty())
        return 0;

    std::string year = ft_split(tmp,0,'-') ;
    std::string month = ft_split(ft_split(tmp,1,'-') , 0,'-');
    std::string day = ft_split(ft_split(tmp,1,'-') , 1,'-');
    

    if(year.empty() || month.empty() || day.empty())
        return 0;

    if(year.size()!=4 || month.size()!=2 || day.size() !=2)
        return 0;

    if (year.find_first_not_of("0123456789") != std::string::npos)
        return 0;

    if (month.find_first_not_of("0123456789") != std::string::npos)
        return 0;

    if (day.find_first_not_of("0123456789") != std::string::npos)
        return 0;


    long m=std::strtol(month.c_str(),NULL, 10);
    long d=std::strtol(day.c_str(),NULL, 10);

    if( m < 1 || m > 12 || d < 1 || d > 31)
        return 0;

    if(m==2 && d > 28)
        return 0;

    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
        return 0;

    return 1;
}

int BitcoinExchange::ft_calcul(std::string date, std::string value)
{
    std::map<std::string, float>::iterator itr = csv.lower_bound(date);

    if(itr==csv.begin() && itr->first!=date)
        return 0;
    else if(itr==csv.end() || itr->first!=date)
        itr--;
    
    double rst=std::strtod(value.c_str(), NULL) * itr->second;

    ft_log_(std::setprecision(2) << std::fixed);
    ft_log(date << " => " << value << " = " << rst);

    return 1;
}

void BitcoinExchange::ft_load_data(std::string ar)
{
    std::string tmp;
    std::string date;
    std::string value;

    std::ifstream in_f(ar.c_str());
    if(!in_f)
        throw std::runtime_error("Error: Input file not found");

    try    
    {
        std::getline(in_f, tmp);
        if(ft_split(tmp,0,'|')!="date" || ft_split(tmp,1,'|')!="value")
        {
            throw std::runtime_error("Error: Incorrect Format");
        }
        
    }catch(std::exception& e)
    {
        ft_log(e.what());
    }


    while(std::getline(in_f, tmp))
    {
        if(tmp.empty())
            continue;
        try
        {
            {
                if (tmp.find('|') == std::string::npos)
                    throw std::runtime_error("Error: bad input => " + tmp);
            }

            {
                date=ft_split(tmp,0,'|');
                
                if(!ft_check_date(date))
                    throw std::runtime_error("Error: bad input => " + date);
            }

            {   
               value=ft_split(tmp,1,'|');
            
                if(!ft_check_value(value))
                    throw std::runtime_error("Error: bad input => " + value);
            }

            {               
                if(!ft_calcul(date,value))
                    throw std::runtime_error("Error: bad input => " + date);
            }

        }catch(std::exception& e)
        {
            ft_log(e.what());
        }
    }
}
