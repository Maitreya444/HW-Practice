//Write a java program which accept number from user and return the count of digits between 3 & 7
//Input : 2395
//Output :1
import java.util.*;

class Digit
{
    public int CountRange(int iNo)
    {
        int iCount =0;
        int iDigit = 0;

        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if((iDigit >3) && (iDigit <7))
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }
}

public class HA35_3 
{   
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        int iValue = sobj.nextInt(); 

        Digit dobj = new Digit();
        {
            int iRet = dobj.CountRange(iValue);
            System.out.println("Occured between 3 and 7 are "+iRet);
        }
        sobj.close();

    }
}