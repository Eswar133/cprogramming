/*Problem

You are given an array AA of length NN. An element XX is said to be dominant if the frequency of XX in AA is strictly greater than the frequency of any other element in the AA.

For example, if A=[2,1,4,4,4]A=[2,1,4,4,4] then 44 is a dominant element since its frequency is higher than the frequency of any other element in AA.

Find if there exists any dominant element in AA.
Input Format

    The first line of input contains a single integer TT — the number of test cases. Then the test cases follow.
    The first line of each test case contains an integer NN — the size of the array AA.
    The second line of each test case contains NN space-separated integers A1,A2,…,ANA1​,A2​,…,AN​ denoting the array AA.
*/
#include<stdio.h>
int main(){
    int t;
    scanf("%i",&t);
    for(int h=0;h<t;h++){
        int n;
        scanf("%i",&n);
        int a[n];
        for (int i=0;i<n;i++){
            scanf("%i",&a[i]);
        }
        int len[n];
        for(int i=0;i<n;i++){
            int k=1;
            for(int j=i+1;j<n;j++){
                if(a[j]==-1)
                continue;
                else if(a[i]==a[j]){
                k=k+1;
                a[j]=-1;
                }
            }
            len[i]=k;
        }
        int max = len[0];
        for(int l=1;l<n;l++){
            if(len[l]>max){
            max=len[l];
            }
        }
        int p=0;
        for(int b=0;b<n;b++){
            if(max==len[b]){
                p++;
            }
        }
        if(p>1){
            printf("NO\n");
        }
        else if(p==1)
        printf("YES\n");
    }
}

