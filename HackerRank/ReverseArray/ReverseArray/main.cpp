#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() {
    int n=0, val, result = -1;
    string curr, key;
    map <string, int>phoneBook;
    cin>>n;

    for(int i=0; i<n; i++)
    {
      cin>>key>>val;
      phoneBook.insert(pair<string,int>(key,val));
    }
    map<string, int>::iterator it;
   /* while(n>0)
    {
        cin>>curr;
        for(it = phoneBook.begin(); it!=phoneBook.end(); it++)
        {
            if(it -> first == curr)
            {
                result = it -> second;
            }

        }
        if(result != - 1)
        {
            cout<<curr <<"="<< result <<endl;
        }
        else
        {
            cout<< "Not found" <<endl;
        }
        result = -1;
        n--;

    }
    */
    while(cin>>curr)
    {
        if (phoneBook.find(curr) != phoneBook.end()) {
            cout << curr << "=" << phoneBook.find(curr)->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
