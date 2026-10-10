#include <iostream>
using namespace std;

void recursion() {
    cout <<"halo." << endl;
    recursion();
}
int main() {
    recursion();
   
    return 0;
}
