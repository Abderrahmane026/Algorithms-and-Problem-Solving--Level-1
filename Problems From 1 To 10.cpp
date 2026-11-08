//#include <iostream>
//#include <string>
//using namespace std;
//
//
//void PrintName(string Name)
//{
//	cout << "My name is : " << Name << endl;
//}
//
//string ReadName()
//{
//	string Name = "";
//
//	cout << "What's your name ? ";
//	getline(cin, Name); // Function used to read an entire line of text, including spaces.
//
//	return Name;
//}
//
//enum enNumberType { Odd = 0, Even = 1 };
//int ReadNumber()
//{
//	int Number = 0;
//
//	cout << "Enter a number : ";
//	cin >> Number;
//
//	return Number;
//}
//enNumberType CheckNumberType(int Number)
//{
//	int Result = Number % 2;
//
//	if (Result == 0)
//		return enNumberType::Even;
//	else
//		return enNumberType::Odd;
//}
//void PrintNumberType(enNumberType NumberType)
//{
//	// My solution
//	switch (NumberType)
//	{
//	case enNumberType::Odd:
//	{
//		cout << "Number is Odd." << endl;
//		break;
//	}
//	case enNumberType::Even:
//	{
//		cout << "Number is Even." << endl;
//		break;
//	}
//	}
//
//	// Dr.Mohamad Abu-Hadhoud
//	if (NumberType == enNumberType::Even)
//		cout << "Number is Even" << endl;
//	else
//		cout << "Number is Odd" << endl;
//}
//
//// My solution
//int ReadAge()
//{
//	short Age = 0;
//
//	cout << "How old are you ? ";
//	cin >> Age;
//
//	return Age;
//}
//string HaveLicense()
//{
//	string HasLicense = "";
//
//	cout << "Do you have drive license [Yes / No] ? ";
//	cin >> HasLicense;
//
//	return HasLicense;
//}
//void PrintResult(short Age, string HaveLicense)
//{
//	if (Age > 21 && HaveLicense == "Yes")
//		cout << "You are HIRED.";
//	else
//		cout << "You are REJECTED.";
//}
//
//// Dr.Mohamad Abu-Hadhoud
//struct stInfo
//{
//	// Problem #4 :
//	short Age;
//	bool HasDrivingLicense;
//
//	// Problem #5 :
//	bool HasRecommendation;
//};
//stInfo ReadInfo()
//{
//	stInfo Info;
//
//	// Problem #5
//	cout << "Do you have recormmendation [1 : if you have | 0 : if you don't have] ? ";
//	cin >> Info.HasRecommendation;
//
//	// Problem #4
//	cout << "How old are you ? ";
//	cin >> Info.Age;
//
//	cout << "Do you have driving license [1 : if you have | 0 : if you don't have] ? ";
//	cin >> Info.HasDrivingLicense;
//
//	return Info;
//}
//bool IsAccepted(stInfo Info)
//{
//	if (Info.HasRecommendation) // Problem #5
//		return true;
//	else
//		return (Info.Age > 21 && Info.HasDrivingLicense);
//}
//void PrintResult(stInfo Info)
//{
//	if (IsAccepted(Info))
//		cout << "You are HIRED";
//	else
//		cout << "You are REJECTED";
//}
//
//struct stFullName
//{
//	string FirstName;
//	string LastName;
//};
//stFullName ReadFullName()
//{
//	stFullName FullName;
//
//	cout << "What is your first name : ";
//	cin >> FullName.FirstName;
//	cout << "What is your last name : ";
//	cin >> FullName.LastName;
//
//	return FullName;
//}
//string GetFullName(stFullName FullName, bool Reserved = true)
//{
//	string Name = "";
//
//	if (Reserved)
//		Name = FullName.FirstName + " " + FullName.LastName;
//	else
//		Name = FullName.LastName + " " + FullName.FirstName;
//
//	return Name;
//}
//void PrintFullName(string FullName)
//{
//	cout << "Full name : " << FullName << endl;
//}
//
//float CalculateHalfNumber(int Number)
//{
//	return (float) Number / 2;
//}
//void PrintResultOfHalfNumber(int Number)
//{
//	string Result = "Half of " + to_string(Number) + " is : " + to_string(CalculateHalfNumber(Number));
//	cout << Result << endl;
//}
//
//enum enMarkResult{Pass = 0, Fail = 1};
//int ReadMark()
//{
//	int Mark = 0;
//
//	cout << "Enter your mark : ";
//	cin >> Mark;
//
//	return Mark;
//}
//enMarkResult CheckMark(int Mark)
//{
//	if (Mark >= 50)
//		return enMarkResult::Pass;
//	else
//		return enMarkResult::Fail;
//}
//void PrintResultIfPassOrFail(int Mark)
//{
//	if (CheckMark(Mark) == enMarkResult::Pass)
//		cout << "You are Pass";
//	else
//		cout << "You are Fail";
//}
//
//void ReadNumbers(int& Number1, int& Number2, int& Number3)
//{
//	cout << "Enter number 1 : ";
//	cin >> Number1;
//
//	cout << "Enter number 2 : ";
//	cin >> Number2;
//
//	cout << "Enter number 3 : ";
//	cin >> Number3;
//}
//int CalculateSumOfThreeNumbers(int Number1, int Number2, int Number3)
//{
//	return Number1 + Number2 + Number3;
//}
//void PrintResultOfSumThreeNumbers(int Total)
//{
//	cout << "The total Sum of 3 numbers is : " << Total << endl;
//}
//
//void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
//{
//	cout << "Enter mark 1 : ";
//	cin >> Mark1;
//
//	cout << "Enter mark 2 : ";
//	cin >> Mark2;
//
//	cout << "Enter mark 3 : ";
//	cin >> Mark3;
//}
//float CalculateAverageOfThreeMarks(int Mark1, int Mark2, int Mark3)
//{
//	return (float)CalculateSumOfThreeNumbers(Mark1, Mark2, Mark3) / 3;
//}
//void PrintResultOfAverageThreeMarks(int Average)
//{
//	cout << "The average of three marks is : " << Average << endl;
//}
//
//int main()
//{
//	// Problem #1 : Write a program to print your name on screen.
//	PrintName("Abderrahmane Yettou");
//
//	// Problem #2 : Write a program to ask the user to enter his/her name and print it on the screen.
//	PrintName(ReadName());
//
//	// Problem #3 : Write a program to ask the user to enter a number, then print 'ODD' if its odd number and print 'EVEN' if its even number.
//	PrintNumberType(CheckNumberType(ReadNumber()));
//
//	// Problem #4 : Write a program to ask the user to enter his/he : Age, Driver license. Then print 'HIRED' if his/her age is grater than 21 and if he/She has a driver license, Otherwise print 'REJECTED'.
//	PrintResult(ReadInfo());
//
//	// Problem #5 : Write a program to ask the user to enter his/he : Age, Driver license and if Has recommendation. Then print 'HIRED' if he/she has recommendation if not check if his/her age is grater than 21 and if he/She has a driver license, Otherwise print 'REJECTED'.
//	PrintResult(ReadInfo());
//
//	// Problem #6 : Write a program to ask the user to enter : First name, Last name. Then print full name on the screen.
//	PrintFullName(GetFullName(ReadFullName()));
//
//	// Problem #7 : Write a program to ask the user to enter : Number. Then print the "Half of the << Number << is : ???".
//	PrintResultOfHalfNumber(ReadNumber());
//
//	// Problem #8 : Write a program to ask the user to enter : Mark. Then print "PASS" if the Mark >= 50, otherwise print "FAIL".
//	PrintResultIfPassOrFail(ReadMark());
//
//	// Problem #9 : Write a program to ask the user enter three number : Number1, Number2 and Number3. Then print the SUM of entered numbers.
//	int Number1, Number2, Number3;
//	ReadNumbers(Number1, Number2, Number3);
//	PrintResultOfSumThreeNumbers(CalculateSumOfThreeNumbers(Number1, Number2, Number3));
//
//	// Problem #10 : Write a program to ask the user to enter three marks : Mark1, Mark2 and Mark3. Then print the AVERAGE of entered marks.
//	int Mark1, Mark2, Mark3;
//	ReadMarks(Mark1, Mark2, Mark3);
//	PrintResultOfAverageThreeMarks(CalculateAverageOfThreeMarks(Mark1, Mark2, Mark3));
//
//	return 0;
//}