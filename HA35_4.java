//Write a java program which accept number from user and return the multiplication of digits.
//Input : 2395
//Output :270
import java.util.*;

class Digit
{
    public void CountMulti(int iNo)
    {
        int iDigit = 1;
        int Temp = iNo;
        while(Temp !=0)
        {
            iDigit = iDigit * (Temp %10);
            Temp = Temp / 10;
        }
        System.out.println("Multiplication is :"+iDigit);
    }
}

public class HA35_4
{   
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        int iValue = sobj.nextInt(); 

        Digit dobj = new Digit();
        {
            dobj.CountMulti(iValue);
        }
        sobj.close();

    }
}