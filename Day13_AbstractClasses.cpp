#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
protected:
    string title;
    string author;
public:
    Book(string t,string a){
        title=t;
        author=a;
    }
    virtual void display()=0;

};


class MyBook : public Book{
private:
    int price;

public:
    MyBook(string _title, string _author, int _price): Book(_title, _author), price(_price){}

    void display(){
        cout << "Title: " << title << "\n"
             << "Author: " << author << "\n" << "Price: " << price;
    }
};
// Write your MyBook class here

//   Class Constructor
//
//   Parameters:
//   title - The book's title.
//   author - The book's author.
//   price - The book's price.
//
// Write your constructor here


//   Function Name: display
//   Print the title, author, and price in the specified format.
//
// Write your method here

// End class

int main() {