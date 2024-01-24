#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("my_file.txt");
if(!file)return 0;
std::string line;

while (std::getline(file, line, '\0')){
    for(char ascii : line){
        std::cout<<ascii << " ";
    }
}
system("pause");
return 0;
}