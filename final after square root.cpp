#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
double add(double a1, double b1 , double c1 ,double &ans1)
{	
	char choice;	
	ans1=a1+b1;
	cout<<"Currunt Result is : "<<ans1<<endl;
	cout<<"Do you want to add another number (Y,y/N,n) ";
	cin>>choice;
	
	while(choice=='Y' ||choice=='y')
	{
		
		cout<<"Enter the number: ";
		cin>>c1;
		ans1+=c1;
		cout<<"Currunt Result is : "<<ans1<<endl;
		
		cout<<"Do you want to add another number (Y,y/N,n) "<<endl;
	    cin>>choice;
    }
}
double sub(double a2, double b2 , double c2 ,double &ans2)
{	
	char choice;	
	ans2=a2-b2;
	cout<<"Currunt Result is : "<<ans2<<endl;
	cout<<"Do you want to subtract another number (Y,y/N,n) ";
	cin>>choice;
	
	while(choice=='Y' ||choice=='y')
	{	
		cout<<"Enter the number: ";
		cin>>c2;	
		ans2-=c2;
		cout<<"Currunt Result is : "<<ans2<<endl;
		cout<<"Do you want to subtract another number (Y,y/N,n) ";
	    cin>>choice;		
	}
}
double multiplication(double a3, double b3 , double c3 ,double &ans3){
	
	char choice;	
	ans3=a3*b3;
	cout<<"Currunt Result is : "<<ans3<<endl;
	cout<<"Do you want to multiply another number (Y,y/N,n) ";
	cin>>choice;
	
	while(choice=='Y' ||choice=='y'){

		cout<<"Enter the number: ";
		cin>>c3;
		ans3*=c3;
		cout<<"Currunt Result is : "<<ans3<<endl;
		cout<<"Do you want to multiply another number (Y,y/N,n) ";
	    cin>>choice;	
	}
}
double division(double a4, double b4 , double c4 ,double &ans4){
	
	char choice;	
	ans4=a4/b4;
	cout<<"Currunt Result is : "<<ans4<<endl;
	cout<<"Do you want to divide another number (Y,y/N,n) ";
	cin>>choice;
	
	while(choice=='Y' ||choice=='y'){

		cout<<"Enter the number: ";
		cin>>c4;
		ans4/=c4;
		cout<<"Currunt Result is : "<<ans4<<endl;
		cout<<"Do you want to divide another number (Y,y/N,n) ";
	    cin>>choice;
	}
}

double fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
    return n*fact(n-1);
    }
}
double power(double base, int exp)
{
    double result = 1;           

    if (exp > 0){
        for (int i = 0; i < exp; ++i){
            result*= base;
        }
    } else if (exp < 0){
        for (int i = 0; i > exp; --i) {
            result/= base;
        }
    }

    return result;
}
int mod(int a,int b)
{
	int ans=a%b;
	return ans;
}
float percen(float a,float b)
{
	float ans=a/b*100;
	return ans;
}
double cos(double a)
{
	double cosx=0;
	for(int i=0;i<=15;i++)
	{
		cosx+=(power(-1,i)*power(a,2*i))/fact(2*i);
	}
	return cosx;
}
double  sin(double x) {
	int o=1;
    double sine = 0;
    for (int n = 0;n<=15;n++) {
        sine =sine+ ((power(-1, n) * power(x, o))) / fact(o);
        o=o+2;
    }
    return sine;
}
double ln(double x) {

    if (x <= 0.0) {
        cout<<"Invalid ";
    }
    double result = 0.0;
    double term = (x - 1) / (x + 1);
    double term_squared = term * term;
    double numerator = term;
    int n = 1;
    while (true) {
        result += numerator / n;
        numerator *= term_squared;
        n += 2;
        if (n > 1000) {
            break;
        }
    }
}
    double squareRoot(double n) {
    if (n == 0 || n == 1) {
        return n;
    }

    double x = n;
    double y = 1;
    double epsilon = 0.000001; // Precision

    while (x - y > epsilon) {
        x = (x + y) / 2;
        y = n / x;
    }

    return x;
}
int main()
{
   int choice;
   
   cout<<"--------------------------------------"<<endl;;
   cout<<"         WELCOME TO CALCULATOR        "<<endl;
   cout<<"--------------------------------------\n"<<endl;
   cout<<"1.Addition \t\t 2.Subtraction"<<endl;
   cout<<"3.Multiplication \t 4.Division"<<endl;
   cout<<"5.Exponent \t\t 6.Factorial"<<endl;
   cout<<"7.Modulus \t\t 8.Percentage"<<endl;
   cout<<"9.Permutation \t\t 10.Combination"<<endl;
   cout<<"11.Sin \t\t\t 12.Cos"<<endl;
   cout<<"13.Tan \t\t\t 14.Sec"<<endl;
   cout<<"15.Cosec \t\t 16.Cot"<<endl;
   cout<<"17.Natural logarithm \t 18.Square Root"<<endl;
   cout<<"19.Exit\n\n";
   cout<<"Which operation do you want to perform: ";
   cin>>choice;
   cout<<endl;
   
   switch(choice)
   {
   	case 1:
   			double a1,b1,c1,ans1;
	        cout<<"Enter the first number : ";
	        cin>>a1;
	        cout<<"Enter the second number : ";
	        cin>>b1;
	        add(a1,b1,c1,ans1);
	        cout<<"Final answer : "<<ans1<<endl;
	        break;
	
	
	case 2:
	        double a2,b2,c2,ans2;
	        cout<<"Enter the first number : ";
	        cin>>a2;
	        cout<<"Enter the second number : ";
	        cin>>b2;
	        sub(a2,b2,c2,ans2);
	        cout<<"Final answer : "<<ans2<<endl;
	        break;
		
	
	case 3:
			double a3,b3,c3,ans3;
	        cout<<"Enter the first number : ";
	        cin>>a3;
	        cout<<"Enter the second number : ";
	        cin>>b3;
	        multiplication(a3,b3,c3,ans3);
	        cout<<"Final answer : "<<ans3<<endl;
	        break;
	
	
	case 4:
			double a4,b4,c4,ans4;
	        cout<<"Enter the first number : ";
	        cin>>a4;
	        cout<<"Enter the second number : ";
	        cin>>b4;
	        division(a4,b4,c4,ans4);
			cout<<"Final answer : "<<ans4<<endl;
			break;
		
   	case 5:
   		  double base,exp,ans5;
	      cout<<"Enter the base: ";
		  cin>>base;	
		  cout<<"Enter exponent: ";
		  cin>>exp;
		  ans5=power(base,exp);
		  cout<<base<<"^"<<exp<<"="<<ans5;
		  break;
		  
		  
   	case 6:
   		int c6,ans6;
   		cout<<"Choose the number for factorial: ";
   		cin>>c6;
   		ans6=fact(c6);
   		cout<<"The factorial of "<<c6<<" "<<"is: "<<ans6<<endl;
        break;
        
        
    case 7:
    	int n7,n71;
    	cout<<"Enter first number: ";
    	cin>>n7;
    	cout<<"Enter second number: ";
    	cin>>n71;
    	cout<<"The modulus is: "<<mod(n7,n71);
    	break;
    	
    	
    case 8:
	    float n8,n81;
		cout<<"Enter numerator number: ";
		cin>>n8;
		cout<<"Enter denominator number: ";
		cin>>n81;
		cout<<endl;
		cout<<"The percentage is: "<<percen(n8,n81);
		cout<<"%";
		break;
		
			
    case 9:
    	int p9,b9;
    	cin>>p9;
    	cout<<" P"<<endl;
    	cout<<"  ";
    	cin>>b9;
    	if(b9>p9)
    	{
    		cout<<"Invalid input"<<endl;
		}
		else
		{
    	cout<<p9<<"P"<<b9<<"="<<fact(p9)/fact(p9-b9);
        }
        break;

    	
    case 10:
    	int p10,b10;
    	cin>>p10;
    	cout<<" C"<<endl;
    	cout<<"  ";
    	cin>>b10;
    	if(b10>p10)
        {
        	cout<<"Invalid input"<<endl;
		}
		else
		{
    	cout<<p10<<"C"<<b10<<"="<<fact(p10)/(fact(b10)*fact(p10-b10));
        }
        break;
        	    
	case 11:
        double angle,angle2;
        cout << "Enter the angle in degrees: ";
        cin >> angle;
        cout<<endl;
        while(angle>=360)
		{
        angle=angle-360;
        }
        angle2=angle*(3.141592654 / 180); 
        cout<<fixed<<setprecision(5);
        cout<<"The sine of the angle is: "<<sin(angle2)<<endl;
		break;
		
		  
    case 12:
    	double angle1,t;
    	cout<<"Enter the angle in degrees: ";
    	cin>>angle1;
    	cout<<endl;
    	while(angle1>=360)
		{
        angle1=angle1-360;
        }
    	t=(angle1*3.141592654/180);
    	cout<<fixed<<setprecision(5);
    	cout<<"The cosine of the angle is: "<<cos(t)<<endl;
    	break;
		
		
	case 13:
	    double a13,b13,c13,d13;
	    cout<<"Enter the angle in degrees: ";
    	cin>>a13;
    	cout<<endl;
    	while(a13>=360)
		{
        a13=a13-360;
        }
    	b13=(a13*3.141592654/180);
    	c13=sin(b13);
    	d13=cos(b13);
    	cout<<fixed<<setprecision(5);
    	if(a13==90 || a13==270)
    	{
    	cout<<"The tangent of the angle is: inf"<<endl;
		}
    	else
    	{
    	cout<<"The tangent of the angle is: "<<c13/d13<<endl;
        }
    	break;
		 
		
	case 14:
		double a14,b14,c14;
	    cout<<"Enter the angle in degrees: ";
    	cin>>a14;
    	cout<<endl;
    	while(a14>=360)
		{
        a14=a14-360;
        }
    	b14=(a14*3.141592654/180);
    	cout<<fixed<<setprecision(5);
    	c14=cos(b14);
    	cout<<"The secant of the angle is: "<<1/c14<<endl;
    	break; 
    	
		
	case 15:
	    double a15,b15,c15;
	    cout<<"Enter the angle in degrees: ";
    	cin>>a15;
    	cout<<endl;
    	while(a15>=360)
		{
        a15=a15-360;
        }
    	b15=(a15*3.141592654/180);
    	cout<<fixed<<setprecision(5);
    	c15=sin(b15);
    	cout<<"The cosecant of the angle is: "<<1/c15<<endl;
    	break; 
		
		
	case 16:
		double a16,b16,c16,d16;
	    cout<<"Enter the angle in degrees: ";
    	cin>>a16;
    	cout<<endl;
    	while(a16>=360)
		{
        a16=a16-360;
        }
    	b16=(a16*3.141592654/180);
    	c16=sin(b16);
    	d16=cos(b16);
    	cout<<fixed<<setprecision(5);
    	if(a16==0 || a16==180)
    	{
    	cout<<"The tangent of the angle is: inf"<<endl;
		}
    	else
    	{
    	cout<<"The tangent of the angle is: "<<d13/c13<<endl;
        }
    	break;
	
	
	case 17:
		double a17;
		cout<<"Enter the number: ";
		cin>>a17;
		if(a17<=0)
		{
			cout<<"Invalid";
		}
		else
		{
		    cout<<"The natural logarithm of the number is: "<<ln(a17);
	    }
	break;
	
	
	case 18:
       double num18;
        cout << "Enter a number: ";
        cin >> num18;

        if (num18 >= 0) {
            double sqrtValue = squareRoot(num18);
            cout << "Square root of " << num18 << " is: " << sqrtValue << endl;
        } else {
            cout << "Cannot calculate square root of a negative number." << endl;
        }
        break;
}
}
