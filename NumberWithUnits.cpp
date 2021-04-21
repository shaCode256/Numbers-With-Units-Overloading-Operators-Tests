#include "NumberWithUnits.hpp"
#include <string>
#include <iostream>
#include <stdexcept>
#include <map>
#include <iostream>
#include <cassert>


using namespace ariel;

void NumberWithUnits::read_units(ifstream &file)
{
}

//calc operators:
NumberWithUnits NumberWithUnits::operator+(NumberWithUnits num)
{
    return NumberWithUnits();
}
NumberWithUnits NumberWithUnits::operator+=(NumberWithUnits num)
{
    return NumberWithUnits();
}
NumberWithUnits NumberWithUnits::operator-(NumberWithUnits &num)
{
    return NumberWithUnits();
}
NumberWithUnits NumberWithUnits::operator-=(NumberWithUnits &num)
{
    return NumberWithUnits();
}

// comparison operators
bool NumberWithUnits::operator==(NumberWithUnits num)
{
    return true;
}

bool NumberWithUnits::operator>(NumberWithUnits &num)
{
    return true;
}
bool NumberWithUnits::operator>=(NumberWithUnits &num)
{
    return true;
}
bool NumberWithUnits::operator<(NumberWithUnits &num)
{
    return true;
}
bool NumberWithUnits::operator<=(NumberWithUnits &num)
{
    return true;
}
bool NumberWithUnits::operator==(NumberWithUnits &num)
{
    return true;
}
bool NumberWithUnits::operator!=(NumberWithUnits &num)
{
    return true;
}

//ostream operations
std::ostream& ariel::operator<<(ostream& output, const NumberWithUnits& num) {
    return (output << num._amount << '[' << num._unit << ']');
}

std::istream& ariel::operator>> (istream &input, NumberWithUnits &num) {
    return input;    
}