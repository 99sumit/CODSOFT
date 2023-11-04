#include <iostream>
#include <vector>
using namespace std;

struct Task {
    string description;
    bool completed;
};

void displayMenu() {
    cout << "To-Do List Manager" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Delete Task" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    vector<Task> tasks;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    Task task;
                    cout << "Enter task description: ";
                    cin.ignore();
                    getline(cin, task.description);
                    task.completed = false;
                    tasks.push_back(task);
                    cout << "Task added successfully." << endl;
                }
                break;

            case 2:
                if (tasks.empty()) {
                    cout << "No tasks to display." << endl;
                } else {
                    cout << "Tasks:" << endl;
                    for (size_t i = 0; i < tasks.size(); i++) {
                        cout << (i + 1) << ". ";
                        cout << (tasks[i].completed ? "[Done] " : "[  ] ");
                        cout << tasks[i].description << endl;
                    }
                }
                break;

            case 3:
                if (tasks.empty()) {
                    cout << "No tasks to delete." << endl;
                } else {
                    int taskIndex;
                    cout << "Enter the task number to delete: ";
                    cin >> taskIndex;

                    if (taskIndex > 0 && taskIndex <= static_cast<int>(tasks.size())) {
                        tasks.erase(tasks.begin() + taskIndex - 1);
                        cout << "Task deleted successfully." << endl;
                    } else {
                        cout << "Invalid task number." << endl;
                    }
                }
                break;

            case 4:
                cout << "See You Soon!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}
