//
//  vehicle.h
//  Lab 5
//
//  Created by Saqib Qureshi on 2/18/19.
//  Copyright © 2019 Saqib Qureshi. All rights reserved.
//

#ifndef __VEHICLE_H
#define __VEHICLE_H
#include <string>
#include <ostream>

enum class Body_style{SEDAN, HATCHBACK, MINIVAN, TRUCK, CROSSOVER, SUV};
std::string to_string(Body_style body_style);
Body_style from_string(std::string body_style);
std::ostream& operator<<(std::ostream& os, const Body_style& body_style);

class Vehicle {
public:
    Vehicle(int year, std::string make, std::string model, Body_style body_style);
    Vehicle();
    std::string make() const;
    std::string model() const;
    int year() const;
    Body_style body_style() const;
    std::string to_string() const;
protected:
    int _year;
    std::string _make;
    std::string _model;
    Body_style _body_style;
};

std::ostream& operator<<(std::ostream& os, const Vehicle& vehicle);

#endif /* vehicle_h */
