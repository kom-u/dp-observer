#pragma once

#include <iostream>
#include "../../Observer/Observer.hpp"
#include "../WeatherStation.hpp"

class TemperatureDisplay : public Observer<WeatherStation *>
{
public:
    void Update(WeatherStation *subject) override;
};