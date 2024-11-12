
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int global_gpa;
int ids;
using namespace std;

//class for working on gpa

class GPA {
  public:
    double gpa=0,crh=0;
    GPA(double courses[],int cr[],int courses_number) {
      for(int i=0; i<courses_number; i++) {
        gpa=gpa+courses[i]*cr[i];
        crh=crh+cr[i];
      }
      gpa=gpa/crh;
      cout<<"Your GPA is: " <<gpa;
      global_gpa=gpa;
    }
};

//function to provide data for gpa calculator class
void gpa_help(string courses[], int cr[], int courses_number) {
  double course[courses_number];
  for (int j = 0; j < courses_number; j++) {
    if (courses[j] == "A+") {
      course[j] = 4.0;
    } else if (courses[j] == "A") {
      course[j] = 4.0;
    } else if (courses[j] == "A-") {
      course[j] = 3.75;
    } else if (courses[j] == "B+") {
      course[j] = 3.5;
    } else if (courses[j] == "B") {
      course[j] = 3.0;
    } else if (courses[j] == "B-") {
      course[j] = 2.75;
    } else if (courses[j] == "C+") {
      course[j] = 2.5;
    } else if (courses[j] == "C") {
      course[j] = 2.0;
    } else if (courses[j] == "C-") {
      course[j] = 1.75;
    } else if (courses[j] == "D+") {
      course[j] = 1.5;
    } else if (courses[j] == "D") {
      course[j] = 1.0;
    } else {
      course[j] = 0.75;
    } 
  }
  // Rest of your code...
  GPA(course,cr,courses_number);
}

//function to work on freshman help section
void freshman_help() {
  cout << "===welcome to fresh help section...===\n";
  cout << "select the option below: \nonly input the number!\n" << endl;
  cout << "1) Books & References\n2) Youtube Channels\n3) Useful Maps\n4) Advise\n5) GPA calculator\n";
  int option;
  cout<<"=> ";
  cin >> option;
  if (option == 1) {
    cout <<"\nTo directly download books and references visit:\n1) Books: https://fresh-help.netlify.app/books.html \n\n";
  } else if (option == 2) {
    cout << "\nImportant Youtube channels: \n";
    cout << "1. http://www.youtube.com/@TheOrganicChemistryTutor \n";
    cout << "2. http://www.youtube.com/@fortinoacademics \n\n";
  } else if (option == 3) {
    cout << "\nRegistrar: https://maps.app.goo.gl/kJ2RtQAufTNGFsTF7 \n";
    cout << "Workshop: https://maps.app.goo.gl/Yu6BnAHYs3LjxU9H8 \n";
    cout << "Library: https://maps.app.goo.gl/RnJK9tFtT1kf6n5Q9 \n";
    cout << "Clinic: https://maps.app.goo.gl/MkkW8BfYKypzGjKt6 \n";
    cout << "Cafe: https://maps.app.goo.gl/2Xp8gAna2ZoyuwHx6 \n\n";
  } else if (option == 4) {
    cout<<"\nSite: https://fresh-help.netlify.app/advise.html \n\n";
  } else if (option == 5) {
      cout << "\nEnter data as required...\n\n";
        int size;
        cout << "Enter the number of courses: ";
        cin >> size;

       string course_names[size];
       string course_marks[size];
        int credit_hours[size];

        cout << "Enter the course name, mark, and credit hours for each course:\n";
        for (int k = 0; k < size; k++) {
            cout << "Course " << k + 1 << ":\n";
            cout << "Enter the course name: ";
            cin.ignore();
            getline(cin, course_names[k]);
            cout << "Enter the course mark: ";
            cin >> course_marks[k];
            cout << "Enter the credit hours: ";
            cin >> credit_hours[k];
        }

        gpa_help(course_marks, credit_hours, size);
    } else {
       cout << "Invalid input." << endl;
    }
}

