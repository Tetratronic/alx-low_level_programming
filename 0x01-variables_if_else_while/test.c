#include <stdio.h>

int main(){
    int start=1;
    int i,j;

    for(i=0;i<100;i++){
        for(j=i+1;j<100;j++){
           
             if(start==0){
                 putchar(',');
                 putchar(' ');
             }
            
            putchar( '0'+(int) (i/10));
            putchar( '0'+ i%10 );
            putchar( '0' + (int) (j/10));
            putchar( '0'+ j%10 );

            if(start){ 
                start=0;
       
        }
	}
    }

	return (0);
}
