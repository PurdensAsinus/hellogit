#include <string>
. . .
// declarations
string str1 = "hello";
string str2 = str1 + " world";

// printing
cout<< "str1 = " << str1 << endl;
cout<<"the 4th character is "<<str1[3]<<endl;
cout<<"str1 has "<<str1.size()<<" characters"<<endl;

// comparison coperators
if (str1=="hello")
    cout<<"hi there"<<endl;
if (str2!="world")
    cout<<"out of this world"<<endl;

// appending to a string
str2+="ly one";  //or str2 = str2 + "ly one!!"
