<<<<<<< HEAD
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned int n;
    cout << "inserisci un numero positivo, io ti diro' se e' primo." << endl;
    cin >> n;
    //n è prime sse
    // n > 1 e n è divisibile solo per n e 1
    // IDEA: proviamo a dividere n per tutti i numeri minori di lui
    // a partire da 2. Se una divisione intera ci daaa resto 0
    // allora il numero non è primo
    bool primo = true;
    for (int divisore = 2; divisore < n; divisore++){
        if (n%divisore==0)
            primo=false;
            break;
    }
    if (primo)
        cout<<"si e primo."<<endl;
    else
        cout<<"no, non e' primo."<<endl;
    return 0;
}
=======
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    unsigned int n;
    cout << "inserisci un numero positivo, io ti diro' se e' primo." << endl;
    cin >> n;
    //n è prime sse
    // n > 1 e n è divisibile solo per n e 1
    // IDEA: proviamo a dividere n per tutti i numeri minori di lui
    // a partire da 2. Se una divisione intera ci daaa resto 0
    // allora il numero non è primo
    bool primo = true;
    for (int divisore = 2; divisore < n; divisore++){
        if (n%divisore==0)
            primo=false;
            break;
    }
    if (primo)
        cout<<"si e primo."<<endl;
    else
        cout<<"no, non e' primo."<<endl;
    return 0;
}
>>>>>>> e4aadf4ce0fb87bafb57ccbd63dd232925e43679
