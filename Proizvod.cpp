//
// Created by Amila Huzbasic on 12/26/2023.
//

#include "Proizvod.h"
#include <stdexcept>
//U konstruktoru provjeriti da li proslijedeni id ima ta¿no 13 znakova,
// da li je cijena nenegativna i naziv nije prazan string, a u suprotnom baciti izuzetak.
Proizvod::Proizvod(int id, std::string &naziv, std::string &opis, double cijena, int kolicina, std::string &tip) {
    if(id<0 || std::to_string(id).length() !=13 || naziv.empty() || cijena<0) {
        throw std::invalid_argument("Neispravni argumenti za konstruktor Proizvodi");
    }

    this->id=id;
    this->naziv=naziv;
    this->opis=opis;
    this->cijena=cijena;
    this->kolicina=kolicina;
    this->tip=tip;
}

Proizvod::~Proizvod() {

}