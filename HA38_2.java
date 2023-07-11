//Input : iRow = 4 iCol = 4
/*Output:       A   B   C   D
                a   b   c   d
                A   B   C   D
                a   b   c   d */
import java.util.*;
class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        char ch = 0;
        char chh =0;
        for(i =1, ch = 'A'; i<= iRow; i++, chh++)
        {
            for(j = 1, ch = 'a'; j<=iCol ; j++, ch++)
          {
               if(i %2 ==0)
               {
                    System.out.print(ch);
               }
               else
               {
                    System.out.print(chh);
               }
           }
           System.out.println();
        }
    }
}
class HA38_2
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Row");
        int iValue1 = sobj.nextInt();
        
        System.out.println("Enter Column");
        int iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1, iValue2);

        sobj.close();
    }
}