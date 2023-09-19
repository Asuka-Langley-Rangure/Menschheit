#include<stdio.h>
int main(){
    int N;
    printf("请输入数字：");
    scanf("%d",&N);
    if (N>=1 && N<=50){
    	int n,i,j,num=1;
        int a[10][10]={0};
    	if(N%2!=0){
        a[N/2][N/2]=N*N;
        for(n=0;n<N;n++){
            for(j=n;j<N-n-1;j++){
            a[n][j]=num++;
            }
            for(i=n;i<=N-n-1;i++){
                a[i][N-n-1]=num++;
            }
            for(j=N-n-1;j>=n+1;j--){
                a[N-n-1][j]=num++;
            }
            for(i=N-n-1;i>=n+1;i--){
                a[i][n]=num++;
            }
        }
        }
        else {
            for(n=0;n<N;n++){
                for(j=n;j<N-n-1;j++){
            a[n][j]=num++;
            }
            for(i=n;i<=N-n-1;i++){
                a[i][N-n-1]=num++;
            }
            for(j=N-n-1;j>=n+1;j--){
                a[N-n-1][j]=num++;
            }
            for(i=N-n-1;i>=n+1;i--){
                a[i][n]=num++;
            }
            }
        }
        for(i=0;i<N;i++){
            for(j=0;j<N;j++)
            printf("%5d",a[i][j]);
            puts("\n");
        }
    }
    else {
        printf("error");
    }
}