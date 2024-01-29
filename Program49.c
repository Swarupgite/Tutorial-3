#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iCopy = iNo;  // Xerox kadhali
    int iRev = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;
        iRev = (iRev*10)+iDigit;
    }
    
    if(iRev == iCopy)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {
        printf("%d is a pallindrome numbber\n",iValue);
    }
    else
    {
        printf("%d is a not pallindrome numbber\n",iValue);
    }
    return 0;
}