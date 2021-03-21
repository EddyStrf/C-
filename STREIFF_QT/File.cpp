#pragma once
#include "Liste.cpp"

template<class T>

class File : public Liste<T> {
public:
    File() {
        this->pPremier = nullptr;
        this->pDernier = nullptr;
        this->nbElts = 0;
    }

    bool supprimerDeb() {
        if (fileVide()) {
            cout << "Erreur : file vide !" << endl;
            return false;
        }
        if (this->nbElts == 1) {
            NoeudDeListe<T> *pFile = this->pPremier;
            this->pPremier = this->pDernier = nullptr;
            delete (pFile);
        } else {
            NoeudDeListe<T> *pFile = this->pPremier;
            this->pPremier = this->pPremier->getNext();
            delete (pFile);
        }
        this->nbElts--;
        return true;
    }

    bool afficher() {
        cout << "File :\n";
        NoeudDeListe<T> *pFile = this->pPremier;
        if (fileVide()) {
            cout << "File vide";
            return true;
        }
        for (int i = 1; i < this->nbElts; i++) {
            cout << "NoeudDeListe [" << i << "] {";
            pFile->afficher();
            pFile = pFile->getNext();
        }
        cout << "NoeudDeListe [" << this->nbElts << "] {";
        pFile->afficherDernier();
        return true;
    }

protected:
    bool fileVide() {
        if (this->nbElts == 0) return true;
        else return false;
    }
};
