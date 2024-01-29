#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum/(float)iSize);
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    float fRet = 0.0f;

    printf("Enter the number of elements that you want enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated succesfully for %d elements\n",iCount);
    printf("Enter the %d values : \n",iCount);

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\nEnter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average(ptr, iCount);
    printf("Average is : %f\n",fRet);

    free(ptr);
    printf("Dynamic memory gets deallocated succesfully...\n");

    return 0;
}