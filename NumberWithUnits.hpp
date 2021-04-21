#pragma once
#include <string>
#include <stdexcept>
#include <map>
#include <iostream>
#include <cassert>
#include <fstream>
#include <string>

namespace ariel
{

    using namespace std;

    class NumberWithUnits
    {

    private:

        double _amount;
        string _unit;

    public:

        // Constructor
        NumberWithUnits(const double& amount, const string &unit){ 
        _amount = amount;
        _unit = unit;
        }

        // initalizing ("empty") constructor
        NumberWithUnits(){};

    static void read_units(ifstream &file);

    //calc operators:
    NumberWithUnits operator+() { //plus unary
        return NumberWithUnits(abs(_amount), _unit);
    }
    NumberWithUnits operator-() { // minus unary
        return NumberWithUnits(-1*_amount, _unit);
    }
    NumberWithUnits operator+(NumberWithUnits num);
    NumberWithUnits operator+=(NumberWithUnits num);
    NumberWithUnits operator-(NumberWithUnits &num);
    NumberWithUnits operator-=(NumberWithUnits &num);
    // NumberWithUnits operator*(const int num) {
    //     return NumberWithUnits(_amount*num, _unit);
    // }
    friend const NumberWithUnits operator*(const int num, const NumberWithUnits &cur) {
        return NumberWithUnits(cur._amount * num, cur._unit);
    };
    //     NumberWithUnits operator*(double num) {
    //     return NumberWithUnits(_amount*num, _unit);
    // }
    friend const NumberWithUnits operator*(const double num, const NumberWithUnits &cur) {
        return NumberWithUnits(cur._amount * num, cur._unit);
    };
    // comparison operators
    bool operator>(NumberWithUnits &num);
    bool operator>=(NumberWithUnits &num);
    bool operator<(NumberWithUnits &num);
    bool operator<=(NumberWithUnits &num);
    bool operator==(NumberWithUnits &num);
    bool operator==(NumberWithUnits num);
    bool operator!=(NumberWithUnits &num);

    //ostream operations
    friend ostream& operator<< (ostream& output, const NumberWithUnits& num);
    friend istream& operator>> (istream& input, NumberWithUnits& num);


};
}