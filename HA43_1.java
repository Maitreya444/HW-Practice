import java.util.*;

class MyArray
{
    public int DiffArray(int arr1 [], int arr2 [])
    {
        int iCnt = 0;
        int iSum1 = 0;
        int iSum2 = 0;

        for(iCnt = 0; iCnt < arr1.length; iCnt++)
        {
            iSum1 = iSum1 + arr1[iCnt];
        }
        for(iCnt = 0; iCnt < arr2.length; iCnt++)
        {
            iSum2 = iSum2 + arr2[iCnt];
        }
        return iSum1 - iSum2;
    }
}
public class HA43_1 
{
    public static void main(String[] args) 
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter no of elements ");
        int isize1 = sobj.nextInt();

        System.out.println("Enter elements in Array");
        int [] arr1 = new int[isize1];

        for(iCnt = 0; iCnt < arr1.length ; iCnt++)
        {
            arr1[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter no of elements");
        int isize2 = sobj.nextInt();

        System.out.println("Enter elemnts in array 2");
        int [] arr2 = new int[isize2];

        for(iCnt = 0; iCnt < arr2.length; iCnt++)
        {
            arr2[iCnt] = sobj.nextInt();
        }

        MyArray Mobj = new MyArray();
        int aRet = Mobj.DiffArray(arr1 , arr2);

        System.out.println("Difference between both the arrays are : "+ aRet);

        sobj.close();
    }
}
