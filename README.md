# README

## Indian Institute of Embedded System (IIES) Student Management System

This project is a Student Management System designed for school and college students. It includes functionalities for user signup, login, course selection, and payment processing. The system supports three main courses: PG Diploma in Embedded Systems, Internet of Things, and Artificial Intelligence and Machine Learning.

### Features

- **User Signup and Login:** Allows new users to sign up and existing users to log in.
- **Course Selection:** Users can choose from three courses and view details about them.
- **Payment Processing:** Users can make payments for their selected courses.
- **Admin Access:** Admins can view the student database and course database.

### Installation on Windows using Code::Blocks

#### Prerequisites

- Windows OS
- Code::Blocks IDE with MinGW Compiler
- Git (optional, for cloning the repository)

#### Steps

1. **Download and Install Code::Blocks:**
   - Go to the [Code::Blocks website](http://www.codeblocks.org/downloads/26).
   - Download the installer with MinGW and install it.

2. **Clone the Repository:**
   - Open Command Prompt.
   - Navigate to the directory where you want to clone the repository.
   - Run the following command:
     ```sh
     git clone <repository-url>
     ```
   - Alternatively, you can download the ZIP file from the repository and extract it.

3. **Open the Project in Code::Blocks:**
   - Launch Code::Blocks.
   - Click on `File` -> `Open` and navigate to the cloned/extracted directory.
   - Select the `IIES_Student_Management_System.cbp` file and open it.

4. **Build and Run the Project:**
   - Click on `Build` -> `Build` to compile the project.
   - Click on `Build` -> `Run` to execute the project.

### Usage

1. **Main Menu:**
   - The program starts with the main menu where you can choose to sign up, log in, or exit.

2. **Signup:**
   - Enter your username and password to create a new account.

3. **Login:**
   - Enter your username and password to log in. Admins can log in using specific admin credentials.

4. **Course Selection:**
   - After logging in, select a course to view its details and fee structure.
   - Choose between offline and online modes for the course.

5. **Payment:**
   - Follow the instructions to make a payment using GPay.

6. **Admin Access:**
   - Admins can view the student database and course database.

### Files

- `main.c`: Main source code file containing the program logic.
- `sign_up.csv`: File to store signup details (username and password).
- `stu_details.csv`: File to store student details.
- `course_details.csv`: File to store course details.

### Additional Information

For more information, contact:

**Address:**
Indian Institute of Embedded Systems (IIES)  
No XX, AhXX PiXXXXle, Grdxxx Foxxrx,  
Xth Main, Xnd Cross,  
Xth Block,  
KoraXXXXXXX Inixxxxxxal Area - XXXXXXXre,  
XXXXXXka - XXX095,  
India

**Phone:** +91 98 7654 9876  
**Mobile:** +91 99 7878 6789  
**Email:** demo12345.in

Thank you for using our Student Management System!
