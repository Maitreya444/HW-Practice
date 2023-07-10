//Write a java code which accept N numbers from user and accept one another number as NO, check whether NO is present ot not.
//Input   : 6
//No      : 66
//Elements: 85  66  3  66  93  88  
import java.util.*;
class NumberDemo
{
    public boolean Check(int iSee, int iNo[])
    {
        int iCnt = 0;

        for(iCnt = 0; iCnt < iNo.length; iCnt ++)
        {
            if(iNo[iCnt] == iSee)
            {   
                return true;
            }
        }
        return false;
    } 
}
public class HA36_1 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number of Elements");
        int iSize = sobj.nextInt();

        System.out.println("Enter No you want to check");
        int iCheck = sobj.nextInt();

        System.out.println("Enter Elements");
        int [] arr = new int [iSize];

        for(int iCnt = 0; iCnt< arr.length; iCnt++)
        {
            arr[iCnt] = sobj.nextInt();
        }
        NumberDemo nobj = new NumberDemo();
        boolean bRet = nobj.Check(iCheck,arr);
            
        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
        sobj.close();
    }
}
