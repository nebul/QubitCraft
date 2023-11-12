#ifndef PHASESHIFTGATE_H
#define PHASESHIFTGATE_H

#include "gate.hpp"

class PhaseShiftGate : public Gate 
{

public:
    virtual void apply(std::vector<std::complex<double>>& state, double angle) const override;

};

#endif // PHASESHIFTGATE_H