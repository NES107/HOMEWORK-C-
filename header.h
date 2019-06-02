#ifndef HEADER_H_INCLUDED                           //Defining file relation
#define HEADER_H_INCLUDED

#include <iostream>                                 //For general commands
#include <vector>                                   //For vector implementation
#include <string>                                   //For string executing
#include <stdexcept>                                //For exception handling

using namespace std;

void INPUTE(string &input, string &key);                                        //function for encode input
void INPUTD(string &input, string &key);                                        //function for decode input
void ENCRYPTION(vector<char> &outputv, vector<char> &keyv);                     //function for encode itself
void DECRYPTION(vector<char> &inputv, vector<char> &keyv);                      //function for decode itself
void OUTPUT(vector<char> inputputv, vector<char> outputv, vector<char> keyv);   //Representation of results

#endif // HEADER_H_INCLUDED
