#include <stdio.h>
void createArray(int a[][20],int m,int n);
int main(){
    int M,N;
    int arr[20][20];
    scanf("%d %d",&M,&N);
    if (M<=2 || N<=2 || M>=20 || N>=20) {
        printf("Invalid size\n");
        return 0;
    }
    createArray(arr,M,N);
    for(int i =0; i<M; i++) {
        for(int j =0; j<N; j++) {
            printf("%4d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void createArray(int a[][20],int m,int n) {
    int num = 100;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            a[i][j] = num;
            num++;   
        }
    }
}