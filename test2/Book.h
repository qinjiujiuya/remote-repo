#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
        explicit Book(string name,string author,string number,float price,string press);
        void ModifyName(string name);
        void ModifyAuthor(string author);
        string GetNumber();
        void ModifyPrice(float price);
        void Modifypress(string press);
        void ShowBookInfomation(void);
	private:
		string Book_name;//书名 
        string Book_author;//作者
		string Book_number;//编号 
		float  Book_price;//价格 
		string Book_press;//出版社 
};

#endif