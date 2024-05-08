#include<stdio.h>
#include<stdlib.h>

void linear_search(int a[],int n,int key){

    for(int i=0;i<n;i++){
        if(a[i]==key){
            printf("Key found at index %d using linear search\n",i);
            return;
        }
    }

    printf("Key not found\n");
}


void binary_search(int a[],int n,int key){

    int high=n-1,low=0,mid;

    while(low<=high){
        mid=(high+low)/2;

        if(a[mid]==key){
            printf("Key found at %d using binary search\n",mid);
            return;
        }

        else if(a[mid]>key)
            high=mid-1;
        else
            low=mid+1;
    }

    printf("Key not found");
}


void main(){
    int n,a[10],key;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter the elements of array in sorted order:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter key to find:");
    scanf("%d",&key);

    linear_search(a,n,key);
    binary_search(a,n,key);

}
