/*
    Author: Sabbir Hossain
    Problem_Name: Insertion Sort
*/
#include<bits/stdc++.h>
using namespace std;

int i, value, hole;
void sort(int n,int a[]){

    for(i = 1; i < n; i++){ //n
        value = a[i];
        hole = i;

        while(hole > 0 && a[hole-1] > value){ //n
            a[hole] = a[hole-1];
            hole--;
        }
        a[hole] = value;
    }
    for(i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");  
}

int main(){

    int n;
    scanf("%d",&n);

    int a[n];
    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    sort(n,a);

    if (n % 2 == 0){
        printf("%d\n",a[(n/2)]);
    }
    else{
        printf("%d\n",a[((n+1)/2)-1]);
    }
return 0;
}