#ifndef NAND_H
#define NAND_H

#include <iostream>
#include "../gates/gates.h"
#include "../wire/wire.h"

using namespace std;

class Nand: public Gates {
    public:
        Nand(Wire &a, Wire &b, Wire &w, unsigned int d) : Gates(a, b, w, d){}
        ~Nand(){}

        void eval();
        void prob();
};

#endif