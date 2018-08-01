//============================================================================
// Name        : AdditiveCipher.cpp
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int key, x, i = 0;
	string guess = "";
	string cipherText = "UOISCXEWLOBDOX"; //string to decrypt

	//array of characters we can use
	char alphabet[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
			'Y', 'Z' };
	for (key = 0; key < 26; key++) {
		cout << "key is:" << key << " | Decrypted Text is: ";
		for (i = 0; i < cipherText.length(); i++) {

			/*add 26 before mod to avoid negative numbs. As you know, value 'A' is equal to the integer 65,
			 *  and the values of the capital letters increase from there.to compensate I subtracted 65 */
			int pt = (cipherText[i] - key - 'A' + 26) % 26;
			guess += alphabet[pt];

		}
		cout << guess + "\n"; //display each guess
		guess = "";
	}
	return 0;
}
