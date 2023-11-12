#include "t_gate.hpp"

void TGate::apply(std::vector<std::complex<double>>& state) const 
{
    state[1] *= std::exp(std::complex<double>(0, M_PI / 4));
}