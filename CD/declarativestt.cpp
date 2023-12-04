#include <bits/stdc++.h> 
using namespace std;

int main()
{
cout << "Enter C++ code: (Type 'exit' to stop)" << endl; while (true)
{
string line; cout << "> ";
getline(cin, line); if (line == "exit")
break;
regex declarationRegex("\\s*\\w+\\s+\\w+\\s*;|\\s*\\w+\\s+\\w+\\s*\\(.*\\)\\s*;");

if (regex_match(line, declarationRegex) && line.find("return") == string::npos && line.find("using namespace") == string::npos)
{
cout << "It is a declarative Statement" << endl;
}
else
{
cout << "It is not a declarative Statement" << endl;
}
}
return 0;
}

