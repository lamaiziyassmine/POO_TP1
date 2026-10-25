from exercice4 import Etudiant

a = Etudiant("R130456789", "El Idrissi", "Amine")
b = a
c = Etudiant("R130456789", "El Idrissi", "Amine")
d = Etudiant("R135551234", "El Idrissi", "Amine")

print("a is b :", a is b)
print("a is c :", a is c)
print("a is d :", a is d)

print("a == b :", a == b)
print("a == c :", a == c)
print("a == d :", a == d)

ensemble = {a, b, c, d}
print("Taille du set :", len(ensemble))

# Etape 4 : chaines
s1 = "bonjour"
s2 = "".join(["bon", "jour"])
print("s1 == s2 :", s1 == s2)
print("s1 is s2 :", s1 is s2)
