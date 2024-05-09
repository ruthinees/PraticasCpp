#include "vetor2d.hpp"
#include <iostream>

Vetor2d::Vetor2d(){
    x = y = 0;
}

Vetor2d::~Vetor2d(){
}


void Vetor2d::setX(float x_){
  x = x_;
}

void Vetor2d::setY(float y_){
  y = y_;
}

float Vetor2d::getX(){
  return x;
}

float Vetor2d::getY(){
  return y;
}

void Vetor2d::print(){
  std::cout << "Vetor: (" << x << "," << y << ")\n";
}

float Vetor2d::produto(Vetor2d v){
  float escalar;
  escalar = x*v.x + y*v.y;
  return escalar;
}

Vetor2d Vetor2d::produto(float a){
  Vetor2d v;
  v.x = x*a;
  v.y = y*a;
  return v;
}