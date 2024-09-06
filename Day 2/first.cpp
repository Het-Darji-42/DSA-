#include <iostream>
using namespace std;

// 1. Basic of Cout
// 2. cin cout : get the value from user 
// 3. Operators : 

int main()
{
	
//Hello world using COUT
	cout << "Hello World \nfrom Het Darji \n";
	
// Variables 
	int age = 42;
	char grade = 'A';
	float PI = 72.2;
	bool isSafe = true;
	double price = 10011.99; 

	cout << "INt VALUE"<< age <<endl;
	cout << "CHARACTER VALUE"<< grade <<endl;
	cout << "FLOAT VALUE:- "<< PI <<endl;
	cout << "BOOLEAN VALUE:-"<< isSafe <<endl;
	cout << "DOUBLE VALUE:- "<< price <<endl << endl;

// COncept Of Get the value from user 
	int Father_age ;
	cout << "Enter your father age ";
	cin >> Father_age;
	cout << "Your Father Age Is:- " << Father_age << endl << endl;

//Operators : Arithmetic : = - * / %
	int a  , b ;	
	cout << "Enter Value Of A ";
	cin >> a;
	cout <<"Enter Value Of B ";
	cin >> b;
	cout << "The SUM Of A & B is : "<< (a+b) << endl;
	cout << "The DIFFERENCE Of A & B is : "<< (a-b) << endl;
	cout << "The PRODUC Of A & B is : "<< (a*b) << endl;
	cout << "The DIVISION Of A & B is : "<< (a/b) << endl;
	cout << "The Modulo Of A & B is : "<< (a%b) << endl <<endl;  // a: 11 b: 5 then 11%5 = 1 
	
	
	// int / int = int (5/2 = 2)   but int + double = double 
	cout << (5/(double)2) <<endl <<endl;
	
//Relational operators  < > =< => == !=  : print outputs in binary numbers

		int x=10;
		int y=4;
		
		cout << " x : 10  > y : 4 :- " << (x>y) << endl;
		cout << " x : 10  < y : 4 :- " << (x<y) << endl;
		cout << " x : 10 >= y : 4 :- " << (x>=y) << endl;
		cout << " x : 10 <= y : 4 :- " << (x<=y) << endl;
		cout << " x : 10 == y : 4 :- " << (x==y) << endl;
		cout << " x : 10 != y : 4 :- " << (x!=y) << endl <<endl;
			
//Logical operators logic OR || , logic AND && , logic Not	!
		cout <<"THis gates are using the value of x and y"<<endl;
		cout << "Logial NOT gate "<< !(x>y) << endl;
		cout << "Logial AND gate "<< (x>y && x!=y) << endl;  // ((x>y) && (x!=y)) also this syntax is true
		cout << "Logial OR gate "<< (x<y || x!=y) << endl << endl;
		;
		
		
//unary operator // ++ -- 

	//post a++
	// pre ++a 
	
	int g = 42;
	int h = g++;   //Kam + update 
	cout << "g = 42 and h = a++ : "<<endl;
	cout << "H :  " << h << endl; // 42   
	cout << "G : " << g << endl; //42
	
	
	int k = 42;
	int i = ++k; //Udate + kam 
	cout << "K = 42 and I = ++k : "<<endl;
	cout << "K :  " << h << endl; // 43  
	cout << "I : " << i  << endl;  // 43
	
	
			
		
	
	return 0;
}
