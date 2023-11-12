#ifndef PAULIYGATE_H
#define PAULIYGATE_H

#include "gate.hpp"

class PauliYGate : public Gate 
{

public:
    virtual void apply(std::vector<std::complex<double>>& state) const override;

};

#endif // PAULIYGATE_H