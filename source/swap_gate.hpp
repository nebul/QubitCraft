#ifndef SWAPGATE_H
#define SWAPGATE_H

#include <vector>
#include <complex>

#include "gate.hpp"

class SwapGate : public Gate
{
public:
    virtual void apply(std::vector<std::complex<double>>& state) override const;
};

#endif // SWAPGATE_H