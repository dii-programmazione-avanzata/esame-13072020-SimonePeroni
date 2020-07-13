//
// Created by Simone on 13/07/2020.
//

#ifndef ESAME_13072020_SIMONEPERONI_PHYSICBODY_H
#define ESAME_13072020_SIMONEPERONI_PHYSICBODY_H


#include "Vector3.h"

/**
 * Classe che descrive lo stato cinematico di un corpo puntiforme dotato di massa
 */
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

    static double gforce;

    double getMass() const;

    Vector3 getPosition() const;

    Vector3 getVelocity() const;

    void setPosition(Vector3 target);

    void setVelocity(Vector3 target);

    void applyForce(Vector3 force);

    /**
     * Simulazione di un avanzamento temporale di passo dt sulla base delle forze applicate dall'ultimo step
     * @param dt Passo temporale
     * @param enableGravity Specifica se utilizzare l'accelerazione gravitazionale
     */
    void step(double dt, bool enableGravity);
};


#endif //ESAME_13072020_SIMONEPERONI_PHYSICBODY_H
