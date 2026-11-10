#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
  const int NUMBER_OF_CARDS = 52;
  int deck[NUMBER_OF_CARDS];
  string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"};
  string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9",
    "10", "Jack", "Queen", "King"};

  // Initialize cards
  for (int i = 0; i < NUMBER_OF_CARDS; i++)
    deck[i] = i;

  // Shuffle the cards
  srand(time(0));
  for (int i = NUMBER_OF_CARDS - 1; i > 0; i--)
  {
    // Generate an index randomly
    int index = rand() % (i + 1);
    int temp = deck[i];
    deck[i] = deck[index];
    deck[index] = temp;
  }

  // Display the first four cards
  for (int i = 0; i < 4; i++)
  {
    string suit = suits[deck[i] / 13];
    string rank = ranks[deck[i] % 13];
    cout << "Card number " << deck[i] << ": " 
      << rank << " of " << suit << endl;
  }

  return 0;
}