//
//  main.cpp
//  Haunted
//
//  Created by Rhulani Hlungwani on 2021/07/09.
//

#include <iostream>
#include <vector>
using namespace std;

int matrixElementsSum(vector<vector<int>> matrix) {
    int haunted=0, usable = 0, sizeRow = matrix.size(), sizeCol = matrix[0].size();
    
    for (int k=0; k<sizeCol; k++)
    {
            for (int l=0; l<sizeRow; l++)
             {
                 if (matrix[l][k]==0)
                 {
                     break;
                 }
                 usable+=matrix[l][k];
             }
    }
    for (int l=0; l<sizeRow; l++)
    {
            for (int k=0; k<sizeCol; k++)
             {
                 cout<<matrix[l][k]<<", ";
             }
        cout<<endl;
    }
    cout<<usable<<" are usable "<<endl;
return usable;
}

int main(){
    
    vector< vector<int> > arr = {
        {0,1,1,2},
        {0,5,0,0},
        {2,0,3,3}
        
    };
    
    matrixElementsSum(arr);

    return 0;
}
