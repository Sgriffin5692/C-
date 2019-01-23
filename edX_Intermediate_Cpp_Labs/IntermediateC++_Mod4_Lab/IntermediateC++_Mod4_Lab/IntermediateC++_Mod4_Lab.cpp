// IntermediateC++_Mod4_Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Donation.h"
#include <iostream>
#include <fstream>
int ReadTotal(std::fstream &_iofile);

int main()
{
	std::fstream iofile;
	char donationResponse;
	int runningTotal = ReadTotal(iofile);
	std::string name;
	int donationAmount;

	// Display initial total
	std::cout << "The initial donation total: $" << runningTotal << std::endl;

	std::cout << "Would you like to make a donation, Y or N? ";
	std::cin >> donationResponse;
	std::cin.ignore();

	while (donationResponse == 'Y')
	{
		std::cout << "Please enter your first name, followed by your donation amount: ";
		std::string donationData{};
		std::getline(std::cin, donationData);
		// stringstream object to split up line into name and donation amount
		std::stringstream s(donationData);
		s >> name >> donationAmount;
		runningTotal += donationAmount;
		Donation newDonation(name, donationAmount);
		newDonation.Write(iofile);
		newDonation.Read(iofile);

		std::cout << "Would you like to make another donation, Y or N? ";
		std::cin >> donationResponse;
		// Needed to ignore newline character in next getline()
		std::cin.ignore();
	}
	
	iofile.open("donation_total.txt", std::ios_base::app);
	iofile << runningTotal << "\n";
	iofile.close();

	// Display final total
	std::cout << "The final donation total: $" << ReadTotal(iofile) << std::endl;
}

// Returns last line of file (aka last total)
int ReadTotal(std::fstream &_iofile)
{
	_iofile.open("donation_total.txt");
	
	if (_iofile.is_open())
	{
		// If empty file, line will never be initialized otherwise
		std::string line = "0";
		std::string temp;
		// If last line is not empty string, temp is assigned to line
		while (std::getline(_iofile, temp)) 
		{
			if (temp != "")
			{
				line = temp;
			}
		}
		_iofile.close();
		return std::stoi(line);
	}
	else
	{
		std::cerr << "File did not open correctly.";
		return -1;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
