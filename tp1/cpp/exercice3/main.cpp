#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

double moyenne(vector<double> notes) {
    double somme = 0;
    for (double n : notes) {
        somme = somme + n;
    }
    return somme / notes.size();
}

string mention(double m) {
    if (m >= 16) {
        return "Tres bien";
    } else if (m >= 14) {
        return "Bien";
    } else if (m >= 12) {
        return "Assez bien";
    } else if (m >= 10) {
        return "Passable";
    } else {
        return "Ajourne";
    }
}

int main() {
    vector<double> notes = {12.5, 9.0, 14.0, 16.5};

    for (size_t i = 0; i < notes.size(); i++) {
        cout << "Note " << i + 1 << " : " << notes[i] << endl;
    }

    cout << fixed << setprecision(2);
    double m = moyenne(notes);
    cout << "Moyenne : " << m << " (" << mention(m) << ")" << endl;

    notes.push_back(11.0);
    cout << notes.size() << " notes, moyenne : " << moyenne(notes) << endl;


    return 0;
}
