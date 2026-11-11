#include"piramid.h"
#include<math.h>

Piramid::Piramid(){
    this->l = 0.0;
    this->w = 0.0;
    this->h = 0.0;
}

Piramid::Piramid(double l, double w, double h){
    this->l = l;
    this->w = w;
    this->h = h;
}

void Piramid::setL(double l){
    this->l = l;
}

void Piramid::setW(double w){
    this->w = w;
}

void Piramid::setH(double h){
    this->h = h;
}

double Piramid::surfaceArea(){
    return (this->l * this->w + this->l*sqrt(pow((w/2),2)+pow(this->h,2))+this->w*sqrt(pow(0.5, 2)+pow(h,2)));
}

double Piramid::volume(){
    return ((this->l*this->w*this->h)/3);
}