#include "lib.hpp"

int main()
{
    WeatherStation weatherStation;

    TemperatureDisplay temperatureDisplay;
    HumidityDisplay humidityDisplay;
    LocationDisplay locationDisplay;

    weatherStation.Attach(&temperatureDisplay);
    weatherStation.Attach(&humidityDisplay);
    weatherStation.Attach(&locationDisplay);

    weatherStation.SetWeatherData("London", 10.0, 20.0);
    weatherStation.SetWeatherData("London", 20.0, 30.0);

    return 0;
}