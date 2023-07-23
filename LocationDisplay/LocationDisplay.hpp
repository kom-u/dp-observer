#pragma once

#include <iostream>
#include "../Observer/Observer.hpp"
#include "../WeatherStation/WeatherStation.hpp"

class LocationDisplay : public Observer<WeatherStation *>
{
public:
    void Update(WeatherStation *subject) override;
};