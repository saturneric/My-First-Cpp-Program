//
//  main.cpp
//  My first cpp program
//
//  Created by Eric on 16-2-11.
//  Copyright (c) 2016年 Bakantu Eric. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("data.in");
ofstream fout ("data.out");

int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b;
    fin >> a;
    b = a+1;
    fout << b << endl;
    return 0;
}
