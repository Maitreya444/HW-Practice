//Write a java code which accept N numbers from user and accept one another number as NO, and return index of first occurence of taht NO
//Input   : 6
//No      : 66
//Elements: 85  66  3  66  93  88  
//Output  : 1
import java.util.*;
class NumberDemo
{
    public int Check(int iSee, int iNo[])
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < iNo.length; iCnt ++)
        {
            if(iNo[iCnt] == iSee)
            {   
                return iCnt;
            }
        }
        return -1;
    } 
}
public class HA36_2
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
        int iRet = nobj.Check(iCheck,arr);
        System.out.println("Index is"+iRet);

        sobj.close();
    }
}
