#include <iostream>
#include <string.h>
#include <iomanip> // std::setw


using namespace std;

void output(char loafShape, char baking, char typeBread)
{
if (tolower(typeBread) == 'w')
{
cout<< "Primary kneading: 15 minute" <<endl;
}
else if (tolower(typeBread) == 's')
{
cout<< "Primary kneading: 20 minute" <<endl;
}

cout<< "Primary rising: 60 minutes " <<endl;

if (tolower(typeBread) == 'w')
{
cout<< "Secondary kneading: 18 minutes" <<endl;
}
else if (tolower(typeBread) == 's')
{
cout<< "Secondary kneading: 33 minutes" <<endl;
}


if (tolower(typeBread) == 'w')
{
cout<< "Secondary rising: 20 minutes" <<endl;
}
else if (tolower(typeBread) == 's')
{
cout<< "Secondary rising: 30 minutes" <<endl;
}

cout<< "Loaf shaping: 2 seconds" <<endl;



if (tolower(baking) == 'y')
{
cout <<"You should remove the dough for manual baking." <<endl;
return ;
}


cout<< "Final rise for 75 mins" <<endl;

if (tolower(typeBread) == 'w' && tolower(loafShape) == 'd')
{
cout<< "Baking: 67 minutes 30 seconds" <<endl;
}
else if (tolower(typeBread) == 'w' && tolower(loafShape) == 's')
{
cout<< "Baking: 45 minutes" <<endl;
}
else if (tolower(typeBread) == 's' && tolower(loafShape) == 'd')
{
cout<< "Baking: 52 minutes 30 seconds" <<endl;
}
else if (tolower(typeBread) == 's' && tolower(loafShape) == 's')
{
cout<< "Baking: 35 minutes" <<endl;
}


cout<< "Cooling: 30 minutes" <<endl;
}


int main()
{
char loafShape;
char baking;
char typeBread;

cout<< "Are you making white or sweet bread (w or s)? ";
cin>> typeBread;
cout<< "Is this a single or double loaf (s or d)? ";
cin>> loafShape;

cout<< "Are you going to bake manually (y or n)? ";
cin>> baking;

// input validation
if(tolower(typeBread) != 'w' && tolower(typeBread) != 's')
{
cout << "Invalid Input\n";
return 0;
}
if(tolower(loafShape) != 's' && tolower(loafShape) != 'd')
{
cout << "Invalid Input\n";
return 0;
}

if(tolower(baking) != 'y' && tolower(baking) != 'n')
{
cout << "Invalid Input\n";
return 0;
}

output(loafShape,baking,typeBread);
//end
return 0;
}
