#include<stdio.h>
int main()
{
int a;
switch(a)
{
case 1: printf("food items:pizza\n price:Rs.239");
        break;
case 2: printf("food items:burger\n price:Rs.129");
        break;
case 3: printf("food items:pasta\n price:Rs.179");
        break;
case 4: printf("food items:french fries\n price:Rs.99");
        break;
case 5: printf("food items:sandwich\n price:Rs.149");
        break;
default: printf("invalid");
}
return 0;
}
