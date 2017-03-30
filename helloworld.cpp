// Win32Project1.cpp : Defines the entry point for the console application.
//

/*
Code written by Mitchell Congdon
03/26/2017
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class WordsNStuff {
public://makes it so you can access this code from int main or anwhere really
	string name;
	string greeting;
	void say1() {
		cout << "Look, I am a hello world program and here I am saying HELLO!!" << endl;
	}
	void say2() {
		cout << name << ", I'm saying hello here..." << endl;
	}
	void say3() {
		cout << "anyway, " << name << ", my name is Jerald, and I am a Hello world program.\nYou greeted me with " << greeting << "\nMy purpose is as simple as my being...\nHello World." << endl;
	}
};

int main()
{
	WordsNStuff blab;
	cout << "Enter your name:";
		cin >> blab.name;
		blab.say1();
		system("pause");
		blab.say2();
		cin >> blab.greeting;
		blab.say3();
		
	/*next up, make more stuff.
	private class variables etc.
	*/
	system("pause");
	return 0;
}

