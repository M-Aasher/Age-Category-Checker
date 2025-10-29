/* 
  Program: Age Category Checker
  Author: Aasher
  Description: Takes the age of a person as input and checks 
               whether they are a teenager (13–19 years old).
*/

#include<stdio.h>
int main()
{
 int teenage, age;
 printf("Enter your age:");
 scanf("%d", &age);
 if(age>=13 && age<=19)
 printf("You are teenage as your age is %d.", age);
    

 return 0;
}