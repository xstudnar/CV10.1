//
// Created by Martin Studňař on 16.01.2022.
//

#include "ForestStatePast.h"

std::string ForestStatePast::getDescription() {
    return "Nacházíš se v lese pár minut zpět";
}

std::vector<Item *> ForestStatePast::getItems() {
    return std::vector<Item *>{
        new Item("Nejroztomilejší kočka co jsem kdy viděl", "Kočka"),
        new Item("Hmmm, vypadá dobře", "Jablko")
    };
}

std::vector<Npc *> ForestStatePast::getNpcs() {
    return std::vector<Npc *>{
        new Npc("Čus vypěstoval jsem jablko", "Farmář")
    };
}

std::vector<std::string> ForestStatePast::getPossibilities() {
    return std::vector<std::string>{
        "Prozkoumej les",
        "Podrbej kočičku",
        "Pozdrav farmáře",
        "Sněz jablko farmáři"
    };
}
