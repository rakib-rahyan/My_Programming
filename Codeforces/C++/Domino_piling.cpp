#include <iostream>
using namespace std;

int main(){
    int M, N;
    cin >> M >> N;

    if(1<=M && M<=N && N<=16){
        int x = M*N;
        cout << x/2 << endl;
    }
    return 0;

}
