#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
 int i2;
 double d2;
 char s2[100];
 scanf("%d", &i2);
 scanf("%lf", &d2);
 scanf("%*[\n] %[^\n]", s2);
 printf("%d\n", i + i2);
 printf("%.01lf\n", d + d2);
 printf("%s%s", s, s2);
    return 0;}
