#include <iostream>
#include <cstring>
using namespace std;

int isLetter(char c);

#ifndef UNIT_TEST
int main()
{
    int i = 0;
    char str[80];
    
    strcpy(str, "C++ 2026 is a programming language!");
    cout << "original: " << str << endl;

    for(int i = 0; i < strlen(str); i++){
        if(isLetter(str[i]) == 0) {
     
            for(int j = i; j < strlen(str); j++){
                str[j] = str[j + 1];
            } 

            i--;
        }
    }

    cout << "result: "<< str << endl;
    return 0;
}
#endif

int isLetter(char c){
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
        return 1;
    }
    return 0;
}