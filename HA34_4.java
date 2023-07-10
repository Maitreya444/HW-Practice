//Write java program which accept N numbers from user and display all such elements which are divisble by 3 and 5.
import java.util.*;

class NumberDemo
{
    public void Display(int iNo[], int iLength)
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt< iNo.length ; iCnt++)
        {
            if(((iNo[iCnt] %3==0) && (iNo[iCnt] %5)==0))
            {   
                System.out.println(iNo[iCnt]);
            }
        }
    }
}

public class HA34_4
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter No of elements");
        int iSize = sobj. nextInt();
        
        System.out.println("Enter Elements");
        int [] arr = new int[iSize];
        
        for(int iCnt = 0; iCnt< arr.length ; iCnt++)
        {
            arr[iCnt] = sobj.nextInt();
        }
        NumberDemo dobj = new NumberDemo();
        dobj.Display(arr,iSize);

        sobj.close();
    }
}