//
// Created by Amila Huzbasic on 12/26/2023.
//

#include "ProizvodVeleprodaja.h"
#include <iostream>

ProizvodVeleprodaja::ProizvodVeleprodaja(int id, std::string &naziv, std::string &opis, double cijena, int kolicina,
                                         std::string &tip, int popust) : ProizvodPopust(id, naziv,opis,cijena, kolicina, tip, popust){

}

double ProizvodVeleprodaja::jedinicnaCijenaProizvoda() const {
    if(kolicina>=10 && kolicina<20) {
        return cijena * (1 - 0.05 * (popust/100.0));
    } else if(kolicina>=20 && kolicina<50) {
        return cijena * (1 - 0.1 * (popust/100.0));
    } if(kolicina>=50) {
        return cijena * (1 - 0.15 * (popust/100.0));
    }   else {
        return ProizvodPopust::jedinicnaCijenaProizvoda();
    }
}

//operator ==

bool ProizvodVeleprodaja::operator==(const ProizvodVeleprodaja other) const {
    return (popust==other.popust);
}

std::ostream& operator<<(std::ostream& os, const ProizvodVeleprodaja& proizvod) {
    os<<"ID: " << proizvod.id << std::endl;
    os << "Naziv: " << proizvod.naziv << std::endl;
    os << "Opis: " << proizvod.opis << std::endl;
    os << "Cijena: " << proizvod.cijena << " KM" << std::endl;
    os << "Količina: " << proizvod.kolicina << std::endl;
    os << "Tip: " << proizvod.tip << std::endl;
    os << "Popust: " << proizvod.popust << "%" << std::endl;

    return os;

}

void ProizvodVeleprodaja::Stampaj() {
    std::cout<<"Proizvod Veleprodaja: ";
    std::cout << "ID: " << id << std::endl;
    std::cout << "Naziv: " << naziv << std::endl;
    std::cout << "Opis: " << opis << std::endl;
    std::cout << "Cijena: " << cijena << " KM" << std::endl;
    std::cout << "Količina: " << kolicina << std::endl;
    std::cout << "Tip: " << tip << std::endl;
    std::cout << "Popust: " << popust << "%" << std::endl;
}