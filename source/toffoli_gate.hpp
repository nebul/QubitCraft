#ifndef TOFFOLIGATE_H
#define TOFFOLIGATE_H

#include "gate.hpp"

class ToffoliGate : public Gate
{
public:
    virtual void apply(std::vector<std::complex<double>>& state) override const;
};

#endif // TOFFOLIGATE_H