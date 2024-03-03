
/**
 * Write a description of class Vett here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
import java.lang.Math.*;
public class Vett
{
    // instance variables - replace the example below with your own
    private double x;
    private double y;

    /**
     * Constructor for objects of class Complex
     */
    public Vett(double r, double i)
    {
        // initialise instance variables
        x = r;
        y = i;
    }

    void setX(double r)
    {
        x = r;
    }
    
    void setY(double r)
    {
        y = r;
    }
    
    double getDis()
    {
        return Math.sqrt((x*x) + (y*y));
    }
}
