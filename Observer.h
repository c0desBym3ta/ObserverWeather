//
// Created by m3tak on 15/09/17.
//

#ifndef OBSERVERTRY_OBSERVER_H
#define OBSERVERTRY_OBSERVER_H


class Observer {
public:
    virtual void update(float temp, float humidity, float pressure) = 0;

protected:
    virtual ~Observer(){};
};


#endif //OBSERVERTRY_OBSERVER_H
