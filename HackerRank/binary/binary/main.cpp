//
//  main.cpp
//  binary
//
//  Created by Rhulani Hlungwani on 2021/07/12.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int max = 0, curr = 0, mod = 0, i=0, n=0;
        cin>>n;
        vector<int>arr;
        while(n>=1)
        {
            mod=n%2;
            cout<<mod<<endl;
            n/=2;
            i++;
          if(mod==1)
          {
              curr++;
            if(curr>max)
            {
                max=curr;
            }
          }
          else
          {
              curr = 0;
          }
        }

    cout<<max<<endl;

        return 0;

}
