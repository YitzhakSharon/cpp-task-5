#pragma once
#include "Coordinate.hpp"
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class IllegalCoordinateException{
    public:
        const Coordinate& coor;
    public:
        IllegalCoordinateException(const Coordinate& c): coor(c){};
        string theCoordinate() const ;
        //~IllegalCoordinateException();
};