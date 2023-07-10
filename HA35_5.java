//Write a java program which accept number from user and return the summation even - odd
//Input : 2395
//Output : -15 (2-17)
import java.util.*;

class Digit
{
    public int CountSum(int iNo)
    {
        int iDigit = 0;
        int iCount1 = 0;
        int iCount2 = 0;
        int iTotal = 0;
        while(iNo !=0)
        {
            if((iNo %2 )==0)
            {   
                iDigit = iDigit % 10;
                System.out.println(iNo);
                iNo = iNo / 10;
                iCount1++;
                return iCount1;
            }
        }
        while (iNo !=0)
        {
            if((iNo %2)!=0)
            {
                iDigit = iDigit % 10;
                System.out.println(iNo);
                iNo = iNo / 10;
                iCount2 ++;
                return iCount2;
            }
        }
        iTotal = iCount2 - iCount1;
        return iTotal;
    }
}

public class HA35_5
{   
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a number");
        int iValue = sobj.nextInt(); 

        Digit dobj = new Digit();
        {
            int iRet = dobj.CountSum(iValue);
            System.out.println(+iRet);
        }
        sobj.close();

    }
}