import java.lang.Math.*;
/**
 * Write a description of class Complex here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
public class Complex
{
    // instance variables - replace the example below with your own
    private double real;
    private double imm;

    /**
     * Constructor for objects of class Complex
     */
    public Complex(double r, double i)
    {
        // initialise instance variables
        real = r;
        imm = i;
    }

    double getReal()
    {
        return real;
    }
    
    double getIm()
    {
        return imm;
    }
    
    double getMod()
    {
        return Math.sqrt((real*real) + (imm*imm));
    }
}
