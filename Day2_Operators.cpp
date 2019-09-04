#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    double d_final = meal_cost + meal_cost * (tip_percent + tax_percent) / 100;
    cout<< round(d_final);

/* WITHOUT USING round()
    int i_final = meal_cost + meal_cost * (tip_percent + tax_percent) / 100;;
    if(d_final-i_final >= 0.5){
        i_final += 1;
    }
        cout<< round(i_final);

*/
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
