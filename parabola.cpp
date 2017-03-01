#include <iostream>
#include <cmath>
using namespace std;

class PARABOLA
{
	int aCoeff,bCoeff,cCoeff;
	public:
	void fnSetValue(int,int,int);
	void fnShowValue();
	void fnAreaParabola(double,double);
	
};

void PARABOLA::fnSetValue(int aC,int bC,int cC)
{
	aCoeff=aC;
	bCoeff=bC;
	cCoeff=cC;
}

void PARABOLA::fnShowValue()
{
	cout<<"The family of curves that represent the parabola y="<<aCoeff<<"x^2+"<<bCoeff<<"x+"<<cCoeff<<endl;
}

void PARABOLA::fnAreaParabola(double ul,double ll)
{
	double dArea=aCoeff*(pow(ul,3)-pow(ll,3))/3 + bCoeff*(pow(ul,2)-pow(ll,2))/2 + cCoeff*(ul-ll);
	cout<<endl<<dArea<<" is the Area of the parabola under limits "<<ul<<","<<ll<<endl;
	
}

int main()
{
	PARABOLA p;
	int ia,ib,ic;
	double Ulimit,Llimit;
	cout<<"Enter the coefficient of Parabola of the form y=ax^2+bx+c\n";
	cin>>ia>>ib>>ic;
	
	p.fnSetValue(ia,ib,ic);
	p.fnShowValue();
	
	cout<<"Enter the upper and lower limits \n";
	cin>>Ulimit>>Llimit;
	
	p.fnAreaParabola(Ulimit,Llimit);
	
	return 0;
}
