//
// Created by Simone on 13/07/2020.
//

#ifndef ESAME_13072020_SIMONEPERONI_DAMPERBASE_H
#define ESAME_13072020_SIMONEPERONI_DAMPERBASE_H

#include "Applicable.h"

class DamperBase : public Applicable {
public:
    virtual double getDamping() = 0;
};


#endif //ESAME_13072020_SIMONEPERONI_DAMPERBASE_H
