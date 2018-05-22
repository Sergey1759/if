#include <iostream>
using namespace std;

const int N = 2;

struct book
{
    char autor[20];
    int year;
    int amount;

    book(){
    cout<<"enter autor   "; cin >> autor;   cout<<endl;
    cout<<"enter year    "; cin >> year;    cout<<endl;
    cout<<"enter amount  "; cin >> amount;  cout<<endl;

    }

}arr[N];

outbook(int another_year_1,int another_year_2){
for(int i = 0; i < N; i++){
if(arr[i].year != another_year_1 || arr[i].year != another_year_2){
cout<<"amount  " << arr[i].amount<< "  year = "<< arr[i].year<< " autor = " << arr[i].autor << endl;
}}}

int main()
{
setlocale (LC_ALL, "rus");

int another_year_1;
int another_year_2;

cin>>another_year_1>>another_year_2;

book  book1;
outbook(another_year_1,another_year_2);

return 0;
}
