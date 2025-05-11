#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    int p =0;
     for (size_t i = 0; i < a.length(); i++) {
        char c1 = tolower(a[i]);
        char c2 = tolower(b[i]);

        if(c1 == c2){
            p = 0;
        }
        else if(c1<c2){
            p = -1;
            break;
        }
        else{
            p = 1;
            break;
        }
    }
    cout << p <<endl;
    return 0;
}
