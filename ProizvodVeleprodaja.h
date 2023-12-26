//
// Created by Amila Huzbasic on 12/26/2023.
//

#ifndef PROIZVODI_PROIZVODVELEPRODAJA_H
#define PROIZVODI_PROIZVODVELEPRODAJA_H

#include "Kontejner.h"
#include "ProizvodPopust.h"

class ProizvodVeleprodaja : public ProizvodPopust {
public:
    ProizvodVeleprodaja(int id, const std::string& naziv,const std::string& opis, double cijena, int kolicina,const std::string& tip, int popust);

    ProizvodVeleprodaja(int id, std::string &naziv, std::string &opis, double cijena, int kolicina, std::string &tip,
                        int popust);

    double jedinicnaCijenaProizvoda() const override;

    //operator ==
    bool operator==(const ProizvodVeleprodaja other) const;

    friend std::ostream& operator<<(std::ostream& os, const ProizvodVeleprodaja& proizvod);

    void Stampaj();
};


#endif //PROIZVODI_PROIZVODVELEPRODAJA_H
