#include <iostream>
#include <string>
using namespace std;



int main() {
    //1
    int nbEtudiants = 32;
    double moyenne = 12.75;
    string filiere = "SD-RCC";
    bool admis = true;

    cout << nbEtudiants << " " << moyenne << " " << filiere << " " << admis << endl;

    // 2


    // 3
    cout << 7 / 2 << endl;
    cout << 7.0 / 2 << endl;
    cout << 7 % 2 << endl;

    // 4
    int max = 2147483647;
    int resultat = max + 1;
    cout << resultat << endl;

    long long maxLong = 2147483647;
    long long resultatLong = maxLong + 1;
    cout << resultatLong << endl;

    // 5
    cout << admis << endl;
    cout << boolalpha << admis << endl;

    return 0;
}

