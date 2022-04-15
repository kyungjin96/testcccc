#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *a,b;
    char s[10];

    printf("%ld\n", sizeof(a));
    printf("%ld\n", sizeof(b));
    printf("%ld\n", sizeof(s));
    printf("%ld\n", sizeof(s[0]));

    s[0] = 'h';
    s[1] = 'e';
    s[2] = 'l';
    s[3] = 'l';
    s[4] = 'o';
    s[5] = '\0';

    printf("%s\n", s);
    printf("%c %c %c\n",s[5],s[3],s[1]);

    a = (char *) malloc(10);
    a[0] = 'h';
    a[1] = 'i';
    a[2] = '\0';

    strcpy(a,"hoho");
    printf("%s\n",a);
    free(a);
    return 0;


}
