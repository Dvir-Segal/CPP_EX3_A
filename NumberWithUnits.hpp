#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <climits>
#include <unordered_map>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

namespace ariel{
    class NumberWithUnits{
        double size;
        string typeOfSize;
            

        public:
            NumberWithUnits(double s, string t): size(s), typeOfSize(t){};
            static void read_units(ifstream& file);
            friend NumberWithUnits operator+(NumberWithUnits& a,NumberWithUnits& b);
            NumberWithUnits& operator+=(const NumberWithUnits& b);
            NumberWithUnits& operator+(){return *this;};
            friend NumberWithUnits operator-(NumberWithUnits& a,NumberWithUnits& b);
            NumberWithUnits& operator-=(NumberWithUnits& b);
            NumberWithUnits operator-();
            friend NumberWithUnits& operator*(NumberWithUnits& a, double x);
            friend NumberWithUnits& operator*(double x, NumberWithUnits& a);

            
            friend bool operator>(NumberWithUnits& a, NumberWithUnits& b);
            friend bool operator>=(NumberWithUnits& a, NumberWithUnits& b);
            friend bool operator==(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator<(NumberWithUnits& a, NumberWithUnits& b);
            friend bool operator<=(NumberWithUnits& a, NumberWithUnits& b);
            friend bool operator!=(NumberWithUnits& a, NumberWithUnits& b);

            NumberWithUnits& operator++();
            NumberWithUnits operator++(int flag);
            NumberWithUnits& operator--();
            NumberWithUnits operator--(int flag);

            friend void operator>>(istringstream& input, NumberWithUnits& a);
            friend ostream& operator<<(ostream& os, const NumberWithUnits& input);

    };
}