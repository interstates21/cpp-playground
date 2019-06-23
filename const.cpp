#include <iostream>

class Sample {

    public:

        int const   panda;
        int         butter;

        Sample (int const panda);
        ~Sample(void);

        void f( void ) const;
};

Sample::Sample(int const external_panda) : panda(external_panda), butter(24) {
    std::cout << "const" << std::endl;

    return ;
}

Sample::~Sample(void) {
    std::cout << "destr" << std::endl;

    return ;
}

void    Sample::f(void) const {

    std::cout << "hello panda #" << this->panda << std::endl;

   /* this->panda = 0; Won't compile*/
   return ;  
}