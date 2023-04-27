#include <iostream>

using namespace std;

class Employee {
    private:
        int salary;
        int workingHours;
    public:
        void getInfo(int sal, int n){
            salary = sal;
            workingHours = n;
        }
        
        void AddSal(){
            if (salary < 500){
                salary += 10;
            }
        }
        
        void AddWork(){
            if (workingHours < 6){
                workingHours += 10;
            }
        }
        
        int getFinalSal(){
            return salary;
        }
};

int main()
{
    Employee emp;
    int sal, n;
    do{
        cout << "Enter the initial salary :";
        cin >> sal;
    }while( sal >= 0 && sal <= 100 );
    
    
    do{
        cout << "Enter the working hours per day :";
        cin >> n;
    }while(n >= 1 && n <= 10);
    
    emp.getInfo(sal, n);
    emp.AddSal();
    emp.AddWork();
    
    cout << "The final salary is: " << emp.getFinalSal() << endl;

    return 0;
}
