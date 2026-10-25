import java.util.ArrayList;

public class Etudiant {
    public static final double SEUIL_VALIDATION = 10.0;

    private String cne;
    private String nom;
    private String prenom;
    private ArrayList<Double> notes;

    public Etudiant(String cne, String nom, String prenom) {
        this.cne = cne;
        this.nom = nom;
        this.prenom = prenom;
        this.notes = new ArrayList<>();
    }

    public void ajouterNote(double note) {
        if (note < 0 || note > 20) {
            throw new IllegalArgumentException("note invalide : " + note);
        }
        notes.add(note);
    }

    public int nombreNotes() {
        return notes.size();
    }

    public double moyenne() {
        double somme = 0;
        for (double n : notes) {
            somme = somme + n;
        }
        return somme / notes.size();
    }

    public boolean estAdmis() {
        return moyenne() >= SEUIL_VALIDATION;
    }

    @Override
    public String toString() {
        return "Etudiant " + cne + " : " + prenom + " " + nom;
    }

        public Etudiant(Etudiant autre) {
        this.cne = autre.cne;
        this.nom = autre.nom;
        this.prenom = autre.prenom;
        this.notes = new ArrayList<>(autre.notes);
    }

//etape3_Exercice6_________________
     @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (!(o instanceof Etudiant)) {
            return false;
        }
        Etudiant autre = (Etudiant) o;
        return cne.equals(autre.cne);
    }

    @Override
    public int hashCode() {
        return cne.hashCode();
    }
//___________________________________________________________
   
    public static void main(String[] args) {
        Etudiant e = new Etudiant("R130456789", "El Idrissi", "Amine");
        e.ajouterNote(12.5);
        e.ajouterNote(9.0);
        e.ajouterNote(14.0);

        String situation;
        if (e.estAdmis()) {
            situation = "oui";
        } else {
            situation = "non";
        }

        System.out.println(e);
        System.out.printf("Moyenne : %.2f - admis : %s%n", e.moyenne(), situation);

        // Etape 2 : note invalide
        try {
            e.ajouterNote(25);
        } catch (IllegalArgumentException erreur) {
            System.out.println("Erreur : " + erreur.getMessage());
        }

     



    }
}


