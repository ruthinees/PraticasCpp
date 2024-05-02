#ifndef VETOR3D_HPP
#define VETOR3D_HPP

#include "Vetor2d.hpp"

class Vetor3d : public Vetor2d {
private:
    float z;
public:
    void setZ(float z_);
    float getZ();
};
#endif //VETOR3D_HPP