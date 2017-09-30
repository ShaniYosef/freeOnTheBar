//
// Created by user-pc on 21/09/2017.
//

#ifndef UNTITLED4_RED_H
#define UNTITLED4_RED_H

#include "Wine.h"
class Red: public Wine
{
public:
    Red(char* name, int year):Wine(name,year) {};
    void prepare(){cout<<"Well, all you need to do is pour it into a glass and serve it in room temperature (16°-18°) ."<< endl;};
};


#endif //UNTITLED4_RED_H
