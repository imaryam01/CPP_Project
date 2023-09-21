#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

int main() {
    char Name[15];
    int std;
    char section;
    
    cin >> Name;
    cin >> std;
    while (cin.get() != '\n'); // Clear input buffer
    cin >> section;
    while (cin.get() != '\n'); // Clear input buffer

    int math, hindi, eng, sst, science;  
    
    cout << "Enter Math Mark: ";
    cin >> math;
    
    cout << "Enter Hindi Mark: ";
    cin >> hindi;
    
    cout << "Enter English Mark: ";
    cin >> eng;
    
    cout << "Enter Social Science Mark: ";
    cin >> sst;
    
    cout << "Enter Science Mark: ";
    cin >> science; 
    
    cout << " .......Generating Report Card.......\n";
    usleep(100000);
    cout << "------------------------------------------------\n";
    cout << "          Jawahar Navodaya Vidyalaya           \n\n ";
    cout << "             Annual Report Card            \n\n";
    
    cout << "Name:    " << Name << "\n";
    while (cin.get() != '\n');                                // Clearing input buffer
    
    cout << "Standard:" << std << "\n";
   
    cout << "Section: " << section << "\n";
    
    cout << " Marks secured out of 100\n";
    
    cout << " Mathematics:     " << math << "\n\n ";
    
    cout << "Hindi:           " << hindi << "\n\n ";
    
    cout << "English:         " << eng << "\n\n ";
    
    cout << "Social Science:  " << sst << "\n\n ";
    
    cout << "Science:         " << science << "\n \n\n";
    
    usleep(300000);
    
    int t_marks = math + hindi + eng + sst + science;
    
    cout << " Total Marks Secured : " << t_marks << "\n";
    
    usleep(100000);
    
    if (t_marks >= 450 && t_marks <= 500) {
        cout << "  Grade : A\n\n";
        cout << "------------------------------------------------\n";
        while (cin.get() != '\n');  //clearing input buffer
    }
    else if (t_marks >= 400 && t_marks <= 449) {
        cout << "  Grade : B\n\n";
        cout << "------------------------------------------------\n";
        while (cin.get() != '\n'); 
    }
    else if (t_marks >= 350 && t_marks <= 399) {
        cout << "  Grade : C\n\n";
        cout << "------------------------------------------------\n";
        while (cin.get() != '\n'); 
    }
    else if (t_marks >= 300 && t_marks <= 349) {
        cout << "  Grade : D\n\n";
        while (cin.get() != '\n'); 
    }
    else if (t_marks >= 200 && t_marks <= 299) {
        cout << "  Grade : E\n\n";
        cout << "------------------------------------------------\n";
        while (cin.get() != '\n');
    }
    else {
        cout << "Grade : F\n";
       
       cout << "------------------------------------------------\n";
    }
    
  
    
    return 0;
}

