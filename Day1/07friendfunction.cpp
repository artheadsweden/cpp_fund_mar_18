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

//    Temperature add(const Temperature& other);
    Temperature operator +(const Temperature& other);
    Temperature operator -(const Temperature& other);
    Temperature operator *(const Temperature& other);
    Temperature operator /(const Temperature& other);

    friend Temperature operator +(const float& first, const Temperature& other);
    friend ostream& operator <<(ostream& os, const Temperature& other);
    friend istream& operator >>(istream& is, Temperature& other);
private:
    float temp;
};

Temperature::Temperature() : temp(0.0f){}

Temperature::Temperature(float t) : temp(t){}

float Temperature::getFarenheit()
{
    return temp * 9 / 5 + 32;
}

float Temperature::getCelsius()
{
    return temp;
}

void Temperature::setTemp(float t)
{
    temp = t;
}

/*
Temperature Temperature::add(const Temperature& other)
{
    return Temperature(temp + other.temp);
}
*/

Temperature Temperature::operator +(const Temperature& other)
{
    //cout << "My temp is " << temp << " and other.temp is " << other.temp << endl;
    return Temperature(temp + other.temp);
}

Temperature Temperature::operator -(const Temperature& other)
{
    return Temperature(temp - other.temp);
}

Temperature Temperature::operator *(const Temperature& other)
{
    return Temperature(temp * other.temp);
}

Temperature Temperature::operator /(const Temperature& other)
{
    return Temperature(temp / other.temp);
}

Temperature operator +(const float& first, const Temperature& other)
{
    return Temperature(first + other.temp);
}

ostream& operator <<(ostream& os, const Temperature& other)
{
    os << other.temp;
    return os;
}

istream& operator >>(istream& is, Temperature& other)
{
    is >> other.temp;
    return is;
}
int main()
{
    Temperature t1(2.0f);
    Temperature t2(3.0f);
    Temperature t3(14.3f);

    //t3 = t1 + t2;
    //Temperature t4 = t1 + t2 + t3;
    Temperature t4 = t1 * t2;
    //t3 = t1.add(t2);

    t4 = 3.4f + t1;
    cout << t4 << " is the temp" << endl;

    cout << "Enter a temp: ";
    cin >> t4;
    cout << t4 << " is the temp" << endl;

    cout << t1.getCelsius() << endl;
    cout << t1.getFarenheit() << endl;
    cout << t2.getCelsius() << endl;
    cout << t2.getFarenheit() << endl;
    cout << t3.getCelsius() << endl;
    cout << t3.getFarenheit() << endl;

    t3.setTemp(-40.0f);
    cout << t3.getCelsius() << endl;
    cout << t3.getFarenheit() << endl;
    return 0;
}


