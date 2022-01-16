//
// Created by Martin Studňař on 16.01.2022.
//

#include <iostream>
#include "Npc.h"

Npc::Npc(std::string greeting, std::string name) {
    m_greeting=greeting;
    m_name=name;
}

void Npc::printGreeting() {
    std::cout<< "NPC " << m_name << ": " << m_greeting << std::endl;
}
