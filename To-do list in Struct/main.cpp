#include <iostream>
#include <vector>

using namespace std;

struct ToDolist
{
    string Title;
    string Description;
    bool isComplete;
};



int main(){

    ToDolist firstList; 
    cout << "Type Title , Description , is Complete or not" << endl;
    cin >> firstList.Title >> firstList.Description >> firstList.isComplete;

    cout << firstList.Title << " " <<firstList.Description<< " "<<firstList.isComplete;
    return 0;
}