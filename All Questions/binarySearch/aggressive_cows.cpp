#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int arr[], int cow, int mid, int n)
{
    int cowCount = 1;
    int lastPos = arr[0];
    for (int i = 0; i < n;i++){
        if (arr[i] - lastPos >= mid)
        {
            cowCount++;
            if(cowCount == cow)
                return true;
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(int arr[], int n, int cows){
    sort(arr, arr+n);

    int s = 0, maxi = -1;
    for (int i = 0; i < n;i++){
        maxi = max(maxi, arr[i]);
    }
    cout << maxi << endl;

    int e = maxi;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while(s<=e){
        if (isPossible(arr, cows, mid, n))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

    int
    main()
{
    int arr[] = {4, 2, 1, 3, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int cows = 2;
    int distance = aggressiveCows(arr, n, cows);
    cout << "distance - " << distance << endl;
}