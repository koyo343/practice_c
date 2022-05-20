#include <stdio.h>

int main(void){
    double i=2,j=0,k=0;
    while(j<1000){
      printf("%lf\n",i);
      i=i*2;
      j++;
      for(k=0;k<100000000;k++);
    }
    return 0;
}
