#include "HockeyPlayerAdapter.h"

HockeyPlayerAdapter::HockeyPlayerAdapter(SoccerPlayer *soccerPlayer)
    : soccerPlayer(soccerPlayer)
{
}

void HockeyPlayerAdapter::score()
{
    soccerPlayer->scoreGoal();
}
