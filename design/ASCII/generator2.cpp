#include <iostream>
using namespace std;

int main(){
    freopen("source1.txt", "r", stdin);
    freopen("result1.txt", "w", stdout);

    string dec, oct, hex, bin, symbol, html, description;

    for(int i = 0; i < 128; i++){

        printf("%-5s& %-10s& %-20s\t", dec.c_str(), symbol.c_str(), description.c_str());

        if ( i % 2 == 1 ){
            cout << "\\\\\n\\hline\n";
        }else{
            cout << "& ";
        }

    }
    return 0;
}