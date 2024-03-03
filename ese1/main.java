
/**
 * Write a description of class main here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
public class main
{
    public static void main(String args[])
    {
        Contatore c1 = new Contatore(5);
        System.out.println("before increment "+ c1.a);
        c1.inc();
        System.out.println("after increment "+ c1.a);
        c1.reset();
        
    }
}
