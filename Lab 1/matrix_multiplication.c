#include<stdio.h>

void display(int a[][10],int m,int n){

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}

void read(int a[][10],int m,int n){

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void main(){
    int a[10][10],b[10][10],c[10][10];
    int m,n,p,q;

    printf("Enter matrix A rows and columns:");
    scanf("%d%d",&m,&n);

    printf("Enter matrix B rows and columns:");
    scanf("%d%d",&p,&q);


    if(n==p){
        printf("Enter matrix A elements:");

        read(a,m,n);

        printf("Enter matrix B elements:");

        read(b,p,q);

        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                c[i][j]=0;
                for(int k=0;k<n;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }

        printf("Matrix A:\n");
        display(a,m,n);
        printf("\nMatrix B:\n");
        display(b,p,q);
        printf("\nMatrix C:\n");
        display(c,m,q);

    }


}
