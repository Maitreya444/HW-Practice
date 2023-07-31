//Write a java program which accpet two arrays from user and display sum of each array.
// Input :  1   2   3   4   5   
//          6   7   8   9   10   
//Output :  15  40

import java.util.*;

class MyArray
{
    public void Display(int arr1[], int arr2[]) 
    {
        int iCnt = 0;
        int iSum1  = 0;
        int iSum2 =0;
        for(iCnt = 0; iCnt < arr1.length; iCnt++)
        {
            iSum1 = iSum1 + arr1[iCnt];
        }
        System.out.println(iSum1);
        for(iCnt = 0; iCnt < arr2.length; iCnt++)
        {
            iSum2 = iSum2 + arr2[iCnt];
        }   
        System.out.println(iSum2); 
    }
}
public class HA42_5 
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
        Mobj.Display(arr1, arr2);

        sobj.close();
    }   
}
