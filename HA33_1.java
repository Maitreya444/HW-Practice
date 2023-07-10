/*Write a java program which accept string from user and count number of Captial Letters*/
//Input : "Marvellous Multi OS"
//Output : 4

import java.util.*;

class StringDemo
{
    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount ++;
            }
        }
        return iCount;
    }
}
public class HA33_1
{
    public static void main(String[] args) 
        
    
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        StringDemo obj = new StringDemo();
        int iRet = obj.CountCapital(name);
        System.out.println("Number of capital characters are : "+iRet);

        sobj.close();
    }
    
}