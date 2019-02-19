//
//  vehicle.cpp
//  Lab 5
//
//  Created by Saqib Qureshi on 2/18/19.
//  Copyright © 2019 Saqib Qureshi. All rights reserved.
//

#include "vehicle.h"
#include <stdexcept>

Vehicle::Vehicle(int year, std::string make, std::string model, Body_style body_style)
: _year{year}, _make{make}, _model{model}, _body_style{body_style} { }
Vehicle::Vehicle() { }

std::string Vehicle::make() const {return _make;}
std::string Vehicle::model() const {return _model;}
int Vehicle::year() const {return _year;}
Body_style Vehicle::body_style() const {return _body_style;}

std::string Vehicle::to_string() const {
    return std::to_string(year()) + ' ' + make() + ' ' + model() + ' ' + ::to_string(body_style());
}

std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle) {
    os << vehicle.to_string();
    return os;
}

std::string to_string(Body_style body_style) {
    if (body_style == Body_style::SEDAN) return "Sedan";
    else if (body_style == Body_style::HATCHBACK) return "Hatchback";
    else if (body_style == Body_style::MINIVAN) return "Minivan";
    else if (body_style == Body_style::TRUCK) return "Truck";
    else if (body_style == Body_style::CROSSOVER) return "Crossover";
    else if (body_style == Body_style::SUV) return "SUV";
    else throw std::runtime_error{"Body_style to string: Invalid Body_style"};
}
Body_style from_string(std::string body_style) {
    if (body_style == "Sedan") return Body_style::SEDAN;
    else if (body_style == "Hatchback") return Body_style::HATCHBACK;
    else if (body_style == "Minivan") return Body_style::MINIVAN;
    else if (body_style == "Truck") return Body_style::TRUCK;
    else if (body_style == "Crossover") return Body_style::CROSSOVER;
    else if (body_style == "SUV") return Body_style::SUV;
    else throw std::runtime_error{"string to Body_style: Invalid string " + body_style};
}

std::ostream& operator<<(std::ostream& os, const Body_style& body_style) {
    os << to_string(body_style);
    return os;
}
