#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    char first_name[20]{"Bjarne"};
    char last_name[20]{"Stroustrup"};
    
    char whole_name[25];
    
    int first_name_length{strlen(first_name)};
    int last_name_length{strlen(last_name)};
    
    strcpy(whole_name, first_name);
    strcat(whole_name, last_name);
    
    int whole_name_length{strlen(whole_name)};
    
    cout << "first name: " << first_name << endl;
    cout << "Last name: " << last_name << endl;
    cout << "first name length: " << first_name_length<< endl;
    cout << "last name length: " << last_name_length<< endl;
     cout << "Whole name: " << whole_name<< endl;
     cout << "whole name length: " << whole_name_length<< endl;
    
    return 0;
}