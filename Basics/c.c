#include<stdio.h>

void swap(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main(){
  int a = 3, b = 5;

  printf("After swaping :\n a = %d \n b = %d \n",a,b);

  swap(&a, &b);

  printf("Before swaping :\n a = %d \n b = %d",a,b);


  return 0;
}
