// #include<stdio.h>
// int main(){
//   int i=5;
//   int *j;
//    j=&i;
//    int **k;
//    k=&j;
//   printf("address of i=%p\n",&i);
//   printf("address of j=%p\n",&j);
//   printf("value of i=%d\n",*j);
//   printf("value of j=%p\n",*k);
//   printf("address of j=%p\n",k);
//   printf("value of k=%p\n",k);
//   printf("value of i=%d\n",**k);
//   return 0;
// }

//  #include<stdio.h>
//   int main(){
//     int a=5;
//     int *b;
//     b=&a;
//     *b=6;
//     printf("value of a is:%d",a);
//   return 0 ;
// }


//  #include<stdio.h>
//   int main(){
//     char a;
//     char *b;
//     b=&a;
//     printf("enter a character a:\n");
//     scanf("%c",&a);
//     printf("a is:%c\n",*b);
//   return 0 ;
// }

#include <stdio.h>

int main() {
  int num, i;
  long long factorial = 1; 
  
  printf("Enter a positive integer: ");
  scanf("%d", &num);

  if (num < 0) {
    printf("Error! Factorial of a negative number doesn't exist.\n");
  } else {
    for (i = 1; i <= num; ++i) {
      factorial *= i;
    }
    printf("Factorial of %d = %llu\n", num, factorial);
  }
  return 0;
}
