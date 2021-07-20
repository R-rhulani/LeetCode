#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string printOddEven( string str)
{
    string odd, even, res;
    vector<char> arr;
    int size=str.length();
   copy(str.begin(), str.end(), back_inserter(arr));
    for(int i=0; i<size;i++)
    {
        if(i%2==0)
        {
            even+=arr[i];
        }
        else
        {
            odd+=arr[i];
        }
    }
 
    res = even+" "+odd;
   return res;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    int t = 0, size = 0;
    cin>>t;
    while(t>0)
    {
    cin>>s;
    cout<< printOddEven(s)<<endl;
    t--;
    }

    return 0;
}
