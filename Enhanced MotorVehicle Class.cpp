//#include <automobile.h>

// initialie the static member variables
// outside of the main function before
// any objects are created
#include<iostream>
using namespace std;
int vehicles::count = 0;
int watercraft::wcount = 0;
int automobile::acount = 0;

// start main function
int main()
{
   // declare an output file name
   string outputFilename = "results.txt";

   // create object 1 for the watercraft class
   watercraft boat1;
   boat1.printToFile(outputFilename);

   // create object 2 for the watercraft class
   watercraft boat2;
   boat2.setEngine("Yamaha 115 HP");
   boat2.setSeats(10);
   boat2.setWeight(5200);
   boat2.setHull("Fiberglass");
   boat2.setManufacture("Sea Ark Boats");
   boat2.printToFile(outputFilename);

   // create object 1 for the automobile class
   automobile car1;
   car1.printToFile(outputFilename);
  
   // create object 2 for the automobile class
   automobile car2;
   car2.setEngine("3A90 I3");
   car2.setSeats(5);
   car2.setWeight(2072);
   car2.setMake("Mirage");
   car2.setModel("Mitsubishi");
   car2.setWheels(4);
   car2.printToFile(outputFilename);

   // create object 3 for the automobile class
   automobile car3("Honda", "Accord");
   car3.printToFile(outputFilename);

   // create object 3 for the watercraft class
   watercraft boat3;
   boat3 = boat2;
   boat3.printToFile(outputFilename);

   // create object 4 for the automobile class
   automobile car4;  
   car4 = car2;
   car4.printToFile(outputFilename);

   // print how many objects are made to the output file
   ofstream outfile;
   outfile.open(outputFilename, ios::app);
   outfile << "Vehicles created: " << vehicles::count << endl;
   outfile << "Automobiles created: " << automobile::acount << endl;
   outfile << "Watercraft created: " << watercraft::wcount << endl;
   outfile.close();

   return 0;