#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <iostream>
#include <cstdlib>
#include <math.h>

#define PI 3.1416

using namespace std;

//Triangle...
class Triangle {
    private:
        //Attributes...
        double base;
        double height;
        double area;

    public:
        //Methods...
        double getBase(void) {
            return this->base;
        }
        void setBase(double ba) {
            this->base = ba;
        }
        double getHeight(void) {
            return this->height;
        }
        void setHeight(double he) {
            this->height = he;
        }
        double getArea(void) {
            return this->area;
        }
        void setArea(double ar) {
            this->area = ar;
        }
        void areaCaculator() {
            this->area = (this->base * this->height)/2;
        }
};

//Square...
class Square {
    private:
        //Attributes...
        double side;
        double area;
    
    public:
        //Methods...
        double getSide(void) {
            return this->side;
        }
        void setSide(double si) {
            this->side = si;
        }
        double getArea(void) {
            return this->area;
        }
        void setArea(double ar) {
            this->area = ar;
        }
        void areaCalculator() {
            this->area = this->side * this->side;
        }
};

//Rectangle...
class Rectangle {
    private:
        //Attributes...
        double base;
        double height;
        double area;

    public:
        //Methods...
        double getBase(void) {
            return this->base;
        }
        void setBase(double ba) {
            this->base = ba;
        }
        double getHeight(void) {
            return this->height;
        }
        void setHeight(double he) {
            this->height = he;
        }
        double getArea(void) {
            return this->area;
        }
        void setArea(double ar) {
            this->area = ar;
        }
        void areaCaculator() {
            this->area = this->base * this->height;
        }
};

//Polygon...
class Polygon {
    private:
        //Attributes...
        double side;
        double large_s;
        double ap;
        double angle;
        double area;

    public:
        //Methods...
        double getSide(void) {
            return this->side;
        }
        void setSide(double si) {
            this->side = si;
        }
        double getLarge_s(void) {
            return this->large_s;
        }
        void setLarge_s(double ls) {
            this->large_s = ls;
        }
        double getAp(void) {
            return this->ap;
        }
        void setAp(double a) {
            this->ap = a;
        }
        double getAngle(void) {
            return this->angle;
        }
        void setAngle(double an) {
            this->angle = an;
        }
        double getArea(void) {
            return this->area;
        }
        void setArea(double ar) {
            this->area = ar;
        }
        void angleCalculator() {
            this->angle = 360.0/(2.0 * this->side);
        }
        void apCalculator() {
            double rest;

            rest = 2.0*tan(this->angle);

            double k = this->large_s/rest;

            this->ap = k * 180/PI;
            //Tengo mis dudas en esta funcion de aqui, como pasar de radianes a grados, o si es que realmente lo hice bien...
        }
        void areaCalculator() {
            double p = 0;
            for (int i = 1; i <= this->side; i++) {
                p += this->large_s;
            }

            this->area = (p * this->ap)/2;
        }
};


#endif