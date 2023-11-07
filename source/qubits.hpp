#ifndef QUBIT_H
#define QUBIT_H

#include <complex>
#include <vector>

class Qubit {
public:
    Qubit();

    Qubit(std::complex<double> alpha, std::complex<double> beta);

    virtual ~Qubit();

    std::complex<double> getAlpha() const;
    std::complex<double> getBeta() const;

    int measure();


    void applyGate(const std::vector<std::vector<std::complex<double>>>& gate);

private:

    std::complex<double> alpha_; // |0>
    std::complex<double> beta_;  // |1>

    void normalize();
};

#endif // QUBIT_H