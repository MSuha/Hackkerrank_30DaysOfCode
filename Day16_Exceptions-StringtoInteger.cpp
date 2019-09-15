
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;


int main(){
    string S;
    cin >> S;

    try{
        cout << stoi(S);
    }
    catch(...){
        cout << "Bad String";
    }

    return 0;
}

