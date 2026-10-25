import copy
from exercice4 import Etudiant


def bonus(etudiant):
    etudiant.ajouter_note(20)


# 1
e1 = Etudiant("R130456789", "El Idrissi", "Amine")
e1.ajouter_note(12)
e2 = e1
e2.ajouter_note(15)
print("e1 :", e1.nombre_notes(), "- e2 :", e2.nombre_notes())
print("Meme objet ?", e1 is e2)

# 2
e3 = copy.deepcopy(e1)
e3.ajouter_note(18)
print("e1 :", e1.nombre_notes(), "- e3 :", e3.nombre_notes())

# 3
bonus(e1)
print("e1 apres bonus :", e1.nombre_notes())
