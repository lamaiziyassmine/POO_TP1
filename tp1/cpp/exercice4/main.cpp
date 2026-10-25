#include <iomanip>
#include <iostream>
#include "etudiant.hpp"
using namespace std;

int main() {
    Etudiant e("R130456789", "El Idrissi", "Amine");
    e.ajouterNote(12.5);
    e.ajouterNote(9.0);
    e.ajouterNote(14.0);

    cout << e << endl;
    cout << fixed << setprecision(2);
    cout << "Moyenne : " << e.moyenne() << " - admis : ";
    if (e.estAdmis()) {
        cout << "oui" << endl;
    } else {
        cout << "non" << endl;
    }

    // Etape 2 : note invalide
    try {
        e.ajouterNote(25);
    } catch (invalid_argument& erreur) {
        cout << "Erreur : " << erreur.what() << endl;
    }

    // Etape 3 : a tester (enleve les //), provoque une erreur de compilation
    // e.notes.push_back(25);

    return 0;
}
