#include "Match.h"
#include "HockeyPlayer.h"
#include "SoccerPlayer.h"
#include "HockeyPlayerAdapter.h"

int main()
{
    HockeyPlayer *myHockeyPlayer = new HockeyPlayer;
    SoccerPlayer *mySoccerPlayer = new SoccerPlayer;
    HockeyPlayerAdapter *myHockeyPlayerAdapter = new HockeyPlayerAdapter(mySoccerPlayer);

    Match myMatch;
    myMatch.GoOn(myHockeyPlayer);
    myMatch.GoOn(myHockeyPlayerAdapter);
    // myMatch.GoOn(mySoccerPlayer);

    return 0;
}