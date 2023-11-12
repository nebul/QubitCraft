#include "rotation_z_gate.hpp"

void RotationZGate::apply(std::vector<std::complex<double>>& state, double angle) const 
{
    state[0] *= std::exp(std::complex<double>(0, -angle / 2));
    state[1] *= std::exp(std::complex<double>(0, angle / 2));
}