// Structure to store student information
struct Student {
  string Fname;
   string Lname;
  string id;
 // string department;
};


//function for assigning materials to each year and departmnet
void assign_material(int a) {
  if(a==2) {
    cout<<"Books Below can be purchased from amazon store:\n\n";
    cout<<"Clean Code: A Handbook of Agile Software Craftsmanship\nDesign Patterns: Elements of Reusable Object-Oriented Software\nPatterns of Enterprise Application Architecture\nEnterprise Integration Patterns\nCode Complete: A Practical Handbook of Software Construction\n";
    cout<<"\nTo purchase or get hardcopies of different materials: \n";
    cout<<"\nLocation 1: https://maps.app.goo.gl/NhdHYg72NA5yNvL59 \n";
    cout<<"Location 2: https://maps.app.goo.gl/iKbs7JhHE1mQ3UnA7 \n\n";
    
  }
}

// Function to register a new student
void registerStudent(Student* student) {
  cout << "Please register your information" << endl;
  cout << "Enter student  F.name: ";
  cin.ignore();
  getline(cin, student->Fname);
  cout<<endl;
   cout << "Enter student L.name: ";

  getline(cin, student->Lname);
  
  cout << "Enter student ID: ";
     cin>>student->id;
  cout << endl;

}

// Function to recommend materials to a student
void recommendMaterials(int choice) {
  string departments[12] = {
    "Software Engineering",
    "Computer Science",
    "Biomedical Engineering",
    "Chemical Engineering",
    "IT",
    "Material",
    "Hydraulics",
    "Electrical Engineering",
    "Mechanical Engineering",
    "Water Supply",
    "Architecture",
    "IS"
  };

  string books[12] = {
    "\nSoftware Engineering\nClean Code: A Handbook of Agile Software Craftsmanship\nDesign Patterns: Elements of Reusable Object-Oriented Software\nPatterns of Enterprise Application Architecture\nEnterprise Integration Patterns\nCode Complete: A Practical Handbook of Software Construction\n",
    "\nComputer Science\nConsists of: Studying algorithms, data structures, programming languages, and computational theory.\nPurpose: Understanding computation and solving complex problems using computers.\n- Material Requirements:\n- Laptop/desktop: ETB8000 - ETB150000\n- Books and reference materials: ETB200 - ETB5000 per semester\n- Advice: Master fundamental concepts, engage in coding projects, and explore areas like artificial intelligence, cybersecurity, and data science.",
    "\nBiomedical Engineering\n- Consists of: Applying engineering principles to healthcare and medical technologies.\n- Purpose: Designing medical devices, prosthetics, and diagnostic equipment to improve healthcare.\n- Material Requirements:\n- Specialized software (e.g., CAD, simulation tools): ETB1000\n- Laboratory equipment (e.g., microscopes, sensors): ETB 1000 - ETB 5000\n- Advice: Gain knowledge in biology, physiology, and engineering principles. Hands-on experience in laboratories is crucial.",
    "\nChemical Engineering\n- Consists of: Studying chemical processes, materials, and reactions.\n- Purpose: Designing and optimizing processes for the production of chemicals, fuels, and pharmaceuticals.\n- Material Requirements:\n- Laboratory glassware and equipment: ETB10000 - ETB50000\n- Chemicals and reagents: Cost varies depending on specific experiments\n- Advice: Develop strong analytical and problem-solving skills. Gain practical experience through internships or research projects.",
    "\nInformation Technology\n- Consists of: Managing and utilizing technology to store, retrieve, and transmit information.\n- Purpose: Supporting organizational operations, managing networks, and implementing IT solutions.\n- Material Requirements:\n- Laptop/desktop:ETB 8000-150000\n- Networking equipment (e.g., routers, switches): ETB500 - ETB1000\n- Advice: Focus on network administration, cybersecurity, database management, and cloud computing.",
    "\nMaterial Engineering\n- Consists of: Studying the properties, structure, and processing of materials.\n- Purpose: Developing new materials for various applications, including construction, electronics, and aerospace.\n- Material Requirements:\n- Laboratory equipment (e.g., microscopes, spectrometers): ETB5000\n- Raw materials for experiments: Cost varies depending on materials\n- Advice: Gain knowledge in chemistry, physics, and materials science. Hands-on experience with material testing is essential.",
    "\nHydraulics\n- Consists of: Studying the behavior and use of fluids in engineering applications.\n- Purpose: Designing hydraulic systems for various purposes, including transportation, construction, and environmental engineering.\n- Material Requirements:\n- Hydraulic pumps, valves, and ETB2000\n- Laboratory equipment for fluid dynamics experiments: ETB1000 - ETB5000\- Advice: Focus on fluid mechanics, hydraulic system design, and computational fluid dynamics (CFD).",
    "\nElectrical Engineering\n- Consists of: Studying electrical circuits, systems, and devices.\n- Purpose: Designing and optimizing electrical systems for power generation, distribution, and utilization.\n- Material Requirements:\n- Electronics components (e.g., resistors, capacitors): ETB200 - ETB500\n- Oscilloscope, multimeter, power supply: ETB 500 - ETB 2000\n- Advice: Master circuit analysis, signal processing, and electromagnetic theory. Gain hands-on experience with electronics prototyping.",
    "\nMechanical Engineering\n- Consists of: Studying mechanics, thermodynamics, and materials science.\n- Purpose: Designing and manufacturing mechanical systems, machines, and structures.\n- Material Requirements:\n- Mechanical tools (e.g., wrenches, calipers): ETB200 - ETB500\n- Computer-aided design (CAD) software: ETB1000 - ETB5000\n- Advice: Focus on solid mechanics, fluid dynamics, and machine design. Participate in design projects and internships.",
    "\nWater Supply\n- Consists of: Managing and distributing water resources for various purposes, including drinking, agriculture, and industry.\n- Purpose: Ensuring sustainable access to clean water and optimizing water infrastructure.\n- Material Requirements:\n- Water quality testing equipment:ETB500 -ETB2000\n- Piping materials and fittings: Cost varies depending on materials and project scale\n- Advice: Gain knowledge in hydrology, water treatment, and distribution systems. Practical experience with water management projects is valuable.",
    "\nArchitecture and Urban Planning\n- Consists of: Designing buildings, landscapes, and urban environments.\n- Purpose: Creating functional, sustainable, and aesthetically pleasing spaces for living and working.\n- Material Requirements:\n- Architectural drafting tools (e.g., drafting board, scale ruler): ETB100 - ETB300\n- 3D modeling software: ETB1000 - ETB5000\n- Advice: Develop skills in architectural design, urban planning, and sustainable development. Build a portfolio showcasing your design projects.",
    "\nInformation Science\n- Consists of: Studying the organization, retrieval, and management of information.\n- Purpose: Developing information systems, databases, and knowledge management solutions.\n- Material Requirements:\n- Laptop/desktop:ETB 8000-150000- Database management software: ETB500 - ETB10000\n- Advice: Focus on information retrieval, data analysis, and database design. Gain practical experience through internships or research projects.",
  };
cout << "General Recommendation And Infos..."<<endl;
   cout<<books[choice-2]<<endl; 
   cout<<"\nSome shops for different materials"<<endl;
   cout<<"Gooogle Map: "<<"https://maps.app.goo.gl/WSmgiBpK8hQtAgoW9"<<endl;
}
// Function to save student information to a file
void saveStudentInfo(const Student* student,string department,int value) {

    ofstream outFile("sench.txt", ios::app);

    if (outFile.is_open()) {
        outFile << "F.Name: " << student->Fname << endl;
        outFile << "L.Name: " << student->Lname << endl;
        outFile<<student->id << endl;
        outFile<< department << endl;
         outFile<< value << endl;
        outFile << endl;
        outFile.close();
        std::cout << "Student information is saved sucessfully.\n" << std::endl;
    } else {
        std::cout << "Error: Unable to open file." << std::endl;
    }
}
//Function To Check ID existence
bool isUserIdAvailable(int userId, const string& filename) {
    ifstream file(filename);
    
    if (!file) {
        cerr << "Error opening file: " << filename << endl;
        return false; 
    }

    string line;

    while (getline(file, line)) {
        size_t pos = 0;
        while ((pos = line.find(to_string(userId), pos)) != string::npos) {
            // Check if the found string is a separate word
            if ((pos == 0 || !isdigit(line[pos - 1])) && 
                (pos + to_string(userId).length() == line.length() || !isdigit(line[pos + to_string(userId).length()]))) {
                file.close();
                return true;
            }
            pos++;
        }
    }

    file.close();
    return false; 
}
//get department values
int getUserValue(int userId, const string& filename) {
    ifstream file(filename);

    if (!file) {
        cerr << "Error opening file: " << filename << endl;
        return -1; 
    }

    string line;
    int count = 0;
    bool isDataBlock = false;

    while (getline(file, line)) {
        if (line.empty()) {
            isDataBlock = false;
            count = 0;
        } else {
            count++;
            if (count == 3 && stoi(line) == userId) {
                isDataBlock = true;
            } else if (isDataBlock && count == 5) {
                int value = stoi(line);
                file.close();
                return value;
            }
        }
    }

    file.close();
    return -1; 
}

