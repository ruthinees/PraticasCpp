#ifndef VETOR2D_HPP
#define VETOR2D_HPP

class Vetor2d{
private:
  float x, y;
public:

  Vetor2d();
  ~Vetor2d();
  
  void setX(float x);

  void setY(float y);

  float getX();

  float getY();

  void print();

  //Sobrecarga do método produto

  //produto escalar
  float produto(Vetor2d v);

  //produto por um escalar
  Vetor2d produto(float a);
};

#endif //VETOR2D_HPP