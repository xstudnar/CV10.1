//
// Created by Martin Studňař on 16.01.2022.
//

#ifndef OPCV10_NPC_H
#define OPCV10_NPC_H


#include <string>

class Npc {
std::string m_greeting;
std::string m_name;
public:
    Npc(std::string greeting, std::string name);
    void printGreeting();
};


#endif //OPCV10_NPC_H
