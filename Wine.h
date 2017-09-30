//
// Created by user-pc on 20/09/2017.
//

#ifndef UNTITLED4_WINE_H
#define UNTITLED4_WINE_H

#include "Drink.h"

class Wine: public Drink
{
private:
   int m_year;
public:
    Wine(char* name, int year);
    char* getName(){return  (m_name);};
    virtual void prepare() = 0;
};





#endif //UNTITLED4_WINE_H
