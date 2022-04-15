#include <stdio.h>
#include <string.h>

int main()
{
        int a ;
        int apple=2500;
        int banana=2700;
        char* pp;

        printf("apple, banana 품목을 입력하시오.\n");
        scanf("%s",pp);


        if(*pp == 'a'){
                
                printf("%s은 %d원입니다\n",pp,apple);
                scanf("%d", &a);
                printf("%d 원 받았습니다.\n",a);
                printf("거스름돈은 %d원 입니다.\n",a-apple);
                if(5000<= a-apple <10000){
                        printf("%d\n",(a-apple)/5000);
                        
                }
        }
        else if(*pp == 'b'){
                int b_b = a-banana;
                printf("%s은 %d원입니다\n",pp,banana);
                scanf("%d", &a);
                printf("%d 원 받았습니다.\n",a);
                printf("거스름돈은 %d원 입니다.\n",a-banana);
        }
        
        

                
return 0;        
}
