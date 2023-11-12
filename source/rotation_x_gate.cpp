#include "rotation_x_gate.hpp"

void RotationXGate::apply(std::vector<std::complex<double>>& state, double angle) const 
{
    std::complex<double> cosHalfAngle = std::cos(angle / 2);
    std::complex<double> iSinHalfAngle = std::complex<double>(0, 1) * std::sin(angle / 2);

    std::complex<double> a = state[0];
    std::complex<double> b = state[1];
    
    state[0] = cosHalfAngle * a - iSinHalfAngle * b;
    state[1] = cosHalfAngle * b - iSinHalfAngle * a;

}