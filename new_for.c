#include <stdio.h>

int sum(){
        int sum=0;
        for(int i=1; i<=10; i++){
        sum += i;
        printf("%d\n",i);
        }
        return sum;    
}



int main(){
        printf("%d\n",sum());
        return 0;
}  
