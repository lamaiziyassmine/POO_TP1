#include <iostream>
#include "etudiant.hpp"
using namespace std;

void bonusValeur(Etudiant e) {
    e.ajouterNote(20);
}

void bonusReference(Etudiant& e) {
    e.ajouterNote(20);
}

int main() {
    // Etape 1 : affectation (copie de l'objet)
    Etudiant e1("R130456789", "El Idrissi", "Amine");
    e1.ajouterNote(12);
    Etudiant e2 = e1;
    e2.ajouterNote(15);
    cout << "e1 : " << e1.nombreNotes() << " - e2 : " << e2.nombreNotes() << endl;
    cout << boolalpha << "Meme objet ? " << (&e1 == &e2) << endl;

    // Etape 2 : partage grace a une reference
    Etudiant& e3 = e1;
    e3.ajouterNote(18);
    cout << "e1 : " << e1.nombreNotes() << " - e3 : " << e3.nombreNotes() << endl;

    // Etape 3 : deux versions de bonus
    bonusValeur(e1);
    cout << "e1 apres bonusValeur : " << e1.nombreNotes() << endl;
    bonusReference(e1);
    cout << "e1 apres bonusReference : " << e1.nombreNotes() << endl;

    return 0;
}

