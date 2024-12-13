#include <stdio.h>

int main(){
    int A[3][2] = {1,2,3,4,5};
    int B[3][2];
    
    printf("Valores de A são: ");
    for(int i=0; i<3; ++i){
        for(int c=0; c<2; ++c){
            if(i == 2 && c == 1){
                break;
            }
            else{
                printf("\n%i", A[i][c]);
            }
        }
    }

    for(int i=0; i<3; ++i){
        for(int c=0; c<2; ++c){
            B[i][c] = A[i][c] * 3;
        }
    }
    
    printf("\nValores de B são: ");
    for(int i=0; i<3; ++i){
        for(int c=0; c<2; ++c){
            if(i == 2 && c == 1){
                break;
            }
            else{
                printf("\n%i", B[i][c]);
            }
        }
    }
    
    return 0;
}