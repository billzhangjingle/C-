#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class Complex 
{         
private :
        double    m_real;
        double    m_imag;
protected:
		double  m_1;
public:
	  Complex(void)
        {
             m_real = 0.0;
             m_imag = 0.0;
			 m_1 = 0.0;
			cout<<"11111"<<endl;
        } 
       Complex(double real, double imag)
        {
             m_real = real;
             m_imag = imag;         
			 m_1 = 0.0;
			cout<<"222222222"<<endl;
         }
	 Complex(const Complex & c)
        {
			m_real = c.m_real;
			m_imag    = c.m_imag;
			 m_1 = 0.0;
			cout<<"33333333"<<endl;
		}            
	Complex(double r)
        {
                m_real = r;
                m_imag = 0.0;
			 m_1 = 0.0;
		cout<<"44444444"<<endl;
		
        }
	Complex &operator=(const Complex &rhs)
	{
		if(this == &rhs){
			return *this;
		}
		this->m_real = rhs.m_real;
		this->m_imag = rhs.m_imag;
		this->m_1 = rhs.m_1;
		cout<<"555555"<<endl;
		
		return *this;
	}
	~Complex ()
	{
		cout<<"delete func "<<m_real<<" "<<m_imag<<endl;
	}
};

  Complex test1(const Complex& c)
  {	
		  cout<<"func_test1"<<endl;
          return c;
  }
  Complex test2(const Complex c)
  {
		 cout<<"func_test2"<<endl;
         return c;
   }
   
   Complex test3()
   {
		 cout<<"func_test3"<<endl; 
          static Complex c(1.0,5.0);
          return c;
   }
  
  Complex& test4()
  {
		 
		 cout<<"func_test4"<<endl;
         static Complex c(1.0,5.0);
         return c;
  }

class Test :public Complex 
{
public:
	Test()
	{
		a = 0.0;
		cout<<"testddddd"<<endl;
	}
	Test(Test & a1)
	{
		a = a1.a;
		m_1 = a1.m_1;
		//m_real = a1.m_real;
		//m_imag = a1.m_imag;
		cout<<"test construct"<<endl;
	}
	~Test()
	{
		cout<<"leave test"<<endl;
	}
private:
	double a;
};

	

int main(void)
{
	//Complex c1;
	
	 //Complex a,b;
     Test m;
        // ���溯��ִ�й����и�����ü��ι��캯�������õ���ʲô���캯����
	 
	 //test1(a);
	 //cout<<"======================"<<endl;
	 //test2(a);

	 //cout<<"======================"<<endl;
	 //b = test3();
	 //cout<<"======================"<<endl;
	 //b = test4();

	 //cout<<"======================"<<endl;
	 //test2(1.2);
	 //// �����������������
	 //cout<<"======================"<<endl;
	 //test1(1.2);     //test1( Complex(1.2 )) �أ�
	return 0;
}
