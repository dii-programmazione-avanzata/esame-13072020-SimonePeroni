//
// Created by Simone on 13/07/2020.
//

#ifndef ESAME_13072020_SIMONEPERONI_SPRINGBASE_H
#define ESAME_13072020_SIMONEPERONI_SPRINGBASE_H

#include "Applicable.h"

class SpringBase : public Applicable {
public:
    virtual double getStiffness() = 0;

    virtual double getBaseLength() = 0;
};


#endif //ESAME_13072020_SIMONEPERONI_SPRINGBASE_H
