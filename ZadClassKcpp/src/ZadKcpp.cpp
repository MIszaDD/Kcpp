#include "ZadKcpp.h"
#include <cmath>
#include "ZadMetodyAbstrakcyjne.h"


// ===== Zadanie 1.0 - enum example =====
void ZadKcpp::ZadEnumExample() {
    enum class Miesiac {Styczen=1, Luty, Marzec, Kwiecien, Maj, Czerwiec,
                       Lipiec, Sierpien, Wrzesien, Pazdziernik, Listopad, Grudzien};

    Miesiac miesiac = Miesiac::Marzec;

    std::cout << "Wybrany miesiac: ";
    switch(miesiac) {
        case Miesiac::Styczen: std::cout << "Styczen\n"; break;
        case Miesiac::Luty: std::cout << "Luty\n"; break;
        case Miesiac::Marzec: std::cout << "Marzec\n"; break;
        case Miesiac::Kwiecien: std::cout << "Kwiecien\n"; break;
        case Miesiac::Maj: std::cout << "Maj\n"; break;
        case Miesiac::Czerwiec: std::cout << "Czerwiec\n"; break;
        case Miesiac::Lipiec: std::cout << "Lipiec\n"; break;
        case Miesiac::Sierpien: std::cout << "Sierpien\n"; break;
        case Miesiac::Wrzesien: std::cout << "Wrzesien\n"; break;
        case Miesiac::Pazdziernik: std::cout << "Pazdziernik\n"; break;
        case Miesiac::Listopad: std::cout << "Listopad\n"; break;
        case Miesiac::Grudzien: std::cout << "Grudzien\n"; break;
    }
}

// ===== Zadanie 1.1 - prosta klasa =====
void ZadKcpp::ZadClassExample() {
    class Samochod {
        std::string marka;
        int rokProdukcji;
    public:
        Samochod(std::string m, int r) : marka(m), rokProdukcji(r) {}
        void pokazInfo() {
            std::cout << "Samochod: " << marka << ", Rok produkcji: " << rokProdukcji << std::endl;
        }
    };

    Samochod car("Toyota", 2020);
    car.pokazInfo();
}

// ===== Zadanie 1.2 - LString example (przykład) =====
void ZadKcpp::ZadStringExample() {
    std::string s = "Witaj, swiecie!";
    std::cout << "Tekst: " << s << std::endl;
    std::cout << "Dlugosc tekstu: " << s.length() << std::endl;
}

// ===== Zadanie 1.3 - funkcje extern "C" =====
extern "C" void funkcja1() {
    std::cout << "Wywolano funkcje 1 (extern C)" << std::endl;
}

extern "C" void funkcja2() {
    std::cout << "Wywolano funkcje 2 (extern C)" << std::endl;
}

void ZadKcpp::ZadMainExample() {
    std::cout << "Program z main i funkcjami extern \"C\"" << std::endl;
    std::cout << "Wywolanie funkcji 1:" << std::endl;
    funkcja1();
    std::cout << "Wywolanie funkcji 2:" << std::endl;
    funkcja2();
}

// ===== Zadanie 2.1 - zwracanie przez wartość, referencję, wskaźnik, tablice =====
int wartosc() {
    return 42;
}

int& referencja(int& x) {
    return x;
}

int* wskaznik(int* p) {
    return p;
}

int* tablica() {
    static int arr[3] = {1, 2, 3};
    return arr;
}

void ZadKcpp::ZadZwracanie() {
    int a = 10;
    std::cout << "Zwracanie przez wartosc: " << wartosc() << std::endl;
    std::cout << "Zwracanie przez referencje (przyklad z a=10): " << referencja(a) << std::endl;
    int x = 5;
    int* ptr = &x;
    std::cout << "Zwracanie przez wskaznik (wartosc wskazywana przez ptr): " << *wskaznik(ptr) << std::endl;
    int* t = tablica();
    std::cout << "Zwracanie tablicy: ";
    for(int i=0; i<3; i++) std::cout << t[i] << " ";
    std::cout << std::endl;
}

// ===== Zadanie 2.2 - przeciążanie funkcji pole =====
double pole(double bok) {            // kwadrat
    return bok * bok;
}

double pole(double dlugosc, double szerokosc) {  // prostokat
    return dlugosc * szerokosc;
}

double pole(double promien, bool kola) {  // kolo (bool by rozrozniac)
    return 3.14159 * promien * promien;
}

void ZadKcpp::ZadPrzeciazaniePole() {
    std::cout << "Pole kwadratu o boku 3: " << pole(3.0) << std::endl;
    std::cout << "Pole prostokata 4x5: " << pole(4.0, 5.0) << std::endl;
    std::cout << "Pole kola o promieniu 2: " << pole(2.0, true) << std::endl;
}

// ===== Zadanie 2.3 - przeciążanie funkcji dodaj =====
int dodaj(int a, int b) {
    return a + b;
}

double dodaj(double a, double b) {
    return a + b;
}

std::string dodaj(const std::string& a, const std::string& b) {
    return a + b;
}

void ZadKcpp::ZadPrzeciazanieDodaj() {
    std::cout << "Dodawanie int: 3 + 4 = " << dodaj(3, 4) << std::endl;
    std::cout << "Dodawanie double: 2.5 + 4.1 = " << dodaj(2.5, 4.1) << std::endl;
    std::cout << "Konkatenacja string: 'Ala' + 'ma kota' = " << dodaj(std::string("Ala "), std::string("ma kota")) << std::endl;
}

// ===== Zadanie 2.4 - przeciążanie operatora + dla klasy Punkt =====
class Punkt {
public:
    int x, y;
    Punkt(int _x=0, int _y=0) : x(_x), y(_y) {}

    Punkt operator+(const Punkt& p) {
        return Punkt(x + p.x, y + p.y);
    }

    void pokaz() {
        std::cout << "Punkt(" << x << ", " << y << ")" << std::endl;
    }
};

void ZadKcpp::ZadPrzeciazaniePlus() {
    Punkt p1(1, 2);
    Punkt p2(3, 4);
    Punkt p3 = p1 + p2;
    std::cout << "p1 = "; p1.pokaz();
    std::cout << "p2 = "; p2.pokaz();
    std::cout << "p1 + p2 = "; p3.pokaz();
}

// ===== Zadanie 2.5 - przeciążanie potegowania =====
int potega(int base, int exp) {
    int wynik = 1;
    for (int i = 0; i < exp; ++i) wynik *= base;
    return wynik;
}

double potega(double base, int exp) {
    return std::pow(base, exp);
}

void ZadKcpp::LPrzeciazaniePotega() {
    std::cout << "Potega int: 2^3 = " << potega(2,3) << std::endl;
    std::cout << "Potega double: 2.5^3 = " << potega(2.5,3) << std::endl;
}

// ===== Zadanie 5.6 - Metody Abstrakcyjne =====
void UruchomZadanieMetodyAbstrakcyjne() {
    std::cout << "Uruchamiam zadanie metody abstrakcyjnej\n";

    Kwadrat k(5);
    Prostokat p(4, 6);
    Trojkat t(3, 4, 5, 2.5);
    Kolo ko(7);

    Figura* figury[] = { &k, &p, &t, &ko };

    for (Figura* f : figury) {
        std::cout << "Obwod: " << f->obliczObwod() << ", Pole: " << f->obliczPolePowierzchni() << std::endl;
        f->Narysuj();
        std::cout << std::endl;
    }
}

void ZadKcpp::ZadMetodyAbstrakcyjne() {
    UruchomZadanieMetodyAbstrakcyjne();
}
