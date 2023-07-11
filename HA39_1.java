//Input : iRow = 4 iCol = 4
/*Output:       *   *   *   *
                *   *   *   *
                *   *   *   *
                *   *   *   *        */
import java.util.*;
class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;

        for(i =1; i<= iRow; i++)
        {
            for(j = 1; j<=iCol ; j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
class HA39_1
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