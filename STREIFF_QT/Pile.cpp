#pragma once
#include "Liste.cpp"

template<class T>

class Pile : public Liste<T> {
public:
    Pile() {
        this->pPremier = nullptr;
        this->pDernier = nullptr;
        this->nbElts = 0;
    }

    bool supprimerFin() {
        if (pileVide()) {
            cout << "Erreur : pile vide !" << endl;
            return false;
        }
        if (this->nbElts == 1) {
            NoeudDeListe<T> *pPile = this->pPremier;
            this->pPremier = this->pDernier = nullptr;
            delete(pPile);
        } else {
            NoeudDeListe<T> *pPile = this->pPremier;
            NoeudDeListe<T> *pPileDernier = this->pDernier;
            int i = 0;
            while (i < this->nbElts - 1) {
                pPile = pPile->getNext();
                i++;
            }
            pPile->setNext(nullptr);
            this->pDernier = pPile;
            delete(pPileDernier);
        }
        this->nbElts--;
        return true;
    }

    bool afficher() {
        cout << "Pile :\n";
        NoeudDeListe<T> *pPile = this->pPremier;
        if (pileVide()) {
            cout << "Pile vide.";
            return true;
        }
        for (int i = 1; i < this->nbElts; i++) {
            cout << "NoeudDeListe [" << i << "] {";
            pPile->afficher();
            pPile = pPile->getNext();
        }
        cout << "NoeudDeListe [" << this->nbElts << "] {";
        pPile->afficherDernier();
        return true;
    }

protected:
    bool pileVide() {
        if (this->nbElts == 0) return true;
        else return false;
    }
};
