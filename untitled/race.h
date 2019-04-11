//
// Created by tucker.murphy on 4/11/2019.
//

#ifndef UNTITLED_RACE_H
#define UNTITLED_RACE_H

#endif //UNTITLED_RACE_H
#include <iostream>
#include <cstdlib>
#include <ctime>

int rollDie()
{
    int roll;
    int min = 1; // the min number a die can roll is 1
    int max = 100;// this->dieSize; // the max value is the die size

    roll = rand() % (max - min + 1) + min;

    return roll;
}

int main()
{
    srand(time(0));
    for(int i=0;i<10;i++)
    {
        std::cout << rollDie<< std::endl;
    }
}