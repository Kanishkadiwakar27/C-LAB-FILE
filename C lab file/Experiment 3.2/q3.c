#include <stdio.h>
int main() {
    int i; 
    int j; 
    int num = 1;
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}