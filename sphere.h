#pragma once
#include"geometricBody.h"
#include<math.h>

class Sphere : public GeometricBody{
    private:
        double r;
    public:
        Sphere();
        Sphere(double r);

        void setR(double r);

        double getR();

        double surfaceArea()override;
        double volume()override;
};