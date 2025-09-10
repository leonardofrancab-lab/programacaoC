#include <stdio.h>

int main() {
    //int index;
    char horizontal[11] = {'X', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro [10][10] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    int navioh [3] = {3, 3, 3};
    int naviov [3] = {3, 3, 3};
    
    


    for(int h = 0; h <= 10; h++){
               printf("%c ", horizontal[h]);
           };
    printf("\n");
           
    for(int i = 0; i <= 9; i++){
        printf("%d ", i + 1);
        for(int j = 0; j <= 9; j++){
               printf("%d ", tabuleiro [i][j]);
           };
           printf("\n");
    };

   
    return 0;
}
