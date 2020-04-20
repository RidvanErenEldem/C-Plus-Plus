#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "123 Ridvan Eren Eldem 123";
	
	string str2 = "swap";
	
	size_t test;
	
	test = str.find_first_of("a");
	
	cout << test << endl;
	
	test = str.find_first_not_of("123");
	
	cout << test << endl;
	
	str.erase(7,4);
	
	cout << str << endl;
	
	str.replace(7,4,"van");
	
	cout << str << endl;
	
	str.insert(10," Eren");
	
	cout << str << endl;
	
	str.append(" Hello");
	
	cout << str << endl;
	
	cout << str.compare(0,7,"123 Ridvan") << endl;
	
	cout << str.compare(str) << endl;
	
	cout << str.substr(0,10) << endl;
	
	str.swap(str2);
	
	cout << str2 << "\n" << str;
	return 0;
}

