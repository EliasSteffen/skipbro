//
// Created by E. Steffen on 01.10.23.
//

#ifndef SKIPBRO_CONTROLLER_H
#define SKIPBRO_CONTROLLER_H

#include <list>
#include "Card.h"

using namespace std;

class Controller {
private:
    list<Card> playcards;
    void add_cards(Color color) {
        for (int i = 1; i < 13; ++i) {
            playcards.push_back(Card(1, color));
        }
    }
public:
    Controller() {
        add_cards(Color::Blue);
        add_cards(Color::Red);
    }
    bool shuffle() {
        if (playcards.empty()) {
            return false;
        }
        int idx_1, idx_2;
        for (int i = 0; i < 10000; i++) {
            idx_1 = rand() % playcards.size();

        }



        return true;
    }

};


#endif //SKIPBRO_CONTROLLER_H
