#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    freopen("rand01.txt", "w", stdout);

    for(int i = 0; i < 100000; i++){
        cout << rand() % 2;
    }

    return 0;
}