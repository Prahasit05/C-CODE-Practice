#include <stdio.h>

int main()
{
    printf("Hello World Prahasith\n");
    return 0;
}

// 1. Store your age in an int variable and print it
#include <stdio.h>

int main()
{
    int age = 20;

    printf("Age = %d", age);

    return 0;
}

// 2. Store your height in cm in a float variable and print it
#include <stdio.h>

int main()
{
    float height = 175.5;

    printf("Height = %.1f cm", height);

    return 0;
}
// 3. Store the first letter of your name in a char variable and print it
#include <stdio.h>

int main()
{
    char firstLetter = 'P';

    printf("First letter = %c", firstLetter);

    return 0;
}

// 4. Store two numbers in variables and print their sum
#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;

    printf("Sum = %d", sum);

    return 0;
}

// 5. Store a number, change its value, and print it before and after
#include <stdio.h>

int main()
{
    int number = 10;

    printf("Before = %d\n", number);

    number = 20;

    printf("After = %d", number);

    return 0;
}
// 6. Ask the user for their age and print "You are ___ years old."
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("You are %d years old.", age);

    return 0;
}
// 7. Ask for two numbers and print their sum
#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum = %d", num1 + num2);

    return 0;
}
// 8. Ask for length and breadth of a rectangle and print its area
#include <stdio.h>

int main()
{
    float length;
    float breadth;
    float area;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("Area = %.2f", area);

    return 0;
}
// 9. Ask for temperature in Celsius and convert it to Fahrenheit
#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    return 0;
}
// 10. Ask for three numbers and print their total and average
#include <stdio.h>

int main()
{
    float num1;
    float num2;
    float num3;
    float total;
    float average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    total = num1 + num2 + num3;
    average = total / 3;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f", average);

    return 0;
}

// DAY 4 — Arithmetic Operators
// 1. Sum, Difference, Product, and Division of Two Numbers
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int sum;
    int difference;
    int product;
    float division;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    division = (float)num1 / num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Division = %.2f\n", division);

    return 0;
}
// 2. Find the Remainder
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int remainder;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    remainder = num1 % num2;

    printf("Remainder = %d", remainder);

    return 0;
}

// Example:

// Enter first number: 17
// Enter second number: 5

// Remainder = 2
// 3. Check Whether a Number is Even or Odd
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    return 0;
}

// The key idea:

// number % 2 == 0  → Even
// number % 2 != 0  → Odd
// 4. Calculate Perimeter and Area of a Rectangle
//\(A = l w\)
/*A=6×4=24
4 rows by 6 columns = 24 square units.
w
w
l
l
24 square units
w = 6
l = 4
Give feedback*/
#include <stdio.h>

int main()
{
    float length;
    float breadth;
    float area;
    float perimeter;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f", perimeter);

    return 0;
}
// 5. Calculate Simple Interest

/*Formula:

Simple Interest = (Principal × Rate × Time) / 100
#include <stdio.h>*/

int main()
{
    float principal;
    float rate;
    float time;
    float simpleInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f", simpleInterest);

    return 0;
}
// DAY 5 — Making Decisions
// 1. Check if a Number is Positive or Negative
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("The number is positive.");
    }
    else
    {
        printf("The number is negative.");
    }

    return 0;
}

/*Note: This version treats 0 as not positive, so for the separate zero/positive/negative question below, we use three conditions.*/

// 2. Check if a Number is Even or Odd Using if-else
#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    return 0;
}
// 3. Find the Largest of Two Numbers
#include <stdio.h>

int main()
{
    int num1;
    int num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d is larger.", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is larger.", num2);
    }
    else
    {
        printf("Both numbers are equal.");
    }

    return 0;
}
// 4. Check if a Person is Eligible to Vote
#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("You are not eligible to vote.");
    }

    return 0;
}

/*The important condition is:

age >= 18

It means:

age is greater than or equal to 18.*/

//5. Check if a Number is Zero, Positive, or Negative
#include <stdio.h>

    int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("The number is positive.");
    }
    else if (number < 0)
    {
        printf("The number is negative.");
    }
    else
    {
        printf("The number is zero.");
    }

    return 0;
}

