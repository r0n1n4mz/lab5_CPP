#include"sphere.h"

Sphere::Sphere(){
    this-> r = 0.0;
}
Sphere::Sphere(double r){
    this-> r = r;
}

double Sphere::getR(){
    return this->r;
}

void Sphere::setR(double r){
    this->r = r;
}

double Sphere::surfaceArea(){
    return 4*M_1_PI*pow(r, 2);
}

double Sphere::volume(){
    return (4/3) * M_1_PI * pow(r, 3);
}