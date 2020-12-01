#ifndef WIRE_H
#define WIRE_H

#include <iostream>

using namespace std;


class Wire {
    protected:
        static unsigned int numberOfWires;
    public:
        unsigned char value;
        unsigned int eventTime;
        unsigned int activityCount = 0;
        float contolability = 0.5;

        unsigned int wireIdentifire;

        Wire(unsigned char c, unsigned int d) : value(c), eventTime(d) {
            wireIdentifire = numberOfWires;
            numberOfWires++;
        }
        Wire(){};
        ~Wire(){}

        void put(unsigned char a, unsigned int d);
        void get(unsigned char &a, unsigned int &d);
        unsigned int activity() {return activityCount; }
};



#endif