//
//  electric_vehicle.h
//  Lab 5
//
//  Created by Saqib Qureshi on 2/18/19.
//  Copyright © 2019 Saqib Qureshi. All rights reserved.
//
#ifndef __ELECTRIC_VEHICLE_H
#define __ELECTRIC_VEHICLE_H

#include "vehicle.h"

class Electric_vehicle : virtual public Vehicle {
public:
    Electric_vehicle(int year, std::string make, std::string model, Body_style body_style,
                     double miles_per_kwh, double max_kwh);
    double kwh_consumed(double miles);
    double max_range();
private:
    double _miles_per_kwh;
    double _max_kwh;
};

#endif /* electric_vehicle_h */
