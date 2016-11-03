#include <iostream>
using namespace std;
int main (){
    int num=0;
    int N=0;
    cout << "Inserisci il numero fino al quale vuoi visualizzare i numeri pari: ";
    cin >> N;
    for (int i=0;i<N;i++) {
        num++;
        if (num%2==0) {
            cout << num<<endl;
        }
    }
    return 0;
}
