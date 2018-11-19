#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream readFile("duomenys.txt");
ofstream writeFile("rezultatas.txt");

void setupArray();
void printArray();

int seka[50][50];

int n;
int k;
int newNumber;
int z;

int main(){

setupArray();
printArray();

return 0;
}

void setupArray(){
    readFile >> n;
    readFile >> k;
    for(int i = 0; i < n; i++){
        for(int x = 0; x < k; x++){
            readFile >> seka[i][x];
        }
    }
}



void printArray(){
    for(int i = 0; i < n; i++){
        for(int x = 0; x < k; x++){
            if(x == 0){
                newNumber = (seka[i][x] + seka[i][x+1]) / 2;
                cout << newNumber << " ";

            }else if(x == k-1){
                newNumber = (seka[i][x] + seka[i][x-1]) / 2;
                cout << newNumber << " ";

            }else {
                newNumber = (seka[i][x] + seka[i][x-1] + seka[i][x+1]) / 3;
                cout << newNumber << " ";

            }
        }
        cout << endl;
    }
}
