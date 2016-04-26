#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<char,int> p,q;
	string s,t;
	cin>>s>>t;
	int n=s.length();
	int tl=t.length();
	for(int i=0;i<n;i++)
		p[s[i]]++;
	for(int i=0;i<tl;i++)
		q[t[i]]++;
	int yay=0;
	int wh=0;
	
	for(char i='A';i<='z';i++){
		if(p[i]&&q[i]){
			int v=min(p[i],q[i]);
			yay+=v;
			p[i]-=v;
			q[i]-=v;
		}
	}
	for(char i='A';i<='Z';i++){
		char j=tolower(i);
		if(p[i]&&q[j]){
			int v=min(p[i],q[j]);
			wh+=v;
			p[i]-=v;
			q[j]-=v;
		}
	}
	for(char i='a';i<='z';i++){
		char j=toupper(i);
		if(p[i]&&q[j]){
			int v=min(p[i],q[j]);
			wh+=v;
			p[i]-=v;
			q[j]-=v;
		}
	}
	
	printf("%d %d\n",yay,wh);
	return 0;
}




/*
Codeforces 518B..
  Tanya and Postcard
  TL= 2sec
  ML= 256 megabytes

Little Tanya decided to present her dad a postcard on his Birthday. She has already created a message — string s of length n, 
consisting of uppercase and lowercase English letters. Tanya can't write yet, so she found a newspaper and decided to cut out the 
letters and glue them into the postcard to achieve string s. The newspaper contains string t, consisting of uppercase and lowercase 
English letters. We know that the length of string t greater or equal to the length of the string s.

The newspaper may possibly have too few of some letters needed to make the text and too many of some other letters. That's why Tanya
wants to cut some n letters out of the newspaper and make a message of length exactly n, so that it looked as much as possible like s.
If the letter in some position has correct value and correct letter case (in the string s and in the string that Tanya will make),
then she shouts joyfully "YAY!", and if the letter in the given position has only the correct value but it is in the wrong case, 
then the girl says "WHOOPS".

Tanya wants to make such message that lets her shout "YAY!" as much as possible. If there are multiple ways to do this, then her 
second priority is to maximize the number of times she says "WHOOPS". Your task is to help Tanya make the message.

  **Input*******
The first line contains line s (1≤|s|≤2*10^5), consisting of uppercase and lowercase English letters — the text of Tanya's message.

The second line contains line t (|s|≤|t|≤2*10^5), consisting of uppercase and lowercase English letters — the text written in the 
newspaper.

Here |a| means the length of the string a.

  **Output******
Print two integers separated by a space:

the first number is the number of times Tanya shouts "YAY!" while making the message,
the second number is the number of times Tanya says "WHOOPS" while making the message.
Examples
  input
    AbC
    DCbA
  output
    3 0
    
  input
    ABC
    abc
  output
  0 3
  
  input
    abacaba
    AbaCaBA
  output
    3 4
    
    
*/
