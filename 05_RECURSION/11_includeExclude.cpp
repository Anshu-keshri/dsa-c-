#include<iostream>
#include<vector>
using namespace std;

void includeExclude(string input,string output,int i,vector<string> &result){
    if(i==input.length()){
        result.push_back(output);
        return;
    }
// FOR INCLUDE PART................
    includeExclude(input,output+input[i],i+1,result);
// FOR EXCLUDE PART................
    includeExclude(input,output,i+1,result);
}

int main()
{
    string input="abc";
    string output=" ";
    vector<string> result;
    includeExclude(input,output,0,result);
    cout<<"subsequence is: "<<"\n";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<"\n";
    }

}