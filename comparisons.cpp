#include <iostream>

class Panda {

    public:

        Panda( std::string name );
        ~Panda( void );

        std::string    getName( void ) const;
        int     compare( Panda *other ) const;
    private:

        std::string _name;
};


Panda::Panda( std::string n ) : _name(n) {
    std::cout << "constr" << std::endl;

    return ;
}

Panda::~Panda( void ) {
    std::cout << "destr" << std::endl;

    return ;
}

std::string Panda::getName( void ) const {
    return (this->_name);
}


int Panda::compare( Panda *other ) const {
    return ( other->getName().compare(this->_name) );
}

int main( void ) {
    Panda po("Po");
    Panda lily("Lily");
    Panda lpo("Po");

    std::cout << "res: " << po.compare( &po ) << std::endl;
}