#include<iostream>
#include<stdlib.h>
using namespace std;

void method();
void calculatecgpa();
void calculategpa();

int main(){
    system("cls");
    int input;
    cout<<"_____________________________________________________________________"<<endl;
    cout<<"             GPA and CGPA calculator                 "<<endl;
    cout<<"_______________________________________________________________________"<<endl;
    cout<<"             MENU:"<<endl;
    cout<<"               1.GPA"<<endl;
    cout<<"               2.CGPA"<<endl;
    cout<<"               3.Metthod that is applied for calculating GPA and CGPA"<<endl;
    cout<<"               4.Exit"<<endl;
    cout<<"______________________________________________________________________-"<<endl;
    sub:
    cout<<"Enter your choice:";
    cin>>input;
    switch(input){
        case 1:
            calculategpa();
            break;
        case 2:
            calculatecgpa();
            break;
        case 3:
            method();
            break;
        case 4:
            exit(EXIT_SUCCESS);
            break;
        default:
            cout<<"Wrong Input\n"<<endl;
            goto sub;
            break;
    }
    return 0;
}
void calculategpa(){
    int q;
    system("cls");
    cout<<"___________Calculating GPA_____________"<<endl;
    cout<<"Enter the number of subjects you want to calculate:";
    cin>>q;

    float credit[q];
    float point[q];
    cout<<endl;
    for(int i=0;i<q;i++){
        cout<<"Enter the credit for the subject:"<<i+1<<": ";
        cin>>credit[i];
        cout<<"Enter the points for the subject:"<<i+1<<": ";
        cin>>point[i];
        cout<<"__________________________________\n"<<endl;
    }
    float sum=0;
    float total;
    for(int j=0;j<q;j++){
        total=credit[j]*point[j];
        sum=sum+total;
    }
    float totalC=0;
    for(int k=0;k<q;k++){
        totalC=totalC+credit[k];
    }
    cout<<"\n\n\nTotal points"<<sum<<"  Total credits:"<<totalC<<"  Total GPA:"<<sum/totalC<<endl;

    sub:
    int menu;
    cout<<"1.Calculate again"<<endl;
    cout<<"2.Go back to main menu"<<endl;
    cout<<"3.exit"<<endl;
    cout<<"choose the number:";
    cin>>menu;
    switch(menu){
        case 1:
            calculatecgpa();
            break;
        case 2:
            main();
            break;
        case 3:
            exit(EXIT_SUCCESS);
        default:
            cout<<"PLease choose again______WRONG_____"<<endl;
            goto sub;
    }
}

void calculatecgpa(){
    system("cls");
    int l;
    cout<<"_______________CGPA_________________________"<<endl;
    cout<<"How many do you want:";
    cin>>l;
    cout<<"\n\n"<<endl;
    float sems[l];
    for(int i=0;i<l;i++){
        cout<<"Enter the semester"<<i+1<<"Result(GPA): ";
        cin>>sems[l];
        cout<<"\n"<<endl;
    }
    float semtot=0;
    for(int j=0;j<l;j++){
        semtot=semtot+sems[j];
    }
    cout<<"__________Your GPA is"<<semtot/l<<"_________"<<endl;

    sub:
    int m;
    cout<<"\n\t\t1. Calculate again"<<endl;
    cout<<"\n\t\t2. Go to main menu"<<endl;
    cout<<"\n\t\t3. Exit this app"<<endl;
    cout<<"\n\t\tGive input:"<<endl;
    cin>>m;

    switch(m){
        case 1:
            calculategpa();
            break;
        case 2:
            main();
            break;
        case 3:
            exit(0);
        default:
            cout<<"Wrong input _____TRY AGAIN_________"<<endl;
            goto sub;
    }
}

void method(){
    system("cls");
    cout<<"_______________Method we used for calculating_______"<<endl;
    cout<<"GPA=Sum of CREDIT/total credits\n"<<endl;
    cout<<"CGPA=Sum of CGPA/number of semester"<<endl;
    cout<<"__________________________________________"<<endl;

    sub:
    int y;
    cout<<"1. IF unsatisfied go to main menu for another try"<<endl;
    cout<<"2. exit"<<endl;
    cout<<"Enter the number:";
    cin>>y;
    switch(y){
        case 1:
            main();
            break;
        case 2:
            exit(EXIT_SUCCESS);
        default:
            cout<<"Try again!!!!"<<endl;
            goto sub;
    }
}