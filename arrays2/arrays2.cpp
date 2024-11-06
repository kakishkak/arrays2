#include <iostream>
#include <ctime>


using namespace std;

int main()
{
	int mark = 7; //назъямемхе: врн аш сбхдерэ йюй пюанрючр бяе осмйрш дг хглемхре наысч нжемйс б щрни ярпнвйе
	srand(time(NULL));
	for (int i = 1; i < 11; i++)
	{
		cout << "Student" << i << ":   ";
	}
	cout << "\n" << endl;


	int arr[13][10];

	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 10; j++) {
			int randomMark = rand() % mark + 4;
			arr[i][j] = randomMark;
			switch (i)
			{
			case 0:
				arr[i][j] < 10 ? cout << "Math" << ": " << arr[i][j] << "     " : cout << "Math" << ": " << arr[i][j] << "    ";
				break;
			case 1:
				arr[i][j] < 10 ? cout << "Lit" << ":  " << arr[i][j] << "     " : cout << "Lit" << ":  " << arr[i][j] << "    ";
				break;
			case 2:
				arr[i][j] < 10 ? cout << "Hist" << ": " << arr[i][j] << "     " : cout << "Hist" << ": " << arr[i][j] << "    ";
				break;
			case 3:
				arr[i][j] < 10 ? cout << "Bio" << ":  " << arr[i][j] << "     " : cout << "Bio" << ":  " << arr[i][j] << "    ";
				break;
			case 4:
				arr[i][j] < 10 ? cout << "Phys" << ": " << arr[i][j] << "     " : cout << "Phys" << ": " << arr[i][j] << "    ";
				break;
			case 5:
				arr[i][j] < 10 ? cout << "Geo" << ":  " << arr[i][j] << "     " : cout << "Geo" << ":  " << arr[i][j] << "    ";
				break;
			case 6:
				arr[i][j] < 10 ? cout << "Eng" << ":  " << arr[i][j] << "     " : cout << "Eng" << ":  " << arr[i][j] << "    ";
				break;
			case 7:
				arr[i][j] < 10 ? cout << "Info" << ": " << arr[i][j] << "     " : cout << "Info" << ": " << arr[i][j] << "    ";
				break;
			case 8:
				arr[i][j] < 10 ? cout << "Soc" << ":  " << arr[i][j] << "     " : cout << "Soc" << ":  " << arr[i][j] << "    ";
				break;
			case 9:
				arr[i][j] < 10 ? cout << "Tech" << ": " << arr[i][j] << "     " : cout << "Tech" << ": " << arr[i][j] << "    ";
				break;
			case 10:
				arr[i][j] < 10 ? cout << "PE" << ":   " << arr[i][j] << "     " : cout << "PE" << ":   " << arr[i][j] << "    ";
				break;
			case 11:
				arr[i][j] < 10 ? cout << "Art" << ":  " << arr[i][j] << "     " : cout << "Art" << ":  " << arr[i][j] << "    ";
				break;
			case 12:
				arr[i][j] < 10 ? cout << "Chem" << ": " << arr[i][j] << "     " : cout << "Chem" << ": " << arr[i][j] << "    ";
				break;
			}
		}
		cout << " " << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		int mid = 0;
		for (int j = 0; j < 13; j++)
		{
			mid += arr[j][i];
		}
		mid / 13 < 10 ? cout << "Average: " << mid / 13 << "  " : cout << "Average: " << mid / 13 << " ";
	}
	cout << " " << endl;
	for (int i = 0; i < 10; i++)
	{
		int isPass = 0;
		for (int j = 0; j < 12; j++)
		{
			isPass += arr[j][i];
		}
		isPass /= 13;
		if (isPass < 6) {
			cout << "Not Passed  ";
		}
		else {
			cout << "            ";

		}
	}
	cout << "" << endl;
	cout << "" << endl;
	cout << "-------------------------- 4.3" << endl;

	int classMark = 0;
	for (int i = 0; i < 10; i++)
	{
		int isPass = 0;
		for (int j = 0; j < 13; j++)
		{
			isPass += arr[j][i];
		}
		isPass /= 13;
		if (isPass >= 9) {
			classMark++;
		}
	}
	if (classMark > 5) {
		cout << "(The class has " << classMark << "/10 students which average mark higher than 8 so class is EXCELLENT)" << endl;
	}
	else {
		cout << "(The class has " << classMark << "/10 students which average mark higher than 8 so class is NOT excellent)" << endl;
	}
	cout << "--------------------------" << endl;
	cout << "" << endl;
	cout << "-------------------------- 4.4" << endl;
	cout << "!EXCELLENT STUDENTS!" << endl;
	int amountOfStupidness = 0;
	for (int i = 0; i < 10; i++)
	{
		int excellentLevel = 0;
		for (int j = 0; j < 13; j++)
		{
			if (arr[j][i] > 9) {
				excellentLevel++;
			}
		}
		if (excellentLevel >= 7) {
			cout << "" << endl;
			cout << "Student:" << i + 1 << " is excellent. And here his marks that higher than 9:" << endl;
			for (int j = 0; j < 13; j++)
			{
				if (arr[j][i] > 9) {
					switch (j)
					{
					case 0:
						cout << "Math" << ": " << arr[j][i] << endl;
						break;
					case 1:
						cout << "Lit" << ":  " << arr[j][i] << endl;
						break;
					case 2:
						cout << "Hist" << ": " << arr[j][i] << endl;
						break;
					case 3:
						cout << "Bio" << ":  " << arr[j][i] << endl;
						break;
					case 4:
						cout << "Phys" << ": " << arr[j][i] << endl;
						break;
					case 5:
						cout << "Geo" << ":  " << arr[j][i] << endl;
						break;
					case 6:
						cout << "Eng" << ":  " << arr[j][i] << endl;
						break;
					case 7:
						cout << "Info" << ": " << arr[j][i] << endl;
						break;
					case 8:
						cout << "Soc" << ":  " << arr[j][i] << endl;
						break;
					case 9:
						cout << "Tech" << ": " << arr[j][i] << endl;
						break;
					case 10:
						cout << "PE" << ":   " << arr[j][i] << endl;
						break;
					case 11:
						cout << "Art" << ":  " << arr[j][i] << endl;
						break;
					case 12:
						cout << "Chem" << ": " << arr[j][i] << endl;
						break;
					}
				}
			}

		}
		else {
			amountOfStupidness++;
		}
		if (amountOfStupidness == 10) {
			cout << "there are no perfect students" << endl;
		}
	}
	cout << "--------------------------" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "-------------------------- 4.5" << endl;
	cout << "MARKS AFTER CORRECTION (Corrected grades will be marked with the + sign, and the grades that the students couldn't correct are marked with the - sign)" << endl;
	cout << "" << endl;
	for (int i = 1; i < 11; i++)
	{
		cout << "Student" << i << ":   ";
	}
	cout << "\n" << endl;

	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 10; j++) {
			if (arr[i][j] < 9) {
				for (int x = 0; x < 3; x++)
				{
					int newRandomMark = rand() % mark + 4;
					if (newRandomMark > 8) {
						arr[i][j] = newRandomMark;
						switch (i)
						{
						case 0:
							arr[i][j] < 10 ? cout << "Math" << ": " << arr[i][j] << "+    " : cout << "Math" << ": " << arr[i][j] << "+   ";
							break;
						case 1:
							arr[i][j] < 10 ? cout << "Lit" << ":  " << arr[i][j] << "+    " : cout << "Lit" << ":  " << arr[i][j] << "+   ";
							break;
						case 2:
							arr[i][j] < 10 ? cout << "Hist" << ": " << arr[i][j] << "+    " : cout << "Hist" << ": " << arr[i][j] << "+   ";
							break;
						case 3:
							arr[i][j] < 10 ? cout << "Bio" << ":  " << arr[i][j] << "+    " : cout << "Bio" << ":  " << arr[i][j] << "+   ";
							break;
						case 4:
							arr[i][j] < 10 ? cout << "Phys" << ": " << arr[i][j] << "+    " : cout << "Phys" << ": " << arr[i][j] << "+   ";
							break;
						case 5:
							arr[i][j] < 10 ? cout << "Geo" << ":  " << arr[i][j] << "+    " : cout << "Geo" << ":  " << arr[i][j] << "+   ";
							break;
						case 6:
							arr[i][j] < 10 ? cout << "Eng" << ":  " << arr[i][j] << "+    " : cout << "Eng" << ":  " << arr[i][j] << "+   ";
							break;
						case 7:
							arr[i][j] < 10 ? cout << "Info" << ": " << arr[i][j] << "+    " : cout << "Info" << ": " << arr[i][j] << "+   ";
							break;
						case 8:
							arr[i][j] < 10 ? cout << "Soc" << ":  " << arr[i][j] << "+    " : cout << "Soc" << ":  " << arr[i][j] << "+   ";
							break;
						case 9:
							arr[i][j] < 10 ? cout << "Tech" << ": " << arr[i][j] << "+    " : cout << "Tech" << ": " << arr[i][j] << "+   ";
							break;
						case 10:
							arr[i][j] < 10 ? cout << "PE" << ":   " << arr[i][j] << "+    " : cout << "PE" << ":   " << arr[i][j] << "+   ";
							break;
						case 11:
							arr[i][j] < 10 ? cout << "Art" << ":  " << arr[i][j] << "+    " : cout << "Art" << ":  " << arr[i][j] << "+   ";
							break;
						case 12:
							arr[i][j] < 10 ? cout << "Chem" << ": " << arr[i][j] << "+    " : cout << "Chem" << ": " << arr[i][j] << "+   ";
							break;
						}
						break;
					}
					else if (x == 2) {
						switch (i)
						{
						case 0:
							arr[i][j] < 10 ? cout << "Math" << ": " << arr[i][j] << "-    " : cout << "Math" << ": " << arr[i][j] << "-   ";
							break;
						case 1:
							arr[i][j] < 10 ? cout << "Lit" << ":  " << arr[i][j] << "-    " : cout << "Lit" << ":  " << arr[i][j] << "-   ";
							break;
						case 2:
							arr[i][j] < 10 ? cout << "Hist" << ": " << arr[i][j] << "-    " : cout << "Hist" << ": " << arr[i][j] << "-   ";
							break;
						case 3:
							arr[i][j] < 10 ? cout << "Bio" << ":  " << arr[i][j] << "-    " : cout << "Bio" << ":  " << arr[i][j] << "-   ";
							break;
						case 4:
							arr[i][j] < 10 ? cout << "Phys" << ": " << arr[i][j] << "-    " : cout << "Phys" << ": " << arr[i][j] << "-   ";
							break;
						case 5:
							arr[i][j] < 10 ? cout << "Geo" << ":  " << arr[i][j] << "-    " : cout << "Geo" << ":  " << arr[i][j] << "-   ";
							break;
						case 6:
							arr[i][j] < 10 ? cout << "Eng" << ":  " << arr[i][j] << "-    " : cout << "Eng" << ":  " << arr[i][j] << "-   ";
							break;
						case 7:
							arr[i][j] < 10 ? cout << "Info" << ": " << arr[i][j] << "-    " : cout << "Info" << ": " << arr[i][j] << "-   ";
							break;
						case 8:
							arr[i][j] < 10 ? cout << "Soc" << ":  " << arr[i][j] << "-    " : cout << "Soc" << ":  " << arr[i][j] << "-   ";
							break;
						case 9:
							arr[i][j] < 10 ? cout << "Tech" << ": " << arr[i][j] << "-    " : cout << "Tech" << ": " << arr[i][j] << "-   ";
							break;
						case 10:
							arr[i][j] < 10 ? cout << "PE" << ":   " << arr[i][j] << "-    " : cout << "PE" << ":   " << arr[i][j] << "-   ";
							break;
						case 11:
							arr[i][j] < 10 ? cout << "Art" << ":  " << arr[i][j] << "-    " : cout << "Art" << ":  " << arr[i][j] << "-   ";
							break;
						case 12:
							arr[i][j] < 10 ? cout << "Chem" << ": " << arr[i][j] << "-    " : cout << "Chem" << ": " << arr[i][j] << "-   ";
							break;
						}
					}
				}
			}
			else {
				switch (i)
				{
				case 0:
					arr[i][j] < 10 ? cout << "Math" << ": " << arr[i][j] << "     " : cout << "Math" << ": " << arr[i][j] << "    ";
					break;
				case 1:
					arr[i][j] < 10 ? cout << "Lit" << ":  " << arr[i][j] << "     " : cout << "Lit" << ":  " << arr[i][j] << "    ";
					break;
				case 2:
					arr[i][j] < 10 ? cout << "Hist" << ": " << arr[i][j] << "     " : cout << "Hist" << ": " << arr[i][j] << "    ";
					break;
				case 3:
					arr[i][j] < 10 ? cout << "Bio" << ":  " << arr[i][j] << "     " : cout << "Bio" << ":  " << arr[i][j] << "    ";
					break;
				case 4:
					arr[i][j] < 10 ? cout << "Phys" << ": " << arr[i][j] << "     " : cout << "Phys" << ": " << arr[i][j] << "    ";
					break;
				case 5:
					arr[i][j] < 10 ? cout << "Geo" << ":  " << arr[i][j] << "     " : cout << "Geo" << ":  " << arr[i][j] << "    ";
					break;
				case 6:
					arr[i][j] < 10 ? cout << "Eng" << ":  " << arr[i][j] << "     " : cout << "Eng" << ":  " << arr[i][j] << "    ";
					break;
				case 7:
					arr[i][j] < 10 ? cout << "Info" << ": " << arr[i][j] << "     " : cout << "Info" << ": " << arr[i][j] << "    ";
					break;
				case 8:
					arr[i][j] < 10 ? cout << "Soc" << ":  " << arr[i][j] << "     " : cout << "Soc" << ":  " << arr[i][j] << "    ";
					break;
				case 9:
					arr[i][j] < 10 ? cout << "Tech" << ": " << arr[i][j] << "     " : cout << "Tech" << ": " << arr[i][j] << "    ";
					break;
				case 10:
					arr[i][j] < 10 ? cout << "PE" << ":   " << arr[i][j] << "     " : cout << "PE" << ":   " << arr[i][j] << "    ";
					break;
				case 11:
					arr[i][j] < 10 ? cout << "Art" << ":  " << arr[i][j] << "     " : cout << "Art" << ":  " << arr[i][j] << "    ";
					break;
				case 12:
					arr[i][j] < 10 ? cout << "Chem" << ": " << arr[i][j] << "     " : cout << "Chem" << ": " << arr[i][j] << "    ";
					break;
				}
			}
		}
		cout << " " << endl;
	}
	for (int i = 0; i < 10; i++)
	{
		int mid = 0;
		for (int j = 0; j < 13; j++)
		{
			mid += arr[j][i];
		}
		mid / 13 < 10 ? cout << "Average: " << mid / 13 << "  " : cout << "Average: " << mid / 13 << " ";
	}
	cout << " " << endl;
	for (int i = 0; i < 10; i++)
	{
		int isPass = 0;
		for (int j = 0; j < 12; j++)
		{
			isPass += arr[j][i];
		}
		isPass /= 13;
		if (isPass < 6) {
			cout << "Not Passed  ";
		}
		else {
			cout << "            ";

		}
	}
	cout << "" << endl;
	cout << "" << endl;
	cout << "--------------------------" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "-------------------------- 4.6" << endl;
	cout << "!SUBJECTS IN WHICH THE CLASS IS BAD!" << endl;
	cout << "" << endl;
	int amountOfSmartnessInDefiniteSubject = 0;
	for (int i = 0; i < 13; i++) {
		int amountOfStupidnessInDefiniteSubject = 0;
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] < 9) {
				amountOfStupidnessInDefiniteSubject++;
			}
		}
		if (amountOfStupidnessInDefiniteSubject == 10) {
			switch (i)
			{
			case 0:
				cout << "There are no students in the class who are perfect in Math" << endl;
				break;
			case 1:
				cout << "There are no students in the class who are perfect in Lit" << endl;
				break;
			case 2:
				cout << "There are no students in the class who are perfect in Hist" << endl;
				break;
			case 3:
				cout << "There are no students in the class who are perfect in Bio" << endl;
				break;
			case 4:
				cout << "There are no students in the class who are perfect in Phys" << endl;
				break;
			case 5:
				cout << "There are no students in the class who are perfect in Geo" << endl;
				break;
			case 6:
				cout << "There are no students in the class who are perfect in Eng" << endl;
				break;
			case 7:
				cout << "There are no students in the class who are perfect in Info" << endl;
				break;
			case 8:
				cout << "There are no students in the class who are perfect in Soc" << endl;
				break;
			case 9:
				cout << "There are no students in the class who are perfect in Tech" << endl;
				break;
			case 10:
				cout << "There are no students in the class who are perfect in PE" << endl;
				break;
			case 11:
				cout << "There are no students in the class who are perfect in Art" << endl;
				break;
			case 12:
				cout << "There are no students in the class who are perfect in Chem" << endl;
				break;
			}
		}
		else {
			amountOfSmartnessInDefiniteSubject++;
		}
		if (amountOfSmartnessInDefiniteSubject == 13) {
			cout << "THERE'S NO SUBJECT THAT THE WHOLE CLASS IS BAD AT" << endl;
		}
	}
	cout << "--------------------------" << endl;
}