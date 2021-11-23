#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y, z;
    int sum_x = 0, sum_y = 0, sum_z = 0;
    cin>> n;

    while(n--){
        cin>> x >> y >> z;

        sum_x += x;
        sum_y += y;
        sum_z += z;
    }
    if(sum_x == 0 && sum_y == 0 && sum_z == 0){
        cout<< "YES";
    }else{
        cout<< "NO";
    }
return 0;
}