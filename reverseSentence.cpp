#include <bits/stdc++.h>
using namespace std;

string reverseString(string &str)
{
    string ans = "";
    string temp = "";
    stack<string> st;
    int i = 0;
    while (i != str.size())
    {
        if (str[i] != ' ')
        {
            temp += str[i];
        }
        else if (str[i] == ' ' && !temp.empty())
        {
            st.push(temp);
            temp = "";
        }
        i++;
    }
    if (temp != "")
        st.push(temp);
    while (!st.empty())
    {
        ans += st.top();
        ans += " ";
        st.pop();
    }

    return ans;
}

int main()
{

    return 0;
}