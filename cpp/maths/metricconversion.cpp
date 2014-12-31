/*
 * metricconversion.cpp
 * 
 * Copyright 2013 theoka <theoka@mllnm-flcn>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string type;
double input=0;

int length();
int area();
int volume();
int speed();
int temperature();
int weight();

int main()
{
	
	int measure;
	
	cout << "Conversion type: \n";
	cout << endl;
	cout << "1 - Length \n";
	cout << "2 - Area \n";
	cout << "3 - Volume \n";
	cout << "4 - Speed \n";
	cout << "5 - Temperature \n";
	cout << "6 - Weight \n";
	cout << endl;
	cin >> measure;
	
	switch(measure){
		case 1: int length();
			break;
		case 2: int area();
			break;
		case 3: int volume();
			break;
		case 4: int speed();
			break;
		case 5: int temperature();
			break;
		case 6: int weight();
		}
	
	return 0;
}

int length(){
	
	
	
	}

