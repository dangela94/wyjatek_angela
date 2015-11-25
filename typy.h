#pragma once 
#include <iostream>
class typ4 
{
	public :
		typ4 (int num) :n(num){}
		typ4 ( ) :n( 4){}
		virtual void  PrzedstawSie () { std::cout <<"nazywam sie : "<<n<< std::endl;}
		virtual ~typ4(){}
	private :
		int n ;
};
class typ3 : public typ4
{
	public :
		typ3(int n):typ4(n){}
	 	typ3():typ4(3){}
};
class typ2 :public typ3
{
	public :
 		typ2(int n):typ3(n){}
		typ2():typ3(2){}
};
class typ1 :public typ2
{
	public :
 		typ1(  ):typ2(1){}
};
