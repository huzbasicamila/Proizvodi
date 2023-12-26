//
// Created by Amila Huzbasic on 12/26/2023.
//

#include "ProizvodPopust.h"
#include <iostream>

ProizvodPopust::ProizvodPopust(int id, std::string &naziv, std::string &opis, double cijena, int kolicina,
                               std::string &tip, int popust) : Proizvod(id, naziv, opis, cijena, kolicina, tip), popust(popust) {
    if(popust<0 || popust>100) {
        throw std::invalid_argument("Popust mora da bude u opsegu od 0 do 100");
    }
}

ProizvodPopust::~ProizvodPopust() {

}

// Metoda za ispis proizvoda s popustom
void ProizvodPopust::ispisProizvoda() const {
    std::cout<<"ID: " <<Proizvod::id << std::endl;
    std::cout<<"Naziv: " << Proizvod::naziv << std::endl;
    std::cout<< "Opis: " << Proizvod::opis << std::endl;
    std::cout<< "Cijena: " << Proizvod::cijena << std::endl;
    std::cout<<"Kolicina: " << Proizvod::kolicina << std::endl;
    std::cout<<"Tip: " <<Proizvod::tip << std::endl;
    std::cout<<"Popust: " << popust << " %\n";
}

// Metoda za izračun jedinične cijene s popustom

double ProizvodPopust::jedinicnaCijenaProizvoda() const {
    return cijena * (1 - popust/100.0);
}

// Operator +=

ProizvodPopust& ProizvodPopust::operator+=(int dodatak) {
    if(dodatak<0 || dodatak>100) {
        throw std::invalid_argument("Dodatak mora da je u rasponu od 0 do 100");
    }

    popust+=dodatak;
    return *this;
}

//operator za ispis

std::ostream& operator<<(std::ostream& os, const ProizvodPopust& proizvod) {
    os<< "ID: " << proizvod.id << std::endl;
    os << "Naziv: " << proizvod.naziv << std::endl;
    os << "Opis: " << proizvod.opis << std::endl;
    os << "Cijena: " << proizvod.cijena << " KM" << std::endl;
    os << "Količina: " << proizvod.kolicina << std::endl;
    os << "Tip: " << proizvod.tip << std::endl;
    os << "Popust: " << proizvod.popust << "%" << std::endl;

    return os;
}