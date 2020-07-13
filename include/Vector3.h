//
// Created by Simone on 13/07/2020.
//

#ifndef ESAME_13072020_SIMONEPERONI_VECTOR3_H
#define ESAME_13072020_SIMONEPERONI_VECTOR3_H

#include <math.h>
#include <string>

/**
 * Vettore tridimensionale
 */
class Vector3 {
private:
    double x_;
    double y_;
    double z_;
public:
    explicit Vector3(double x = 0, double y = 0, double z = 0);

    void setX(double x);

    void setY(double y);

    void setZ(double z);

    double getX() const;

    double getY() const;

    double getZ() const;

    double getMagnitude() const;

    Vector3 operator+(Vector3 other) const;

    Vector3 operator-(Vector3 other) const;

    Vector3 operator-() const;

    Vector3 &operator+=(Vector3 other);

    Vector3 &operator-=(Vector3 other);

    Vector3 &operator=(Vector3 other);

    Vector3 &operator*=(double other);

    Vector3 operator*(double other) const;

    Vector3 norm() const;

    std::string toString() const;
};


#endif //ESAME_13072020_SIMONEPERONI_VECTOR3_H
