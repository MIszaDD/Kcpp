# Zaliczenie Przedmiotu C++

## Opis projektu

Ten projekt to aplikacja konsolowa napisana w C++, która umożliwia testowanie różnych zagadnień języka C++ w postaci oddzielnych zadań. 
Program oferuje menu wyboru, z którego można uruchomić konkretne funkcje

## Struktura katalogów

```bash
ZadClassKcpp/
│
├── main.cc                        
├── zadania.exe                   
│
├── include/
│   ├── ZadKcpp.h                
│   └── ZadMetodyAbstrakcyjne.h  
│
├── src/
    ├── ZadKcpp.cpp              
    └── ZadMetodyAbstrakcyjne.cc 
```

## Lista zadań/funkcji
<summary>zadania:</summary>

| Nr  | Nazwa funkcji           | Opis                                                                             |
| --- | ----------------------- | -------------------------------------------------------------------------------- |
| 1.0 | `ZadEnumExample`        | Przykład użycia typu wyliczeniowego `enum`.                                      |
| 1.1 | `ZadClassExample`       | Prosta klasa z podstawowymi metodami.                                            |
| 1.2 | `ZadStringExample`      | Obsługa stringów w C++ — własna implementacja klasy LString.                     |
| 1.3 | `ZadMainExample`        | Przykład funkcji `extern "C"` oraz integracji z C-style kodem.                   |
| 2.1 | `ZadZwracanie`          | Pokazuje różnice między zwracaniem wartości, referencji, wskaźników oraz tablic. |
| 2.2 | `ZadPrzeciazaniePole`   | Przeciążanie funkcji `pole` dla różnych typów figur.                             |
| 2.3 | `ZadPrzeciazanieDodaj`  | Przeciążanie funkcji `dodaj` — przykład wielokrotnego przeciążania.              |
| 2.4 | `ZadPrzeciazaniePlus`   | Przeciążanie operatora `+` dla klasy `Punkt`.                                    |
| 2.5 | `LPrzeciazaniePotega`   | Przeciążanie operatora potęgowania (np. `**`).                                   |
| 5.6 | `ZadMetodyAbstrakcyjne` | Przykład zastosowania metod wirtualnych i klas abstrakcyjnych.                   |
