//
//  main.cpp
//  Find Most number of consecutive ones
//
//  Created by Rhulani Hlungwani on 2021/07/01.
//

#include <iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int curr=0, max =0, size=nums.size();
    
    for(int i = 0; i<size; i++)
{
    if(nums[i]==1)
    {
        curr++;
        if(max < curr)
           {
              max = curr;

           }
    }
    else
    {
        
        curr = 0;
    }



}
    return max;
    
}
;


int main(){
    
    vector<int> arr ={1,1,0,1,1,1};
    
    cout<<findMaxConsecutiveOnes(arr)<<endl;
    
    
    return 0;
}
