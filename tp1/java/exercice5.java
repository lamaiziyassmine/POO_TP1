public class exercice5 {

    static void bonus(Etudiant etudiant) {
        etudiant.ajouterNote(20);
    }

    public static void main(String[] args) {
        //  1
        Etudiant e1 = new Etudiant("R130456789", "El Idrissi", "Amine");
        e1.ajouterNote(12);
        Etudiant e2 = e1;
        e2.ajouterNote(15);
        System.out.println("e1 : " + e1.nombreNotes() + " - e2 : " + e2.nombreNotes());
        System.out.println("Meme objet ? " + (e1 == e2));

        // 2 
        Etudiant e3 = new Etudiant(e1);
        e3.ajouterNote(18);
        System.out.println("e1 : " + e1.nombreNotes() + " - e3 : " + e3.nombreNotes());

        // 3
        bonus(e1);
        System.out.println("e1 apres bonus : " + e1.nombreNotes());
    }
}
