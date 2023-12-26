//
// Created by Amila Huzbasic on 12/26/2023.
//

#include "Kontejner.h"

void Kontejner::dodajElement(Element* element) {
    elementi.push_back(element);
}

void Kontejner::prikaziElemente() const {
    for(const auto& element : elementi) {
        element->Stampaj();
    }
}



