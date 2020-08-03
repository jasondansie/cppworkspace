#include <iostream>
#include <string>

using namespace std;


int main(){
   string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
   string key {"dkhowndlaöfgärequipåsjkzxmÄLÅPMKOIJNBHUYVTFDRSEXWAZG"};
    
    string message {};
    string cypher {};

    cout << "Write your message: ";
    getline(cin, message);
    cout << " Encrypting your message. "  << endl;
    
    for(char c: message){
        size_t position = alphabet.find(c);
        
        if(position != string::npos){
            char new_char { key.at(position)};
            cypher += new_char;
        }else{
            cypher += c;
        }
    }
    
//    my solution
//    
//   for(size_t i {0}; i < message.length(); i++){
//
//        int j {alphabet.find(message.at(i))};
//        
//         char k ;
//         
//         if(j >= 0){
//           k = key.at(alphabet.find(message.at(i)));
//         }else{
//             k = 32;  // ascii for space
//         }
//
//        cypher += k;
//  }
    
    cout << "your encoded message is: " << endl;
    cout << cypher << endl;

    return 0;
}