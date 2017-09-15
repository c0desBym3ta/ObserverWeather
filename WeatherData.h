//
// Created by m3tak on 15/09/17.
//

#ifndef OBSERVERTRY_WEATHERDATA_H
#define OBSERVERTRY_WEATHERDATA_H

#include "Subject.h"
#include "Observer.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;

class WeatherData : public Subject {
public:
    WeatherData() : temperature(0.0), humidity(0.0), pressure(0.0) {}
    void registOb(Observer *o) override{
        observers.push_back(o);
    }
    void removeOb(Observer *o) override{
        observers.remove(o);
    }
    void notifyOb() const override{
        for(list<Observer *>::const_iterator itr = observers.begin(); observers.end() != itr; ++itr){
            (*itr)->update(temperature,humidity,pressure);
        }
    }
    void measurementsChanged(){
        notifyOb();
    }
    void  setMeasurements(float temperature, float humidity, float pressure){
        this->temperature = temperature;
        this->humidity = humidity;
        this->pressure = pressure;
        measurementsChanged();
    }

    float getTemperature() const {
        return temperature;
    }

    float getHumidity() const {
        return humidity;
    }

    float getPressure() const {
        return pressure;
    }
private:
    list<Observer *>observers;
    float temperature;
    float humidity;
    float pressure;
};


#endif //OBSERVERTRY_WEATHERDATA_H
