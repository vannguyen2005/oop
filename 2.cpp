#include <stdio.h>
int main()
{
    int n, m;
    printf("Nhap chieu rong: ");
    scanf("%d", &n);
    printf("Nhap chieu dai: ");
    scanf("%d", &m);
     
    int i, j;
    for(i = 0; i<n; i++){
        for(j = 0; j<m; j++){
            printf("* ");   
        }
        printf("\n");
    }
}