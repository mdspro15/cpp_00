# CPP_00
**Namespace**
Namespace provide a method for preventing nameconflicts in large projects.
The identifiers of the C++ standard library are defined in a namespace called ```std```
In order to use any identifier belonging to the standard library, we need to specify that it belongs to the ```std``` namespace. One way to do this is using ```::``` operator.
The other way is using directive such as ```using namespace std``` however, this one would consinder as bad practice because this way brings **all the identifiers** from ```std```namespace into global namespace, this can create name conflicts. <br>
https://www.programiz.com/cpp-programming/std-namespace 

## Constructors
This is a special method that is automatically called when an object of class is created.
+ Use same name as class
+ It is always ```public```
+ It does not have any return value <br>

**Constructor parameters** <br>
Construtor can also take parameters which can be useful for setting initial values for attributes.
```
class Person
{
  private:
      string name;
      int    year;
  public:
      Person(string x, int y){
        name = x;
        year = y;
      }
};
```  
# ex00 Megaphone
This project requires you to create a program that takes arguments from user and make all capital letters. If no argument are passed, it will display default message.
# ex01 My Awsome Phonebook
We have to simulate a phonebook with a terminal interactive UI. We can ADD or SEARCH for contacts and also EXIT clearing lists of contacts and ending program.
You have to implement 2 classes PhoneBook and Contact. <br>
**PhoneBook**
+ It has an array of contacts.
+ It can receive up to 8 contacts. If user try to add 9th contact, it will replace with 1st contact. <br>

**Contact**
+ Stands for phonebook contact
