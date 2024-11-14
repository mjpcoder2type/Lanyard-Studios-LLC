#include <iostream> // standard input output library
#include <string>  // for string variables
#include <iomanip> // for double 2 decimal space precision
#include <cstdlib> // allows use of exit(0) function

//11.14.24
//File to maintain records for, and supply records of, the employees of LANYARD STUDIOS LLC
//Keeps a record of their name, annual salary and employee id

//Class declaration


class EmployeeInfo;



class EmployeeInfo {
	public:
	std::string EmpName;
	std::string EmpID;
	double AnnSal;
	void PrintInfo(){
		std::cout << "Employee's name is " << EmpName << std::endl 
		<< "Employee's ID is " << EmpID << std::endl << "Employee's annual salary is " << std::fixed << std::setprecision(2) << AnnSal << std::endl;
	};
}Emp1,Emp2,Emp3,Emp4,Emp5,Emp6,Emp7,Emp8,Emp9,Emp10; // create objects

			



void ProgramEntry(){ // Allows user to make a choice
std::cout << "1. Harvard Closeau" << std::endl << "2.Geraldine Closeau" << std::endl
		 << "3. Jerry Harken" << std::endl << "4. Jerry Clower" << std::endl
		 << "5. Kimberly Donner" << std::endl << "6.Tonya Heller" << std::endl
		 << "7. Candis Borland" << std::endl << "8. Cletus Hemphead" << std::endl
		 << "9. George James Belfast" << std::endl << "10. Haley Closeau" << std::endl
		 << std::endl << "Please enter a number corresponding to the employee!" << std::endl;

int EntryNum; // Collects the choice
std::cin >> EntryNum;	

switch (EntryNum){ //switch provides info based on class and via if else allows an exit once done
	case 1:
	Emp1.PrintInfo();
	std::cout << "Would you like to choose another employee? Enter Y or N." << std::endl;
	char Ans2;
	std::cin >> Ans2;
	if(Ans2 == 'Y' || Ans2 == 'y'){
	ProgramEntry();}else{exit(0);};
	case 2:
	Emp2.PrintInfo();
	std::cout << "Would you like to choose another employee? Enter Y or N." << std::endl;
	std::cin >> Ans2;
	if(Ans2 == 'Y' || Ans2 == 'y'){
	ProgramEntry();}else{exit(0);};
	case 3:
	Emp3.PrintInfo();
	std::cout << "Would you like to choose another employee? Enter Y or N." << std::endl;
	std::cin >> Ans2;
	if(Ans2 == 'Y' || Ans2 == 'y'){
	ProgramEntry();}else{exit(0);};
	case 4:
	Emp4.PrintInfo();
	std::cout << "Would you like to choose another employee? Enter Y or N." << std::endl;
	std::cin >> Ans2;
	if(Ans2 == 'Y' || Ans2 == 'y'){
	ProgramEntry();}else{exit(0);};
	case 5:
	Emp5.PrintInfo();
	std::cout << "Would you like to choose another employee? Enter Y or N." << std::endl;
	std::cin >> Ans2;
	if(Ans2 == 'Y' || Ans2 == 'y'){
	ProgramEntry();}else{exit(0);};
	case 6:
	Emp6.PrintInfo();
	std::cout << "Would you like to choose another employee? Enter Y or N." << std::endl;
	std::cin >> Ans2;
	if(Ans2 == 'Y' || Ans2 == 'y'){
	ProgramEntry();}else{exit(0);};
	case 7:
	Emp7.PrintInfo();
	std::cout << "Would you like to choose another employee? Enter Y or N." << std::endl;
	std::cin >> Ans2;
	if(Ans2 == 'Y' || Ans2 == 'y'){
	ProgramEntry();}else{exit(0);};
	case 8:
	Emp8.PrintInfo();
	std::cout << "Would you like to choose another employee? Enter Y or N." << std::endl;
	std::cin >> Ans2;
	if(Ans2 == 'Y' || Ans2 == 'y'){
	ProgramEntry();}else{exit(0);};
	case 9:
	Emp9.PrintInfo();
	std::cout << "Would you like to choose another employee? Enter Y or N." << std::endl;
	std::cin >> Ans2;
	if(Ans2 == 'Y' || Ans2 == 'y'){
	ProgramEntry();}else{exit(0);};
	case 10:
	Emp10.PrintInfo();
	std::cout << "Would you like to choose another employee? Enter Y or N." << std::endl;
	std::cin >> Ans2;
	if(Ans2 == 'Y' || Ans2 == 'y'){
	ProgramEntry();}else{exit(0);};
	default:
	std::cout << "You did not enter a correct entry!  Try again!" << std::endl;
	ProgramEntry();
				  }	
}





//MAIN Program entry
int main()

{
			


		//Class Info...excludes method usage!

		
			Emp1.EmpName = "Harvard Closeau";
			Emp1.EmpID = "YZ0002476";
			Emp1.AnnSal = 225000.75;
		
		
			Emp2.EmpName = "Geraldine Closeau";
			Emp2.EmpName = "YZ0002472";
			Emp2.AnnSal = 225000.75;
			
		
			Emp3.EmpName = "Jerry Harken";
			Emp3.EmpID = "YZ0003623";
			Emp3.AnnSal = 86255.25;
			
		
			Emp4.EmpName = "Jerry Clower";
			Emp4.EmpID = "YZ0001945";
			Emp4.AnnSal = 74658.50;
			
		
			Emp5.EmpName = "Kimberly Donner";
			Emp5.EmpID = "YZ0002654";
			Emp5.AnnSal = 72567.25;
			
		
			Emp6.EmpName = "Tonya Heller";
			Emp6.EmpID = "YZ0005612";
			Emp6.AnnSal = 68259.50;
			
		
			Emp7.EmpName = "Candis Borland";
			Emp7.EmpID = "YZ0005823";
			Emp7.AnnSal = 64879.00;
			
		
			Emp8.EmpName = "Cletus Hemphead";
			Emp8.EmpID = "YZ0006023";
			Emp8.AnnSal = 59875.25;
			
		
			Emp9.EmpName = "George James Belfast";
			Emp9.EmpID = "YZ0004987";
			Emp9.AnnSal = 56897.00;
			
		
			Emp10.EmpName = "Haley Closeau";
			Emp10.EmpID = "YZ0003089";
			Emp10.AnnSal = 52888.50;
		

			

//an introduction to the application...this is the first thing the user sees!
std::cout << "Welcome to Lanyard Studios LLC!" << std::endl
		<< "Employee information can be obtained through this application!" <<
		std::endl << "The provided information is for educational purposes only!"
		<< std::endl << "Any misuse is punishable via the full extent of the law!"
		<< std::endl << std::endl;
		
ProgramEntry();
		



	
	return 0;
}	