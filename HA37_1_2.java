/*Write a java program which accepts 2 strings from user and concat N characters of second string after 
 * first string. Value of N should be accepted from user.
 * If 3rd parametre is greater than size of second string then concat whole string after first string
 * 
 * Input : "Marvellous Infosystems"
 *         "Logic Building"
 *          5
 * Output: "Marvellous Infosystems Logic"  */         

 import java.util.*;

 class StringDemo
 {
    public String StrCatX(String src, String dest, int iCount)
    {   
        int length = Math.min(iCount,dest.length());
        StringBuilder add = new StringBuilder(src);

        for(int iCnt = 0; iCnt< length; iCnt++)
        {
            add.append(dest.charAt(iCnt));
        }
        return add.toString();
    }   
 }

 class HA37_1_2
 {
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String 1");
        String iValue1 = sobj.nextLine();

        System.out.println("Enter String 2");
        String iValue2 = sobj.nextLine();

        System.out.println("Enter the value till you want to concat");
        int iValue3 = sobj.nextInt();
        
        StringDemo dobj = new StringDemo();
        String iRet = dobj.StrCatX(iValue1, iValue2, iValue3);
        System.out.println("Cocat is "+ iRet);

        sobj.close();
    }
 }