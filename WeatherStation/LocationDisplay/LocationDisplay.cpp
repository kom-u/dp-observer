#include "LocationDisplay.hpp"

void LocationDisplay::Update(WeatherStation *subject)
{
    std::cout << "Location: " << subject->GetLocation() << std::endl;
}