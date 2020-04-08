#include <iostream>

using namespace std;

int absoluteValue(int *userInput)
{
    int abs = *userInput;
 
    if(*userInput < 0) //If the input is less than 0
    { 
        cout <<"The absolute value of" << *userInput <<"is: ";
        abs = *userInput*-1; // we are going to multiply it by -1 to get the absolute value of it
        
    }
    else
    {
        cout << "Your integer is already in absolute value: ";
    }

    return abs;
}

int main()
{
    int input; // Creating the variable they will enter
    int *userInput = new int;
    
    cout <<"Enter an integer: ";
    cin>> input;    // enters in variable
    //input = *inputptr; //Takes value and sets it to a pointer
    userInput = &input;
    cout << absoluteValue(userInput); // Goes to the absoluteValue funtion
}
