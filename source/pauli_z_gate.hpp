#ifndef PAULIZGATE_H
#define PAULIZGATE_H

#include "gate.hpp"

class PauliZGate : public Gate 
{

public:
    virtual void apply(std::vector<std::complex<double>>& state) const override;

};

#endif // PAULIZGATE_H