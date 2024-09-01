#include <iostream>

using namespace std;

int factorial (int n){
    int prod=1;
    if (n==0){
        return prod;
    } else {
        for(int i=n; i>0; i--){
            prod= prod*i;
        }
        return prod;
    }
}

int main (){
    int n=5;
    cout << "El factorial de " << n << " es: " << factorial(n) << endl;
}

