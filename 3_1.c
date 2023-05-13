//1.Write a program which accept number from user and display its multiplication of factors.
#include<stdio.h>
int MultiFact(int Number)
{
     int iCnt = 0;
     int Add = 0;
     if(Number < 0)
     {
          Number = -Number;
     }
     for(iCnt =2; iCnt <= (Number/2)  ; iCnt++)
     {
          /*Aata hya program madhe Number madhe kahi pn value store hou shakte ani iCnt yadya sarka 
          firat rahil ani firta firta tyala ashe numbers bhettil je Number sobat divide kele ka mg answer 0
          deta. Mg mala tech number display karaiche ahae mahnun I will use if statement. Ki baba tech dhakav 
          je divide zalya vr 0 detat. Asa nai kela tr purn 1....Number parant numbers display hotil*/
          if((Number % iCnt) ==0)
          {
              printf("%d\n",iCnt);
               Add = Add + iCnt;
          }
          
     }
     return Add;
}
int main()
{
     int iNo = 0;
     int Ans = 0;
     printf("Pls enter a number \n");
     scanf("%d",&iNo);

     Ans = MultiFact(iNo);
     printf("Additon of factors is : %d", Ans);
     return 0;
}