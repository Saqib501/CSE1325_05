//
//  electric_vehicle.cpp
//  Lab 5
//
//  Created by Saqib Qureshi on 2/18/19.
//  Copyright © 2019 Saqib Qureshi. All rights reserved.
//

#include "electric_vehicle.h"
#include <stdexcept>

Electric_vehicle::Electric_vehicle(int year, std::string make, std::string model, Body_style body_style,
                                   double miles_per_kwh, double max_kwh)
: Vehicle(year, make, model, body_style),_miles_per_kwh{miles_per_kwh}, _max_kwh{max_kwh} { }

double Electric_vehicle::kwh_consumed(double miles) {
    double kwh = miles / _miles_per_kwh ;
    if (kwh > _max_kwh) throw std::runtime_error{"Insufficient Electricity - need " + std::to_string(kwh)};
    return kwh;
}
double Electric_vehicle::max_range() {return _miles_per_kwh * _max_kwh;}
