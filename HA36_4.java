//Write a java code which accept N numbers from user and accept one another number as NO, and return range from that NO
//Input   : 6
//No      : 66
//Elements: 85  66  3  66  93  88  
//Output  : 85  88  93
import java.util.*;
class NumberDemo
{
    public int Check(int iSee, int iLast, int iNo[])
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < iNo.length; iCnt ++)
        {   
            if(iNo[iCnt] >= iSee && iNo[iCnt] <= iLast)
            {   
                System.out.println("Numbers are :"+ iNo[iCnt]);
            }
        }
        return -1;
    } 
}
public class HA36_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number of Elements");
        int iSize = sobj.nextInt();

        System.out.println("Enter No you want to check");
        int iCheck = sobj.nextInt();

        System.out.println("Enter No you want till check");
        int iEnd = sobj.nextInt();

        System.out.println("Enter Elements");
        int [] arr = new int [iSize];

        for(int iCnt = 0; iCnt< arr.length; iCnt++)
        {
            arr[iCnt] = sobj.nextInt();
        }
        NumberDemo nobj = new NumberDemo();
        int iRet = nobj.Check(iCheck,iEnd,arr);
        System.out.println("Nos are"+iRet);

        sobj.close();
    }
}
