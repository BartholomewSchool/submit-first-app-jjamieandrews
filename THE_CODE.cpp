#include <iostream>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
using namespace std;

//first define the strucure of each class

class person {
    public:
        string firstname;
        string lastname;
        string age;
        string postcode;
        
        string output_all() {
            cout<<firstname<<endl;
            cout<<lastname<<endl;
            cout<<age<<endl;
            cout<<postcode<<endl;
        }
        //an array with all the info 
        string objarray[4] = {firstname, lastname, age, postcode};
};

int main() {

//start by defining the 2D array which will hold 'objarray's for each object 
    string array_array[][4] = {};
//then a quick opiton for the user: add contacts or search for info?
    int i = 0;
    while (i < 1) {
        cout<<"Do you want to add contacts('add') or search through list('search')?"<<endl;
        string choice;
        cin>>choice;
        if (choice == "add") {
        //breaks the loop
            i = 1;
            //asks the user to give the info for each contact 
            cout<<"To add a person, type the info next to the name, if you want to leave it blank, use a '/'"<<endl;
            cout<<"first name:"<<endl;
            string user_firstname; 
            string *first_pt;
            first_pt = &user_firstname;
            cin>>user_firstname;
            cout<<"last name:"<<endl;
            string user_lastname; 
            cin>>user_lastname;
            cout<<"age:"<<endl;
            string user_age; 
            cin>>user_age;                       //FIRST PROBLEM: Line 55 
            cout<<"postcode:"<<endl;             
            string user_postcode;                //After retrieveing all the info from the user
            cin>>user_postcode;                  //the main problem was to create an object
                                                 //using a variable (user_firstname)
            obj_name = user_firstname;            
            person obj_name;
            obj_name.firstname = user_firstname;
            obj_name.lastname = user_lastname;
            obj_name.age = user_age;
            obj_name.postcode = user_postcode;
            array_array.push_back(obj_name.objarray) 
            
        
        }
        //what will happen if the user wanted to 'search'
        else if (choice == "search") {
            //breaks the loop
            i = 1;
            //asks the user for the item to search
            j = 0;
            while (j < 1) {
                string check;
                cout<<"Please enter the name or item to search"<<endl;
                cin>>check;
                
                //takes the inputed value and checks it through 'array_array', which SHOULD hold all of the info in each 'objarray'
                
                bool exists = std::find(std::begin(my_array), std::end(my_array), check) != std::end(array_array);
                
                //if the inputed value exists in an object
                if (exists) {                                             //SECOND PROBLEM: Line 78
                    //breaks the loop at line 71
                    j = 1                                                 //I have created a 2D array ('array_array') which will store
                //for each object that has that value, output all info    //each 'objarray' for each object (the 'objarray' containing all
                    for (a = 0, a < len(array_array), a++) {              //the values in that object). However I couldnt access those 
                        cout<<person.firstname<<endl;                     //specific 'objarray's for each object outside the class. 
                        cout<<"\n"<<endl;                                 
                        cout<<"Firstname:"<<person.firstname<<endl;
                        cout<<"Lastname:"<<person.lastname<<endl;
                        cout<<"Age:"<<person.age<<endl;
                        cout<<"Postcode:"<<person.postcode<<endl;
                    };
                } 
                //error message
                else {
                    cout<<"Sorry that contact or contact info is not in your list";
                    //continues loop, back to the start of loop
                    continue;
                };
        
            }
        //error message    
        else {
            cout<<"Im sorry, I didnt understand. Please try again"<<endl;
            //continues loop, back to the start of loop
            continue;
        }
    }
}
    
