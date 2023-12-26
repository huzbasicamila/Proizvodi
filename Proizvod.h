//
// Created by Amila Huzbasic on 12/26/2023.
//

#ifndef PROIZVODI_PROIZVOD_H
#define PROIZVODI_PROIZVOD_H

#include <string>


class Proizvod {
protected:
    int id;
    std::string opis;
    double cijena;
    int kolicina;
    std::string tip;

    std::string naziv;

public:
    Proizvod(int id, std::string& naziv, std::string& opis, double cijena, int kolicina, std::string& tip);
   //Destruktor
    virtual ~Proizvod();
    //Apstraktne metode
    virtual void ispisProizvoda() const=0;
    virtual double jedinicnaCijenaProizvoda() const=0;

};


#endif //PROIZVODI_PROIZVOD_H
