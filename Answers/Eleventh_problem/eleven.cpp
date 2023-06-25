/***********************************************************************************
Julio Arita 25/06/2023

Since I was not given any constraints related to input string length. I decided 
to use standard 'string' class to get the informed string by the user.

The method consists in using a vector ot type 'char' to iterate over the input string.
Instead of using a pointer to the input string, we can take advantage of the ASCII
Standard to 'mask' our values. So, we can add a value to the specific position
and we can subtract it from the same position to retrieve the original 
one to assign it.

You can run the program and test it by introducing any string value
************************************************************************************/

#include <iostream>

// Object declaration for input string 
std::string user_string;

// Variable declarations
int string_count = 0;


int main() {
    // Getting the string from user entry
    std::cout << "Write whatever you want" << std::endl;
    std::getline(std::cin,user_string); 

    // Getting the string length to iterate over
    while(user_string[string_count++]){}
    string_count--;

    //Getting reversed string 
    for (int i = 0; i < (string_count/2); i++) {
        user_string[i] = user_string[i] + user_string[string_count - i - 1];
        user_string[string_count - i - 1] = user_string[i] - user_string[string_count - i - 1];
        user_string[i] = user_string[i] - user_string[string_count - i - 1];
    }

    std::cout << "The reversed string is: " << user_string << std::endl;
    return 0;
}
