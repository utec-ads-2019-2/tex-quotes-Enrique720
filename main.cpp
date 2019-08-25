#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <stdio.h>
using namespace std;

int main() {
    int valid = 0;
    char letras[1000];
    while(gets(letras)){
        for(int i = 0; letras[i]; i++) {
            if(letras[i]=='"') {
                if (valid == 0 ) {
                    cout << "``";
                    valid++;
                } else if (valid == 1) {
                    cout << "''";
                    valid =0;
                }
            }
            else{
                cout << letras[i];
            }

        }
        puts("");
    }
}
