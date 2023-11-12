#include "qubit.hpp"
#include <random>

Qubit::Qubit()
    : alpha_(1), 
    beta_(0) 
{ 
    normalize();
}

Qubit::Qubit(std::complex<double> alpha, std::complex<double> beta)
    : alpha_(alpha), 
    beta_(beta) 
{
    normalize();
}

Qubit::~Qubit() 
{
}

std::complex<double> Qubit::getAlpha() const 
{
    return alpha_;
}

std::complex<double> Qubit::getBeta() const 
{
    return beta_;
}

int Qubit::measure() 
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::bernoulli_distribution dis(std::norm(beta_)); 

    return dis(gen) ? 1 : 0;
}

void  Qubit::applyGate(const Gate& gate)
{
    std::vector<std::complex<double>> state = {alpha_, beta_};
    gate.apply(state);
    alpha_ = state[0];
    beta_ = state[1];
}

void Qubit::normalize() 
{
    double norm = std::sqrt(std::norm(alpha_) + std::norm(beta_));
    alpha_ /= norm;
    beta_ /= norm;
}
