#ifndef OR_H
#define OR_H

#include <iostream>
#include "../gates/gates.h"
#include "../wire/wire.h"

using namespace std;

class Or: public Gates {
    public:
        Or(Wire &a, Wire &b, Wire &w, unsigned int d) : Gates(a, b, w, d){}
        ~Or(){}

        void eval();
        void prob();
};

#endif