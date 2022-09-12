#include <iostream>

const int N_ELEMENTS = 100; // constexpr helyett const kell

int main()
{
    int b[N_ELEMENTS]; //nincs ilyen változó, hogy NELEMENTS (csak N_ELEMENTS), illetve felesleges pointert használni
    std::cout << "1-100 ertekek duplazasa" << std::endl; // idézőjelnek kell lennie stringnél (""), nem aposztrofnak (''), illetve ; hiányzik
    for (int i = 0; i < N_ELEMENTS; i++) // nincs befejezve a for ciklus 
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // for ciklus második paramétere hiányos
    {
        std::cout << "Ertek: " << b[i] << std::endl; // ; hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nem elég deklarálni, mert később már fel akarjuk használni az értékét (ami nincs)
    for (int i = 0; i < N_ELEMENTS; i++) // második és harmadik maraméter között nem , hanem ; kell
    {
        atlag += b[i]; // ; hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::stdout << "Valamit kiirok ide";
    return 0;
}