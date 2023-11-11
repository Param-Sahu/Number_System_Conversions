#include<iostream>
#include<iomanip>
#include<cmath>
short int i=0;
long long int deci = 0, binary=0 ;
using namespace std;
long long int octdecimal(long long int n); //Function converts Octal number to Decimal number.
long long int decibin(long long int n); //Function converts Decimal number to Binary number.
long long int hexadeci(int hex[30],short int n); //Fucntion converts Hexadecimal number to Decimal number.
long long int bindeci(long long int n); //Function converts Binary number to Decimal number.
int main()
{  // Main function start.
    Program:
    	cout<<"\n\n\n\t\t\t\t\tWelcome to Number System Conversions."<<endl<<endl;
    	cout<<"\n\tEnter 1 for Binary Number Conversions. "<<endl;
    	cout<<"\n\tEnter 2 for Octal Number Conversions. "<<endl;
    	cout<<"\n\tEnter 3 for Decimal Number Conversions. "<<endl;
    	cout<<"\n\tEnter 4 for Hexadecimal Number Conversions. "<<endl;
    	
        int choice; 
	    long long int dec=0,oct=0,bin=0;
	    short int rem;       
	    cout<<"\n\n\t\tEnter Number to perform conversion : ";
	    cin>>choice;   // Taking input from user to perform number system conversions
	    cout<<endl;
	    switch(choice)
	    {
	    	case 1: //Binary to Other Numbers conversion.
	    		{
	    			cout<<"\t\t\tEnter Binary Number : ";
			        cin>>bin; //Taking input binary number.
			        
			        dec = bindeci(bin);
			        //Function converting binary number to decimal number.
			        if(dec==-1)
			            {
			            	break;
						}
			        cout<<"\n\n\t\t\t\tDecimal form of Binary number is : "<<dec<<endl; 
			        			        
			        cout<<"\n\n\t\t\t\tOctal form of Binary Number is : "<<setbase(8)<<dec<<endl;
			        
			        cout<<"\n\n\t\t\t\tHexadecimal form of Binary Number is : "<<setbase(16)<<dec<<endl;
		        	/* 
			            setbase function work only for base 8 and 16 .
			            i.e. setbase function convert direct decimal to octal number and decimal to hexadecimal number only.
		            */
	    		
				}break;
				
	    	case 2:
				{
					cout<<"\t\t\tEnter Octal Number : ";
	 	        	cin>>oct; //Taking input octal number.
	 	        		 	        	
	 	        	dec = octdecimal(oct); 
					 // Converting octal number to decimal number then decimal to binary and hexadecimal number.
					if(dec==-1)
					    {
						    break;
						}
				             
					cout<<"\n\n\t\t\t\tBinary form of Octal Number is : "<<decibin(dec)<<endl;
					//Function converts decimal to binary number. 
	 		
		        	cout<<"\n\n\t\t\t\tDecimal form of Octal Number is : "<<dec<<endl;	
			        					
					cout<<"\n\n\t\t\t\tHexadecimal form of Octal Number is : "<<setbase(16)<<dec<<endl;	  
		        	/* 
			            setbase function work only for base 8 and 16 .
			            i.e. setbase function convert direct decimal to octal number and decimal to hexadecimal number only.
		            */
		            
				}break;
			
			case 3:
				{
					cout<<"\t\t\tEnter Decimal Number : ";
			        cin>>dec;
			        	
	        		cout<<"\n\n\t\t\t\tBinary form of Decimal Number is : "<<decibin(dec)<<endl; 
	        		// Function converts decimal to binary.
	        		
	        		cout<<"\n\n\t\t\t\tOctal form of Decimal Number is : "<<setbase(8)<<dec<<endl;
	        		
	        	    cout<<"\n\n\t\t\t\tHexadecimal form of Decimal Number is : "<<setbase(16)<<dec<<endl;	  
		        	/* 
			            setbase function work only for base 8 and 16 .
			            i.e. setbase function convert direct decimal to octal number and decimal to hexadecimal number only.
		            */
		            
				}break;
			
			case 4:
				{
					int hexa[30], digit,i;
	         	    cout<<"\t\t\tEnter number of digits in Hexadecimal Number : ";
	        		cin>>digit; // taking how many digits present in hexadecimal number that will convert to binary.
	        		cout<<"\n\t\t\tNOTE : For A to F enter 10 to 15 respectively."<<endl;
					cout<<endl;
	        		for(i=0;i<digit;i++)
			        {  
			        	cout<<"\t\t\tEnter "<<i+1<<" digit of Hexadecimal Number (numbers only ,alphabet not allowed) : ";
			        	cin>>hexa[i];
			        	// User have to enter digits of hexadecimal number only in numbers form not alphabet.
				        // for A to F enter 10 to 15 digits respectively
			     	
				        if((hexa[i]<0)||(hexa[i]>15))
				            { 
					            cout<<"\t\t\tYou Entered wrong Hexadecimal Number. Program terminated automatically."<<endl;
					            goto end; // to end the program
				            }
		        	}
			        
			        dec = hexadeci(hexa,digit);//Converting Hexadecimal number to Decimal Number 
			        // Then convert decimal to binary and octal number .
			        
			        cout<<"\n\n\t\t\t\tBinary form of Hexadecimal Number is : "<<decibin(dec)<<endl; 
	        		// Function converts decimal to binary.
					 	
			        cout<<"\n\n\t\t\t\tDecimal form of Hexadecimal Number is : "<<dec<<endl;
			        //Function converting hexadecimal number to decimal number.
			        
			        cout<<"\n\n\t\t\t\tOctal form of Hexadecimal Number is : "<<setbase(8)<<dec<<endl;
			        /* 
			            setbase function work only for base 8 and 16 .
			            i.e. setbase function convert direct decimal to octal number and decimal to hexadecimal number only.
		            */
			        
			        end: //Label for End the Program
			        	;
				}break;
				
			default:
				{
					cout<<"\t\t\tYou entered wrong choice . Please Re-enter ."<<endl<<endl;
					goto Program;
				}
		}
			
}//End of main function.

