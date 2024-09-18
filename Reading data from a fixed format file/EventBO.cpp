#include<iostream>
#include<string>
#include<stdio.h>
#include<fstream>
#include<list>
#include<iterator>
#include"Event.cpp"
#include<sstream>
using namespace std;
class EventBO
{
        //fill your code here
         string* splitString(string str)//to read comma separated values
     {
        string* arr = new string[25];
        int i=0;
        string delimiter = ",";
        size_t pos = 0;
        string token;
        str+=",";
        while ((pos = str.find(delimiter)) != string::npos) 
        {
                token = str.substr(0, pos);
                arr[i]=token;
                str.erase(0, pos + delimiter.length());
                i++;
        }
            return arr; 
     }
};
