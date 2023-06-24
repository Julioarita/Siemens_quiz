/**************************************************************************************

Julio Arita 23/06/2023

Some remarks:

I made this brief piece of code to better explain what I consider in the seventh problem 
where we have a example of polymorphism.

In my point of view we could consider it as an example of method overloading and superimpose 
as well, but the use of the pointer to the base class is a clear example of polymorphism.
It seems like we are having just method overloading but we are using a pointer and references. 
So, to access each particular method in each subclass, we have to use a 'virtual funtion' 
in the base class declaration.


***************************************************************************************/

#include <iostream>
using namespace std;

// Declaration of Class A. Which will be our base class.
// We are using a 'virtual function' which allows us to access inheritance classes methods
class A {
  public:
   A() {balance = 200.00;}//constructor s
   virtual double CheckBalance() {return balance;}// --> Key declaration
  protected:
   double balance;
};

//We create classes B and C as inheritance from class A 
class B : public A {
  public:
   B() : A() {balance = 100.00;}
   double CheckBalance() {
      return balance;
   }
   protected:
   double balance;
};

class C : public A {
  public:
   C() : A() {balance = 125.00;}
   double CheckBalance() {
      return balance;
   }
   protected:
   double balance;
};

int main() {
   double v,v1; 
   A *obj = new C(); // The pointer to the base class 
   A *obj1 = new B();

   //Pointer 'this' to access 
   v = obj->CheckBalance();// The references to the methods. If we remove 'virtual' declaration above
   v1 = obj1->CheckBalance(); // We wouldn't access to the particular method classes.
   std::cout << "The value of v is: " << v << "\n"; 
   std::cout << "The value of v1 is: " << v1 << "\n";

   delete obj;
   delete obj1;

   return 0;
}
