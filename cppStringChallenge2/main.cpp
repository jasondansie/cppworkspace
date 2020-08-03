#include <iostream>
#include <string>

using namespace std;

int main(){
    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    
    journal_entry_1.erase(0, 6);
    cout << "entry 1 is: " << journal_entry_1 << endl;
    
    if(journal_entry_1 > journal_entry_2){
        journal_entry_1.swap(journal_entry_2);
        
    }
    
    
    cout << "entry 1 is: " << journal_entry_1 << endl;
    cout << "entry 2 is: " << journal_entry_2 << endl;
    
    
    return 0;
}