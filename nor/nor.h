#ifndef NOR_H
#define NOR_H

#include <iostream>
#include "../gates/gates.h"
#include "../wire/wire.h"

using namespace std;

class Nor: public Gates {
    public:
        Nor(Wire &a, Wire &b, Wire &w, unsigned int d) : Gates(a, b, w, d){}
        ~Nor(){}

        void eval();
        void prob();
};

#endif