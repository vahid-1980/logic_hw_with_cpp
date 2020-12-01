#ifndef XOR_H
#define XOR_H

#include <iostream>
#include "../gates/gates.h"
#include "../wire/wire.h"

using namespace std;

class Xor: public Gates {
    public:
        Xor(Wire &a, Wire &b, Wire &w, unsigned int d) : Gates(a, b, w, d){}
        ~Xor(){}

        void eval();
        void prob();
};

#endif