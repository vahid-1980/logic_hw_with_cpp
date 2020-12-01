#ifndef NOT_H
#define NOT_H

#include <iostream>
#include "../gates/gates.h"
#include "../wire/wire.h"

using namespace std;

class Not: public Gates {
    public:
        Not(Wire &a, Wire &w, unsigned int d) : Gates(a, w, d){}
        ~Not(){}

        void eval();
        void prob();
};

#endif