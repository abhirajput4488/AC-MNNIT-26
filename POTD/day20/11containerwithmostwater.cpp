// #include <bits/stdc++.h>
// using namespace std;
//  int maxArea(vector<int>& height) {      
//     int water = 0, left = 0, right = height.size() - 1;
    
//     // Continue as long as the left pointer is less than the right pointer
//     while (left < right) {
//         // Calculate the area between the current walls and update the maximum water if needed
//         water = max(water, min(height[left], height[right]) * (right - left));
        
//         // Move the pointers towards each other based on the height of the walls
//         if (height[left] < height[right])
//             left++;
//         else
//             right--;
//     }
    
//     // Return the maximum water area
//     return water;

//     }
//gfg
//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    long long first=0,last=len-1,length,breadth,sum=0;
    while(first<last){
        length=last-first;
        if(A[first]>A[last])
        breadth=A[last--];
        else
        breadth=A[first++];
        if(sum<length*breadth)
        int summ=length*breadth;
    }
    return sum;
    
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends