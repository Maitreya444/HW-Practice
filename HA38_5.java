//Input : iRow = 3 iCol = 5
/*Output:       A   B   C   D   E
                a   b   c   d   E
                A   B   C   D   E*/
import java.util.*;
class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        char chh =0;
        for(i =1 ; i<= iRow; i++)
        {
            for(j = 1, chh = 'A'; j<=iCol ; j++, chh++)
          {
            System.out.print(chh);     
           }
           System.out.println();
        }
    }
}
class HA38_5
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