
/**
 * Write a description of class Contatore here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
public class Contatore
{
    // instance variables - replace the example below with your own
    int a;

    /**
     * Constructor for objects of class Contatore
     */
    Contatore()
    {
        // initialise instance variables
        a = 0;
    }

    Contatore(int aa)
    {
            a = aa;
    }
    void inc()
    {
        a++;
    }
    
    void reset()
    {
        a = 0;    
    }
}
