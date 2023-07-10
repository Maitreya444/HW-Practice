/*Write a java program ehich accpet string from useer and return difference between frequency of samll
 * characters and frequency of capital letters*/

import java.util.Scanner;
class StringDemo
{
    public int CountDiff(String str)
    {   
        char Arr[] = str.toCharArray();
        int iCount1 =0;
        int iCount2 = 0;
    
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z')))
            {
                iCount1 ++;
            }
        }
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'b')))
            {
                iCount2 ++;
            }
        
    }
    return iCount1 - iCount2;
}
}
public class HA33_3 
{
     public static void main(String[] args) 
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter a name");
       String name = sobj.nextLine();

       StringDemo dobj= new StringDemo();
       int sRet = dobj.CountDiff(name);
       System.out.println(+sRet);

       sobj.close();
    }
    
}
