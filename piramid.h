#pragma once
#include"geometricBody.h"

class Piramid : public GeometricBody{
    private:
        double l, w, h;
    public:
        Piramid();
        Piramid(double l, double w, double h);

        void setL(double l);
        void setW(double w);
        void setH(double h);
        
        double getL();
        double getW();
        double getH();
        
        double surfaceArea() override;
        double volume() override;
};