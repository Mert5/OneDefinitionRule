#include <iostream>
#include "person.h"

// Rerefence => https://www.youtube.com/watch?v=8jLOx1hD3_o

// You can't have multiple definitions for the same name in your entire C++ program.
// You can violate it for classes 

// Variable : Declaration and definition
double weight {};

double add ( double a, double b);

struct Point
{
    double m_x{};
    double m_y{};
};
 

int main(){

    Person p1("Josh Snow", 35);
    p1.print_info();

    return 0;
}
