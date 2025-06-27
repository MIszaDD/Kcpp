#ifndef ZADKCPP_H
#define ZADKCPP_H

#include <iostream>
#include <string>
#include <vector>

class ZadKcpp {
public:
    // Zadanie 1.0 - enum example
    void ZadEnumExample();

    // Zadanie 1.1 - prosta klasa (zawarta w metodzie)
    void ZadClassExample();

    // Zadanie 1.2 - LString example (przykład z zajęć)
    void ZadStringExample();

    // Zadanie 1.3 - main z funkcjami extern "C"
    void ZadMainExample();

    // Zadanie 2.1 - zwracanie przez wartość, referencję, wskaźnik, tablicę
    void ZadZwracanie();

    // Zadanie 2.2 - przeciążanie funkcji pole()
    void ZadPrzeciazaniePole();

    // Zadanie 2.3 - przeciążanie funkcji dodaj()
    void ZadPrzeciazanieDodaj();

    // Zadanie 2.4 - przeciążanie operatora + dla klasy Punkt
    void ZadPrzeciazaniePlus();

    // Zadanie 2.5 - przeciążanie funkcji potega()
    void LPrzeciazaniePotega();

    //Zadanie 5.6: Metody Abstrakcyjne
    void ZadMetodyAbstrakcyjne();
};

#endif
