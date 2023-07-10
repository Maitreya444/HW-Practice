import java.util.*;
class NumberDemo
{
    public int Check(int iNo[], int iLength)
    {   
        int iCount1 = 0;
        int iCount2 = 0;
        for(int iCnt = 0; iCnt < iNo.length; iCnt++)
        {
            if((iNo[iCnt] %2)==0)
            {
                iCount1 = iCount1 + iNo[iCnt];
            }
    }
    for(int iCnt = 0; iCnt < iNo.length; iCnt++)
    {
        if((iNo[iCnt]  %2)!=0)
        {
            iCount2 = iCount2 + iNo[iCnt];
        }
        }
        return iCount1 - iCount2;

}   }
public class HA34_1 
{
    public static void main(String[] args) 
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter Array Size");
       int size = sobj.nextInt();

       System.out.println("Enter Elements:");
       int [] arr = new int[size];
       for(int iCnt = 0; iCnt< arr.length; iCnt++)
       {
            arr[iCnt] = sobj.nextInt();
       }

       NumberDemo dobj= new NumberDemo();
       int sRet = dobj.Check(arr,size);
       System.out.println("ANs is "+sRet);

       sobj.close();
    }
}
