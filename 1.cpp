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
            if(i == 0 || i == n-1 || j == 0 || j == m-1){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}