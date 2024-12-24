#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main (){
    cout << "Press Enter 3 times to reveal your future.\n";
    
    for(int i =0 ; i<3;i++){
        cin.ignore();
    }
    srand(time(0));
    string grades [] = {"A","B+","B","C+","C","D+","D","F","W"};
    string grade = grades[rand() % 9];
    cout << "You will get " << grade << " in this 261102.\n";
    return 0;
}