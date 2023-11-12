#include "phase_shift_gate.hpp"

PhaseShiftGate::apply(std::vector<std::complex<double>>& state, double angle) const 
{
    state[1] *= std::exp(std::complex<double>(0, angle));
}