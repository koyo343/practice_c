//benngaku c 0515_prime4.c

#include <stdio.h>

int prime(int n);

int main(void){
    int i;
    for(i=0;i<100000;i++){
        printf("%6d  ",i);
        if(prime(i)){
            printf("True\n");
        }else{
            printf("False\n");
        }
    }
    return 0;
}

int prime(int n){
    int primes[]={2,3,5,7,11};
    int i;
    if(n==0||n==1){
        return 0;
    }
    for(i=0;i<sizeof(primes)/sizeof(int);i++){
        // sizeof(int)=4
        // sizeof(primes)=20
        // sizeof(primes)/sizeof(int)=5
        if(n==primes[i]){
            return 1;
        }else if(n%primes[i]==0){
            return 0;
        }
    }
    for(i=13;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}