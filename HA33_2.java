/*Write a java program which accept string from user and count number of Captial Letters and small*/
import java.util.*;

class StringDemo
{
    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z')))
            {
                iCount ++;
            }
        }
        return iCount;
    }
    public int CountSamll(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
}
}
class HA33_2 
{
    public static void main(String[] args) 
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter a name");
       String name = sobj.nextLine();

       StringDemo dobj= new StringDemo();
       int sRet = dobj.CountCapital(name);
       System.out.println("big "+sRet);

       sRet = dobj.CountSamll(name);
       System.out.println("small "+sRet);

       sobj.close(); 

    }
}
