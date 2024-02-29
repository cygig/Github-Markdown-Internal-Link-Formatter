/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cctype>
#include <list>
using namespace std;

const char VERSION[]="v0.1.0";

void formatter()
{
    string input, output="";
    
    cout << "Enter the heading, without the # and space in front:" << endl;
    
    // Need use getline, directly cin will ignore spaces
    getline(cin, input);
    
    cout << endl;
    
    // Conver all spaces to hypens, alll upper to lower case.
    for(int i=0; i<input.length();i++)
    {
        char c = input[i];
        
        // Early continue if c is not letters, numbers or space
        if ( !isalnum(c) && c!=' ') continue;
        
        
        if ( c == ' ') c = '-';
            
        else c = tolower(c);
            
        output += c;
            
    }
    
    output = "[" + input + "](#" + output + ")";
    
    cout << "Formatted Markdown link: " << endl
	     << output << endl << endl
		 << "----------" << endl << endl;	
}

void header()
{
	cout << "Github Markdown Internal Link Formatter" << endl
		 << "=======================================" << endl
		 << "by cygig " << VERSION << endl << endl
		 << "Github is able to generate anchors from headings, "
		    "but the generated anchor names may not be intuitive to write out.\n"
			"Hence this program will help format the heading into a clickable link."
		 << endl << endl
		 << "----------"
		 << endl << endl; 
}


int main()
{
	header();
	while(true) formatter();

}


