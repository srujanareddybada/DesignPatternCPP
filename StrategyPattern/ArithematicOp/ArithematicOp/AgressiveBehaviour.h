#pragma once
#include "RobotBehaviour.h"
class AgressiveBehaviour :
    public RobotBehaviour
{
public:
    AgressiveBehaviour() = default;
    virtual ~AgressiveBehaviour() = default;
    void RoboMovement();
};

