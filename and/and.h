#ifndef AND_H
#define AND_H

#include <iostream>
#include "../gates/gates.h"
#include "../wire/wire.h"

using namespace std;

class And: public Gates {
    public:
        And(Wire &a, Wire &b, Wire &w, unsigned int d) : Gates(a, b, w, d){}
        ~And(){}

        void eval();
        void prob();
};

#endif