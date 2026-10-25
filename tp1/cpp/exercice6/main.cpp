#include <iostream>
#include <string>
#include "etudiant.hpp"
using namespace std;

int main() {
    Etudiant a("R130456789", "El Idrissi", "Amine");
    Etudiant& b = a;
    Etudiant c("R130456789", "El Idrissi", "Amine");
    Etudiant d("R135551234", "El Idrissi", "Amine");

    cout << boolalpha;
    cout << "identite a, b : " << (&a == &b) << endl;
    cout << "identite a, c : " << (&a == &c) << endl;
    cout << "identite a, d : " << (&a == &d) << endl;

    // 3
    //cout << "egalite a, b : " << (a == b) << endl;
    //cout << "egalite a, c : " << (a == c) << endl;
    //cout << "egalite a, d : " << (a == d) << endl;

    // 4
    string s1 = "bonjour";
    string s2 = string("bon") + "jour";
    cout << "s1 == s2 : " << (s1 == s2) << endl;

    return 0;
}

