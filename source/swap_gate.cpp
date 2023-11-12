#include "swap_gate.hpp"

void SwapGate::apply(std::vector<std::complex<double>>& state) const 
{
    std::swap(state[1], state[2]);
}