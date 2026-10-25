class Etudiant:
    SEUIL_VALIDATION = 10.0

    def __init__(self, cne, nom, prenom):
        self._cne = cne
        self._nom = nom
        self._prenom = prenom
        self._notes = []

    def ajouter_note(self, note):
        if note < 0 or note > 20:
            raise ValueError("note invalide : " + str(note))
        self._notes.append(note)

    def nombre_notes(self):
        return len(self._notes)

    def moyenne(self):
        somme = 0
        for n in self._notes:
            somme = somme + n
        return somme / len(self._notes)

    def est_admis(self):
        return self.moyenne() >= Etudiant.SEUIL_VALIDATION

    def __str__(self):
        return "Etudiant " + self._cne + " : " + self._prenom + " " + self._nom
    #Etape3_Exercice6____________________
    def __eq__(self, autre):
        return self._cne == autre._cne

    def __hash__(self):
        return hash(self._cne)
#_______________________________________

e = Etudiant("R130456789", "El Idrissi", "Amine")
e.ajouter_note(12.5)
e.ajouter_note(9.0)
e.ajouter_note(14.0)

if e.est_admis():
    situation = "oui"
else:
    situation = "non"

print(e)
print("Moyenne : {:.2f} - admis : {}".format(e.moyenne(), situation))

# 2______________________ 
try:
    e.ajouter_note(25)
except ValueError as erreur:
    print("Erreur :", erreur)

# 3________________________
e._notes.append(25)
print("Moyenne apres triche : {:.2f}".format(e.moyenne()))
