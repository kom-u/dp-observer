#include "WeatherStation.hpp"

void WeatherStation::SetWeatherData(const std::string &location, double temperature, double humidity)
{
    this->location = location;
    this->temperature = temperature;
    this->humidity = humidity;

    Notify(this);
}

std::string WeatherStation::GetLocation() const
{
    return location;
}

double WeatherStation::GetTemperature() const
{
    return temperature;
}

double WeatherStation::GetHumidity() const
{
    return humidity;
}