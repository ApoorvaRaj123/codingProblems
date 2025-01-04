#include <iostream>
using namespace std;

int main() {   
	int t;
	cin >> t;
	while (t--) { 
		int n;
		cin >> n;
		int a[n], b[n];
		for (int i = 0; i < n; i++) { 
			    cin >> a[i];
			}        
		for (int i = 0; i < n; i++) { 
			    cin >> b[i];
			}        
		int count = 0;
		if (a[0] == b[0]) {  
			for (int i = 0; i < n; i++) { 
				    if (a[i] == b[i]) { 
						count++;  
					} else { 
						break; 
					}            
				}        
			}        
		if (a[n - 1] == b[n - 1]) {
			    for (int i = n - 1; i >= 0; i--) {
					    if (a[i] == b[i]) {
							count++;
						} else {
							break; 
						}
					}       
				}
		        cout << n - count << endl;
			}    
			return 0;
		}
