// EnvFollower.cpp: implementation of the EnvFollower class.
//
//////////////////////////////////////////////////////////////////////

#include "EnvFollower.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

EnvFollower::EnvFollower()
{
    SampleRateF = 44100.f;
    SetParams(50.f,50.f);
}

EnvFollower::~EnvFollower()
{

}
