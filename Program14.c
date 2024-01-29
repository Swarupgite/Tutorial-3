#include<stdio.h>

void DisplayExamTime(int iStandard)
{
   switch(iStandard)
    {
        case 1:
         printf("your exam is at 8PM\n");
         break;

        case 2:
         printf("Your exam is at 9AM\n");
         break;

        case 3:
         printf("Your exam is at 10AM\n");
         break;

        case 4:
         printf("Your exam is at 11AM\n");
         break;

        case 5:
         printf("Your exam is at 12 NOON\n");
         break;


        default:
         printf("Wrong input\n");
         break;

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