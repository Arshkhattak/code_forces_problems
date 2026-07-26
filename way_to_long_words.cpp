#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char word[100];
    cin>>word;
    int len = strlen(word);
    for(int i = 0;i<len;i++)
    {
        cout<<word[i];
        int count = 1;
        while(i+1<len && word[i] == word[i+1])
        {
            count++;
            i++;
        }
        if(count >1)
        {
          cout<<count;
        }
    }
    cout<<endl;
    return 0;
}