

#include <stdio.h>

int main(void) {

  int n; 

  printf("enter an integer:\n");  
  scanf("%d",&n);  // storing the user input in a variable
  if(n%2==0) {  // checking wether the entered number gives 0 remainder when it is divided with 2
    printf("%d is an even number!\n",n);
  }
  else{
      printf("%d is an odd number!\n",n);
   }
   
  return 0; // end of main
}