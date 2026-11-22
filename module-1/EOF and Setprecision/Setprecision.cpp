#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double d = 23.2345667;
    cout << fixed << setprecision(9) << d ;
    return 0;
}