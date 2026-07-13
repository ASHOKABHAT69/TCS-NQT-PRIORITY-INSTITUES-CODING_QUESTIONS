/*Print Fibonacci sereis till a given number N. 
By deafult it should start form these values,
s[0]=5 
s[1]=6 
if N<0 print "Error: N less than zero" without double quotes.

A--N--S;
1)How can you solve
2)you can use an array and or you can use two varibales and calculate sum and then print anything works!!

  Method 1) Using for loop in an array->*/
  #include<iostream>
  using namespace std;
  int main(){
    int n;
    cin>>n;
    int s[n];
    s[0]=5;
    s[1]=6;
    long long sum=0;
    for(int i=1;i<n;i++){
      sum=s[i-1]+s[i];
      s[i+1]=sum;
    }
    for(int i=0;i<=n;i++){
        cout<<s[i]<<" ";}
    return 0;
  }
/* O/P->
  6
  5 6 11 17 28 45 73 */

/*Method 2 - Using two variables and printing at each iteration*/
  #include<iostream>
  using namespace std;
  int main(){
    int n;
    cin>>n;
    int First=5, Second=6;
    cout<<First<<" "<<Second<<" ";
    long long sum=0;
    for(int i=0;i<n;i++){
      sum=First+Second;
      cout<<sum<<" ";
      First=Second;
      Second=sum;
    }
    return 0;
  }
/*o/P->
5
5 6 11 17 28 45 73  */

