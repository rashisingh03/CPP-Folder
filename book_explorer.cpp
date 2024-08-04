#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class book{ // define class of a book in c++
public:
// attributes(data members)
string title;
string author;
int pages;
 string bestquote;
//method(function that belongs to the class)
void displayinfo(){
    cout<<"title:"<<title<<endl;
    cout<<"author:"<<author<<endl;
    cout<<"pages:"<<pages<<endl;
    cout<<"bestquote:"<<bestquote<<endl;//best quote from the book
}
};
int main(){
    //create an object of book class 
    book mybook;//firstly write a name of class
    mybook.title="The Alchemist";//where object is mybook in this line
    mybook.author="Paulo Coelho";
    mybook.pages=197;
    mybook.bestquote="*When you want something, all the universe conspires to help you achieve it*";
   //call the function where are our fonction name is (displayinfo)
   mybook.displayinfo();
   return 0;
    }
 
 /* #include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class book {  // define class of a book in c++
public:
    // attributes (data members)
    string title;
    string author;
    int pages;

    // method (function that belongs to the class)
    void displayinfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
    }
};

int main() {
    // create an object of the book class
    book mybook; // object declaration

    mybook.title = "To Kill a Mockingbird";
    mybook.author = "Harper Lee";
    mybook.pages = 281;

    // call the function to display information
    mybook.displayinfo();

    return 0;
}*/
