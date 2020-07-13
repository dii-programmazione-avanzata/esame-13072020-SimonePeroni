//
// Created by Simone on 13/07/2020.
//

#include "Damper.h"

Damper::Damper(double damping) {
    damping_ = damping;
}

Vector3 Damper::evaluateForce() {
    assert(isConnected());
    return (B_->getVelocity() - A_->getVelocity()) * damping_;
}

double Damper::getDamping() {
    return damping_;
}
