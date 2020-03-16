/*
Copyright 2020 Sean Doucet
All Rights Reserved
*/

/**
*
@file
* @author  Sean Doucet sean.doucet@worldoflinux.ca
* @version 1.0
*
*
* @section DESCRIPTION
*  This is the main program that executes the functions and constuctors and
*  destructors.
*
* @section LICENSE
*
*  Copyright 2020 Sean Doucet
*  Permission to use, copy, modify, and/or distribute this software for
*  any purpose with or without fee is hereby granted, provided that the
*  above copyright notice and this permission notice appear in all copies.
*
*  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
*  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
*  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
*  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
*  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
*  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*/

// C++ Standard Library Pre Processor
#include <iostream>
#include <fstream>

// Header File Pre Processor
#include "Question.h"

// Main CPP File Function

int Category() {
	int user_responce;

	std::cout << "///////////////////////////////////////////\n" << 
		         "              Trivia Category              \n" << 
		         "///////////////////////////////////////////\n" <<
		         "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n" <<
		         " Rick and Morty (1)                        \n"<< 
		         ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n" << std::endl;

	std::cin >> user_responce;
	switch (user_responce) {
	case '1':
		return 1;
	}
}

int main() {
	// Main Program Variables
	char user_responce;
	int category;

	std::cout << "PROGRAM EXECUTED..." << std::endl;

	std::fstream data;

	std::cout << "**********************************************\n" <<
				 "        Gaming Industries Presents            \n" <<
				 "**********************************************\n" << std::endl;

	// Operating System Dependency
	system("TIMEOUT 5");
	system("cls");

	std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n" <<
				 "                 A Sean D.                    \n" <<
				 "                Production                    \n" << 
		         "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n" << std::endl;

	// Operating System Dependency
	system("TIMEOUT 5");
	system("cls");

	std::cout << "\n           GENERIC TRIVIA The Game            \n" << std::endl;

	// Operating System Dependency
	system("cls");
	while (true) {
		// Generic Trivia Main Menu
		std::cout << "=================================================\n" <<
					 "                  GENERIC TRIVIA                 \n" <<
					 "                     The Game                    \n" <<
					 "=================================================\n" <<
					 "-------------------------------------------------\n" <<
					 "Type (Play) to play the game.                    \n" <<
					 "-------------------------------------------------\n" <<
					 "Type (Quit) to quit the game.                    \n" <<
					 "-------------------------------------------------\n" <<
					 "You can type the selection below...              \n" << std::endl;
					
		std::cin >> user_responce; std::cin.ignore(99999, '\n');

		switch (user_responce) {
		case 'P':
		case 'p':

			category = Category();

			if (category = 1) {
				data.open("Rick_and_Morty_Question.txt", std::fstream::binary);

				if (data.is_open()) {
					std::cout << "Data File has been succesfully opened...\n" << std::endl;
					

				}
				else {
					std::cout << "Data File is not able to be opened..." << std::endl;
				}
			}

			break;

		case 'Q' :
		case 'q' :

			break;

		default :
			std::cout << "This is not a valid character..." << std::endl;
		}
	}
}