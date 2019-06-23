#include <iostream>

class Sample {
    public:

        char    c;
        int     p;

        Sample (char c, int p);
        ~Sample(void);
};

Sample::Sample(char ec, int ep) : c(ec), p(ep) // init list
{
    std::cout << this->c << std::endl;
    std::cout << this->p << std::endl;
    return ;
}

Sample::~Sample()
{
    std::cout << "destructor" << std::endl;
    return ;
} 

int main(void)
{
    Sample ins('c', 4);

}