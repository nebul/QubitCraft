#include "hadamard_gate.hpp"
#include <cmath>

void HadamardGate::apply(std::vector<std::complex<double>>& state) const 
{
    std::complex<double> a = state[0];
    std::complex<double> b = state[1];
    
    state[0] = (a + b) / std::sqrt(2);
    state[1] = (a - b) / std::sqrt(2);
}