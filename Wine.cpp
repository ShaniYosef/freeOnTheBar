//
// Created by user-pc on 22/09/2017.
//
#include "Wine.h"

// adds the year to the name member
Wine::Wine(char* name, int year):Drink(name), m_year(year) {
    strcat(m_name," (year ");
    itoa(year,m_name+strlen(m_name),10);
    strcat(m_name,")");
}