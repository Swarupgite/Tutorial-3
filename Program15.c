#include<stdio.h>

void DisplayExamTime(int iStandard)
{
   if(iStandard == 1)
   {
     printf("your exam is at 8 AM\n");
   }
   else if(iStandard == 2)
   {
     printf("your exam is at 9 AM\n");
   }
   else if(iStandard == 3)
   {
     printf("your exam is at 10 AM\n");
   }
   else if(iStandard == 4)
   {
     printf("your exam is at 11 AM\n");
   }
   else if(iStandard == 5)
   {
     printf("your exam is at 12 NOON\n");
   }
   else if((iStandard > 0) || (iStandard < 5))
   {
     printf("Wrong input\n");
   }
}

int main()
{
  auto int iValue = 0;

  printf("Enter your standard : \n");
  scanf("%d",&iValue);

  DisplayExamTime(iValue);

  return 0;
}