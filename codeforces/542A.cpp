#include<bits/stdc++.h>

using namespace std;
int main(){
    int t=0, npos=0, nneg=0;
    cin>>t;
    int ar[t];
    for(int i=0;i<t;i++)
    cin>>ar[i];
    int a = (t/2) + (t%2);
    for(int i=0;i<t;i++){
        if(ar[i]>0)
        npos++;
        if(ar[i]<0)
        nneg++;
    }
    if(npos>nneg){
		//cout<<"positive"<<npos<<" "<<a;
        if(npos>=a)
        cout<<"1";
        else
        cout<<"0";
    }
    else{
		//cout<<"negative"<<nneg<<" "<<a;
        if(nneg>=a)
        cout<<"-1";
        else
        cout<<"0";
    }
}

//-322 -198 -448 -249 -935 614 67 -679 -616 430 -71 818 -595 -22 559 -575 -710 50 -542 -144 -977 672 -826 -927 457 518 603 -287 689 -45 -770 208 360 -498 -884 -161 -831 -793 -991 -102 -706 338 298 -897 236 567 -22 577 -77 -481 376 -152 861 559 190 -662 432 -880 -839 737 857 -614 -670 -423 -320 -451 -733 -304 822 -316 52 46 -438 -427 601 -885 -644 518 830 -517 719 643 216 45 -15 382 411 -424 -649 286 -265 -49 704 661 -2 -992 67 -118 299 -420