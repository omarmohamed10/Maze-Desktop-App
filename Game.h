#ifndef GAME_H
#define GAME_H
#include <bits/stdc++.h>
#include "room.h"
#include "Agent.h"
#include "Player.h"
#include "Monster.h"
#include "object.h"
#include "props.h"
#include "treasure.h"
#include "fixed_props.h"
#include <windows.h>
#include <stdio.h>
#include <assert.h>
#include <iomanip>
#include "intel_monster.h"

class Game
{
    public:
        Game();
        void start_the_maze();
    private:
    void welcome();



};

#endif // GAME_H
