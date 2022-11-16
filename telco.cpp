#include <bits/stdc++.h>
using namespace std;

string type;
int num_phone_calls =0;

bool check_phone_number(string phone_number){
    if(phone_number.length()!=10) return false;
    for(char c: phone_number){
        if(c<'0'||c>'9')return false;
    }
    return true;
}

bool is_correct_phone_numbers =true;

map<string, int>M;
map<string, long long>duration;
long long time_convertor(string time){
    long long hh = 60*60*((time[0]-'0')*10+time[1]-'0');
    long long mm = 60*((time[3]- '0')*10+ time[4]-'0');
    long long ss = ((time[6]-'0')*10+time[7]-'0');
    return hh+mm+ss;
}

long long count_time(string startTime, string endTime){
    long long start_time = time_convertor(startTime);
    long long end_time = time_convertor(endTime);
    return end_time - start_time;

}

int main(){
    system("clear");
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    do{
        cin>> type;
        if( type == "#") break;
        string p1,p2,date, startTime, endTime;
        cin>>p1>>p2>>date>>startTime>>endTime;
        num_phone_calls++;

        if(check_phone_number(p1)==false)||
        check_phone_number(p2)==false is_correct_phone_numbers = false;

        M[p1];

        duration[p1]+=count_time(startTime,endTime);
    }
    while (true);
    do {
        cin>> type;
        if (type=="#") break;
        if (type == "?check_phone_number"){
            cout<< is_correct_phone_numbers<<"\n";
        }
        else if( type = "?number_calls_from"){
            
        }
    }
    return 0;
}
    

   