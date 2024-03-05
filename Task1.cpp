#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char* str = "qwe rty uio",*substr1=new char[strlen(str)],*substr2 = "another string";
    bool a;
    cout << "strlen(str) = " << strlen(str) << endl;
    strcpy(substr1,str);
    cout << "substr after strcpy(substr,str) = " << substr1 << endl;
    cout << "strcmp(str,substr1) = " << strcmp(str,substr1) << "if str=substr1" << endl;
    cout << "strcmp(str,substr2) = " << strcmp(str,substr2) << "or somethings that != 0 if str != substr2";
    return 0;
}