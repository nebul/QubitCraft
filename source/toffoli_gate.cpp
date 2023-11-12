#include "toffoli_gate.hpp"

void Toffoli::apply(std::vector<std::complex<double>>& state) const 
{
    std::swap(state[6], state[7]);
}