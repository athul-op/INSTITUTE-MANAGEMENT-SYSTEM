# README

## Indian Institute of Embedded System Student Management System

This project is a Student Management System designed for school and college students. It includes functionalities for user signup, login, course selection, and payment processing. The system supports three main courses: PG Diploma in Embedded Systems, Internet of Things, and Artificial Intelligence and Machine Learning.

### Features

**🚀 Seamless User Signup and Login:** 
   - New users can easily register to access the platform's rich offerings.
   - Returning users enjoy hassle-free login, ensuring swift access to their accounts.

**📚 Interactive Course Selection:**
   - Choose from a diverse range of cutting-edge courses in Embedded Systems.
   - Dive deep into the realms of Internet of Things (IoT) and Artificial Intelligence (AI) & Machine Learning, each offering a unique learning journey.
   - Explore comprehensive course details and syllabi, empowering users to make informed decisions about their educational paths.

**💳 Secure Payment Processing:**
   - Effortlessly make payments for selected courses via a secure and intuitive interface.
   - Choose between convenient payment modes, ensuring a seamless transaction experience.

**👑 Admin Privileges:**
   - Admins wield the power to oversee and manage the student and course databases with ease.
   - Gain insights into student enrollments and course selections, facilitating efficient administrative tasks.

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
This code seems to be a simple console-based application for managing a user database and courses offered by the "Indian Institute of Embedded System" (IIES). Here's a brief overview of the functionalities:

1. **Main Menu:**
   - The main menu offers options for signing up, logging in, and logging out.
   - Upon choosing an option, the user is directed to the respective functions.

2. **Signup Functionality:**
   - Users can sign up by entering a username and password.
   - After successful signup, users are prompted to enter additional details like age, date of birth, address, and mobile number.
   - The user details are then stored in a CSV file named "stu_details.csv".

3. **Login Functionality:**
   - Users can log in using their username and password.
   - If the credentials match, users are allowed access to the system.
   - There's also an option for admin login.

4. **Admin Functionality:**
   - Admin login allows access to view student database and course database.
   - The admin can choose to view student details, course details, or exit.

5. **Course Selection:**
   - After successful login, users can select their preferred course from a list.
   - The available courses are PG diploma in Embedded System, Internet of Things (IoT), and Artificial Intelligence and Machine Learning (AI).
   - Each course provides information on its modules, modes of course (online/offline), and fee details.

6. **Payment Functionality:**
   - After selecting a course, users are prompted to pay the course fee.
   - Payment details are processed, and the payment status is updated accordingly.

7. **Contact Details:**
   - Upon completing the course selection and payment process, users are provided with contact details of IIES for further inquiries.

8. **Password Input Handling:**
   - The code includes a function (`takepassword`) to handle password input securely by replacing characters with asterisks.
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
