#include<iostream>
#include<vector>
using namespace std;

int main (){

// vector<int>v;
// v.push_back(2);
// cout<<v[0]<<endl;

 
    return 0;
}




/*

// Pratical 1 Of O.S ::--> 


#include<iostream>
using namespace std;
int main() {
	int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j; 
	cout<<"Enter total number of processes(maximum 20): "<<endl;
	cin>>n;
	cout<<"nEnter Process Burst Timen "<<endl;
	for (i=0;i<n;i++) {
		cout<<"P["<<i+1<<"]:";
		cin>>bt[i];
	}
	wt[0]=0;
	//waiting time for first process is 0
	//calculating waiting time
	for (i=1;i<n;i++) {
		wt[i]=0;
		for (j=0;j<i;j++)
		            wt[i]+=bt[j];
	}
	cout<<"nProcessttBurst TimetWaiting TimetTurnaround Time "<<endl;
	//calculating turnaround time
	for (i=0;i<n;i++) {
		tat[i]=bt[i]+wt[i];
		avwt+=wt[i];
		avtat+=tat[i];
		cout<<"nP["<<i+1<<"] "<<"tt "<<bt[i]<<"tt "<<wt[i]<<"tt "<<tat[i]<<endl;
	}
	avwt/=i;
	avtat/=i;
	cout<<"nnAverage Waiting Time: "<<avwt<<endl;
	cout<<"nAverage Turnaround Time: "<<avtat<<endl;
	return 0;
}

*/
