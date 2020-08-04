// Gaming Console.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Robot.h"
#include "RobotBehaviour.h"
#include "AgressiveBehaviour.h"
#include "DefensiveBehaviour.h"

int main()
{
    std::cout << "Hello World!\n";

    Robot objRobot;
    objRobot.setRobotBehaviour(new DefensiveBehaviour());
    objRobot.movement();
}

