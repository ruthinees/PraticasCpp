#include <iostream>
#include "vetor2d.hpp"

int main() {
  //Variável para os vetores, sendo vesc o vetor que armazena o produto por um escalar
  Vetor2d v1, v2, vesc;

  //Variável ´para o resultado do produto escalar
  float resultado;

  //Declarando x e y de v1
  v1.setX(1.2);
  v1.setY(2.4);

  //Declarando x e y de v2
  v2.setX(3.5);
  v2.setY(6.4);

  //Printando v1 e v2
  v1.print();
  v2.print();

  //Armazenando o resultado do produto escalar de v1 por v1
  resultado = v1.produto(v1);

  std::cout << "O produto escalar é: " << resultado << "\n";

  //Armazenando o resultado do produto escalar de v1 por v2
  resultado = v1.produto(v2);

  std::cout << "O produto escalar é: " << resultado << "\n";

  //Armazenando o resultado do produto de v1 pelo escalar 2
  vesc = v1.produto(2);
  
  std::cout << "O produto por um escalar é:" << "\n";

  //Printando v1 pelo escalar 2
  vesc.print();

  //Armazenando o resultado do produto de v2 pelo escalar 3
  vesc = v2.produto(3);

  std::cout << "O produto por um escalar é:" << "\n";

  //Printando v2 pelo escalar 3
  vesc.print();
}