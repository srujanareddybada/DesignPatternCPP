#pragma once
class RobotBehaviour;
class Robot
{
public:
	Robot();
	~Robot();

	void setRobotBehaviour(RobotBehaviour* ptrRoboBehave);
	void movement();

private:
	RobotBehaviour* ptrRoboBehaviour;
};