// 1. Find the largest of three numbers
#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("Largest number = %d", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Largest number = %d", num2);
    } else {
        printf("Largest number = %d", num3);
    }

    return 0;
}
// 2. Assign a grade based on marks

// A: 90+
// B: 75–89
// C: 60–74
// D: Below 60

#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade = A");
    } else if (marks >= 75) {
        printf("Grade = B");
    } else if (marks >= 60) {
        printf("Grade = C");
    } else {
        printf("Grade = D");
    }

    return 0;
}

// 3. Check whether a triangle is equilateral, isosceles, or scalene
// 60°
// 60°
// 60°
// Three 60° angles and three equal sides of length 128
// Give feedback
#include <stdio.h>

int main() {
    int side1;
    int side2;
    int side3;

    printf("Enter first side: ");
    scanf("%d", &side1);

    printf("Enter second side: ");
    scanf("%d", &side2);

    printf("Enter third side: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("Equilateral triangle");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("Isosceles triangle");
    } else {
        printf("Scalene triangle");
    }

    return 0;
}

// 4. Check if a year is a leap year
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a leap year.", year);
    } else if (year % 100 == 0) {
        printf("%d is not a leap year.", year);
    } else if (year % 4 == 0) {
        printf("%d is a leap year.", year);
    } else {
        printf("%d is not a leap year.", year);
    }

    return 0;
}

// 5. Categorize a person's age group

// Child: 0–12
// Teen: 13–19
// Adult: 20+

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 0 && age <= 12) {
        printf("Age group = Child");
    } else if (age >= 13 && age <= 19) {
        printf("Age group = Teen");
    } else if (age >= 20) {
        printf("Age group = Adult");
    } else {
        printf("Invalid age");
    }

    return 0;
}

// 1. Print numbers from 1 to 10
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
// 2. Print all even numbers from 1 to 50
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 50; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
// 3. Print the multiplication table of a number (1 to 10)
#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
// 4. Find the sum of numbers from 1 to N
#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
// 5. Count how many numbers between 1 and 100 are divisible by 5
#include <stdio.h>

int main()
{
    int count = 0;

    for(int i = 1; i <= 100; i++)
    {
        if(i % 5 == 0)
        {
            count++;
        }
    }

    printf("Count = %d\n", count);

    return 0;
}
// Day 9 — The while Loop
// 1. Print numbers from 1 to N using a while loop
#include <stdio.h>

int main()
{
    int n;
    int i = 1;

    printf("Enter N: ");
    scanf("%d", &n);

    while(i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

// 2. Find the sum of digits of a number
// Example: 123 → 1 + 2 + 3 = 6
#include <stdio.h>

int main()
{
    int n;
    int digit;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

// 3. Reverse a number
// Example: 123 → 321
#include <stdio.h>

int main()
{
    int n;
    int digit;
    int reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    printf("Reverse = %d\n", reverse);

    return 0;
}

// 4. Count the number of digits in a number
#include <stdio.h>

int main()
{
    int n;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        n = n / 10;
        count++;
    }

    printf("Number of digits = %d\n", count);

    return 0;
}

// 5. Keep asking the user for a number until they enter 0
#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);

    } while(n != 0);

    printf("You entered 0. Program ended.\n");

    return 0;
}

// Day 10 — Nested Loops and Simple Patterns
// 1. Print a square pattern of stars
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

// Output:
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// 2. Print a triangle pattern of stars
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

// Output:
// *
// * *
// * * *
// * * * *
// * * * * *

// 3. Print a triangle pattern of numbers
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}

// Output:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// 4. Print all prime numbers between 1 and 50
#include <stdio.h>

int main()
{
    int i, j;
    int isPrime;

    for(i = 2; i <= 50; i++)
    {
        isPrime = 1;

        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

// Output:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47

// 5. Print a multiplication table from 1 to 5 as a grid
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 10; j++)
        {
            printf("%d\t", i * j);
        }

        printf("\n");
    }

    return 0;
}

// Output:
// 1   2   3   4   5   6   7   8   9   10
// 2   4   6   8   10  12  14  16  18  20
// 3   6   9   12  15  18  21  24  27  30
// 4   8   12  16  20  24  28  32  36  40
// 5   10  15  20  25  30  35  40  45  50