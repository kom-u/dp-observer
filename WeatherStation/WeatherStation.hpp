#pragma once

#include <string>
#include "../Observer/Subject.hpp"

class WeatherStation : public Subject<WeatherStation *>
{
public:
    void SetWeatherData(const std::string &location, double temperature, double humidity);

    std::string GetLocation() const;
    double GetTemperature() const;
    double GetHumidity() const;

private:
    std::string location;
    double temperature;
    double humidity;
};
