#ifndef ROTATIONXGATE_H
#define ROTATIONXGATE_H

#include "gate.hpp"

class RotationXGate : public Gate 
{

public:
    virtual void apply(std::vector<std::complex<double>>& state, double angle) const override;

};

#endif // ROTATIONXGATE_H