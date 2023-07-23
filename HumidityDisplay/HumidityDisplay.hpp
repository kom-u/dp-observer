#pragma once

#include <iostream>
#include "../Observer/Observer.hpp"
#include "../WeatherStation/WeatherStation.hpp"

class HumidityDisplay : public Observer<WeatherStation *>
{
public:
    void Update(WeatherStation *subject) override;
};