#include <stdio.h>
#include <math.h>
int main() {
int a,b,c;
double discriminant,root1,root2,real,imaginary;
printf("This Program calculates Roots of a Quadratic Equation\n ");
printf("Let the Equation be ax^2+bx+c\n");
printf("Input a : ");
scanf("%d",&a);
printf("Input b : ");
scanf("%d",&b);
printf("Input c : ");
scanf("%d",&c);
if(a==0)
printf("This is not a valid Quadratic equation\nRun program again and Enter a valid Quadratic
Equation");
printf("Quadratic Equation is %dx^2+%dx+%d",a,b,c);
discriminant=sqrt((b*b)-(4*a*c));
if (discriminant>=0)
{
root1 = (-b + sqrt(discriminant)) / (2 * a);
root2 = (-b - sqrt(discriminant)) / (2 * a);
printf("Roots are : %f and %f",root1,root2);
}
else (discriminant<0);
{
real = -b / (2 * a);
imaginary = sqrt(-discriminant) / (2 * a);
printf("root1 = %f+%fi and root2 = %f-%fi", real, imaginary, real, imaginary);
}

return 0;
}
