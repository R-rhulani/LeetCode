//
//  main.cpp
//  dupli
//
//  Created by Rhulani Hlungwani on 2021/07/17.
//

#include <iostream>
#include <string>
#include<vector>

using namespace std;

char nonDuplicate(string word)
{
    vector<char>arr (word.begin(), word.end());
    vector<char>test (word.begin(), word.end());
    char testItem;
    int count = 0, duplicate = 0;
    char result;
    
        for(int i=0; i<arr.size(); i++)
        {
            count=0;
            for(int j=0; j<arr.size(); j++)
            {
                if(arr[j]==arr[i])
                {
                    count++;
                }
                
            }
        
            if(count<2)
            {
                result = arr[i];
                cout<<result<<endl;
                break;
            }
        }
    cout<<count;
    return result;
    
}

int main(){
    
    string s= "amamndtsdznnsskkltlaznaoo";
    
    nonDuplicate(s);
    
    return 0;
}
