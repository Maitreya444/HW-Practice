import java.util.*;

class MyArray
{
    public boolean PalindromeArray(int arr1[])
    {   
        int iCnt = 0;
        int iNo = 0;
        int iReverse = 0;
        int OriNo = 0;
        
        for(iCnt = 0; iCnt < arr1.length; iCnt++)
        {
            OriNo = arr1[iCnt];
            while(arr1[iCnt] !=0)
            {
                iNo = arr1[iCnt] % 10;
                iReverse = (iReverse * 10)+iNo;
                arr1[iCnt] = arr1[iCnt] / 10;
            }
            arr1[iCnt] = OriNo;
        }
        return iReverse == arr1[arr1.length -1];
    }
}

public class HA43_5
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

        MyArray Mobj = new MyArray();
        boolean bRet = Mobj.PalindromeArray(arr1);

        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

        
        sobj.close();
    }    
}
