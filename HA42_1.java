/*Write a java program which accept two arrays and display contents of each array.
Input:  2   9   7   5   2   3   
9   3   5   5   
Output: 2   9   7   5   2   3   
9   3   5   5 */

import java.util.*;

class MyArray
{
    public void Display(int arr1[], int arr2[])
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < arr1.length; iCnt ++)
        {
            System.out.println(arr1[iCnt]);
        }
        for(iCnt = 0; iCnt < arr2.length; iCnt ++)
        {
            System.out.println(arr2[iCnt]);
        }
    }
}

public class HA42_1 
{
    public static void main(String[] args) 
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter no of elemets");
        int isize1 = sobj.nextInt();

        System.out.println("Enter elements in array 1");
        int [] arr1 = new int [isize1];

        for(iCnt = 0; iCnt < arr1.length; iCnt ++)
        {
            arr1[iCnt] = sobj.nextInt();
        }
           
        System.out.println("Enter no of elemnts");
        int isize2 = sobj.nextInt();

        System.out.println("Enter elements of array 2");
        int [] arr2 = new int [isize2];

        for(iCnt = 0; iCnt<arr2.length; iCnt ++)
        {
            arr2[iCnt] = sobj.nextInt();
        }        
        MyArray Mobj = new MyArray();
        Mobj.Display(arr1, arr2);

        sobj.close();
    }
}
