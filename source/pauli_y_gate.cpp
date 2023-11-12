#include "pauli_y_gate.hpp"

void PauliYGate::apply(std::vector<std::complex<double>>& state) const 
{
    std::complex<double> temp = state[0];
    state[0] = std::complex<double>(0, 1) * state[1];
    state[1] = std::complex<double>(0, -1) * temp;
}