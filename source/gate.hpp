#ifndef GATE_H
#define GATE_H

#include <vector>
#include <complex>

class Gate 
{
public:
    virtual ~Gate() = default;

    virtual void apply(std::vector<std::complex<double>>& state) const = 0;

};

#endif // GATE_H