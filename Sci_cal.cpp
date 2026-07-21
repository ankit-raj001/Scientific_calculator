#include<iostream>
#include<cmath>
using namespace std;

void menu(){
    cout << "\t\t SCIENTIFIC CALCULATOR" << endl;
    cout << "\t\t1. Addition" << endl;
    cout << "\t\t2. Subtraction" << endl;
    cout << "\t\t3. Multiplication" << endl;
    cout << "\t\t4. Division" << endl;
    cout << "\t\t5. Power" << endl;
    cout << "\t\t6. Square Root" << endl;
    cout << "\t\t7. Sine" << endl;
    cout << "\t\t8. Cosine" << endl;
    cout << "\t\t9. Tangent" << endl;
    cout << "\t\t10. Inverse of Sine" << endl;
    cout << "\t\t11. Inverse of Cosine" << endl;
    cout << "\t\t12. Inverse of Tangent" << endl;
    cout << "\t\t13. Logarithm" << endl;
    cout << "\t\t0. Exit" << endl;
}
void addition(){
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a + b << endl;
}

void subtraction(){
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a - b << endl;
}

void multiplication(){
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Result: " << a * b << endl;
}

void division(){
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if(b != 0){
        cout << "Result: " << a / b << endl;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
    }
}

void power(){
    double base ,exponent;
    cout<<"Enter base and exponent: ";
    cin>>base >> exponent;
    cout<<"Result: "<<pow(base, exponent)<<endl;
}

void squareroot(){
    double num;
    cout<<"Enter a num: ";
    cin>>num;
    cout<<"Result: "<<num*num<<endl;
}

void sine (){
    double angle;
    cout<<"Enter angle in degrees: ";
    cin>> angle;
    cout<<"Result: "<<sin(angle * M_PI / 180)<<endl;
}

void cosine (){
    double angle;
    cout<<"Enter angle in degrees: ";
    cin>> angle;
    cout<<"Result: "<<cos(angle * M_PI / 180)<<endl;
}

void tangent (){
    double angle;
    cout<<"Enter angle in degrees: ";
    cin>> angle;
    cout<<"Result: "<<tan(angle * M_PI / 180)<<endl;
}

void inverseSine (){
    double value;
    cout<<"Enter value: ";
    cin>> value;
    cout<<"Result: "<<asin(value) * 180 / M_PI<<endl;
}

void inverseCosine (){
    double value;
    cout<<"Enter value: ";
    cin>> value;
    cout<<"Result: "<<acos(value) * 180 / M_PI<<endl;
}

void inverseTangent (){
    double value;
    cout<<"Enter value: ";
    cin>> value;
    cout<<"Result: "<<atan(value) * 180 / M_PI<<endl;
}

void logarithm (){
    double num;
    cout<<"Enter a num: ";
    cin>>num;
    if(num > 0){
        cout<<"Result: "<<log(num)<<endl;
    } else {
        cout<<"Error: Logarithm is undefined for non-positive numbers."<<endl;
    }
}       

int main(){

    int choice;
    do{
        menu();
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                power();
                break;
            case 6:
                squareroot();
                break;
            case 7:
                sine();
                break;
            case 8:
                cosine();
                break;
            case 9:
                tangent();
                break;
            case 10:
                inverseSine();
                break;
            case 11:
                inverseCosine();
                break;
            case 12:
                inverseTangent();
                break;
            case 13:
                logarithm();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 0);

    return 0;

}