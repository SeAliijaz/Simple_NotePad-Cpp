#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a Note class to hold note information
class Note {
public:
    string title;
    string content;

    // Constructor to create a new note with given title and content
    Note(string title, string content) {
        this->title = title;
        this->content = content;
    }
};

// Define a vector to hold notes
vector<Note> notes;

// Function to add a new note
void addNewNote() {
    string title, content;
    cout << "Enter title: ";
    getline(cin, title);
    cout << "Enter content: ";
    getline(cin, content);
    Note newNote = Note(title, content);
    notes.push_back(newNote);
    cout << "New note added successfully." << endl;
}

// Function to display a note with a given index
void displayNoteByIndex(int index) {
    if (index < 0 || index >= notes.size()) {
        cout << "Invalid index." << endl;
        return;
    }
    cout << "Title: " << notes[index].title << endl;
    cout << "Content: " << notes[index].content << endl;
}

// Function to update a note with a given index
void updateNoteByIndex(int index) {
    if (index < 0 || index >= notes.size()) {
        cout << "Invalid index." << endl;
        return;
    }
    string newTitle, newContent;
    cout << "Enter new title (leave blank to keep existing title): ";
    getline(cin, newTitle);
    cout << "Enter new content (leave blank to keep existing content): ";
    getline(cin, newContent);
    if (!newTitle.empty()) {
        notes[index].title = newTitle;
    }
    if (!newContent.empty()) {
        notes[index].content = newContent;
    }
    cout << "Note updated successfully." << endl;
}

// Function to delete a note with a given index
void deleteNoteByIndex(int index) {
    if (index < 0 || index >= notes.size()) {
        cout << "Invalid index." << endl;
        return;
    }
    notes.erase(notes.begin() + index);
    cout << "Note deleted successfully." << endl;
}

int main() {
    // Main loop to display menu and perform operations
    while (true) {
        cout << "Select an operation:" << endl;
        cout << "1. Add new note" << endl;
        cout << "2. Display note" << endl;
        cout << "3. Update note" << endl;
        cout << "4. Delete note" << endl;
        cout << "5. Exit" << endl;
        int choice;
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1: {
                addNewNote();
                break;
            }
            case 2: {
                int index;
                cout << "Enter note index: ";
                cin >> index;
                cin.ignore();
                displayNoteByIndex(index);
                break;
            }
            case 3: {
                int index;
                cout << "Enter note index: ";
                cin >> index;
                cin.ignore();
                updateNoteByIndex(index);
                break;
            }
            case 4: {
                int index;
                cout << "Enter note index: ";
                cin >> index;
                cin.ignore();
                deleteNoteByIndex(index);
                break;
            }
            case 5: {
                return 0;
            }
            default: {
            cout << "Invalid choice. Please try again." << endl;
            break;
            }
        }
    }
}
