#include <iostream>
#include <string>
#include <list>
#include "Observer.h"
#include "CurrentConditionsDisplay.h"
#include "WeatherData.h"
using namespace std;

int main() {
    WeatherData weatherData;
    CurrentConditionsDisplay currentDisplay(&weatherData);

    weatherData.setMeasurements(80,65,30.5);

    return 0;
}