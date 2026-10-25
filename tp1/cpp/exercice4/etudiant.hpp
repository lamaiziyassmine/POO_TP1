#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

class Etudiant {
private:
    string cne;
    string nom;
    string prenom;
    vector<double> notes;

public:
    static constexpr double SEUIL_VALIDATION = 10.0;

    Etudiant(string cne, string nom, string prenom) {
        this->cne = cne;
        this->nom = nom;
        this->prenom = prenom;
    }

    void ajouterNote(double note) {
        if (note < 0 || note > 20) {
            throw invalid_argument("note invalide : " + to_string(note));
        }
        notes.push_back(note);
    }

    int nombreNotes() {
        return notes.size();
    }

    double moyenne() {
        double somme = 0;
        for (double n : notes) {
            somme = somme + n;
        }
        return somme / notes.size();
    }

    bool estAdmis() {
        return moyenne() >= SEUIL_VALIDATION;
    }

    string affichage() {
        return "Etudiant " + cne + " : " + prenom + " " + nom;
    }
};

// Permet d'ecrire : cout << e
inline ostream& operator<<(ostream& os, Etudiant& e) {
    os << e.affichage();
    return os;
}

#endif

