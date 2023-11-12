#ifndef PAULIXGATE_H
#define PAULIXGATE_H

#include "gate.hpp"

class PauliXGate : public Gate 
{

public:
    virtual void apply(std::vector<std::complex<double>>& state) const override;

};

#endif // PAULIXGATE_H