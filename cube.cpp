#include"cube.h"
#include<math.h>

Cube::Cube(){
    this->a = 0;
}

Cube::Cube(double a){
    this->a = a;
}

void Cube::setA(double a){
    this->a = a;
}

double Cube::surfaceArea(){
    return 6*pow(a, 2);
}

double Cube::volume(){
    return pow(a, 3);
}