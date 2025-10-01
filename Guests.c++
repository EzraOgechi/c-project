#include<iostream>
#include <string>
using namespace std;

int main(){
    int numGuests;
    cout << "How Many Guests?";
    cin >> numGuests;
    if(numGuests <=0){
        cout << "Number of guests must be at least 1.\n";
        return 0;
    }
    string* guests=new string[numGuests];
    cin.ignore();
    for(int i=0;i<numGuests;i++){
        cout << "Enter name for guest" <<(i+1)<<":";
        getline(cin,guests[i]);
        cout << "\nGuests checked in:\n";
    }
    delete[] guests;
    return 0;
}