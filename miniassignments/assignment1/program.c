#include <stdio.h>
#include <time.h>
int main(void){
 clock_t start, end;
 double time;
 start = clock();
 int x=0;
 int y=1;
 long int z;
 for (unsigned int i=0;i<100000;i++){
    z=x+y;
    x=y;
    y=z;
 }
 if(z%2==0){
     printf("fibanacci number is even");
 }
 else{
     printf("fibanacci number is odd");
 }
 end = clock();
 time = ((double) (end - start)) / CLOCKS_PER_SEC;
 printf("\n%f",time*1000000);
 return 0;
}
