#ifndef PAULIZGATE_H
#define PAULIZGATE_H

#include "gate.hpp"

class RotationZGate : public Gate 
{

public:
    virtual void apply(std::vector<std::complex<double>>& state, double angle) const override;

};

#endif // PAULIZGATE_H