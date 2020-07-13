//
// Created by Simone on 13/07/2020.
//

#ifndef ESAME_13072020_SIMONEPERONI_APPLICABLE_H
#define ESAME_13072020_SIMONEPERONI_APPLICABLE_H


#include "Connector.h"
#include "cassert"

class Applicable : public Connector {
public:
    virtual Vector3 evaluateForce() = 0;

    virtual void apply() {
        assert(isConnected());
        Vector3 force = evaluateForce();
        A_->applyForce(force);
        B_->applyForce(-force);
    }
};


#endif //ESAME_13072020_SIMONEPERONI_APPLICABLE_H
