//
// Created by marcin on 17.08.2020.
//

#include "Deck.h"
#include <iostream>
#include <random> // for std::mt19937
#include <ctime> // for std::time

int A = 1;
int K = 10;
int Q = 10;
int J = 10;
std::vector<int>deck;

void init_deck()
{
    deck = { A,2,3,4,5,6,7,8,9,10,J,Q,K,
             A,2,3,4,5,6,7,8,9,10,J,Q,K,
             A,2,3,4,5,6,7,8,9,10,J,Q,K,
             A,2,3,4,5,6,7,8,9,10,J,Q,K };
}

void shuffler()
{

}

void print_deck()
{
    std::cout << "deck:" << std::endl;
    int t{0};
    for (auto item : deck)
    {
        std::cout << item << " ,";
        t++;
        if (t % 13 == 0) std::cout << std::endl;
    }
}

int getCard()
{
    int card = deck.front();
    deck.erase(deck.begin());
    return card;
}

bool is_deck_empty()
{
    return deck.empty();
}