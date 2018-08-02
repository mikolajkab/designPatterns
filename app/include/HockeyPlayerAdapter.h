#pragma once

#include "Sportman.h"
#include "SoccerPlayer.h"

class HockeyPlayerAdapter
    : public Sportman
{
  public:
    HockeyPlayerAdapter(SoccerPlayer *soccerPlayer);
    void score() override;

  private:
    SoccerPlayer *soccerPlayer;
};