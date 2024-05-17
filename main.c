#include <stdio.h>
int main()
{
   int num1 ,num2,result,result1,result2,result3;
   printf("Enter the numbers:  " " ");
   scanf("%d %d",&num1,&num2);
   result = num1 - num2;
   result1 = num1 * num2;
   result2 = num1 / num2;
   result3 = num1 % num2;

   printf("Sub of %d and %d is %d\n",num1 ,num2,result);
   printf("product of %d and %d is %d\n",num1 ,num2,result1);
   printf("ratio of %d and %d is %d\n",num1 ,num2,result2);
   printf("power of the number %d and %d  is eqaual to the %d",num1,num2,result3);
    return 0;
}
