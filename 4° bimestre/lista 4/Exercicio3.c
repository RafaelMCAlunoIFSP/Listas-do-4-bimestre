#include <stdio.h>

int main(){
    int A[2][3] = {6,7,8,9,10};
    int B[2][3] = {5,4,3,2,1};
    int C[2][3];
    
    printf("Os elementos de A são:\n");
    for(int i=0; i<2; ++i){
        for(int c=0; c<3; ++c){
            if(i == 1 && c == 2){
                break;
            }
            else{
                printf("%i, ", A[i][c]);
            }
        }
        printf("\n");
    }
    
    printf("Os elementos de B são:\n");
    for(int i=0; i<2; ++i){
        for(int c=0; c<3; ++c){
            if(i == 1 && c == 2){
                break;
            }
            else{
                printf("%i, ", B[i][c]);
            }
        }
        printf("\n");
    }
    
    for(int i=0; i<2; ++i){
        for(int c=0; c<3; ++c){
            if(i == 1 && c == 2){
                break;
            }
            else{
                C[i][c] = A[i][c] - B[i][c];
            }
        }
    }
    
    printf("Os elementos de C são:\n");
    for(int i=0; i<2; ++i){
        for(int c=0; c<3; ++c){
            if(i == 1 && c == 2){
                break;
            }
            else{
                printf("%i, ", C[i][c]);
            }
        }
        printf("\n");
    }

    return 0;
}