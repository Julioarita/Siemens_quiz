/*************************************************************************

Julio Arita 23/06/2023

Some remarks:

Considering our function purpose, performing the conversion is not required 
once it is confirmed that is possible to perform it. Due to our return 
is a constant string not the conversion.

The portuguese alphabet contain 26 characters, all of them included in 
ASCII table (1 byte). Starting from the decimal value 97 until to 122.

There is a piece of code that is not require, as I mentioned above to the
purpose of our function once the conditions length(s) + length(t) <= k and 
length(s) >= length(t) are true always will be possible to perform conversion.

**************************************************************************/

#include <iostream>
using namespace std;

// Global variables declarations
char yes[] = "Yes";
char no[] = "No";


//Function prototype declarations. Our function return a string (char *)
char* ConcatRemove(char*, char*, int);

// Global variables declarations
char string_s[100] = "abcdefghijklmnopqrstuvwxyzssss";
char string_t[100] = "abcdefghijklmnopqrstuvwxyz";
char* for_printing;
int operations = 2;



int main (){
      for_printing = ConcatRemove(string_s, string_t, operations);
      cout << for_printing << "\n";

}

char* ConcatRemove(char* s, char *t, int k){

      //local variable declarations
      int length_s = 0, length_t = 0, step_stay = 0, step_remove;

      //pulling out strings length values and cheking constraints
      while(*s){    
            length_s++; 
            if((length_s > 100) || !(*s >= 'a' && *s <= 'z')){
                  return no;
            }
            s++;
      }

      while(*t){
            length_t++;
            if ((length_t > 100) || !(*t >= 'a' && *t <= 'z')){
                  return no;
            }
            t++;
      }

      //Cheking k constrains
      if(!((1 <= k) && (k <= 100))){
            return no;
      }

      //Pulling out how many characters are equal in both strings
      t -= length_t; s -= length_s;
      while(*s && *t){
            if(*s == *t){
                  step_stay++;
                  s++; t++;
            } else 
                  break;
      }

      //Updating new strings length values. Substrancting equal parts
      length_s = length_s - step_stay;
      length_t = length_t - step_stay;

      //Pulling out the remaining parts of strings to perform conversion.
      step_remove = k - length_t;
      step_stay = step_remove - length_s;
      
      if(length_s >= length_t && (length_s + length_t <= k)){
      // This piece of code is not require to the function purpose, once we return a string.
            if( step_stay > 0){
                  while(step_remove){                                      //Removing 's' characteres
                        if((step_remove - step_stay) > 0){
                              *s = 0;
                              s++;
                        }
                        else {;}// Do nothing
                        step_remove--;
                  }
            }
            else if (step_stay == 0){
                  step_remove = length_s;
                  while(step_remove){                                      //Removing 's' characteres
                        *s = 0;
                        s++;                    
                        step_remove--;
                  }
            }
            s -= length_s;
            while(*t){//Updating 's' with 't' characteres                    
                  *s = *t;
                  t++; s++;
            }
            return yes;
      }
     return no; 
}
