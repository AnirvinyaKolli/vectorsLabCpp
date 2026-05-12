#include <vector>
#include <iostream>
#include <string>
#include <limits>

void greet(std::vector<std::string> names);

void tenNums();
void customVector();
void faveColor();
void names();

int main(){
    tenNums();
    customVector();
    faveColor();
    names();
}

void greet(std::vector<std::string> names){
    std::cout <<"Hi,";
    for(std::string name : names) std::cout << name << " ";
    std::cout << std::endl;
}

void tenNums(){
    // 1
    std::vector<int> tenNums = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "Third number (index 2) " << std::endl;
    std::cout << tenNums.at(2) << std::endl;
    tenNums.pop_back();
    std::cout << "All nums: " << std::endl;
    for (int n : tenNums ){
        std::cout << n << " "; 
    }
    std::cout << std::endl;
}
void customVector(){
    // 2
    std::cout << "Make a vector \n"; 
    std::vector<int> customVect; 
    char cont = 'y';
    while(cont != 'n'){
        int val;
        std::cout << "Add a value: ";
        std::cin >> val;
        customVect.push_back(val); 
        std::cout << "Continue? (y/n): ";
        std::cin >> cont;
    }
    std::cout << "All nums: " << std::endl;
    for (int n : customVect ){
        std::cout << n << " "; 
    }
    std::cout << std::endl;
    std::cout << "Size of vector: " << customVect.size() << std::endl;
}
void faveColor(){
    // 3
    std::vector<std::string> colors; 
    char cont = 'y';
    while(cont != 'n'){
        std::string col;
        std::cout << "Enter a color: ";
        std::cin >> col;
        colors.push_back(col); 
        std::cout << "Continue? (y/n): ";
        std::cin >> cont;
    }
    std::cout << "All colors: " << std::endl;
    for (std::string n : colors ){
        std::cout << n << " "; 
    }
    std::cout << std::endl;
}
void names(){
    int numOfNames; 
    std::cout << "How many names: ";
    std::cin >> numOfNames;
    std::vector<std::string> names; 
    for (int i = 0; i < numOfNames; i++) {
        std::string name;
        std::cout << "Enter " << i+1 << " name: ";
        std::cin >> name;
        names.push_back(name); 
    }
    greet(names);
}
