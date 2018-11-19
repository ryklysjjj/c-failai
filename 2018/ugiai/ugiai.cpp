#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void setup();
void average();
void averageGirls();
void averageGuys();
void teams();

ifstream readFile("duomenys.txt");
ofstream writeFile("rezultatas.txt");

int students[30];
int n;
double averages = 0;
double averageGirlsHeight = 0;
double girls = 0;
double guys = 0;
int a = 0;
int b = 0;
int c;




int main()
{


setup();
average();
averageGirls();
averageGuys();
teams();

}

void setup(){
    readFile >> n;
    for(int i = 0; i<n; i++){
        readFile >> students[i];
    }
}

void average(){
    readFile >> n;
    for(int i = 0; i < n; i++){
        if(students[i] < 0){
            guys = guys + students[i] * -1;
            a = a + 1;
        }else {
            b = b + 1;
            girls = girls + students[i];
        }
    }
        c = a + b;
        averages = (guys + girls) / c;
        writeFile << fixed << setprecision(1) << averages << endl;
}

void averageGirls(){
    girls = girls / b;
    writeFile << fixed << setprecision(2) << girls << endl;
}

void averageGuys(){
    guys = guys / a;
    writeFile << fixed << setprecision(2) << guys << endl;
}

void teams(){
    if (girls >= 175 && b >= 7){
        writeFile << "Merginø komanda sudaryti galima" << endl;
    }else{
        writeFile << "Merginø komandos sudaryti negalima" << endl;
    }
    if (guys >= 175 && a >= 7){
        writeFile << "Vaikinø komanda sudaryti galima" << endl;
    }else{
        writeFile << "Vaikinø komandos sudaryti negalima" << endl;
    }
}


void closeFiles(){
    readFile.close();
    writeFile.close();
}