// get department name

string getDEP(int userId, const string& filename) {
    ifstream file(filename);

    if (!file) {
        cerr << "Error opening file: " << filename << endl;
        return ""; 
    }

    string line;
    int count = 0;
    bool isDataBlock = false;

    while (getline(file, line)) {
        if (line.empty()) {
            isDataBlock = false;
            count = 0;
        } else {
            count++;
            if (count == 4 && line == to_string(userId)) {
                isDataBlock = true;
            } else if (isDataBlock && count == 5) {
                getline(file, line); 
                file.close();
                return line;
            }
        }
    }

    file.close();
    return "";
}

//function to check valid id
int getID() {
    string input;
    int number;

    do {
       
        cin >> input;

        if (input.length() == 6) {
            bool isAllDigits = true;
            for (char c : input) {
                if (c < '0' || c > '9') {
                    isAllDigits = false;
                    break;
                }
            }

            if (isAllDigits) {
                number = stoi(input);
             //   cout << "Valid 6-digit integer: " << number << endl;
                // Proceed with further processing if needed
                return number; // Return the valid number
            }
        }

        cout << "Invalid input. Please RE-enter again: " << endl;
        cout<<"RU ";
    } while (true);
}

void saves(int value ){
	 string department;
  		switch(value){
    case 1: 
   cout<<"Fresha Man";
   recommendMaterials(value);
    break ;
    case 2: 
     cout<<"Software Engineering";
 recommendMaterials(value);
    break ;
    case 3: 
     department ="Computer Science ";
      recommendMaterials(value);
    break ;
    case 4: 
     department ="Biomedical Engineering";
      recommendMaterials(value);
    break ;
    case 5: 
     department ="Chemical Engineering";
      recommendMaterials(value);
    break ;
    case 6: 
     department ="IT";
      recommendMaterials(value);
    break ;
    case 7: 
     department ="Material";
      recommendMaterials(value);
    break ;
    case 8: 
     department ="Hydraulics";
      recommendMaterials(value);
    break; 
    case 9: 
     department ="Electrical Engineering ";
      recommendMaterials(value);
    break ;
    case 10: 
     department ="Mechanical Engineering";
      recommendMaterials(value);
    break ;
    case 11:
     department ="Water Supply" ;
      recommendMaterials(value);
    break; 
      case 12 :
    department="Architecture";
     recommendMaterials(value);
    break;
   default : 
   department="IS";
    recommendMaterials(value);
   break;
}
	  
}
//main function
int main() {
  Student student;
  cout<<"\t\t~~~~~~ Welcome To JIT Edushop Assistant  ~~~~~ "<<endl;
  
  cout<<"\t"<<endl;
Register:

  cout<<"Don't use (/)\n";
  cout<<"Enter ID: RU ";

   ids=getID();
  cout<<endl;
  

  ifstream file("sench.txt");
  string fileN="sench.txt";
  int value;
  //Calling Checking Function
  bool isAvailable = isUserIdAvailable(ids, fileN);
  
   if (isAvailable) {
        cout << "~~~~Welcome Back~~~~" << endl;
        
        value = getUserValue(ids, fileN);

      saves(value);
 
    } else {
        cout << "User ID is not available in the file." << endl;
         registerStudent(&student);
    }
  cout << "\nChoose your department from the menu given below\n" << endl;

Again:
  cout << "Menu" << endl;
  cout<<"1) Freshman"<<endl;
  cout << "2) Software Engineering" << endl;
  cout << "3) Computer Science" << endl;
  cout << "4) Biomedical Engineering" << endl;
  cout << "5) Chemical Engineering" << endl;
  cout << "6) IT" << endl;
  cout << "7) Material" << endl;
  cout << "8) Hydraulics" << endl;
  cout << "9) Electrical Engineering" << endl;
  cout << "10) Mechanical Engineering" << endl;
  cout << "11) Water Supply" << endl;
  cout << "12) Architecture and Urban Planning" << endl;
  cout <<"13) IS" << endl;


int choice;
  cout << "\nEnter your choice (1-13): ";
  cin >> choice;
  cout<<endl;
  
  
 value =choice;
  string department;
  		switch(choice){
    case 1: 
     department ="Fresh Man ";
    break ;
    case 2: 
     department ="Software Engineering";
    break ;
    case 3: 
     department ="Computer Science ";
    break ;
    case 4: 
     department ="Biomedical Engineering";
    break ;
    case 5: 
     department ="Chemical Engineering";
    break ;
    case 6: 
     department ="IT";
    break ;
    case 7: 
     department ="Material";
    break ;
    case 8: 
     department ="Hydraulics";
    break; 
    case 9: 
     department ="Electrical Engineering ";
    break ;
    case 10: 
     department ="Mechanical Engineering";
    break ;
     case 11:
     department ="Water Supply" ;
    break; 
      case 12 :
    department="Architecture";
    break;
   default : 
   department="IS";
   break;
} 
if(choice==1) {
//for freshman we will use class
    freshman_help();

    cout<<"\nSelect what you want next:\n";
    cout<<"1. Go back to Menu,\n";
    cout<<"2. Register again,\n";
    cout<<"3. Exit\n";
    int yn;
    cout<<"=> ";
    cin>>yn;
    if(yn==1) {
      goto Again;
    } else if(yn==2) {
      goto Register;
    } else if(yn==3||yn!=3) {

    }
  } else {
 
     recommendMaterials(choice);
  
  }

  cin.ignore(); 
 cout<<"\nDo you want to save the data?\nIf Yes 1, if No 2\n"<<endl;
  int saver;
  cout<<"=> ";
  cin>>saver;
  if(saver==1) {
    saveStudentInfo(&student,department,value);
  } else {

  }

  cout<<"\nSelect what you want next:\n";
  cout<<"1. Go back to Menu,\n";
  cout<<"2. Register again,\n";
  cout<<"3. Exit\n";
  int what_you_want;
  cout<<"=> ";
  cin>>what_you_want;
  if (what_you_want==1) {
    goto Again;
  } else if(what_you_want==2) {
    goto Register;
  } else if(what_you_want==3||what_you_want!=3) {

  }
 return 0;
}