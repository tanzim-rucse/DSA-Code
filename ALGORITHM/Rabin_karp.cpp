#include <bits/stdc++.h> 
using namespace std; 
#define d 256 
int q=101;
void search(string s1,string s2) 
{ 
	int M = s1.size();
	int N = s2.size(); 
	int i, j; 
	int p = 0; 
	int t = 0; 
	int h = 1; 


	for (i = 0; i < M - 1; i++) 
		h = (h * d) % q; 

	for (i = 0; i < M; i++) 
	{ 
		p = (d * p + s1[i]) % q; 
		t = (d * t + s2[i]) % q; 
	} 

	// Slide the s1tern over text one by one 
	for (i = 0; i <= N - M; i++) 
	{ 

		// Check the hash values of current window of text 
		// and s1tern. If the hash values match then only 
		// check for characters on by one 
		if ( p == t ) 
		{ 
			/* Check for characters one by one */
			for (j = 0; j < M; j++) 
			{ 
				if (s2[i+j] != s1[j]) 
					break; 
			} 

			// if p == t and s1[0...M-1] = s2[i, i+1, ...i+M-1] 
			if (j == M) 
				cout<<"Pattern found at index "<< i<<endl; 
		} 

		// Calculate hash value for next window of text: Remove 
		// leading digit, add trailing digit 
		if ( i < N-M ) 
		{ 
			t = (d*(t - s2[i]*h) + s2[i+M])%q; 

			// We might get negative value of t, converting it 
			// to positive 
			if (t < 0) 
			t = (t + q); 
		} 
	} 
} 

/* Driver code */
int main() 
{ 
    string s1,s2;cin>>s1>>s2;
	search(s1,s2); 
	return 0; 
} 

// This is code is contributed by rathbhupendra 