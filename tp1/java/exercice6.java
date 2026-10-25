import java.util.HashSet;

public class exercice6 {
    public static void main(String[] args) {
        Etudiant a = new Etudiant("R130456789", "El Idrissi", "Amine");
        Etudiant b = a;
        Etudiant c = new Etudiant("R130456789", "El Idrissi", "Amine");
        Etudiant d = new Etudiant("R135551234", "El Idrissi", "Amine");

        System.out.println("a == b : " + (a == b));
        System.out.println("a == c : " + (a == c));
        System.out.println("a == d : " + (a == d));

        System.out.println("a.equals(b) : " + a.equals(b));
        System.out.println("a.equals(c) : " + a.equals(c));
        System.out.println("a.equals(d) : " + a.equals(d));

        HashSet<Etudiant> ensemble = new HashSet<>();
        ensemble.add(a);
        ensemble.add(b);
        ensemble.add(c);
        ensemble.add(d);
        System.out.println("Taille du HashSet : " + ensemble.size());

        // Etape 4 : chaines
        String s1 = "bonjour";
        String s2 = new String("bonjour");
        System.out.println("s1 == s2 : " + (s1 == s2));
        System.out.println("s1.equals(s2) : " + s1.equals(s2));
    }
}
