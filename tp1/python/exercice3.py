def moyenne(notes):
    somme = 0
    for n in notes:
        somme = somme + n
    return somme / len(notes)


def mention(m):
    if m >= 16:
        return "Tres bien"
    elif m >= 14:
        return "Bien"
    elif m >= 12:
        return "Assez bien"
    elif m >= 10:
        return "Passable"
    else:
        return "Ajourne"


notes = [12.5, 9.0, 14.0, 16.5]

rang = 1
for n in notes:
    print("Note", rang, ":", n)
    rang = rang + 1

m = moyenne(notes)
print("Moyenne : {:.2f} ({})".format(m, mention(m)))

notes.append(11.0)
print(len(notes), "notes, moyenne : {:.2f}".format(moyenne(notes)))

