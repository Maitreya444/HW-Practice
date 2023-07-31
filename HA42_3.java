//Write a java program which accpet two arrays from user and display odd contents of each array.
// Input :  1   2   3   4   5   6   7   8   9   10   
//Output :  1   3   5   7   9   

import java.util.*;

class MyArray
{
    public void Display(int arr1[], int arr2[]) 
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < arr1.length; iCnt++)
        {
            if((arr1[iCnt] % 2) !=0)
            {
                System.out.println("Odd elements from array 1 are : " +arr1[iCnt]);
            }
        }
        for(iCnt = 0; iCnt < arr2.length; iCnt++)
        {
            if((arr2[iCnt] %2) !=0)
            {
                System.out.println("Odd elements from array 2 are : " +arr2[iCnt]);
            }
        }    
    }
}
public class HA42_3
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
