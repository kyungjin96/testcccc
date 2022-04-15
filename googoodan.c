#nclude <stdio.h>




int googoo(){
        char a; 
        int gogo;
        for(int i=1; i<10; i++){
                for(int j=1; j<10; j++){
                        gogo = i*j;
                        a = printf("%d x %d = %d\n",i,j,gogo );
                }
        }
        return a;
        
}
int main(){
        
        printf("%s\n",googoo());

}
