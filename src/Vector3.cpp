//
// Created by Simone on 13/07/2020.
//

#include <sstream>
#include <ios>
#include <iomanip>
#include "Vector3.h"

Vector3::Vector3(double x, double y, double z) : x_(x), y_(y), z_(z) {}

void Vector3::setX(double x) {
    x_ = x;
}

void Vector3::setY(double y) {
    y_ = y;
}

void Vector3::setZ(double z) {
    z_ = z;
}

double Vector3::getX() const {
    return x_;
}

double Vector3::getY() const {
    return y_;
}

double Vector3::getZ() const {
    return z_;
}

double Vector3::getMagnitude() const {
    return sqrt(x_ * x_ + y_ * y_ + z_ * z_);
}

Vector3 Vector3::operator+(Vector3 other) const {
    return Vector3(x_ + other.x_, y_ + other.y_, z_ + other.z_);
}

Vector3 Vector3::operator-(Vector3 other) const {
    return Vector3(x_ - other.x_, y_ - other.y_, z_ - other.z_);
}

Vector3 &Vector3::operator+=(Vector3 other) {
    x_ += other.x_;
    y_ += other.y_;
    z_ += other.z_;
    return *this;
}

Vector3 &Vector3::operator-=(Vector3 other) {
    x_ -= other.x_;
    y_ -= other.y_;
    z_ -= other.z_;
    return *this;
}

Vector3 &Vector3::operator=(Vector3 other) {
    x_ = other.x_;
    y_ = other.y_;
    z_ = other.z_;
    return *this;
}

Vector3 Vector3::operator-() const {
    return Vector3(-x_, -y_, -z_);
}

std::string Vector3::toString() const {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2);
    ss << "{" << x_ << ", " << y_ << ", " << z_ << "}";
    return ss.str();
}

Vector3 &Vector3::operator*=(double other) {
    x_ *= other;
    y_ *= other;
    z_ *= other;
    return *this;
}

Vector3 Vector3::operator*(double other) const {
    return Vector3(x_ * other, y_ * other, z_ * other);
}

Vector3 Vector3::norm() const {
    double mag = getMagnitude();
    return Vector3(x_ / mag, y_ / mag, z_ / mag);
}
