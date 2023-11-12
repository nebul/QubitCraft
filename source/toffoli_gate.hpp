#ifndef TOFFOLIGATE_H
#define TOFFOLIGATE_H

#include <vector>
#include <complex>

#include "gate.hpp"

class Toffoli : public Gate
{
public:
    virtual void apply(std::vector<std::complex<double>>& state) override const;
};

#endif // TOFFOLIGATE_H