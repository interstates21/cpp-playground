#include <iostream>

class Panda {
    
    public:

        Panda( int legs );
        ~Panda ( void );
        static void      getNPandas( void );

    private:
        static int      _nPandas;
        int             _nLegs;
};

Panda::Panda( int legs ) : _nLegs(legs) {
    std::cout << "constr" << std::endl;
    this->_nPandas++;
    return;
}

Panda::~Panda( void ) {
    std::cout << "destr" << std::endl;
    this->_nPandas--;
    return;
}

int Panda::_nPandas = 0;

void Panda::getNPandas( void ) {
    std::cout << Panda::_nPandas <<std::endl;
}

int main(void) {

    Panda po(5);
    Panda *pPo;
    Panda riki(2);

    pPo = & po;

    pPo->getNPandas();
    return (0);
}