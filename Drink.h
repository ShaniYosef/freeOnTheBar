//
// Created by user-pc on 20/09/2017.
//

#ifndef UNTITLED4_DRINK_H
#define UNTITLED4_DRINK_H

#include <iostream>
using namespace std;
const int MAX_LEN  = 40;

class Drink
{
protected:
    char m_name[MAX_LEN];

public:
    Drink(char* name){strcpy(m_name,name);};
    virtual char* getName(){return m_name;};
    virtual void prepare() = 0;
};






#endif //UNTITLED4_DRINK_H
