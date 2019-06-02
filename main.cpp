#include "header.h"                                             //Including additional files (Header and its cpp)
#include "header.cpp"

int main()
{
    string input,key;

    char choice1 = 'y';
    while(choice1!='n')                                         //Adding possibility to access program without reopening it
    {
        char choice2;
        cout<<"Encode or Decode(e/d): "<<endl<<"->";            //Adding several options (to encode and to decode)
        cin>>choice2;
        while(choice2 !='e' && choice2 !='d')
        {
            try                                                 //Error catching in terms of incorrect input
            {                                                   //with ability to reenter the value
                throw runtime_error("Error in input!(e/d)");
            }catch(const runtime_error &e)
            {
                cout<<e.what();
                cin.ignore(256,'\n');
                cout<<"Enter one more time:"<<endl<<"-> ";
                cin>>choice2;
            }
        }
        if(choice2=='e')                                        //Encoding the passed text
        {
            INPUTE(input, key);                                 //Calling input function
            vector<char> inputv(input.begin(),input.end());     //Creating vector of input values
            vector<char> outputv(input.begin(),input.end());    //Copying input values to modify them later
            vector<char> keyv(key.begin(),key.end());           //Creating vector from string of keys values
            ENCRYPTION(outputv, keyv);                          //Calling encoding function
            OUTPUT(inputv, outputv, keyv);                      //Calling output function
        }
        if(choice2=='d')                                        //Decoding the passed text
        {
            INPUTD(input, key);                                 //Calling input function
            vector<char> inputv(input.begin(),input.end());
            vector<char> outputv(input.begin(),input.end());
            vector<char> keyv(key.begin(),key.end());
            DECRYPTION(inputv, keyv);                           //Calling function to decode
            OUTPUT(inputv, outputv, keyv);                      //Calling output
        }
        cout<<"Try again(y/n): "<<endl<<"->";
        cin>>choice1;                                           //Adding possibility to access program without reopening it
        while(choice1 !='y' && choice1 !='n')
        {
            try                                                 //Error catching in terms of incorrect input
            {                                                   //with ability to reenter the value
                throw runtime_error("Error in input!(y/n)");
            }catch(const runtime_error &e)
            {
                cout<<e.what();
                cin.ignore(256,'\n');
                cout<<"Enter one more time:"<<endl<<"-> ";
                cin>>choice1;
            }
        }
    }
    return 0;
}
