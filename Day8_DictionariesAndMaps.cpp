#include <cmath>
#include <map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    map<string, int> telBook;
    long long input_size, input_i;
    string input_s1, input_s2;

    cin >> input_size;

    while(input_size--){
        cin >> input_s1 >> input_i;

        telBook.insert({input_s1, input_i});
    }

    while(cin >> input_s2){

        if(!(telBook.find(input_s2) == telBook.end())){
            cout << input_s2 << "=" << telBook.find(input_s2)->second << endl;
        }
        else{
            cout << "Not found" << endl;
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
