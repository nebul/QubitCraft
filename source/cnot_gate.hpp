#ifndef CNOTGATE_H
#define CNOTGATE_H

#include <vector>
#include <complex>

#include "gate.hpp"

class CNotGate : public Gate
{
    
public:
    virtual void apply(std::vector<std::complex<double>>& state) override const;
};

#endif // GATE_H