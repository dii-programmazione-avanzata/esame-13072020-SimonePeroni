//
// Created by Simone on 13/07/2020.
//

#ifndef ESAME_13072020_SIMONEPERONI_PHYSICSYSTEM_H
#define ESAME_13072020_SIMONEPERONI_PHYSICSYSTEM_H

#include "PhysicBody.h"
#include "Applicable.h"
#include "Vector3.h"

class PhysicSystem {
private:
    Applicable **connections_;
    int connectionsCount_;
    PhysicBody **bodies_;
    int bodiesCount_;
public:
    PhysicSystem();

    ~PhysicSystem();

    void setBodies(PhysicBody **bodies, int count);

    void setConnections(Applicable **connections, int count);

    PhysicBody &getBody(int index);

    Applicable &getConnection(int index);

    /**
     * Simulazione del sistema
     * @param dt Passo temporale
     * @param N Numero di step totali
     * @param enableGravity Specifica se considerare l'accelerazione gravitazionale
     * @param enableOutput Specifica se è attivato lo l'otuput in console
     */
    void Simulate(double dt, int N, bool enableGravity = true, bool enableOutput = true);
};


#endif //ESAME_13072020_SIMONEPERONI_PHYSICSYSTEM_H
