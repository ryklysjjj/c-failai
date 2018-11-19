#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

void setup();
void ammountOfBooks();
void closeFiles();
void averageOfBooks();
void oneMonth();

ifstream readFile("duomenys.txt");
ofstream writeFile("rezultatas.txt");

int books[30];
double sum = 0;
double average = 0;
int ammount;
int n;
int a = 0;
double oneMonthAverage;


int main(){

setup();
ammountOfBooks();
averageOfBooks();
oneMonth();
closeFiles();


return 0;

}

void setup(){
    readFile >> n;
    for(int i = 0; i<n; i++){
        readFile >> books[i];
    }
}

void ammountOfBooks(){
    for(int i = 0; i < n; i++){
        a = a + 1;
        sum = sum + books[i];
    }
    writeFile << sum << endl;
}

void averageOfBooks(){
    average = sum / a;
    writeFile << average << endl;
}
void oneMonth(){
    oneMonthAverage = average / 10;
    writeFile << fixed << setprecision(1) << oneMonthAverage << endl;
}

void closeFiles(){
    readFile.close();
    writeFile.close();
}
