#ifndef CONVERTIONS_H
#define CONVERTIONS_H

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

class celsiusKelvin {
    private:
        //Attributes...
        double celsius;
        double kelvin;
    public:
        //Methods...
        double getCelsius(void) {
            return this->celsius;
        }
        void setCelsius(double cel) {
            this->celsius = cel;
        }
        double getKelvin(void) {
            return this->kelvin;
        }
        void setKelvin(double kel) {
            this->kelvin = kel;
        }
        void celsiusK() {
            this->kelvin = this->celsius + 273.15;
        }
        void kelvinC() {
            this->celsius = this->kelvin - 273.15;
        }
};

class celsiusFahrenheit {
    private:
        //Attributes...
        double celsius;
        double fahr;
    public:
        //Methods...
        double getCelsius(void) {
            return this->celsius;
        }
        void setCelsius(double cel) {
            this->celsius = cel;
        }
        double getFahr(void) {
            return this->fahr;
        }
        void setFahr(double fa) {
            this->fahr = fa;
        }
        void celsiusF() {
            this->fahr = (this->celsius* 9/5) + 32;
        }
        void FahrC() {
            this->celsius = (this->fahr - 32) * 5/9;
        }
};

#endif