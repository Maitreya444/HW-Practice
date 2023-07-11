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
     for(i =iRow; i>=1; i--)
     {
          for(j =iCol; j>=1; j--)
          {
            System.out.print(i);
          }
          System.out.println();
     }
    }
}
class HA38_4
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