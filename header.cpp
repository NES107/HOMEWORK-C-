#include "header.h"

void INPUTE(string &input, string &key)
{
    cout<<endl<<"Input decrypted text: "<<endl<< "->";
    getline(cin,input);
    getline(cin,input);
    cout<<"Input key(ex.3LTU): "<<endl<< "->";
    getline(cin,key);
}
void INPUTD(string &input, string &key)
{

    cout<<endl<<"Input encrypted text: "<<endl<< "->";
    getline(cin,input);
    getline(cin,input);
    cout<<"Input key(ex.3LTU): "<<endl<< "->";
    getline(cin,key);
}
void ENCRYPTION(vector<char> &outputv, vector<char> &keyv)
{
  	int x = (int)keyv[0] - 48;
    int y = keyv.size()-1;
	int n=1;

	for (int i=x-1;i<outputv.size();i++)
		{
		    outputv[i]=outputv[i]+keyv[n]-127+65;
            n++;
            if (n>y) n=1;
		}
	for (int i=0;i<x-1;i++)
		{
		    outputv[i]=outputv[i]+keyv[n]-127+65;
            n++;
            if (n>y) n=1;
		}
}
void DECRYPTION(vector<char> &inputv, vector<char> &keyv)
{
  	int x = (int)keyv[0] - 48;
    int y = keyv.size()-1;
	int n=1;

	for (int i=x-1;i<inputv.size();i++)
		{
		    inputv[i]=inputv[i]-keyv[n]+127-65;
            n++;
            if (n>y) n=1;
		}
	for (int i=0;i<x-1;i++)
		{
		    inputv[i]=inputv[i]-keyv[n]+127-65;
            n++;
            if (n>y) n=1;
		}
}
void OUTPUT(vector<char> inputv, vector<char> outputv, vector<char> keyv)
{
    cout<<endl<<"Decoded text: ";
	for(const char&c :inputv)
        cout<<c;
	cout<<endl<<"Code key: ";
	for(const char&c :keyv)
        cout<<c;
    cout<<endl<<"Encoded text: ";
	for(const char&c :outputv)
        cout<<c;
    cout<<endl<<endl;
}
