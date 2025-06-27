#include "ZadmetodyAbstrakcyjne.h" 
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

Kwadrat::Kwadrat(double b) : bok(b) {}

double Kwadrat::obliczObwod() {
    return 4 * bok;
}

double Kwadrat::obliczPolePowierzchni() {
    return bok * bok;
}

void Kwadrat::Narysuj() {
    cout << "Przepis na narysowanie kwadrata" << endl;
}

Prostokat::Prostokat(double d, double s) : dlugosc(d), szerokosc(s) {}

double Prostokat::obliczObwod() {
    return 2 * (dlugosc + szerokosc);
}

double Prostokat::obliczPolePowierzchni() {
    return dlugosc * szerokosc;
}

void Prostokat::Narysuj() {
    cout << "Przepis na narysowanie prostokata" << endl;
}

Trojkat::Trojkat(double bok_a, double bok_b, double bok_c, double h) : a(bok_a), b(bok_b), c(bok_c), wysokosc(h) {}

double Trojkat::obliczObwod() {
    return a + b + c;
}

double Trojkat::obliczPolePowierzchni() {
    return 0.5 * a * wysokosc;
}

void Trojkat::Narysuj() {
    cout << "Przepis na narysowanie trojkata" << endl;
}

Kolo::Kolo(double r) : promien(r) {}

double Kolo::obliczObwod() {
    return 2 * 3.14 * promien;
}

double Kolo::obliczPolePowierzchni() {
    return 3.14 * promien * promien;
}

void Kolo::Narysuj() {
    cout << "Przepis na narysowanie kola" << endl;
}

double Kolo::Dystans(double powierzchniaNaOsobeM2) {
    if (powierzchniaNaOsobeM2 <= 0) {
        cout << "Powierzchnia na osobe musi byc wieksza od zera." << endl;
        return 0.0;
    }
    return sqrt(powierzchniaNaOsobeM2 / 3.14);
}