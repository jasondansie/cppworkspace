#include <iostream>

#include <string>

using namespace std;

int main(){
    string unformatted_full_name {"StephenHawking"};
    string first_name{unformatted_full_name, 0, 7};
    
    string last_name = unformatted_full_name.substr(7,7);
    
    string formatted_full_name = first_name + last_name;
    formatted_full_name.insert(7, " ");
    
    
    cout << "first name is: " << first_name << endl;
    cout << "last name is: " << last_name << endl;
    
    cout << "full name is: " << formatted_full_name << endl;
    
    
    
    
    return 0;
}