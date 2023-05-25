#include <stdio.h>
 main(){
   int i,j;
  
     for(j=1; j<10; j++){
      printf("%d단입니다.\n", j);
       for(i=1; i<10; i++){
       printf("%d*%d = %d\n", j, i, i*j); 
     }
   }
 }