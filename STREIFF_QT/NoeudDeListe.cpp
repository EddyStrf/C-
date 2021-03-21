#pragma once
#include <iostream>

using namespace std;

template<class T>

class NoeudDeListe {
private:
    T data;
    NoeudDeListe<T> *next;
public:

    explicit NoeudDeListe(T data) {
        this->data = data;
        this->next = nullptr;
    }

    T getData() {
        return this->data;
    }

    void setData(T d) {
        this->data = d;
    }

    NoeudDeListe<T> *getNext() {
        return this->next;
    }

    void setNext(NoeudDeListe<T> *s) {
        this->next = s;
    }

    void afficher() {
        cout << "data -> " << this->data << "; Valeur next -> " << this->next->data<< "}\n";
    }

    void afficherDernier() {
        cout << "data -> " << this->data << "}\nFin de la structure.\n\n";
    }
};
