//
// Created by user-pc on 21/09/2017.
//

#ifndef UNTITLED4_BEER_H
#define UNTITLED4_BEER_H


#include "Drink.h"

class Beer: public Drink
{
public:
    Beer(char* name):Drink(name){};
    ~Beer();
    void prepare(){cout<<"Well, all you need to do is pour it into a glass and serve."<< endl;};
};


#endif //UNTITLED4_BEER_H
