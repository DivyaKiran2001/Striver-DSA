#Check for valid parenthesis
#Using stack

class Solution
{
	bool checkpar(string s,int n)
	{
		stack<char> st;
		for(int i=0;i<n;i++)
		{
			if(s[i]== '(' || s[i]== '[' || s[i] == '{')
				st.push(s[i]);
			else
			if(st.empty()) return false;
				char ch=st.top();
				if(s[i]== ')' && c== '(' || s[i]==']'&& c== '['  || s[i]=='}' && c== '{')
					return true;
				else
					return false;
		}
	}
}