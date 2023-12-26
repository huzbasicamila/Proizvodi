//
// Created by Amila Huzbasic on 12/26/2023.
//

#ifndef PROIZVODI_KONTEJNER_H
#define PROIZVODI_KONTEJNER_H

#include <vector>

class Element{
public:
    virtual void Stampaj() const=0;
    virtual ~Element();
};

class Kontejner {
private:
    std::vector<Element*> elementi;

public:
    Kontejner()=default;
    void dodajElement(Element* element);
    void prikaziElemente() const;

    ~Kontejner(){};

};


#endif //PROIZVODI_KONTEJNER_H
