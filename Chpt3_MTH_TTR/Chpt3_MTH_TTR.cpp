/*
Title: Chapter 3 Exerise 17 - Math Tutor
File Name: Chpt3_MTH_TTR.cpp
Programmer: Nicholas Woolston
Date: 20/02/2024 (DD/MM/YYYY)
Requirements: Write code that generates 2 random numbers to be added together. Display the numbers to the user and put a break in the code while the user
gets the answer. Create feedback on whether the user is right or wrong; repeat the question if the user is incorrect. 
*/


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
    int answer;
    do
    {
        cout << "What is " << num1 << " plus " << num2 << " ?\n";
        cin >> answer;
        if (answer != result) 
        {
            cout << "That's incorrect! Try again!\n"<<endl;
        }
        else
        {
            cout << "Correct! Great job!";
        }
    } while (answer != result); //continues the loop so long as users answer does equal the result
}

int GetRandNum1()
{
    int num1 = rand() % 10; //generates numbers and uses modulo 10 so that they're less than 10 and easy to add.
    return num1;
}

int GetRandNum2()
{
    int num2 = rand() % 10; //generates numbers and uses modulo 10 so that they're less than 10 and easy to add.
    return num2;
}

int AddBothNums(int num1, int num2)
{
    int total = num1 + num2;
    return total;
}
