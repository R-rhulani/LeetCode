#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
      public:
      int maximumDifference;
    int difference = 0, count = 0;
    
    Difference(vector<int>arr)
    {
        elements = arr;
        computeDifference();
    }
    
    int computeDifference()
    {
        for(int i=0; i<elements.size(); i++)
        {
            count = 0;
             while(count<elements.size())
             {
                 difference=elements[count]-elements[i];
                if(difference < 0)
                {
                    difference*=-1;
                }
                if(difference>maximumDifference)
                {
                maximumDifference = difference;
                }
                count++;
            }
        }
        return maximumDifference;
    }
    // Add your code here

}; // End of Difference class

int main()
{
    vector<int> array = {8, 19, 3, 2, 7};
    Difference num(array);
    cout<<num.maximumDifference<<endl;
    return 0;
}
