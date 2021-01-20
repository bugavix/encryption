#include <iostream>
#include <string>

using namespace std;





void code(string &message,const string& key){ // fonction made to encrypt a message;
	for(int i = 0; i < message.size(); i++)	// looping for every character of the message.
		message[i] = ((message[i] + key[i % key.size()] - 64) % 95) + 32;	// main trnsformation.
		/*
		 * Steps for encryption:
		 * 
		 * 1- get the ascii equivalent of the message character and substart 32 to remove unprinting characters.
		 * 2- get the ascii equivalent of the key character and substract 32 for the same reason.
		 * 3- Add the two integers and obtain the congruent result by 95.
		 * 4- Add 32 to the result to have an ascii valid character.
		 * 
		 * Note: characters we are working on are from 32 to 126 (95 characters).
		 * */
	}


int main(){
	cout << "Enter the key:\t";	// Obtain the encryptor key from the user.
	string key;
	getline(cin, key);
	
	cout << "Enter the message to encrypt:\t";	// inputing the message.
	string message;
	getline(cin, message);
	
	
	code(message, key);	// encrypting via our defined fuction.
	
	cout << "This is your encrypted message:\n" << message << endl;	// showing out the encrypted message.
	
	return 0;
	}
