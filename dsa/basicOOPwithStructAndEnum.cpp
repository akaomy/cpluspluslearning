#include <iostream>
using namespace std;

// datatype to define variable
enum CardSuits 
{
    Club,
    Diamond,
    Heart,
    Spade
};

enum CardElements 
{
    Ace,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
};

string GetSuitsString(CardSuits suite) 
{
    string s;
        switch (suite) {
        case Club:
            s = "Clubs";
            break;
        case Diamond:
            s = "Diamonds";
            break;
        case Heart:
            s = "Hearts";
            break;
        case Spade:
            s = "Spades";
            break;
    }
    return s;
}

string GetElementString(CardElements element) 
{
    string s;
    switch (element) {
        case Ace:
            s = "Ace";
            break;
        case Two:
            s = "Two";
            break;
        case Three:
            s = "Three";
            break;
        case Four:
            s = "Four";
            break;
        case Five:
            s = "Five";
            break;
        case Six:
            s = "Six";
            break;
        case Seven:
            s = "Seven";
            break;
        case Eight:
            s = "Eight";
            break;
        case Nine:
            s = "Nine";
            break;
        case Ten:
            s = "Ten";
            break;
        case Jack:
            s = "Jack";
            break;
        case Queen:
            s = "Queen";
            break;
        case King:
            s = "King";
            break;
    }
    return s;
}

int GenerateRandomNumber(int min, int max) 
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);

    return min + static_cast<int>((max-min+1) * (rand() * fraction));
}

int main() 
{
    srand(static_cast<unsigned int>(time(0)));
    int iSuite = GenerateRandomNumber(0, 3);
    int iElement = GenerateRandomNumber(0,12);

    CardSuits suit = static_cast<CardSuits>(iSuite);
    CardElements element = static_cast<CardElements>(iElement);

    cout << "The card is the " << GetElementString(element) << " of " << GetSuitsString(suit) << endl;

    return 0;
}