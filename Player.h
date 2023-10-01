//
// Created by E. Steffen on 01.10.23.
//

#ifndef SKIPBRO_PLAYER_H
#define SKIPBRO_PLAYER_H

#include <list>
#include <stack>
#include "Card.h"

#define STACK_COUNT 4

using namespace std;

class Player {
private:
    list<Card> hand;
    stack<Card> deck;
    list<Card> stacks[STACK_COUNT];
public:
    bool set_new_deck(stack<Card> pDeck){
        this->deck = pDeck;
        return true;
    }
    Move get_move(){

    }

};


#endif //SKIPBRO_PLAYER_H
