//
//  main.cpp
//  C++ Thing 3.5 - More Loops
//
//  Created by William Holt on 9/11/13.
//  Copyright (c) 2013 William Holt. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[])
{
    int tblsize;

    cout << "How big do you want your table to be? ";
    cin >> tblsize;

    for (int i = 0; i<=tblsize; i++){
        for (int j = 0; j<=tblsize; j++){
            cout << setw(3) << i*j;
        }
        cout << endl;
    }


    return 0;
}
