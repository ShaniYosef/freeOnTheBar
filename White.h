//
// Created by user-pc on 21/09/2017.
//

#ifndef UNTITLED4_WHITE_H
#define UNTITLED4_WHITE_H

#include "Wine.h"
class White: public Wine
{
public:
    White(char* name, int year):Wine(name,year) {};
    void prepare(){cout<<"Well, all you need to do is pour it into a glass and serve it cool."<< endl;};
};


#endif //UNTITLED4_WHITE_H
