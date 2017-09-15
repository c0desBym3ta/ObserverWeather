//
// Created by m3tak on 15/09/17.
//

#ifndef OBSERVERTRY_SUBJECT_H
#define OBSERVERTRY_SUBJECT_H

#include "Observer.h"
class Subject {
public:
    virtual void registOb(Observer *o) = 0;
    virtual void removeOb(Observer *o) = 0;
    virtual void notifyOb() const = 0;

protected:
    virtual ~Subject(){}
};


#endif //OBSERVERTRY_SUBJECT_H
