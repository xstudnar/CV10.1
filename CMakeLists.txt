cmake_minimum_required(VERSION 3.20)
project(OPCV10)

set(CMAKE_CXX_STANDARD 14)

add_executable(OPCV10 main.cpp Forest.cpp Forest.h ForestState.cpp ForestState.h Item.cpp Item.h Npc.cpp Npc.h ForestStatePast.cpp ForestStatePast.h ForestStatePresent.cpp ForestStatePresent.h ForestStateFuture.cpp ForestStateFuture.h EnumTime.h)
