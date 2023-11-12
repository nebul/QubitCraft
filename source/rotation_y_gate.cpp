#include "rotation_y_gate.hpp"

void RotationYGate::apply(std::vector<std::complex<double>>& state, double angle) const 
{
    double cosHalfAngle = std::cos(angle / 2);
    double sinHalfAngle = std::sin(angle / 2);

    std::complex<double> a = state[0];
    std::complex<double> b = state[1];
    
    state[0] = cosHalfAngle * a + sinHalfAngle * b;
    state[1] = -sinHalfAngle * a + cosHalfAngle * b;
}