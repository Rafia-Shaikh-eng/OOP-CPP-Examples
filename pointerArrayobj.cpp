#include<iostream>
using namespace std;


class Book{
    string title;
    string author;
    string genre;
    public:
    //constructor 
    Book(string title, string author, string genre){
        this->title=title;
        this->author=author;
        this->genre=genre;
    }
    //getter 
    string getTitle() const{
        return title;
    }
    string getAuthor() const{
        return author;
    }
    string getGenre() const{
        return genre;
    }
};
int main(){
    int Max_books;
    string title, author, genre;
    cout<<"Enter the max size of the books : ";
    cin>>Max_books;
    //create object of class Book
    Book *bookshelf[Max_books];
    //add a book to the library 
    for(int i=0; i<Max_books; i++){
        cout<<"Title : ";
        cin>>title;
        cout<<"Author : ";
        cin>>author;
        cout<<"Genre : ";
        cin>>genre;
        bookshelf[i]=new Book(title, author, genre);
    }
    //display the books info
    for(int i=0; i<Max_books; i++){
        cout<<"Title:\t"<<bookshelf[i]->getTitle()<<endl;
        cout<<"Author:\t"<<bookshelf[i]->getAuthor()<<endl;
        cout<<"Genre:\t"<<bookshelf[i]->getGenre()<<endl;
        cout<<endl;
    }
    

    return 0;
}