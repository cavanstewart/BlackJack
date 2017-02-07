#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "blackjack.h"

using std::cout;
using std::cin;
using std::string;

int main(){
	Player player1(100);
	int bet = 0;
	char hit= 'y';
	
	double playerTotal = 0;
	cout << "You have $" << player1.get_money() << ". Enter bet: ";
	cin >> bet;
	while (hit == 'y'){
		Card playerCard;
		cout << "Your cards:\n\t" << playerCard.get_spanish_rank() << " de " << playerCard.get_spanish_suit();
		cout << "\t\t(" << playerCard.get_english_rank() << " of " << playerCard.get_english_suit() << ")";
		int cardRank = playerCard.get_rank();
		if (cardRank < 8)
			playerTotal += cardRank;
		else
			playerTotal += .5;
		cout << "\nYour total is " << playerTotal << ". Do you want another card (y/n)?";
		cin >> hit;
	}
	
	vector<string> dealerVec;
	double dealerTotal = 0;
	while (dealerTotal < 5.5){
		Card dealerCard;
		cout << "\nDealer's cards:\n\t" << dealerCard.get_spanish_rank() + " de " + dealerCard.get_spanish_suit();
		cout << "\t\t(" << dealerCard.get_english_rank() << " of " << dealerCard.get_english_suit() << ")";
		int cardRank = dealerCard.get_rank();
		if (cardRank < 8)
			dealerTotal += cardRank;
		else
			dealerTotal += .5;
		cout << "\nThe dealer's total is " << dealerTotal << "\n";
	}

	return 0;

}