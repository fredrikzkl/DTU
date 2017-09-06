//
//  main.cpp
//  Week1
//
//  Created by Fredrik Kloster on 04.09.2017.
//  Copyright © 2017 Fredrik Kloster. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    double x,y,z;
    
    
    cin>>x;
    cin>>y;
    cin>>z;
    
    double answer = x + y;
    answer = answer - z;
    
    cout<<answer;
    
    return 0;
}

namespace ex3{
    int main(int argc, char * argv[])
    {
        int firstNumber;
        int secondNumber;
        
        cin >> firstNumber;
        cin >> secondNumber;
        
        if(firstNumber < secondNumber){
            cout << firstNumber << " is smaller than " << secondNumber << "\n";
        }else if(firstNumber > secondNumber){
            cout << firstNumber << " is bigger than " << secondNumber << "\n";
        }else{
            cout << firstNumber << " is equal to " << secondNumber << "\n";
        }
        
        return 0;

    }
}





