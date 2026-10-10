#include <iostream>
using namespace std;

void calculatesqure(int number) {
    number *= number;
}
int main (){
    int num = 5;
    calculatesqure (num) ;
    cout << "hasil kuadarat dari " << num << " adalah " << num << endl;

    return 0;
}
