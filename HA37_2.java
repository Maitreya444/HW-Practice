import java.util.*;

class StringDemo
{
    public boolean StrChkX(String str1, String str2)
    {   
        int l1 = str1.length();
        int l2 = str2.length();
        int lmin = Math.min(l1, l2);

        for(int iCnt = 0; iCnt < lmin; iCnt++)
        {
           int str1_ch = (int)str1.charAt(iCnt);
           int str2_ch = (int)str2.charAt(iCnt);
           
           if(str1_ch == str2_ch)
           {
            return true;
           }
        }
        return false;
    }
}

public class HA37_2 
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String 1");
        String iValue1 = sobj.nextLine();

        System.out.println("Enter String 2");
        String iValue2 = sobj.nextLine();
        
        StringDemo dobj = new StringDemo();
        Boolean bRet = dobj.StrChkX(iValue1, iValue2);
        
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