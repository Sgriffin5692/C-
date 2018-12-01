#pragma once
#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

class Donation
{
public:
	std::string name;
	int donationAmount;
	
	Donation() {}

	Donation(std::string _name, int _donationAmount) : name(_name), donationAmount(_donationAmount)
	{}
	
	~Donation() {}

	void Write(std::fstream &_iofile)
	{
		_iofile.open("donation_total.txt", std::ios_base::app);
		_iofile << name << " " << donationAmount << "\n";
		_iofile.close();
	}

	// Outputs last line (donation) to console
	void Read(std::fstream &_iofile)
	{
		_iofile.open("donation_total.txt");
		std::string line;
		std::string temp;
		// Assigns temp to line until new line is empty string
		while (std::getline(_iofile, temp))
		{
			if (temp != "")
			{
				line = temp;
			}
		}
		std::cout << line << std::endl;
		_iofile.close();
	}


};
