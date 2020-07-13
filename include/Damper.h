//
// Created by Simone on 13/07/2020.
//

#ifndef ESAME_13072020_SIMONEPERONI_DAMPER_H
#define ESAME_13072020_SIMONEPERONI_DAMPER_H

#include "DamperBase.h"
#include "Vector3.h"

class Damper : public DamperBase {
protected:
    double damping_;
public:
    explicit Damper(double damping);

    Vector3 evaluateForce() override;

    double getDamping() override;
};


#endif //ESAME_13072020_SIMONEPERONI_DAMPER_H
