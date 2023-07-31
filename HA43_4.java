import java.util.*;

class MyArray
{
    public int[] ArrayCopy(int arr1[], int arr2[])
    {   
        //Dynamic Memory allocation
        int [] newArray = new int[arr1.length+arr2.length];
        //Traversing
        int iCnt = 0;
        
        for(iCnt = 0; iCnt < arr1.length ; iCnt++)
        {
            newArray [iCnt] = arr1[iCnt];
        }

        for(iCnt = 0; iCnt < arr2.length; iCnt++)
        {
            newArray [arr1.length + iCnt] = arr2[iCnt];
        }
        return newArray;
    }
}

public class HA43_4
{
    public static void main(String[] args) 
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter no of elements fir array 1");
        int isize1 = sobj.nextInt();

        System.out.println("Enter elements in array 1");
        int [] arr1 = new int[isize1];

        for(iCnt =0; iCnt < arr1.length; iCnt ++)
        {
            arr1[iCnt] = sobj.nextInt();
        }
        System.out.println("Enter no of elemnts for array 2");
        int isize2 = sobj.nextInt();

        System.out.println("Enter Elements in array 2");
        int [] arr2 = new int[isize2];

        for(iCnt =0; iCnt < arr2.length; iCnt++)
        {
            arr2[iCnt] = sobj.nextInt();
        }

        MyArray Mobj = new MyArray();
        int [] newArray = Mobj.ArrayCopy(arr1, arr2);

        System.out.println(" order of array is :");

        for(int elements : newArray)
        {
            System.out.print(elements);
        }
        sobj.close();
    }    
}
