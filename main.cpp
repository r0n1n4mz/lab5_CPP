#include<iostream>
#include"sphere.h"
#include"piramid.h"
#include"cube.h"

int main(){
    int r, l, w, h, a;

    std::cout<<"Demostartion of Classes"<<std::endl;
    std::cout<<"Testing the classes"<<std::endl;
    std::cout<<"Shpere demostrate"<<std::endl;
    //Sphere
    std::cout<<"Input r: ";
    std::cin>> r;
    Sphere sp = Sphere(r);
    std::cout<<"\n Value of surfaceArea with the r: "<<r<< " is "<< sp.surfaceArea()<<std::endl;
    std::cout<<"Value of volume with the r: "<<r<< " is "<< sp.volume()<<std::endl;
    std::cout<<"Piramid demostrate"<<std::endl;
    //Piramid
    std::cout<<"Input l: ";
    std::cin>> l;
    std::cout<<"\nInput w: ";
    std::cin>> w;
    std::cout<<"\nInput h: ";
    std::cin>> h;
    Piramid pir = Piramid(l, w, h);
    std::cout<<"\n Value of surfaceArea with the l, w, h: "<<l<<" "<< w <<" "<< h << " is "<< pir.surfaceArea()<<std::endl;
    std::cout<<"Value of volume with the l, w, h: "<<l<<" "<< w <<" "<<h  << " is "<< pir.volume()<<std::endl;
        
    //Cube
    std::cout<<"Cube demostrate"<<std::endl;
    std::cout<<"Input a: ";
    std::cin>> a;
    Cube cb = Cube(a);
    std::cout<<"\n Value of surfaceArea with the a: "<<a << " is "<< cb.surfaceArea()<<std::endl;
    std::cout<<"Value of volume with the a: "<<a<<" is "<<cb.volume()<<std::endl;
    
    return 0;
}