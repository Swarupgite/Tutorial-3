//Accept 2 values from user and perform the addition

// step 1 : Understand the problem statement
// Conclusion : We have to accept 2 integers and perform its addition

// step 2 : Write the algorithm
/*
   START
       Accept first number from user and store it into no1
       Accept second number from user and store it into no2
       create one variable to store the result named as Ans
       perform addition of no1 and no2, store the result in Ans
       Display the result from Ans to the user
       
    STOP
*/

// Step : Deside the programming language (C/C++/JAVA/Python)
// WE select C programming

//Step 4 : Write the program 
#include<stdio.h>

///////////////////////////////////////////////////////////////
//
// Function Name :Addition
// Description : It is use to perform addition of two integers
// Input arguments : Integer, Integer
// Output : Integer
// Author : Swarup Sharad Gite
// Date : 25/09/2023
//
///////////////////////////////////////////////////////////////
int Addition(int iNo1, int iNo2)
{
    int iSum = 0;
    
    iSum = iNo1 + iNo2;
    return iSum;
}

///////////////////////////////////////////////////////////////
//
// Entry point function of an application which performs addition of 2 integers
//
///////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter first number : \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1, iValue2);

    printf("Addition is : %d\n",iAns);

    return 0;
}

// Sep 5 : Test the code
/*
Test case 1: 10 11
Output : 21

Test case 2: 10 0
Output : 10

Test case 3: 12 -6
Output : 6

Test case 4: -6 -5
Output : -11
*/