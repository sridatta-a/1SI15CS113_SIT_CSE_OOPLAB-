#include <iostream>
#include <cmath>
using namespace std;

class COMPLEX_TYPE
{
	double dReal,dImag;
	public:
	    COMPLEX_TYPE()
	    {
	        dReal=0.0;
	        dImag=0.0;
	    }
	    COMPLEX_TYPE(double R)
	    {
            dReal=R;
	    }
	    COMPLEX_TYPE(double R,double I)
	    {
	        dReal=R;
	        dImag=I;
	    }
	void fnSetComplex();
	void fnShowComplex();
    friend COMPLEX_TYPE fnAddComplex(COMPLEX_TYPE,COMPLEX_TYPE);
	friend COMPLEX_TYPE fnAddComplex(int,COMPLEX_TYPE);
	COMPLEX_TYPE fnSubComplex(COMPLEX_TYPE);

};

void COMPLEX_TYPE::fnSetComplex()
{
	cout<<"Enter the real and Imaginary parts \n";
	cin>>dReal>>dImag;
}

void COMPLEX_TYPE::fnShowComplex()
{
	cout<<endl;
	if(dImag>0)
		cout<<dReal<<"+"<<dImag<<"i"<<endl;
	else if(dImag<0)
		cout<<dReal<<"-"<<abs(dImag)<<"i"<<endl;
	else
		cout<<dReal<<endl;
}
COMPLEX_TYPE fnAddComplex(COMPLEX_TYPE s1,COMPLEX_TYPE s2)
{
	COMPLEX_TYPE s3;
	s3.dReal=s1.dReal+s2.dReal;
	s3.dImag=s2.dImag+s2.dImag;
	return s3;

}
COMPLEX_TYPE fnAddComplex(int a,COMPLEX_TYPE s2)
{
	COMPLEX_TYPE c;
	c.dReal=a+s2.dReal;
    c.dImag=s2.dImag;
	return c;
}

int main()
{
    int a;
	COMPLEX_TYPE c1,c2,sum1,sum2;
	c1.fnSetComplex();
	c2.fnSetComplex();
	cout<<"1st complex number ";
	c1.fnShowComplex();
	cout<<"2nd complex number ";
	c2.fnShowComplex();

	sum1=fnAddComplex(c1,c2);
	cout<<"The sum of complex numbers c1 and c2 ";
	sum1.fnShowComplex();
	cout<<"Enter an integer a\n";
	cin>>a;
	cout<<"The sum of complex numbers "<<a<<"+0i and c2 ";

	sum2=fnAddComplex(a,c2);
	sum2.fnShowComplex();

	return 0;


}

