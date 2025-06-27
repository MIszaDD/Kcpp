#include "ZadMetodyAbstrakcyjne.h"
#include "ZadKcpp.h"
#include <iostream>
using namespace std;

int main() {
    int wybor;
    ZadKcpp obj;

    while (true) {
        cout << "\nKtore zadanie chcesz sprawdzic?" << endl;
        cout << "1  - Zadanie 1.0 (Enum example)\n";
        cout << "2  - Zadanie 1.1 (Prosta klasa)\n";
        cout << "3  - Zadanie 1.2 (LString example)\n";
        cout << "4  - Zadanie 1.3 (Main z funkcjami extern C)\n";
        cout << "5  - Zadanie 2.1 (Zwroty przez wartosc, ref, wskaznik, tablice)\n";
        cout << "6  - Zadanie 2.2 (Przeciazanie funkcji pole)\n";
        cout << "7  - Zadanie 2.3 (Przeciazanie funkcji dodaj)\n";
        cout << "8  - Zadanie 2.4 (Przeciazanie operatora + dla klasy Punkt)\n";
        cout << "9  - Zadanie 2.5 (Przeciazanie potegowania)\n";
        cout << "10 - Zadanie 5.6: Metody Abstrakcyjne\n";
        cout << "0  - zakoncz\n";
        cin >> wybor;

        if (wybor == 0) {
            cout << "Dziekuje!" << endl;
            break;
        }

        switch (wybor) {
            case 1:
                cout << "\n-----Zadanie 1.0: Enum example-----\n";
                obj.ZadEnumExample();
                break;
            case 2:
                cout << "\n-----Zadanie 1.1: Prosta klasa-----\n";
                obj.ZadClassExample();
                break;
            case 3:
                cout << "\n-----Zadanie 1.2: LString example-----\n";
                obj.ZadStringExample();
                break;
            case 4:
                cout << "\n-----Zadanie 1.3: Main z funkcjami extern C-----\n";
                obj.ZadMainExample();
                break;
            case 5:
                cout << "\n-----Zadanie 2.1: Zwroty przez wartosc/ref/wskaznik/tablice-----\n";
                obj.ZadZwracanie();
                break;
            case 6:
                cout << "\n-----Zadanie 2.2: Przeciazanie funkcji pole-----\n";
                obj.ZadPrzeciazaniePole();
                break;
            case 7:
                cout << "\n-----Zadanie 2.3: Przeciazanie funkcji dodaj-----\n";
                obj.ZadPrzeciazanieDodaj();
                break;
            case 8:
                cout << "\n-----Zadanie 2.4: Przeciazanie operatora + dla klasy Punkt-----\n";
                obj.ZadPrzeciazaniePlus();
                break;
            case 9:
                cout << "\n-----Zadanie 2.5: Przeciazanie potegowania-----\n";
                obj.LPrzeciazaniePotega();
                break;
            case 10:
                cout << "\n-----Zadanie 5.6: Metody Abstrakcyjne-----\n";
                obj.ZadMetodyAbstrakcyjne();
                break;
            default:
                cout << "Nieznany wybor, sproboj ponownie." << endl;
                break;
        }
    }

    return 0;
}
