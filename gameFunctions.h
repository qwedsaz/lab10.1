typedef int bool;

/*
 * Print the string into underscores with same length
 */
void initializeBlankString(int, char revealedLetters[]);

/*
 * Print the blank underscores for the underlying word with spaces in between
 */
void printWithSpaces(char revealedLetters[]);

/*
 * Reveal the position of correct characters
 */
bool revealGuessedLetter(char word[], char revealedLetters[], char guess);

/*
 * Determine if the words are match
 */
bool checkGuess(char word[], char revealedLetters[]);
