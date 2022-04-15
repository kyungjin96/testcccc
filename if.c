#include <stdio.h>

int abc(){
        int a;
        scanf ("%d", &a);
        return a;
}


int main(){
        if(abc()%2==0)
        printf("짝수\n");
        else
        printf("홀수\n");
        
        return 0;
        
}
