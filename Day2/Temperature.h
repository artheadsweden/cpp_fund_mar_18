#pragma once

#include <iostream>
using namespace std;

class Temperature
{
public:
    Temperature();
    Temperature(float t);
    float getFarenheit();
    float getCelsius();
    void setTemp(float t);

    Temperature operator +(const Temperature& other);
    Temperature operator -(const Temperature& other);
    Temperature operator *(const Temperature& other);
    Temperature operator /(const Temperature& other);
    Temperature operator ++();
    Temperature operator ++(int);
    Temperature operator --();
    Temperature operator --(int);

    friend Temperature operator +(const float& first, const Temperature& other);
    friend ostream& operator <<(ostream& os, const Temperature& other);
    friend istream& operator >>(istream& is, Temperature& other);
private:
    float temp;
};
