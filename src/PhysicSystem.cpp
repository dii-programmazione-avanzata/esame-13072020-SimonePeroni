//
// Created by Simone on 13/07/2020.
//

#include "iostream"
#include "PhysicSystem.h"
#include "cassert"

PhysicSystem::PhysicSystem() {
    connectionsCount_ = 0;
    bodiesCount_ = 0;
    connections_ = nullptr;
    bodies_ = nullptr;
}

void PhysicSystem::setBodies(PhysicBody **bodies, int count) {
    assert(count > 0 && bodies != nullptr);
    bodies_ = bodies;
    bodiesCount_ = count;
}

void PhysicSystem::setConnections(Applicable **connections, int count) {
    assert(count > 0 && connections != nullptr);
    connections_ = connections;
    connectionsCount_ = count;
}

PhysicBody &PhysicSystem::getBody(int index) {
    assert(index >= 0 && index < bodiesCount_);
    return *bodies_[index];
}

Applicable &PhysicSystem::getConnection(int index) {
    assert(index >= 0 && index < connectionsCount_);
    return *connections_[index];
}

void PhysicSystem::Simulate(double dt, int N, bool enableGravity, bool enableOutput) {
    PhysicBody::gforce = enableGravity ? Vector3(0, 0, -9.81) : Vector3(0, 0, 0);
    for (int i = 0; i < N; ++i) {
        if (enableOutput)
            std::cout << "Time: " << dt * i << std::endl;

        // Applica le forze delle connessioni
        for (int j = 0; j < connectionsCount_; ++j) {
            connections_[j]->apply();
        }

        // Avanza nel tempo
        for (int k = 0; k < bodiesCount_; ++k) {
            bodies_[k]->step(dt);
            if (enableOutput) {
                std::cout << "    Body " << k << " { ";
                std::cout << "Position: " << bodies_[k]->getPosition().toString() << "; ";
                std::cout << "Velocity: " << bodies_[k]->getVelocity().toString() << " }";
                std::cout << std::endl;
            }
        }
    }
}
