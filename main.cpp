#include <iostream>
#include "ProizvodVeleprodaja.h"
#include "Kontejner.h"

int main() {
    try {
        // Kreiranje kontejnera proizvoda
        Kontejner kontejner;

        // Dodavanje proizvoda u veleprodaji
        //kontejner.dodajElement(new ProizvodVeleprodaja(1, "Proizvod1", "Opis1", 10.0, 15, "Tip1", 10));
       // kontejner.dodajElement(new ProizvodVeleprodaja(2, "Proizvod2", "Opis2", 20.0, 25, "Tip2", 15));
      //  kontejner.dodajElement(new ProizvodVeleprodaja(3, "Proizvod3", "Opis3", 30.0, 35, "Tip3", 20));
        //kontejner.dodajElement(ProizvodVeleprodaja(1212121212121, "Amila", "opis",10.0, 15, "Tip1", 10));
        // Ispisivanje cele kolekcije
        std::cout << "Svi proizvodi u kolekciji:" << std::endl;
        kontejner.prikaziElemente();

    } catch (const std::exception& e) {
        std::cerr << "Greska: " << e.what() << std::endl;
    }

    return 0;
}
