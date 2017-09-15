//
// Created by m3tak on 15/09/17.
//

#ifndef OBSERVERTRY_CURRENTCONDITIONSDISPLAY_H
#define OBSERVERTRY_CURRENTCONDITIONSDISPLAY_H

#include <iostream>
#include <string>
#include "Observer.h"
#include "Subject.h"
using namespace std;

class CurrentConditionsDisplay : public Observer {
public:
    CurrentConditionsDisplay(Subject *weatherData) : weatherData(weatherData), humidity(0.0), temperature(0.0) {
        weatherData->registOb(this);
    }
    ~CurrentConditionsDisplay(){
        weatherData->removeOb(this);
    }

    void update(float temp, float hum, float press) override{
        this->temperature = temp;
        this->humidity = hum;
        display();
    }
    void display(){
        cout.setf(ios::showpoint);
        cout.precision(3);
        cout << "Current conditions: " << temperature;
        cout << "C° degrees and " << humidity;
        cout << "% humidity" << std::endl;
    }
private:
    float humidity;
    float temperature;
    Subject *weatherData;
};


#endif //OBSERVERTRY_CURRENTCONDITIONSDISPLAY_H
