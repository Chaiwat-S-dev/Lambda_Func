#include <iostream>

using namespace std;

bool is_palin(int x){
    if([](int x) -> bool {return (x >= 0 && x < 10);}(x))
      return true;
    else return false;
}

int main(){
    int x = 0;
    cout << "PLS enter number for check one digi : ";
    cin >> x;
    if(is_palin(x))
        cout << "x is one digi" << endl;
    else
        cout << "x is not one digi" << endl;
    cout << "Enter somthing for exit : ";
    cin >> x;
    return 0;
}