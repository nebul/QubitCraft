#ifndef TGATE_H
#define TGATE_H

#include <vector>
#include <complex>

#include "gate.hpp"

class TGate : public Gate
{
    virtual void apply(std::vector<std::complex<double>>& state) override const;
};

#endif // TGATE_H