/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: vCard
 * This program creates a vCard file.
 */

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string strFileName = "address.vcf";
	ofstream fileAddress;
	string strFirst = "Max";
	string strLast = "Neaves";
	string strOrg = "M/N Games";
	string strTitle = "Owner/Programmer/Artist";
	string strTelWork = "(210) 857-2549";
	string strTelHome = "(210) 736-2018";
	string strEmail = "max.neaves@gmail.com";

	fileAddress.open(strFileName);
	fileAddress << "BEGIN:VCARD" << endl;
	fileAddress << "VERSION:2.1" << endl;
	fileAddress << "N:" << strLast << ";" << strFirst << ";;" << endl;
	fileAddress << "FN:" << strFirst << " " << strLast << endl;
	fileAddress << "ORG:" << strOrg << endl;
	fileAddress << "TITLE:" << strTitle << endl;
	fileAddress << "TEL;WORK;VOICE:" << strTelWork << endl;
	fileAddress << "TEL;HOME;VOICE:" << strTelHome << endl;
	fileAddress << "EMAIL:" << strEmail << endl;
	fileAddress << "END:VCARD" << endl;
	fileAddress.close();
	cout << "Wrote " << strFileName << endl;
	return 0;
}

