// Who Is It

// Problem Statement

// A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

// Input Format
// First line will contain T, the number of test cases.
// For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.

// Constraints
// 1 <= T <= 1000
// 1 <= ID <= 3
// 1 <= |Name| <= 100
// 'A' <= Section <= 'Z'
// 0 <= Total Marks <= 100

// Output Format
// Output the information as asked in the question.

// Sample Input 0
// 3
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 90
// 1 sakib A 50
// 2 rakib D 96
// 3 akib C 96
// 1 sakib A 50
// 2 rakib D 50
// 3 akib C 40

// Sample Output 0
// 2 rakib D 96
// 2 rakib D 96
// 1 sakib A 50



#include<bits/stdc++.h>
using namespace std;

class StudentInfo{
    public:
    int id;
    char name[101];
    char section;
    int total_marks;
};

int main(){
    int test_case;
    cin>>test_case;

    for(int i=1;i<=test_case; i++){
        StudentInfo std1, std2, std3;

        cin >> std1.id >> std1.name >> std1.section >> std1.total_marks;
        cin >> std2.id >> std2.name >> std2.section >> std2.total_marks;
        cin >> std3.id >> std3.name >> std3.section >> std3.total_marks;

        if(std1.total_marks>std2.total_marks){
            if(std1.total_marks>std3.total_marks){
                cout << std1.id << " " << std1.name << " " << std1.section << " " << std1.total_marks;
            }
            else if(std1.total_marks==std3.total_marks){
                if(std1.id<std3.id){
                    cout << std1.id << " " << std1.name << " " << std1.section << " " << std1.total_marks;
                }
                else{
                    cout << std3.id << " " << std3.name << " " << std3.section << " " << std3.total_marks;
                }
            }
            else{
                cout << std3.id << " " << std3.name << " " << std3.section << " " << std3.total_marks;
            }
        }
        else if(std1.total_marks==std2.total_marks){
            if(std1.id<std2.id){
                if(std1.total_marks>std3.total_marks){
                    cout << std1.id << " " << std1.name << " " << std1.section << " " << std1.total_marks;
                }
                else if(std1.total_marks==std3.total_marks){
                    if(std1.id<std3.id){
                        cout << std1.id << " " << std1.name << " " << std1.section << " " << std1.total_marks;
                    }
                    else{
                        cout << std3.id << " " << std3.name << " " << std3.section << " " << std3.total_marks;
                    }
                }
                else{
                    cout << std3.id << " " << std3.name << " " << std3.section << " " << std3.total_marks;
                }
            }
            else{
                if(std2.total_marks>std3.total_marks){
                    cout << std2.id << " " << std2.name << " " << std2.section << " " << std2.total_marks;
                }
                else if(std2.total_marks==std3.total_marks){
                    if(std2.id<std3.id){
                        cout << std2.id << " " << std2.name << " " << std2.section << " " << std2.total_marks;
                    }
                    else{
                        cout << std3.id << " " << std3.name << " " << std3.section << " " << std3.total_marks;
                    }
                }
                else{
                    cout << std3.id << " " << std3.name << " " << std3.section << " " << std3.total_marks;
                }
            }
        }
        else{
            if(std2.total_marks>std3.total_marks){
                cout << std2.id << " " << std2.name << " " << std2.section << " " << std2.total_marks;
            }
            else if(std2.total_marks==std3.total_marks){
                if(std2.id<std3.id){
                    cout << std2.id << " " << std2.name << " " << std2.section << " " << std2.total_marks;
                }
                else{
                    cout << std3.id << " " << std3.name << " " << std3.section << " " << std3.total_marks;
                }
            }
            else{
                cout << std3.id << " " << std3.name << " " << std3.section << " " << std3.total_marks;
            }
            
        }
        
        cout << endl;
    }
    
    return 0;
}
