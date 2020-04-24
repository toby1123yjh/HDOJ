
#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    int n_student,m_course;
    while(cin>>n_student){
        int a[50][5];
        double avg_stu_grade[50],avg_course_grade[5];
        cin>>m_course;

        for(int i=0;i<n_student;i++){
            for(int j=0;j<m_course;j++){
                int temp;
                cin>>temp;
                a[i][j]=temp;
            }
        }

        for(int i=0;i<n_student;i++){
            int sum_student=0;
            for(int j=0;j<m_course;j++){
                sum_student+=a[i][j];
            }

            avg_stu_grade[i]=(double)(sum_student)*1.0/m_course;
        }

        for(int j=0;j<m_course;j++){
            int sum_course=0;
            for(int i=0;i<n_student;i++){
                sum_course+=a[i][j];
            }
            avg_course_grade[j]=(double)(sum_course)*1.0/n_student;
        }


        cout<<setiosflags(ios::fixed);
        cout.precision(2);
        for(int i=0;i<n_student;i++){
            cout<<avg_stu_grade[i];
            if(i!=n_student-1){
                cout<<" ";
            }
        }
        cout<<endl;
        for(int i=0;i<m_course;i++){
            cout<<avg_course_grade[i];
            if(i!=m_course-1){
                cout<<" ";
            }
        }
        cout<<endl;
        int count_stu=0;
        for(int i=0;i<n_student;i++){
            int flag=0;
            for(int j=0;j<m_course;j++){
                if(a[i][j]<avg_course_grade[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                count_stu++;
            }
        }
        cout<<count_stu<<endl;
        cout<<endl;
    }
    return 0;
}
