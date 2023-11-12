#include "cnot_gate.hpp"

void CNotGate::apply(std::vector<std::complex<double>>& state) const 
{
    std::swap(state[2], state[3]);
}