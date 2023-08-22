#include <iostream>
#include <fstream>

using namespace std;
//assignment0
int main(){
        string Confirm;
        double income, rent, feeding, transport, miscellaneous, utilities, others, expense, savings;

    cout << "Welcome!! \n" << "This is an analysis to determine your level of Standard of Living" <<endl;
    question: cout << "Do you work in Nigeria? (Yes/No)";
    cin >> Confirm;
    if (Confirm == "No" || Confirm == "no" || Confirm == "NO" ){
        cout << "You cannot take this survey!!! \n" << "You need to be a worker in Nigeria to be eligible"<<endl;
    }
    else if (Confirm == "Yes" || Confirm == "yes" || Confirm == "YES"){
       question1: cout << "What is your monthly income in Naira(#): "<<endl;
    }
    else {
        cout << "Invalid response"<<endl;
        goto question;
    }

    cin >> income;

         if (income <= 30000) {
        cout << "You are in the LOWER CLASS" << endl;
    } else if (income > 30000 && income <= 200000) {
        cout << "You are in the LOWER MIDDLE CLASS" << endl;
    } else if (income > 200000 && income <= 700000) {
        cout << "You are in the MIDDLE CLASS" << endl;
    } else if (income > 700000 && income <= 3000000) {
        cout << "You are in the UPPER MIDDLE CLASS" << endl;
    } else if (income > 3000000) {
        cout << "You are in the UPPER CLASS(Wealthy)" << endl;
    } else {
        cout << "invalid response" << endl;
        goto question1;
    }


    cout << "Enter your expenses for the month as applicable - " <<endl;
    cout << "Rent = " <<endl;
    cin >> rent;
    cout << "Feeding = " <<endl;
    cin >> feeding;
    cout << "Transport = " <<endl;
    cin >> transport;
    cout << "Utilities (water bill, nepa bill, cable tv etc.) = " <<endl;
    cin >> utilities;
    cout << "Miscellaneous (clothing, hospital bills etc) = " <<endl;
    cin >> miscellaneous;
    cout << "Others = " <<endl;
    cin >> others;

    //CALCULATE TOTAL EXPENSES AND SAVINGS
expense = (rent+feeding+transport+miscellaneous+utilities+others);
cout << "Your Total expense = "<<expense <<endl<<"Please find attached your financial report"<<endl;

//FINANCIAL SITUATION
ofstream myFile("financialReport.txt");

savings = (income-expense);
myFile << "Your Savings = "<< savings <<endl;


if(savings < 0){
    myFile<< "YOU ARE IN DEBT AND NEED TO BREATHE!!!"<<endl;
}
else if(savings == 0){
    myFile<< "YOU ARE SURVIVING!"<<endl;
}
else {
    myFile<< "YOU ARE DOING WELL!"<<endl;
}


    return 0;
}




