//Write java program which accept 2 arrays from user and form new array which is combination of first and second array
//  Input : 12  57  28  3
//          99  23  54  58  6   67
//  Output: 12  57  28  3   99  23  54  58  6   67
import java.util.*;

class MyArray
{
      public int[] ArrayConcat(int arr1 [], int isize1, int arr2[], int isize2)
      { 
        //Dynamic memory allocation
        int [] newArray = new int [isize1 + isize2];

        //Travesing 
        for(int iCnt = 0; iCnt < isize1; iCnt++)
        {
            newArray [iCnt] = arr1[iCnt];
        }
        for(int iCnt = 0; iCnt < isize2; iCnt++)
        {
            newArray [isize1 + iCnt] = arr2[iCnt];
        }
        return newArray;
        
      }
    
}
public class HA42_4
{
    public static void main(String[] args) 
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no of elemets");
        int isize1 = sobj.nextInt();

        System.out.println("Enter elements in array 1");
        int [] arr1 = new int [isize1];

        for(iCnt = 0; iCnt < arr1.length; iCnt++)
        {
            arr1[iCnt] = sobj.nextInt();
        }

        System.out.println("Enter no of elements");
        int isize2 = sobj.nextInt();

        System.out.println("Enter elements of array 2");
        int [] arr2 = new int[isize2];

        for(iCnt = 0; iCnt < arr2.length; iCnt ++)
        {
            arr2[iCnt] = sobj.nextInt();
        }


        MyArray Mobj = new MyArray();
        int [] newArray = Mobj.ArrayConcat(arr1, isize1, arr2, isize2);

        System.out.println("Concat of new array is :");
        for(int elements : newArray)
        {
            System.out.print(elements);
        }
        sobj.close();
    }   
}
