#include <iostream>


class Sample {
    public:
        int         x;
        int         y;
        std::string nation;
        Sample(int x, int y);
        ~Sample(void);
        void f(void) const;
}

Sample::Sample(int ex, int ey) : x(ex), y(ey) {
    std::cout << "constr" << std::endl;

    return ;
};

Sample::~Sample(void) {
    std::cout << "destr" << std::endl;

    return ;
}

void   Sample::f(void) {
    std::cout << "f" << std::endl;

    return ;
}

int main(void) {
    
    Sample ins;
    Sample *pins = &ins; /* still c*/

    int     Sample::*px = NULL; /* create an empty pointer to int x inside of class Sample */
    void    (Sample::*pf)(void) const ; /*  create an pointer to f inside of Sample */ 

    /* Consider int Sample::* as a DATA_TYPE */

    px = &Sample::x; // not specified yet;
    ins.*px = 21; // .* - specify the instance;
    pins->*px = 42;

    
    pf = &Sample::f; 
   (ins.*f)();
   (pins->*f)();

    return (0);
}