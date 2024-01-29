// problem statement : Accept radius from user and claculate area of circle

// Step 1 : Understand the problem statement 
// Conclusion : We are going to use the formula as PI*R*R

// Step 2 : Algorithm 
/*
   START
      Accept radius from user and store into RADIUS
      Create variable as PI and store value 3.14
      Calculate area PI * RADIUS * RADIUS
      Display the value of area to the user
   STOP
*/

////////////////////////////////////////////////////////////////////
//
// Entry Point function
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
// Function name : CalculateArea
// Description : It is used to calculate area of circle
// Input : float
// Output : float
// Author name : Swarup Sharad Gite
// Date : 02/10/2023
////////////////////////////////////////////////////////////////////

#define PI 3.14

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;
   

    fAns = PI* fValue* fValue;
    return fAns;
}

int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;

    printf("Enter the radius of circle : \n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius);

    printf("Area of circle : %f\n",fArea);

    return 0;

}