//Count Vowels

import java.util.*;

class StringDemo
{
    public int CountVowel(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt <Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') ||(Arr [iCnt] == 'U'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

public class HA33_4 
{
    public static void main(String[] args) 
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter a name");
       String name = sobj.nextLine();

       StringDemo dobj= new StringDemo();
       int sRet = dobj.CountVowel(name);
       System.out.println(+sRet);

       sobj.close();
    }
   
}
