#ifndef ROTATIONYGATE_H
#define ROTATIONYGATE_H

#include "gate.hpp"

class RotationYGate : public Gate 
{

public:
    virtual void apply(std::vector<std::complex<double>>& state, double angle) const override;

};

#endif // ROTATIONYGATE_H