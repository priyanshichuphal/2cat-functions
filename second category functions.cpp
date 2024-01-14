#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
    int rno;
    char name[20];
    public:
    getstudent(int,char[20]);
    displaystudent();
};

int student::getstudent(int r,char n[20])
{
rno=r;
strcpy(name,n);
}
int student::displaystudent()
{
    cout<<"displaying details"<<endl;
    cout<<name<<endl<<rno;
}
int main()
{
    student s1;
    int rollnum;
    char names[20];
    cin>>rollnum>>names;
    s1.getstudent(rollnum,names );
    s1.displaystudent();
    return 0;
}