#include <iostream>
using namespace std;
int main (){
    int X=0;
    int N=0;
    int num=0;
    int num_u=0;
    int num_max=0;
    int num_min=0;
    cout << "Inserisci il numero che vuoi sia confrontato (X): ";
    cin >> X;
    cout << "Inserisci quanti numeri vuoi confrontare con X: ";
    cin >> N;
    cout << "Inserisci i numeri: "<< endl;
    for (int i=0;i<N;i++) {
        cin >> num;
        if (num>=X) {
            if (num==X) {
                num_u=num_u+1;
            }
            else {
                num_max=num_max+1;
            }
        }
        else {
            num_min=num_min+1;
        }
    }
    cout << "La quantita di numeri uguali a X e': "<<num_u<<endl<<"La quantita di numeri maggiori di X e': "<<num_max<<endl<<"La quantita di numeri minori di X e': "<<num_min<<endl;
    return 0;
}
