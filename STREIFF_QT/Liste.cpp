#pragma once
#include "NoeudDeListe.cpp"

template<class T>

class Liste {

protected:
    NoeudDeListe<T> *pPremier;
    NoeudDeListe<T> *pDernier;
    int nbElts;
public:
    NoeudDeListe<T> *getpPremier() {
        return pPremier;
    }

    NoeudDeListe<T> *getpDernier() {
        return pDernier;
    }




    Liste() {
        this->pPremier = nullptr;
        this->pDernier = nullptr;
        this->nbElts = 0;
    }

    void ajouterFin(T x) {
        auto *tmp = new NoeudDeListe<T>(x);
        if (listeVide()) {
            this->pPremier = tmp;
            this->pDernier = tmp;
        } else {
            this->pDernier->setNext(tmp);
            this->pDernier = tmp;
        }
        this->nbElts++;
    }

    virtual bool afficher() {
        cout << "Liste :\n";
        NoeudDeListe<T> *pListe = this->pPremier;
        if (listeVide()) {
            cout << "Liste  vide\n";
            return true;
        }
        for (int i = 1; i < nbElts; i++) {
            cout << "NoeudDeListe [" << i << "] {";
            pListe->afficher();
            pListe = pListe->getNext();
        }
        cout << "NoeudDeListe [" << nbElts << "] {";
        pListe->afficherDernier();
        return true;
    }

private:
    bool listeVide() {
        if (this->nbElts == 0) return true;
        else return false;
    }
};