long long int octdecimal(long long int n)
{ //Function converts Octal number to Decimal number.
	if(n>0)
	{
		short int rem=n%10;
		if(rem==8||rem==9)
		{
		    cout<<"\t\t\t\tYou Enterred wrong Octal Number."<<endl;
		    cout<<"\t\t\t\tOctal Number does not contain 8 or 9. Program terminated Automatically."<<endl<<endl;
		    i=0;
		    deci=0;
		    return -1;
	    }
	 
		deci+=rem*pow(8,i);	
		i++;
		n/=10;
		octdecimal(n);	 // Recursive Function
	}
	else
	{
		i=0;//Global variabe reset
		return deci;
	}
} // End of octdecimal function

long long int decibin(long long int n)
{//Function converts Decimal number to Binary number.
	if(n>0)
	{
		short int rem=n%2;
		binary+=rem*pow(10,i);	
		i++;
		n/=2;
		decibin(n);	 //Recursive Function
	}
	else
	{
		i=0;//Global variabe reset
		return binary;
	}
}// End of decibin function

long long int hexadeci(int hex[30],short int n)
{//Fucntion converts Hexadecimal number to Decimal number.
	if(n>0)
	{ 
	    deci+=hex[i]*pow(16,n-1);
	    n--;
	    i++;
	    hexadeci(hex,n); //Recursive Function
	}
	else
	{
		i=0;//Global variabe reset
	    return deci;
	}
}// End of hexadeci function

long long int bindeci(long long int n)
{//Function converts Binary number to Decimal number.
	if(n>0)
	{
		short int rem=n%10;
		if((rem!=0)&&(rem!=1))
		{
		    cout<<"\t\t\t\tYou Enterred wrong Binary Number."<<endl;
		    cout<<"\t\t\t\tBinary Number only contain 0 or 1. Program terminated Automatically."<<endl<<endl;
		    i=0;    //Global variable reset.
		    deci=0;  //Global variabe reset
		    return -1;
	    }	 
		deci+=rem*pow(2,i);	
		i++;
		n/=10;
		bindeci(n);	 //Recursive Function
	}
	else
	{
		i=0;     //Global variabe reset
		return deci;
	}
}// End of bindeci function
