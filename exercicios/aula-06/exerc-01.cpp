#include <iostream>

using namespace std;

float grade1;
float grade2;
float grade3;
float grade4;

int main() {
    cout << "Insert first grade with weigth 2" << endl;
    cin >> grade1;
    cout << "Insert second grade with weigth 2" << endl;
    cin >> grade2;
    cout << "Insert three grade with weigth 4" << endl;
    cin >> grade3;
    cout << "Insert four grade with weigth 4" << endl;
    cin >> grade4;

    float media = (grade1*2, grade2*2, grade3*3, grade4*3) / 10;

    if(media >= 9 && media <= 10){
        cout << "Grade A";
    }
    else if(media >= 7.5 && media < 9){
        cout << "Grade B";
    }
    else if(media >= 6 && media <= 7.5){
        cout << "Grade C";
    }
    else if(media >= 4 && media < 6){
        cout << "Grade D";
    }
    else if(media < 4){
        cout << "Grade E";
    }
    else{
        cout << "ERROR! Invalid average";
    }

    return 0;
}