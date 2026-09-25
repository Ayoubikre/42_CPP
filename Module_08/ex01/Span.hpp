#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <stdexcept>
#include <numeric>
#include <iterator>

#define ft_log_(x) std::cout<< x
#define ft_log(x) std::cout<< x <<std::endl

class Span {
    private:
        unsigned int N;
        std::vector<int> t;
        
    public:
        Span(unsigned int N=0);
        Span(const Span& tmp);
        Span& operator=(const Span& tmp);
        ~Span();

        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void ft_print();

        template<typename X>
        void ft_fill(X begin, X end)
        {
            unsigned int size=std::distance(begin, end);
            unsigned int left = N - t.size();

            if(size>left)
                throw std::runtime_error("no space left to insert all data");
            
            t.insert(t.end(), begin, end);
        }
};