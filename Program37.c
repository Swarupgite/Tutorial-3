#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
   int iCnt = 0;
   int iSum = 0;
   
   
    for(iCnt = 1;iCnt <= iNo/2;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
    }
        if(iSum == iNo)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    
   
}
int main()
{
    int iValue = 0;
    bool bRet = FALSE;
    

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == TRUE)
    {
        printf("%d is a perfect number  \n",iValue);
    }
    else
    {
        printf("%d is not a perfect number  \n",iValue);
    }


}

// Time Complexity : 0(N/2)