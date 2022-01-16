//
// Created by Martin Studňař on 16.01.2022.
//

#include "ForestStateFuture.h"

std::string ForestStateFuture::getDescription() {
    return "Nacházíš se v lese v budoucnosti";
}

std::vector<Item *> ForestStateFuture::getItems() {
    return std::vector<Item *>{
        new Item("asi havarovala", "Vesmírná loď"),
        new Item("Jezis to smrdí", "Silně rozložená kočka")
    };
}

std::vector<Npc *> ForestStateFuture::getNpcs() {
    return std::vector<Npc *>{
        new Npc("(<>#$~^^&", "Mimozemšťan")
    };
}

std::vector<std::string> ForestStateFuture::getPossibilities() {
    return std::vector<std::string>{
        "Prozkoumej les",
        "Prohledej loď",
        "Pozdrav mimozrmšťana",
        "Pichni klackem do kočky"
    };
}
