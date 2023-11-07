#include "qubit.hpp"
#include <random>

Qubit::Qubit()
    : alpha_(1), beta_(0) { // |0> state
    normalize();
}

Qubit::Qubit(std::complex<double> alpha, std::complex<double> beta)
    : alpha_(alpha), beta_(beta) {
    normalize();
}

Qubit::~Qubit() {
}

std::complex<double> Qubit::getAlpha() const {
    return alpha_;
}

std::complex<double> Qubit::getBeta() const {
    return beta_;
}

int Qubit::measure() {
    // return 0 or 1 following probabilities |alpha|^2 and |beta|^2
    std::random_device rd;
    std::mt19937 gen(rd());
    std::bernoulli_distribution dis(std::norm(beta_)); // Use |beta|^2

    return dis(gen) ? 1 : 0;
}

void Qubit::applyGate(const std::vector<std::vector<std::complex<double>>>& gate) {
    std::complex<double> newAlpha = gate[0][0] * alpha_ + gate[0][1] * beta_;
    std::complex<double> newBeta = gate[1][0] * alpha_ + gate[1][1] * beta_;

    alpha_ = newAlpha;
    beta_ = newBeta;
    normalize();
}

void Qubit::normalize() {
    double norm = std::sqrt(std::norm(alpha_) + std::norm(beta_));
    alpha_ /= norm;
    beta_ /= norm;
}