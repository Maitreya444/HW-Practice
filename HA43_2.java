import java.util.*;
class MyArray
{
    public void MinArray(int arr1 [], int arr2 [])
    {
        int iCnt = 0;
        int iMin = arr1[0];
        for(iCnt = 0; iCnt < arr1.length; iCnt++)
        {
            if(arr1[iCnt] < iMin)
            {   
                iMin = arr1[iCnt];
                System.out.println("Minimum number in the array 1 is "+iMin);
            }
        }
        for(iCnt = 0; iCnt < arr2.length; iCnt++)
        {
            if(arr2[iCnt] < iMin)
            {
                iMin = arr2[iCnt];
                System.out.println("Minimum number in the array 2 is "+iMin);
            }
        }
    }
}
public class HA43_2 
{
    public static void main(String[] args) 
    {   
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Elements in Array 1");
        int isize1 = sobj.nextInt();

        System.out.println("Enter the elements in array 1");
        int [] arr1 = new int[isize1];

        for(iCnt = 0; iCnt < arr1.length; iCnt ++)
        {
            arr1[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter number of Elements in Array 2");
        int isize2 = sobj.nextInt();

        System.out.println("Enter the elements in array 2");
        int [] arr2 = new int[isize2];

        for(iCnt = 0; iCnt < arr2.length; iCnt ++)
        {
            arr2[iCnt] = sobj.nextInt();
        }

        MyArray Mobj = new MyArray();
        Mobj.MinArray(arr1, arr2);

        sobj.close();
    }    
}
