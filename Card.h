//
// Created by E. Steffen on 01.10.23.
//

#ifndef SKIPBRO_KARTE_H
#define SKIPBRO_KARTE_H

enum Color{
    Blue,
    Red,
    Green,
    Purple
};

class Card {
private:
    int value;
    Color color;
public:
    Card(const int pValue, const Color pColor) {
        if (0 > value || value > 12) {
            return;
        }
        this->value = pValue;
        this->color = pColor;
    }
    int get_value() {
        return value;
    }
    Color get_color() {
        return color;
    }
};


#endif //SKIPBRO_KARTE_H
