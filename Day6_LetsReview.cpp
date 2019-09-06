#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string input;
    int ss;


    cin >> ss;

    for(int i = 0; i < ss; i++){
        cin >> input;
        vector<char> arr1, arr2;

        for(int i = 0; i < input.size(); i++){
            if(i%2)
                arr1.push_back(input[i]);
            else
                arr2.push_back(input[i]);
        }
        for(int i = 0; i < arr2.size(); i++){
            cout << arr2[i];
        }
        cout << " ";
        for(int i = 0; i < arr1.size(); i++){
            cout << arr1[i];
        }
        cout << endl;
    }
    return 0;
}
