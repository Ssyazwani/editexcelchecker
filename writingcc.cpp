#include <fstream>
using namespace std;

int main() {

    ofstream myFile("testingwriting.csv");
    
   
    myFile << "1\n";
    myFile << "2\n";
    myFile << "3\n";
    
   
    myFile.close();
    
    return 0;
}