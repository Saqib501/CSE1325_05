//
//  Lab 5
//
//  Created by Saqib Qureshi on 2/18/19.
//  Copyright © 2019 Saqib Qureshi. All rights reserved.
//
#include <vector>
#include <iostream>
#include "gas_vehicle.h"
#include "electric_vehicle.h"
#include <iomanip>


int main ()
{
    
    
    int column = 10;
    
    std::string space{"  "};
    
    for (int i=0; i< (column-(3-1)); i++)
    {
        space += "=";
    }

    std::string divider;
    
    for(int i=0; i<(6-1); i++)
    {
        divider += space;
    }
    
    divider += "  ==============================";
    
    
    std::vector<double> kwh = {0.05, 0.08, 0.11, 0.13, 0.15};
    
    std::vector<double> Gas = {2.00, 2.25, 2.50, 3.00, 4.00};
    

    
    std::cout << std::setprecision(2) << std::fixed << std::right;
    
    for (auto cost : kwh)
    {
        std::cout << std::setw(column) << cost;
    }
        std::cout << "  Cost per kwh"  << std::endl;
    
    for (auto cost : Gas)
    {
        std::cout << std::setw(column) << cost;
    }
        std::cout << "  Cost per gallon"  << std::endl;
    
        std::cout << divider << std::endl;
    
    //
    
    std::vector<Gas_vehicle> GasVehcicles =
    
    {
        Gas_vehicle{2017, "Toyota", "RAV4", Body_style::CROSSOVER, 26, 15.9},
        
        Gas_vehicle{2018, "Ford", "F-150", Body_style::TRUCK, 21, 36},
        
        Gas_vehicle{2018, "Nissan", "Rogue", Body_style::HATCHBACK, 29, 14.5},
        
        Gas_vehicle{2018, "Chrysler", "Pacifica", Body_style::MINIVAN, 22, 19},
    };
    
    
    //
    
    std::vector<Electric_vehicle> electricVehicles =
    
    {
        Electric_vehicle{2014, "Telsa", "Model S 85", Body_style::SEDAN, 3.12, 85},
        
        Electric_vehicle{2014, "Telsa", "Model 3 LR", Body_style::SEDAN, 4.13, 75},
        
        Electric_vehicle{2018, "GM", "Bolt", Body_style::HATCHBACK, 3.58, 60},
        
        Electric_vehicle{2018, "Nissan", "LEAF SL", Body_style::HATCHBACK, 3.88, 40},
    };
    
    
    //
    
    for (auto ELECTRIC : electricVehicles)
    {
        for (auto cost : kwh)
        {
            std::cout << std::setw(column) << cost * ELECTRIC.kwh_consumed(100);
        }
        std::cout << "  " << ELECTRIC.to_string() << std::endl;
    }
    
    for (auto CAR : GasVehcicles)
    {
        for (auto cost : Gas)
        {
            std::cout << std::setw(column) << cost * CAR.gallons_consumed(100);
        }
        std::cout << "  " << CAR.to_string() << std::endl;
    }

    
    
    
    
}
