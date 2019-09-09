#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int binary[32];
    int max = 1, count = 1, i = 0;

    while(n>0){
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    for(int j = i - 1; j > 0; j--){
        if(binary[j] == 1 && binary [j-1] == 1){
            count++;
            if(count > max){
                max = count;
            }
        }
        else{
            count = 1;
        }
    }
    cout << max;
    return 0;
}
