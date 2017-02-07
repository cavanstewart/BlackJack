#include <string>
#include <vector>
#include <fstream>

using std::vector;
using std::string;
#ifndef CARDS_H
#define CARDS_H

enum suit_t { OROS, COPAS, ESPADAS, BASTOS };

enum rank_t { AS, DOS, TRES, CUATRO, CINCO, SEIS, SIETE, SOTA = 9, CABALLO = 10, REY = 11 };


class Card{
public:
	Card();

	//Accessors
	string get_spanish_suit() const;
	string get_spanish_rank() const;

	string get_english_suit() const;
	string get_english_rank() const;

	int get_rank() const;

	bool operator < (Card card) const;
private:
	suit_t suit;
	rank_t rank;
};

class Hand {
public:
	Hand();
private:
	vector<string> cardsInHand;
};

class Player{
public:
	Player(int m);
	int get_money();

private:
	int money;
};





#endif