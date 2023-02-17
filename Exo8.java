import java.util.Scanner;

/** Programme de l'exercice 8 du TP1.
 *  @author RAVARD Samuel, KOUADIO Emmanuelle
 *  @version 1.0 
 */
public class Exo8 {
	//Programme Java qui permet de saisir 3 nombres réels et afficher les racines de l'équation
	//ax² + bx + c = 0
	  public static void main(String[] args) {
		    Scanner scan = new Scanner(System.in);
		    double a, b, c, delta, x1, x2;
		    //a, b et c sont les coefficients de l'équation
		    //delta représente b²-4ac qui est utilisée pour déterminer le nombre de racines
		    System.out.println("Entrez a :");
		    a = scan.nextDouble();
		    System.out.println("Entrez b :");
		    b = scan.nextDouble();
		    System.out.println("Entrez c :");
		    c = scan.nextDouble();
		    delta = b * b - 4 * a * c;
		    if (delta > 0) {
		      x1 = (-b + Math.sqrt(delta)) / (2 * a); //Calculs pour déterminer la racine
		      x2 = (-b - Math.sqrt(delta)) / (2 * a);
		      System.out.println("Les racines sont : x1 = " + x1 + " et x2 = " + x2);
		    } else if (delta == 0) {
		      x1 = -b / (2 * a);
		      System.out.println("L'unique racine est x = " + x1);
		    } else { //Si delta est inférieur à 0, il n'y a pas de racine
		      System.out.println("L'équation n'a pas de racine réelle.");
		    }
		  }
}

