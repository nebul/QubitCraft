#include "pauli_z_gate.hpp"

void PauliZGate::apply(std::vector<std::complex<double>>& state) const 
{
    state[1] = -state[1];
}