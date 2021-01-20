#include <iostream>
#include <string>

using namespace std;






void decode(string &message, const string& key){	// Defining function for decrypting.
	for(int i = 0; i < message.size(); i++)
		message[i] = ((message[i] - key[i % key.size()] + 95) % 95) + 32;
		/*
		 * Steps for decryption:
		 * 
		 * 1- substract the ascii equivalent of key character from the message character.
		 * 2- add 95 to avoid modulo vs congruency problems (we are only working on positive values).
		 * 3- get the result by congruence of 95.
		 * 4- Add 32 to get the ascii equivalent.
		 * */
	}


int main(){
	cout << "Enter the key:\t";	// Getting the encrypting key.
	string key;	
	getline(cin, key);
	cout << "Now enter the message to decrypt:\n";
	
	string message;
	getline(cin, message);	// Getting the message from the user. 
	
	decode(message, key);	// Call our function.
	
	cout << "This is the decrypted message:\n" << message << endl;	// Print the decrypted message.
	
	return 0;
	}
