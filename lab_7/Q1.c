/*Q1. Basic Function Calls Write a program that defines three functions:
 • void greet()– prints a welcome message.
 • int add(int a,int b)– returns the sum of two integers.
 • float circleArea(float r)– returns the area of a circle.
 Call these functions from main() with user input.
 */
 #include <stdio.h>

 void greet()
 {
    printf("Welcome to C \n");
 }

 int add(int a, int b)
 {
    return a+b;
 }

 float circleArea(float r)
 {
    return 3.1428 * r * r;
 }

 int main()
 {
    int x, y;
    float radius;

    greet();

    printf("Enter two integers :\n");
    scanf("%d %d", &x, &y);

    int sum = add(x, y);
    printf("Sum = %d", sum);

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    float area = circleArea(radius);
    printf("Area of circle = %f \n", area);
    
    return 0;
 }