//
//  main.cpp
//  Grade
//
//  Created by Razvan Dumitrescu on 16/08/19.
//  Copyright © 2019 Razvan Dumitrescu. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int a;
    
    cout << "Please insert a number (0-100)\n";
    cin >> a;
   
    while (a > 100 ) {
    cout << "Please insert a number (0-100)\n";
        cin >> a;
    }
    
    if (a >= 0 && a <= 59){
        cout << "You\'ve got an F.\n";
    }else if (a >= 60 && a <= 69){
        cout << "You\'ve got an D.\n";
    } else if (a>=70 && a<=79){
        cout << "You\'ve got a C.\n";
    }else if (a>=80 && a<=89){
        cout << "You\'ve got an B.\n";
    } else if (a>=90 && a<=100){
        cout << "Congrats! You\'ve got an A.\n";
    }

    
        return 0;
}
