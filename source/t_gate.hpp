#ifndef TGATE_H
#define TGATE_H

#include "gate.hpp"

class TGate : public Gate
{
public:
    virtual void apply(std::vector<std::complex<double>>& state) override const;
};

#endif // TGATE_H