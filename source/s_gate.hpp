#ifndef SGATE_H
#define SGATE_H

#include "gate.hpp"

class SGate : public Gate
{

public:

    virtual void apply(std::vector<std::complex<double>>& state) override const;

};

#endif // SGATE_H