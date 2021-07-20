//
//  main.cpp
//  Almost increasing 2
//
//  Created by Rhulani Hlungwani on 2021/07/08.
//

#include <iostream>
#include <vector>
using namespace std;

bool arrange(vector <int> unsorted)
{
    bool result;
    int count=0, size=unsorted.size() ;
    //vector<int>::iterator  itr;
   
    for(int i = 0; i<size-1; i++)
    {
        
    if(unsorted[i] >= unsorted[i+1])
        {
            cout<<"haha "<<unsorted[i]<<" < "<<unsorted[i+1]<<endl;
/*
                    if(unsorted[i+1]>unsorted[i-1] || i == 0)
                    {
                    unsorted.erase(unsorted.begin()+ i);
                    }
                    else if(i)
                    {
                    unsorted.erase(unsorted.begin()+(i+1));
                    }
                }
            */
            
            if (unsorted[i+1] > unsorted[i-1] || i == 0)   //figure out which one is approriate to erase
                            unsorted.erase(unsorted.begin() + i);
                        else if (unsorted[i+1] <= unsorted[i-1])
                            unsorted.erase(unsorted.begin() + (i+1));
                        break;
            size--;
            count++;

        }
    }
    
    for(int j = 0; j<size-1; j++)
    {
        cout<<unsorted[j]<<" < "<<unsorted[j+1]<<endl;
        if(unsorted[j] >= unsorted[j+1])
          {
              count++;
          }
    }
    if(count>1)
    {
        result = false;
    }
    else
    {
        result = true;
    }
    cout<<count<<endl;
    return result;
}


int main()
{
    vector<int> arr ={1, 2, 5, 3, 5};
    
    cout<<arrange(arr)<<endl;

    
    return 0;
}
