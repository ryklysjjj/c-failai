#include <iostream>
#include <fstream>

using namespace std;

int arrayS[50][50];

int main(){

for (int i = 0; i < 3; i++){
    cin >> arrayS[i] >> arrayS[i];
}

for (int i = 0; i < 3; i++){
    cout << arrayS[i] << endl;
}

return 0;
}
