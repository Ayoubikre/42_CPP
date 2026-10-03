std::vector<int> PmergeMe::ft_jacobsthal(std::vector<int>& m, std::vector<int>& p)
{

}

void PmergeMe::ft_sort_v(std::vector<int>& v)
{
    int left=0;
    std::vector< std::pair<int, int> > pairs;

    //edge cases
    if(v.size()<2)
        return ;
        
    if(v.size()%2 != 0)
        left=v[v.size()-1];

    //creat pairs
    for(int i=0; i<v.size()-1;i+=2)
        pairs.push_back(std::make_pair(v[i], v[i+1]));

    //order each pair: left, right
    for(int i=0; i<pairs.size();i++)
        if(pairs[i].first > pairs[i].second)
            std::swap(pairs[i].first, pairs[i].second);


    // creat vectore withe bigest elent of each pair
    std::vector<int> ww;
    for(int i=0; i<pairs.size();i++)
         ww.push_back(pairs[i].second);



    // recursion on that vectore "it ordeard withe Jacobsthal thingy on recursion return"
    ft_sort_v(ww);

    //craet the new sorted pair vector
    std::vector< std::pair<int, int> > s_pairs;
    for(int i=0; i<ww.size();i++)
    {
        for(int y=0; y<pairs.size();y++)
            if(ww[i] == pairs[y].second)
                s_pairs.push_back(pairs[y]);
    }


    //creat the main and panding vectore to prepar for Jacobsthal thingy
    std::vector<int> m;
    std::vector<int> p;
    for(int i=0; i<s_pairs.size();i++)
    {
       if(i==0)
       {
            m.push_back(s_pairs[i].first);
            m.push_back(s_pairs[i].second);
       }
       else{
            p.push_back(s_pairs[i].first);
            m.push_back(s_pairs[i].second);
       }
    }


    //strtat the jakson thingy
    ww=ft_jacobsthal(m, p);
