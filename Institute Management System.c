//This project for school and College students

//Header Files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Functions
void appdet();
void signup();
void login();
void stu_db();
void loading();
void pg_dip();
void iot();
void ai();
void stu_co_db();
void detl();

//Global variables
int lgs=0;
int opt=0;
char mbno[20], username[100],payment[20],coursename[100];
char password[20];

//Main Function
void main()
{
        int choice;
        cho:
	    system("cls");
	    system("color F0");
		printf("\n\t\t   ________    ________    _______    _______           \n");
		printf("\t\t  |___  ___|  |___  ___|  |  _____|  | ______|             \n");
		printf("\t\t      | |         | |     |  |___    | |_____             \n");
		printf("\t\t      | |         | |     |   ___|   \\______  \\           \n");
		printf("\t\t   ___| |___   ___| |___  |  |____    ______| |          \n");
		printf("\t\t  |_________| |_________| |_______|  |________/          \n\n");
		printf("\t\t\tIndian Institute Of Embedded System\n\n\n");


        printf("\n\n\t\t+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+--\n");
        printf("\t\t+ \t\t         \t\t\t+\n\t\t+\t\t    MENU\t\t\t");
        printf("+\n\t\t+\t\t\t\t\t\t+\n\t\t+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
        printf("\t\t+\t\t\t\t\t\t+\n\t\t+ \t 1.SIGNUP\t\t\t\t+\n\t\t+\t\t\t\t\t\t+\n\t\t+\t 2.LOGIN\t\t\t\t+\n\t\t+\t\t\t\t\t\t+\n\t\t+\t 3.LOGOUT\t\t\t\t+\n\t\t+\t\t\t\t\t\t+\n\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+-+-+-\n\n");
        printf("\n\n\tEnter the valid option : ");
        scanf("%d",&choice);
        switch(choice)
		{
        case 1:
            signup();
            break;
        case 2:
            login();
            break;
        case 3:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("\n\t\tInvalid input \n\n\tPlease Enter correct option ");
            printf("\n\nPress 1 to Try Again : ");
            int num;
            scanf("%d",&num);
            if(num==1){
                goto cho;
            }
            else{
                exit(0);
            }
			break;
        }
        if(lgs)             //lgs ==> login sucess
        {
            printf("\n\n\t\tSelect your prefered course\n");
            printf("\n\n\n\t\t\t1. PG diploma in Embedded System\n\n\n\t\t\t2. Internet Of Things\n\n\n\t\t\t3. Artificial Inteligence and Machine Learning\n\n\n" );
            printf("\n\t\tSelect the course to know more details about the course : ");
            int opt=0;
            scanf("%d",&opt);
            printf("\n\n\n");
            switch(opt)
            {
            case 1:
                    loading();
                    pg_dip();
                    break;
            case 2:
                    loading();
                    iot();
                    break;
            case 3:
                    ai();
                    loading();
                    break;
            default:
                printf("\nEnter the valid option");
            }

        }
        else{
            printf("\n\t\t1. Your are trying to Login Invalid username or password .... Try again \n\n\t\t2. If you are new user You are Signup Sucessfully\n\n ");
            printf("\t\t3. Your Are the admin Data Viewed Sucessfully \n\n ");
            printf("\nPress 1 to goto Menu : ");
            int num;
            fflush(stdin);
            scanf("%d",&num);
            if(num==1){
                goto cho;
            }
            else{
                exit(0);
            }
        }
        printf("\n\nIf you need to add one more Details");
        printf("\n\nPress Y/y : ");
        char a;
        a=getch();
        if(a=='Y'||a=='y')
        {
            goto cho;
        }
        else{
            printf("\n\n\t\t\t\t\t\tThank You");
        }
  }

//Append the Students Details stu_details.csv
void appdet()

{
    char  file_username[100], file_password[100];
    char dob[30],address[100];
    int age;
    printf("\nRe-enter your username and password\n");
    up:
    printf("\n\t\t\tEnter user name:");
    scanf("%s",&username);
    printf("\n\t\t\tEnter password: ");
    takepassword(password);
    FILE *file = fopen("sign_up.csv", "r");
    if (file == NULL)
    {
        printf("Could not open file.\n");
        exit(1);
    }

    int ps = 0;
    while (fscanf(file, "%[^,],%s\n", file_username, file_password) != EOF)
        {
        if (strcmp(username, file_username) == 0 && strcmp(password, file_password) == 0)
            {
            ps = 1;
            break;
        }
    }
    fclose(file);
    if(ps==1){
    printf("\n\t\t\tEnter Age: ");
    scanf("%d",&age);
    printf("\n\t\t\tEnter DOB(dd/mm/yyyy): ");
    scanf("%s",&dob);
    printf("\n\t\t\tEnter Address: ");
    scanf("%s",&address);
    printf("\n\t\t\tEnter Mobile Number: ");
    scanf("%s",&mbno);
    FILE *file1 = fopen("stu_details.csv", "a");
    if (file1 == NULL)
      {
        printf("Could not open file for writing.\n");
        exit(1);
      }
    printf("\n\n\t\tStudent Details Entered Sucessfully\n");
    fprintf(file1, "%s,%s,%d,%s,%s,%s\n", username, password,age,dob,address,mbno);

    fclose(file1);
    }
    else {
        printf("\n\n\t\tEnter Valid User Name and Password ");
        goto up;
    }

}

//Sign up to Create Account
void signup()

{
    char password[100];
    char dob[30],address[100];
    int age;

    printf("\n\t\t\tEnter user name:");
    scanf("%s",&username);
    printf("\n\t\t\tEnter password: ");
    takepassword(password);
    FILE *file = fopen("sign_up.csv", "a");
    if (file == NULL)
    {
        printf("Could not open file for writing.\n");
        exit(1);
    }
    printf("Signup successful\n");
    fprintf(file, "%s,%s\n", username, password);
    fclose(file);
    printf("\nPress Enter for registration\n");
    getch();
    appdet();

}

//Login to Select the Course
void login()
{
    char file_username[100], file_password[100];
    char admin_user_name[]="AAAS";
    char opt[100];
    char admin_user_password[] = "9876";
    log:
    printf("\n\n\t\t+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+--\n");
    printf("\t\t+ \t\t         \t\t\t+\n\t\t+\t\t    LOGIN\t\t\t");
    printf("+\n\t\t+\t\t\t\t\t\t+\n\t\t+-++-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n");
    printf("\t\t+\t\t\t\t\t\t+\n\t\t+ \t 1.USER LOGIN\t\t\t\t+\n\t\t+\t\t\t\t\t\t+\n\t\t+\t 2.ADMIN LOGIN\t\t\t\t+\n\t\t+\t\t\t\t\t\t+\n\t\t+\t\t\t\t\t\t+\n\t\t+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+--+-+-+-+-+-\n\n");
    printf("\n\n\tEnter the valid option : ");
    scanf("%s",&opt);
    if(opt[0]=='1'){
    printf("\n\t\tEnter username: ");
    scanf("%s", username);
    printf("\n\t\tEnter password: ");
    takepassword(password);

    FILE *file = fopen("sign_up.csv", "r");
    if (file == NULL)
    {
        printf("Could not open file.\n");
        exit(1);
    }

    lgs = 0;
    while (fscanf(file, "%[^,],%s\n", file_username, file_password) != EOF)
        {
        if (strcmp(username, file_username) == 0 && strcmp(password, file_password) == 0)
            {
            lgs = 1;
            break;
        }
    }
    fclose(file);
    }
    else if(opt[0]=='2'){
            printf("\n\t\tEnter Admin Name: ");
            scanf("%s", username);
            printf("\n\t\tEnter Admin Password: ");
            scanf("%s", password);
        if(strcmp(username,admin_user_name)==0 && strcmp(password, admin_user_password) == 0)
        {
            printf("1. View the Stu DB\n2. View the Stu Course DB \n3. Exit");
            int cho;
            printf("\nEnter your option");
            scanf("%d",&cho);
            switch(cho)
            {
            case 1:
                printf("Going to View the Stu DB\n");
                loading();
                stu_db();

                break;
            case 2:
                printf("Going to View the Stu Course DB\n");
                loading();
                stu_co_db();
                break;
            case 3:printf("Going to Exit");
                exit(0);
            default:printf("Enter the valid option");

            }
            getch();
        }
    }
    else{
        printf("\n\n\t\t\tEnter Valid Option ");
        fflush(stdin);
        printf("\n\t\tPress any Key to View Login Menu");
        getch();
        goto log;
    }
}
// To view Student Database Only for Admin
void stu_db()
{


    FILE *file = fopen("stu_details.csv", "r");
    if (file == NULL)
    {
        printf("Could not open file %s for reading.\n", "reserved.csv");
    }
    else
    {
        printf("\n\n\tStudent Database :\n\n");
        char line[256];
        while (fgets(line, sizeof(line), file))
        {
            printf("\t\t%s", line);
        }
        fclose(file);
    }
}
//Loading
void loading()
{
char a[15]={'(','L','o','a','d','i','n','g','.','.','.',')'};
    for(int i =0;i<3;i++)
    {
        printf("\r---------------------\r");
        for(int j=0;j<=11;j++){
            printf("%c ",a[j]);
            usleep(300000);
        }
    }
}
int paid=0;
void payment1()
{
    int pay;
    printf("\n\n\t\tIIES GPay Number :  +91 98869 20008 \n");
    printf("\t\tSend the Amount to this GPay Number\n\n ");
    printf("\t\tAfter Paid the Amount Press 1  : ");
    scanf("%d",&pay);
    if(pay==1)
    {
    printf("\n\n\t\tChecking The Amount Transformation Details ...........\n\n\n");
    loading();
    printf("\n\n\t\t\tPayment successful...");
    paid=1;
    }

}

void pg_dip()
{

    printf("\n\n\t\tBest wishes for choosing PG diploma in Embedded Systems *** %s ***\n\n",username);
    printf("\n\t\tPG diploma in Embedded Systems - Course Modules\n\n");
    printf("\t\t1. C Programming \t\n");
    printf("\t\t2. C ++  \t\t\t\t\t\n");
    printf("\t\t3. Embedded C \t\t\t\t\n");
    printf("\t\t4. Micro controler Micro processor \t\t\n");
    printf("\t\t5. Basic Electronics \t\t\t\t\n");
    int fee,opt;
    printf("\n\n\t\t\tMODES OF COURSE:\n\n");
    printf("\n\t\t\tSelect the Mode\n");
    printf("\n \t\t\t1. Offline mode\n\t\t\t2. Online mode\n\n");
    printf("\t\tEnter valid option: ");
    scanf("%d",&opt);
    char mode[20];
    printf("\n\n\t\t\tFEE DETAILS\n");
    switch(opt)
     {
    case 1:
           printf("\nOFFLINE MODE:-\n\n");
           fee=50000;
           strcpy(mode,"Offline mode");
           printf("\nTution Fee\t\t:50,000\nLab fee\t\t\t:2,000\nStudy Material fee\t:1,000\n\nTOTAL FEE\t\t:53,000/-");
           break;
    case 2:
           printf("\nONLINE MODE:-\n\n");
           fee=35000;
           strcpy(mode,"Online mode");
           printf("\nTution Fee\t\t:35,000\nStudy Material fee\t:1,000\n\nTOTAL FEE\t\t:36,000/-");
           break;
    }
    char course_name[100]="PG diploma in Embedded System";
    char user_name[100];
    printf("\n\n\nPress 1 to pay the fee :");
    scanf("%d",&opt);
    if(opt==1){
        payment1();
    }
    if(paid==1){
        strcpy(payment,"Paid");
    }
    else{
        strcpy(payment,"Not Paid");
    }

    FILE *file = fopen("course_details.csv", "a");
    if (file == NULL)
    {
        printf("Could not open file.\n");
        exit(1);
    }
    else
    {
        fprintf(file,"%s,%s,%s,%s,%s\n",__DATE__,__TIME__,username,course_name,payment);
    }
    printf("\n\n\t\tPress Enter to View Contact Details......\n\n");
    getch();
    detl();
}
void iot(){


    printf("\n\n\t\tBest wishes for choosing Internet Of Things *** %s ***\n\n",username);
    printf("\n\t\tInternet Of Things - Course Modules \n\n");
    printf("\t\t1. Attack, Defense and Network IOT \t\n");
    printf("\t\t2. Data Dissmenition\t\t\t\t\t\n");
    printf("\t\t3. Authentication in IOT\t\t\n");
    printf("\t\t4. Security testing  \t\t\t\t\n");
    printf("\t\t5. IOT Architecture\t\t\t\t\n");
    int fee,opt;
    printf("\n\n\t\t\tMODES OF COURSE:\n\n");
    printf("\n\t\t\tSelect the Mode\n\n");
    printf("\n\t\t1. Offline mode\n\t\t2. Online mode\n\n");
    printf("Enter valid option: ");
    scanf("%d",&opt);
    char mode[20];
    printf("\n\n\t\t\tFEE DETAILS\n");
    switch(opt) {
    case 1:
           printf("\nOFFLINE MODE:-\n\n");
           fee=53000;
           strcpy(mode,"Offline mode");
           printf("\nTution Fee\t\t: 53,000\nLab fee\t\t\t: 2,000\nStudy Material fee\t: 1,000\n\nTOTAL FEE\t\t:56,000/-");
           break;
    case 2:
           printf("\nONLINE MODE:-\n\n");
           fee=38000;
           strcpy(mode,"Online mode");
           printf("\nTution Fee\t\t:38,000\nStudy Material fee\t:1,000\n\nTOTAL FEE\t\t:39,000/-");
           break;}
    char course_name[100]="Internet Of Things";
    char user_name[100];

    printf("\n\n\nPress 1 to pay the fee :");
    scanf("%d",&opt);
    if(opt==1){
        payment1();
    }
    if(paid==1){
        strcpy(payment,"Paid");
    }
    else{
        strcpy(payment,"Not Paid");
    }
    FILE *file = fopen("course_details.csv", "a");
    if (file == NULL)
    {
        printf("Could not open file.\n");
        exit(1);
    }
    else
    {
        fprintf(file,"%s,%s,%s,%s,%s\n",__DATE__,__TIME__,username,course_name,payment);
    }
    printf("\n\n\t\tPress Enter to View Contact Details......\n\n");
    getch();
    detl();

}
void ai(){

    printf("\n\n\t\tBest wishes for choosing Artificial Inteligence and Machine Learning *** %s ***\n\n",username);
    printf("\n\t\tArtificial Inteligence and Machine Learning-Course Modules\n\n");

    printf("\t\t1. Python Programming IOT \t\n");
    printf("\t\t2. Machine learning \t\t\t\t\t\n");
    printf("\t\t3. Statistical foundations\t\t\n");
    printf("\t\t4. Data Visualization \t\t\t\t\n");
    printf("\t\t5. Intelligent robotics\t\t\t\t\n");
    int fee,opt;
    printf("\n\n\t\t\tMODES OF COURSE:\n\n");
    printf("\n\t\t\tSelect the Mode\n");
    printf("\n\t\t 1. Offline mode\n\t\t2. Online mode\n\n");
    printf("\tEnter valid option: ");
    scanf("%d",&opt);
    char mode[20];
    printf("\n\n\t\t\tFEE DETAILS\n");
    switch(opt) {
    case 1:
           printf("\nOFFLINE MODE:-\n\n");
           fee=65000;
           strcpy(mode,"Offline mode");
           printf("\nTution Fee\t\t:65,000\nLab fee\t\t\t:2,000\nStudy Material fee\t:1,000\n\nTOTAL FEE\t\t:68,000/-");
           break;
    case 2:
           printf("\nONLINE MODE:-\n\n");
           fee=45000;
           strcpy(mode,"Online mode");
           printf("\nTution Fee\t\t:45,000\nStudy Material fee\t:1,000\n\nTOTAL FEE\t\t:46,000/-");
           break;}
    char course_name[100]="Artificial Inteligence and Machine Learning";
    char user_name[100];
    printf("\n\n\nPress 1 to pay the fee :");
    scanf("%d",&opt);
    if(opt==1){
        payment1();
    }

    if(paid==1){
        strcpy(payment,"Paid");
    }
    else{
        strcpy(payment,"Not Paid");
    }
    FILE *file = fopen("course_details.csv", "a");
    if (file == NULL)
    {
        printf("\nCould not open file.\n");
        exit(1);
    }
    else
    {
        fprintf(file,"%s,%s,%s,%s,%s\n",__DATE__,__TIME__,username,course_name,payment);
    }
    printf("\n\n\t\tPress Enter to View Contact Details......\n\n");
    getch();
    detl();
}

// To view Student Course Detail Database Only for Admin
void stu_co_db(){

    FILE *file = fopen("course_details.csv", "r");
    if (file == NULL)
    {
        printf("Could not open file %s for reading.\n", "reserved.csv");
    }
    else
    {
        printf("\n\n\tStudent Database :\n\n");
        char line[256];
        while (fgets(line, sizeof(line), file))
        {
            printf("\t\t%s", line);
        }
        fclose(file);
    }
}
void detl()
{
    printf("\n\n\n\n\t\t\t\t\t***THANK YOU FOR VISITING OUR PAGE***\n\nFor more information,contact below: \n");
    printf("\n\t\tADDRESS:- \n\n\t\t\tIndian Institute of Embedded Systems (IIES) \n\t\t\tNo 80, Ahad Pinnacle, Ground Floor,\n\t\t\t5th Main, 2nd Cross, 5th Block\n\t\t\tKoramangala Industrial Area - Bangalore,\n\t\t\tKarnataka - 560095,\n\t\t\tIndia");

printf("\n\n\t\t\tPhone +91 80 4121 6422\n\n\t\t\tMobile +91 98869 20008\n\n\t\t\tEmail : enquiry@iies.in\n\n\n");
printf("\n\n\t\t\t\t\t\t*******************\t\t\t\t");

}
//Take the Password and Print *
void takepassword(char password[20])
{
    int i=0;
    char ch;
    while(1)
    {
        ch = getch();
        if(ch==13){
            password[i]='\0';
            break;
        }
        else if(ch==8)   //backslash
        {
            if(i>0)
            {
                i--;
                printf("\b\b");
            }
        }
        else if(ch==9||ch==32){  //Space || Tab
            continue;
        }
        else{
            password[i++]=ch;
            printf("*");
        }
    }
    printf("\n");
}

