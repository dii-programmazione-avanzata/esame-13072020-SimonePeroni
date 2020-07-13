//
// Created by Simone on 13/07/2020.
//

#include "PhysicBody.h"
#include <cassert>

double PhysicBody::gforce = 9.81;

PhysicBody::PhysicBody(double mass, Vector3 position, Vector3 velocity) : position_(position), velocity_(velocity) {
    assert(mass > 0);
    mass_ = mass;
    netForce_ = Vector3(0, 0, 0);
}

double PhysicBody::getMass() const {
    return mass_;
}

Vector3 PhysicBody::getPosition() const {
    return position_;
}

Vector3 PhysicBody::getVelocity() const {
    return velocity_;
}

void PhysicBody::setPosition(Vector3 target) {
    position_ = target;
}

void PhysicBody::setVelocity(Vector3 target) {
    velocity_ = target;
}

void PhysicBody::applyForce(Vector3 force) {
    netForce_ += force;
}

void PhysicBody::step(double dt, bool enableGravity) {
    // Calcolo accelerazione
    Vector3 acceleration = netForce_ * (1.0 / mass_);
    if (enableGravity)
        acceleration += Vector3(0, 0, -9.81);
    // Integrazione di eulero
    velocity_ = velocity_ + acceleration * dt;
    position_ = position_ + velocity_ * dt + acceleration * (dt * dt * 0.5);

    // Reset netForce
    netForce_ = Vector3(0, 0, 0);
}
