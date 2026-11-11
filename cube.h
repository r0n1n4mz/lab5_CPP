#pragma once
#include"geometricBody.h"

class Cube : public GeometricBody{
    private: 
        double a;

    public:
        Cube();
        Cube(double a);

        void setA(double a);
        double getA();

        double surfaceArea() override;
        double volume() override;
};