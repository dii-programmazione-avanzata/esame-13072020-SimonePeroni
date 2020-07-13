//
// Created by Simone on 13/07/2020.
//

#include "Connector.h"
#include <cassert>

void Connector::connect(PhysicBody &body, int index) {
    assert(index == 0 || index == 1);
    (index ? B_ : A_) = &body;
}

PhysicBody &Connector::operator[](int index) const {
    assert(index == 0 || index == 1);
    return index ? *B_ : *A_;
}

bool Connector::isConnected() {
    return A_ != nullptr && B_ != nullptr;
}

void Connector::connect(PhysicBody &bodyA, PhysicBody &bodyB) {
    A_ = &bodyA;
    B_ = &bodyB;
}
