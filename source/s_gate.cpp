#include "s_gate.hpp"

void SGate::apply(std::vector<std::complex<double>>& state) const 
{
    state[1] *= std::complex<double>(0, 1);
}