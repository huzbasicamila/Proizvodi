//
// Created by Amila Huzbasic on 12/26/2023.
//

#ifndef PROIZVODI_PROIZVODPOPUST_H
#define PROIZVODI_PROIZVODPOPUST_H


#include "Proizvod.h"
#include "Kontejner.h"

class ProizvodPopust : public Proizvod {

protected:
    int popust;
public:
    ProizvodPopust(int id, std::string& naziv, std::string& opis, double cijena, int kolicina, std::string& tip, int popust);
    ~ProizvodPopust();

    void ispisProizvoda() const override;
    double jedinicnaCijenaProizvoda() const override;

    //operator +=
    ProizvodPopust& operator+=(int dodatak);

    //operator za ispis
    friend std::ostream& operator<<(std::ostream& os, const ProizvodPopust& proizvod);


};


#endif //PROIZVODI_PROIZVODPOPUST_H
