#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "enter word count <=20 (each word must be 10 symbols long or less)" << endl;
    cin >> size;
    char strArray[20][10];
    for(int i=0;i<size;i++){
        cout << "enter " << i << "th word: " << endl;
        cin >> strArray[i];
    }
    cout << endl;
    for(int i=0;i<size;i++){
        cout << strArray[i] << endl;
    }
    return 0;
}