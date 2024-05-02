#include <iostream>
#include "Vetor3d.hpp"

int main() {
    // Criando um vetor 3D
    Vetor3d vetor3d;

    // Definindo as coordenadas x, y e z
    vetor3d.setX(1);
    vetor3d.setY(2);
    vetor3d.setZ(3);

    // Obtendo e imprimindo as coordenadas
    std::cout << "Coordenadas: (" << vetor3d.getX() << ", " << vetor3d.getY() << ", " << vetor3d.getZ() << ")" << std::endl;

    return 0;
}