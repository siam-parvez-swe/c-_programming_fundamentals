#include<iostream>
using namespace std;
int main(){
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Saturday" << endl;
        break;
    case 2 :
        cout << "Sunday" << endl;
        break;
    case 3 :
        cout << "Monday" << endl;
        break;
    case 4 :
        cout << "Tuesday" << endl;
        break;
    case 5 :
        cout << "Wednesday" << endl;
        break;
    case 6 :
        cout << "Thursday" << endl;
        break;
    case 7 :
        cout << "Friday" << endl;
        break;
    default:
        cout << "Wrong Input";
    }
    int y;
    cin >> y;
    switch (y%2)
    {
    case 0:
        cout << "Even" << endl;
        break;
    
    case 1:
    cout << "Odd" << endl;
        break;
    }
    char c;
    cin >> c;
    switch (c)
    {
    case 'a' :
        cout << "Vowel";
        break;
    
    case 'e' :
        cout << "Vowel";
        break;
    
    case 'i' :
        cout << "Vowel";
        break;
    
    case 'o' :
        cout << "Vowel";
        break;
    
    case 'u' :
        cout << "Vowel";
        break;
    
    case 'A' :
        cout << "Vowel";
        break;
    
    case 'E' :
        cout << "Vowel";
        break;
    
    case 'I' :
        cout << "Vowel";
        break;
    case 'O' :
        cout << "Vowel";
        break;
    
    case 'U' :
        cout << "Vowel";
        break;
    default:
        cout << "Consonent";
    }
    return 0;
}
