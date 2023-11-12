#include "pauli_x_gate.hpp"

void PauliXGate::apply(std::vector<std::complex<double>>& state) const 
{
    std::swap(state[0], state[1]);
}