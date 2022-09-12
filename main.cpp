#include <iostream>

constexpr int N_ELEMENTS = 100; // constexpr helyett const kell

int main()
{
    int *b = new int[NELEMENTS]; //nincs ilyen változó, hogy NELEMENTS (csak N_ELEMENTS), illetve felesleges pointert használni
    std::cout << '1-100 ertekek duplazasa' // idézőjelnek kell lennie stringnél (""), nem aposztrofnak (''), illetve ; hiányzik
    for (int i = 0;) // nincs befejezve a for ciklus 
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // for ciklus második paramétere hiányos
    {
        std::cout << "Ertek:" // ; hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nem elég deklarálni, mert később már fel akarjuk használni az értékét (ami nincs)
    for (int i = 0; i < N_ELEMENTS, i++) // második és harmadik maraméter között nem , hanem ; kell
    {
        atlag += b[i] // ; hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
