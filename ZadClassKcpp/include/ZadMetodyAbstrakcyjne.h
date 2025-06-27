#ifndef ZADMETODYABSTRAKCUJNE_H
#define ZADMETODYABSTRAKCUJNE_H

#include <iostream>
#include <string>
#include <cmath> 


class Figura {
public:
    virtual double obliczObwod() = 0;
    virtual double obliczPolePowierzchni() = 0;
    virtual void Narysuj() = 0;

    virtual ~Figura() {}
};

class Kwadrat : public Figura {
private:
    double bok;

public:
    Kwadrat(double b);

    double obliczObwod() override;
    double obliczPolePowierzchni() override;
    void Narysuj() override;
};

class Prostokat : public Figura {
private:
    double dlugosc;
    double szerokosc;

public:
    Prostokat(double d, double s); 

    double obliczObwod() override;
    double obliczPolePowierzchni() override;
    void Narysuj() override;
};

class Trojkat : public Figura {
private:
    double a, b, c;
    double wysokosc;

public:
    Trojkat(double bok_a, double bok_b, double bok_c, double h); 

    double obliczObwod() override;
    double obliczPolePowierzchni() override;
    void Narysuj() override;
};

class Kolo : public Figura {
private:
    double promien;

public:
    Kolo(double r);

    double obliczObwod() override;
    double obliczPolePowierzchni() override;
    void Narysuj() override;

    double Dystans(double powierzchniaNaOsobeM2);
};

void UruchomZadanieMetodyAbstrakcyjne();
#endif