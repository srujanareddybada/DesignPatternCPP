#pragma once
#include "RobotBehaviour.h"
class DefensiveBehaviour :
    public RobotBehaviour
{
public:
    DefensiveBehaviour() = default;
    virtual ~DefensiveBehaviour() = default;
    void RoboMovement();
};

