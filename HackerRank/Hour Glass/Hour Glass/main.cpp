//
//  main.cpp
//  Hour Glass
//
//  Created by Rhulani Hlungwani on 2021/07/13.
//

#include <iostream>
#include <vector>
using namespace std;

void calcHourGlass(vector< vector<int> > arr){
    int curr = 0, max = INT_MIN;
for(auto i=0; i<arr.size()-2; i++)
    {
        for(auto j=0; j<arr[0].size()-2; j++)
        {
            curr+=arr[i][j]+arr[i][j+1]+arr[i][j+2];
            curr+=arr[i+1][j+1];
            curr+=arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
        
        if(curr>max)
        {
            max = curr;
        }
        
        curr = 0;
        }
    }
cout<<max<<endl;
}
int main()
{
    vector<vector<int>> matrix={
        {-1, -1, 0, -9, -2, -2},
        {-2, -1, -6, -8, -2, -5},
        {-1, -1, -1, -2, -3, -4},
        {-1, -9, -2, -4, -4, -5},
        {-7, -3, -3, -2, -9, -9},
        {-1, -3, -1, -2, -4, -5}
    
    };
    
    calcHourGlass(matrix);
    
    return 0;
}
