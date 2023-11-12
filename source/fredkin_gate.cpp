#include "fredkin_gate.hpp"

void FredkinGate::apply(std::vector<std::complex<double>>& state) const 
{
    std::swap(state[5], state[6]);
}