#include "Book.h"
#include<iostream>
#include<string>
using namespace std;


Book::Book(string name,string author,string number,float price,string press)
	:Book_name(name),Book_author(author),Book_number(number),Book_price(price),Book_press(press)
{
}
void Book::ModifyName(string name)//修改书名
{
	Book_name=name; 
} 
void Book::ModifyAuthor(string author)//修改作者
{
	Book_author=author;
}
string Book::GetNumber()//获取书的编号
{
	return Book_number; 
}
void Book::ModifyPrice(float price)//修改价格
{
    Book_price=price;
}
void Book::Modifypress(string press)//修改出版商
{
    Book_press=press;
}
void Book::ShowBookInfomation()//显示所有信息
{
	cout<<"书名:"<<Book_name<<endl;
    cout<<"作者:"<<Book_author<<endl;
	cout<<"编号:"<<Book_number<<endl;
	cout<<"价格:"<<Book_price<<endl;
	cout<<"出版机构:"<<Book_press<<endl; 
}
int main()
{
    Book Book1("天龙八部","我","0000001",28.00,"明报");
    Book1.ShowBookInfomation();
    return 0;
}