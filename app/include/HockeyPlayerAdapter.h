#pragma once

#include "Sportman.h"

class SoccerPlayer;

class HockeyPlayerAdapter
    : public Sportman
{
  public:
    HockeyPlayerAdapter(SoccerPlayer *soccerPlayer);
    void score() override;

  private:
    SoccerPlayer *soccerPlayer;
};