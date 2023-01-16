#include<stdio.h>
int main()
{
   float radius,area,pi,height;
   pi=3.14;
   printf("Enter rsdius of circle ; \n ");
   scanf("%f",&radius);
   area=pi*radius*radius;
   printf("Area of circle is %.2f\n",area);

   printf("Enter radius and height of cylender:\n ");
   scanf("%f%f",&radius,&height);
   area=pi*radius*radius*height;
   printf("Area of cylender is %.2f\n",area);
   return 0;
}