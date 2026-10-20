#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
   
    std::vector<std::string> tasks; 
    cout << "Welcome to Task List Tool!" << endl << endl;
    string menu[4] = {"Add Task", "View Tasks", "Remove Task", "Quit"};
    cout << "Menu Options:" << endl;
        for (int i = 0; i < 4; i++){
            cout << (i + 1) << ". " << menu[i] << endl;
        }
    cout << endl << "Task list system initialized and ready!" << endl;
    int n = 0;
    while (n != 4)
    {
        cout << "Choose an option: ";

        cin >> n;
        cin.ignore();
        if (n == 1){  // added one element 
            string str;
            std::getline(cin,str); // read the element 
            tasks.push_back(str); // added element 
            cout << "Task " << "\"" << str << "\"" << " added successfully!" << endl;
            cout << "Total tasks: " << tasks.size() << endl;

        }else if (n == 2){ // View all the tasks
                    if (tasks.empty()){    // chek Not empty  
                        cout << "No tasks available." << endl;
                    }else{ // ptint all tasks
                        cout << "Your Tasks:" << endl;
                        for (int i = 0; i < tasks.size(); i++){
                        cout << (i + 1) << ". " << tasks[i] << endl;   
                        }
                        cout << "Total tasks: " << tasks.size() << endl;
                    }

        }else if (n == 3){ // Remove noe element 
                int taskNumber;
                cin >> taskNumber; // read element need Delete
                string temp;
                if (taskNumber > 0 && taskNumber <= tasks.size()){ // chek element not 0 
                temp = tasks[taskNumber - 1]; // save element delete
                tasks.erase(tasks.begin() + (taskNumber - 1 )); // delete element 
                cout << "Task " << "\"" << temp << "\"" << " removed successfully!" << endl;
                if (!(tasks.empty())){ // chek not empty
                cout << "Remaining Tasks:" << endl;
                for (int i = 0; i < tasks.size(); i++){
                    cout << (i + 1) << ". " << tasks[i] << endl;   
                }
                cout << "Total tasks: " << tasks.size() << endl;
                }else {
                cout << "No tasks remaining." << endl;
                cout << "Total tasks: " << tasks.size() << endl;
                }
                }else{
                cout << "Error: Invalid task number. Please enter a number between 1 and " << tasks.size() << "." << endl;
                }


        }else if (n == 4){ // chek Out 
            cout << "Thank you for using Task List Tool!" << endl;
            n = 4;
        }else{
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    
    return 0;   
}
