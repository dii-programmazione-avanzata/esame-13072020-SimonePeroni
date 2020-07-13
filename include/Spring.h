//
// Created by Simone on 13/07/2020.
//

#ifndef ESAME_13072020_SIMONEPERONI_SPRING_H
#define ESAME_13072020_SIMONEPERONI_SPRING_H

#include "SpringBase.h"

class Spring : public SpringBase {
protected:
    double stiffness_;
    double baselength_;
public:
    Spring(double stiffness, double baseLength);

    double getStiffness() override;

    double getBaseLength() override;

    Vector3 evaluateForce() override;
};


#endif //ESAME_13072020_SIMONEPERONI_SPRING_H
