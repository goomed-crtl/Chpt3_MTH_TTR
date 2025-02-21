// Chpt3_MTH_TTR.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
using namespace std;
int GetRandNum1();
int GetRandNum2();
int AddBothNums(int num1, int num2);


int main()
{
    srand(time(NULL)); 
    int num1 = GetRandNum1();
    int num2 = GetRandNum2();
    int result = AddBothNums(num1, num2);
    
    cout << "What is " << num1 << " plus " << num2 << " ?\n";
    system("pause"); // I had to look this one up. Originally i was just going to use cin to assign a value to nothing. 
    //Essentially does the same thing, but isntead of waiting for 'enter' it's any key, and you dont assign a random value. 
    cout << "It's " << result; 
}

int GetRandNum1()
{
    int num1 = rand() % 100;
    return num1;
}

int GetRandNum2()
{
    int num2 = rand() % 100;
    return num2;
}

int AddBothNums(int num1, int num2)
{
    int total = num1 + num2;
    return total;
}
