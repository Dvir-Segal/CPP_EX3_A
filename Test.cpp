#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
#include <climits>
#include <assert.h>
#include <unordered_map>
#include <bits/stdc++.h>
#include <utility>
using namespace std;
using namespace ariel;

NumberWithUnits a{2, "km"};
NumberWithUnits b{3, "m"};
NumberWithUnits c{1, "kg"};
NumberWithUnits d{1000, "g"};

TEST_CASE("Error Operations"){
    CHECK_THROWS_AS(a+c, exception);
    CHECK_THROWS_AS(c+a, exception);
    CHECK_THROWS_AS(a-c, exception);
    CHECK_THROWS_AS(b-c, exception);
    CHECK_THROWS_AS(if(c == a), exception);
    CHECK_THROWS_AS(if(c!=b), exception);
    CHECK_THROWS_AS(if(c>b), exception);
    CHECK_THROWS_AS(a+=c, exception);
    CHECK_THROWS_AS(c-=b, exception);
    CHECK_THROWS_AS(if(d<b), exception);
    CHECK_THROWS_AS(if(d==a), exception);
    CHECK_THROWS_AS(if(b==a), exception);
    CHECK_THROWS_AS(b+d, exception);
    CHECK_THROWS_AS(if(b<c), exception);
    CHECK_THROWS_AS(c+=a, exception);
    CHECK_THROWS_AS(b-=c, exception);
    CHECK_THROWS_AS(if(d<a), exception);
    CHECK_THROWS_AS(if(b==c), exception);
    CHECK_THROWS_AS(if(c>a), exception);
    CHECK_THROWS_AS(b+=d, exception);

}

