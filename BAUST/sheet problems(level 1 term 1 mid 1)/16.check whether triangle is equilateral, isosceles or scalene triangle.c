#include<stdio.h>
int main(){
   int s1,s2,s3;
   printf("Enter sides of triangle:");
   scanf("%d%d%d",&s1,&s2,&s3);
   if(s1==s2&&s2==s3)printf("The Given Triangle is equilateral\n");
   else if(s1==s2||s2==s3||s3==s1)printf("The given Triangle is isosceles\n");
   else printf("The given Triangle is scalene\n");
   return 0;
}
