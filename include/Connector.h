//
// Created by Simone on 13/07/2020.
//

#ifndef ESAME_13072020_SIMONEPERONI_CONNECTOR_H
#define ESAME_13072020_SIMONEPERONI_CONNECTOR_H

#include "PhysicBody.h"

class Connector {
protected:
    PhysicBody *A_ = nullptr;
    PhysicBody *B_ = nullptr;
public:
    void connect(PhysicBody &body, int index);

    void connect(PhysicBody &bodyA, PhysicBody &bodyB);

    PhysicBody &operator[](int index) const;

    bool isConnected();
};


#endif //ESAME_13072020_SIMONEPERONI_CONNECTOR_H
