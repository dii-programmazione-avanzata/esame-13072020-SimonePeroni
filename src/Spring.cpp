//
// Created by Simone on 13/07/2020.
//

#include "Spring.h"

Spring::Spring(double stiffness, double baseLength) : stiffness_(stiffness), baselength_(baseLength) {}

double Spring::getStiffness() {
    return stiffness_;
}

double Spring::getBaseLength() {
    return baselength_;
}

Vector3 Spring::evaluateForce() {
    assert(isConnected());
    Vector3 length = B_->getPosition() - A_->getPosition();
    double magnitude = (length.getMagnitude() - baselength_) * stiffness_;
    return length.norm() * magnitude;
}
