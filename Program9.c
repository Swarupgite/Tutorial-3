#include<stdio.h>

long int CalculateCube(int iValue)
{
   long int icube = 0;

    icube = iValue * iValue * iValue;
    return icube;
}
int main()
{
   auto int iNo = 0;
   auto int iAns = 0;

    printf("Enter number : \n");
    scanf("%d",&iNo);

    iAns = CalculateCube(iNo);

    printf("Cube is : %ld\n",iAns);
    return 0;
}