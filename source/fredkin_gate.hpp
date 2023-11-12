#ifndef FREDKINGATE_H
#define FREDKINGATE_H

#include <vector>
#include <complex>

#include "gate.hpp"

class FredkinGate : public Gate
{

public:
    virtual void apply(std::vector<std::complex<double>>& state) override const;
};

#endif // FREDKINGATE_H