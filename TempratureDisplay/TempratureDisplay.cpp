#include "TempratureDisplay.hpp"

void TemperatureDisplay::Update(WeatherStation *subject)
{
    std::cout << "Temperature: " << subject->GetTemperature() << std::endl;
}