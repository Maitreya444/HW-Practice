//Write a java program which accept number from user and return the count of even digits.
//Input : 2395
//Output :1
import java.util.*;
class Digit
{
    public int CountEven(int iNo)
    {   
        int iCount = 0;
        int iDigit = 0;
        while(iNo !=0)
        {
            iDigit = iNo % 10;
            if((iDigit % 2) ==0)
            {
                iCount++;
            }
            iNo = iNo /10;
        }
        return iCount;
    }
}
public class HA35_1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter a Value \n");
        int iValue = sobj.nextInt();

        Digit dobj = new Digit();
        {
            int iRet = dobj.CountEven(iValue);
            System.out.println("Even no is "+iRet);
        }
        sobj.close();
    }
}
