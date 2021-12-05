/*
    Author: Sabbir Hossain
    Problem_Name: Selection Sort
        - Runtime Complexity: O(n^2)
        - Space Complexity  : O(1)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {32, 2211, 3, 232, 44, 100, -7};
    int i, j, min_index;

    //Outer loop to iterate over all the numbers
    for(i = 0; i < 7; i++){// n
        min_index = i;
        //inner loop to find the minimum numbers
        for(j = i+1; j < 7; j++){ //n
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        //swap two numbers(i,min_index)
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    //print the sorted array
    for(i = 0; i < 7; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

return 0;
}