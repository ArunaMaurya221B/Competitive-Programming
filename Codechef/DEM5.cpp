    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        long int a=0, b=0, sum=0;
        cin>>a>>b;
        if((b-a+1)%2==0){
            int temp = (b-a+1)/2;
            while(temp--){
                sum = sum+a*a+b*b;
                a++;
                b--;
            }
            cout<<sum;
        }
        else{
            int temp1= (b-a)/2;
            while(temp1--){
                sum=sum+a*a+b*b;
                a++;
                b--;
        }
        sum=sum+((b-a)/2)+a*a;
        cout<<sum;
    }
    } 
