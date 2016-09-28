#include<iostream>
#include<string>
using namespace std;
int main() {
	int userNum = 0;
	int roundedUserNum = 0;
	int numOfSpaces = 0;
	int numOfInsideSpaces = 0;
	int numOfInsideSpacesCounter = -1;
	int numOfSpacesCounter = 0;
	int rowNumber = 0;
	cout << "Please enter an odd number";
	cin >> userNum;
	roundedUserNum = (userNum + 1) / 2;
	numOfSpacesCounter = roundedUserNum - 1;
	while (rowNumber < roundedUserNum)
	{
		numOfSpaces = 0;
		while (numOfSpaces < numOfSpacesCounter)
		{
			
			cout << " ";
			numOfSpaces++;
		}

		if (rowNumber >=1)
		{
			cout << "*";
		}
		numOfInsideSpaces = 0;
		while (numOfInsideSpaces < numOfInsideSpacesCounter)
		{
			cout << " ";
			numOfInsideSpaces++;
		}
		cout << "*";

		cout << endl;
		rowNumber++;
		numOfSpacesCounter--;
		numOfInsideSpacesCounter +=2;
	}
	numOfInsideSpacesCounter -= 4;
	numOfSpacesCounter += 2;
	rowNumber--;

	while (rowNumber > 0)
	{
		numOfSpaces = 0;
		while (numOfSpaces < numOfSpacesCounter)
		{
			cout << " ";
			numOfSpaces++;
		}

		if (rowNumber != 1)
		{
			cout << "*";
		}
		numOfInsideSpaces = 0;
		while (numOfInsideSpaces < numOfInsideSpacesCounter)
		{
			cout << " ";
			numOfInsideSpaces++;
		}
		cout << "*";

		rowNumber--;
		numOfInsideSpacesCounter-=2;
		numOfSpacesCounter++;
		cout << endl;

	}

	system("pause>nul");
	return 0;
}