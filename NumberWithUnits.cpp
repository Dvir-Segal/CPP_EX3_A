#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <climits>
#include <unordered_map>
#include <bits/stdc++.h>
#include <utility>
#include "NumberWithUnits.hpp"
using namespace std;

namespace ariel{
    void NumberWithUnits::read_units(ifstream& file){
}

NumberWithUnits operator+(NumberWithUnits& a, NumberWithUnits& b){
    NumberWithUnits c{2, "km"};
    return c;
}

NumberWithUnits& NumberWithUnits::operator+=(const NumberWithUnits& b){
    return *this;
}

NumberWithUnits operator-(NumberWithUnits& a, NumberWithUnits& b){
    NumberWithUnits c = {2, "km"};
    return c;
}

NumberWithUnits& NumberWithUnits::operator-=(NumberWithUnits& b){
    return b;
}

NumberWithUnits NumberWithUnits:: operator-(){
    return NumberWithUnits {2, "km"};
}

NumberWithUnits& operator*(NumberWithUnits& a, double x){
    return a;
}

NumberWithUnits& operator*(double x, NumberWithUnits& a){
    return a;
}

bool operator>(NumberWithUnits& a, NumberWithUnits& b){
    return true;
}

bool operator>=(NumberWithUnits& a, NumberWithUnits& b){
    return true;
}
bool operator==(const NumberWithUnits& a, const NumberWithUnits& b){
    return true;
}

bool operator<(NumberWithUnits& a, NumberWithUnits& b){
    return true;
}

bool operator<=(NumberWithUnits& a, NumberWithUnits& b){
    return true;
}
 bool operator!=(NumberWithUnits& a, NumberWithUnits& b){
    return true;
}

NumberWithUnits& NumberWithUnits::operator++(){
    return *this;
}

NumberWithUnits NumberWithUnits::operator++(int flag){
    NumberWithUnits a = {2, "km"};
    return a;
}

NumberWithUnits& NumberWithUnits::operator--(){
    return *this;
}
            
NumberWithUnits NumberWithUnits::operator--(int flag){
    NumberWithUnits a = {2, "km"};
    return a;
}

void operator>>(istringstream&input, NumberWithUnits& a){
}

ostream& operator<<(ostream& os, const NumberWithUnits& input){
    return os;
}
}

