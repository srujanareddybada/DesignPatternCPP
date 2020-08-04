#include "Robot.h"
#include "AgressiveBehaviour.h"
#include "DefensiveBehaviour.h"

Robot::Robot():
	ptrRoboBehaviour(nullptr)
{
}

Robot::~Robot()
{
}

void Robot::setRobotBehaviour(RobotBehaviour* ptrRoboBehave)
{
	ptrRoboBehaviour = ptrRoboBehave;
}

void Robot::movement()
{
	ptrRoboBehaviour->RoboMovement();
}
