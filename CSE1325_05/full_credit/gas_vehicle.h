//
//  gas_vehicle.h
//  Lab 5
//
//  Created by Saqib Qureshi on 2/18/19.
//  Copyright © 2019 Saqib Qureshi. All rights reserved.
//
#ifndef __GAS_VEHICLE_H
#define __GAS_VEHICLE_H

#include "vehicle.h"

class Gas_vehicle : virtual public Vehicle {
public:
    Gas_vehicle(int year, std::string make, std::string model, Body_style body_style,
                double miles_per_gallon, double max_gallons);
    double gallons_consumed(double miles);
private:
    double _miles_per_gallon;
    double _max_gallons;
};


#endif /* gas_vehicle_h */
