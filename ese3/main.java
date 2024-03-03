import javax.swing.*;
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
        Vett v1 = new Vett(2 , 4);
        System.out.println("before increment "+ v1.getDis());
        String input = JOptionPane.showInputDialog("Enter the value of x");
        double x = Double.parseDouble(input);
        v1.setX(x);
        input = JOptionPane.showInputDialog("Enter the value of x");
        double y = Double.parseDouble(input);
        v1.setY(y);
        System.out.println("before increment "+ v1.getDis());
    }
}
