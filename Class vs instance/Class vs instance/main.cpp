//
//  main.cpp
//  Class vs instance
//
//  Created by Rhulani Hlungwani on 2021/07/01.
//

#include <iostream>
using namespace std;

class person{
public:
     int age;
     person(int initialAge)
    {
     if(initialAge<0)
     {
         age = 0;
         cout<<"Age is not valid, setting age to 0."<<endl;
     }
    };
    
    void yearPasses()
    {
        age++;
    };
    
    void amIOld(){
        if(age<13)
        {
            cout<<"You are young"<<endl;
            
        }
        else
        {
            if(age>=13 && age<18)
            {
                cout<<"You are a teenager"<<endl;
            }
            else
            {
                cout<<"You are old"<<endl;
            }
        }
        
    }
    
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
