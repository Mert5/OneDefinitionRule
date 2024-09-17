#include "person.h"

//double weight {};

/*class Person{
                    even if you try to define something like this, there will be compiler error.
                    Because you defined it before and included here.  
};*/

double add ( double a, double b){
    return a+b;
}

struct Point{
    double m_x{};
    double m_y{};
}; 

int Person::person_count = 8;

Person::Person(const std::string& names_param, int age_param) //Constructor
    : full_name{names_param}, age{age_param}{
        ++person_count;
    }
