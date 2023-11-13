#ifndef HADAMARDGATE_H
#define HADAMARDGATE_H

#include "gate.hpp"

class HadamardGate : public Gate 
{
    
public:
    void apply(std::vector<std::complex<double>>& state) const override;

};

#endif // HADAMARDGATE_H