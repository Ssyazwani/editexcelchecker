#include <string>
#include <fstream>
#include <vector>
#include <utility>
#include <stdexcept>
#include <sstream> 

std::vector<std::pair<std::string, std::vector<int>>> read_csv(std::string filename)
using namespace std;



int main() {
    
  vector<pair<string, vector<int>>> file = read_csv("file.csv");
  
    return 0;
}
