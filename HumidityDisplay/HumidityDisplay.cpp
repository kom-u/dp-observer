#include "HumidityDisplay.hpp"

void HumidityDisplay::Update(WeatherStation *subject)
{
    std::cout << "Humidity: " << subject->GetHumidity() << std::endl;
}