//
// Created by Simone on 13/07/2020.
//

#ifndef ESAME_13072020_SIMONEPERONI_PHYSICBODY_H
#define ESAME_13072020_SIMONEPERONI_PHYSICBODY_H


#include "Vector3.h"

class PhysicBody {
protected:
    double mass_;
    Vector3 position_;
    Vector3 velocity_;
    Vector3 netForce_;
public:
    explicit PhysicBody(double mass,
                        Vector3 position = Vector3(0, 0, 0),
                        Vector3 velocity = Vector3(0, 0, 0));

    static Vector3 gforce;

    double getMass() const;

    Vector3 getPosition() const;

    Vector3 getVelocity() const;

    void setPosition(Vector3 target);

    void setVelocity(Vector3 target);

    void applyForce(Vector3 force);

    void step(double dt);
};


#endif //ESAME_13072020_SIMONEPERONI_PHYSICBODY_H
