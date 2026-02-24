#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    int array[N];

    for (int i = 0; i < N; i++) // O(N)
    {
        cin >> array[i];
    }

    sort(array, array + N); // O(NlogN) অ্যারে সর্ট করা হলো, কারণ বাইনারি সার্চের পূর্বশর্ত হলো অ্যারে সর্ট থাকা

    for (int i = 0; i < Q; i++) // O(Q)
    {
        int X;
        cin >> X;

        int flag = 0;

        // Binary Search O(logN)
        int low = 0, high = N - 1; // low এবং high ভ্যারিয়েবলের মাধ্যমে আমরা search space নির্ধারণ করলাম

        while (low <= high) // যতক্ষণ অ্যারেতে search করার মতো অন্তত একটি ভ্যালু থাকে
        {
            int mid_index = (low + high) / 2; // mid index বের করছি

            if (array[mid_index] == X) // যদি search space-এর মধ্যখানের element মান কাঙ্খিত মানের সমান হয়
            {
                flag = 1; // তবে flag-এর মান ১ করে search এখানে বন্ধ করে দিচ্ছি
                break;
            }
            else if (array[mid_index] > X) // যদি মিডের মান কাঙ্খিত মানের চেয়ে বড় হয়
            {
                high = mid_index - 1; // তবে আমরা mid_index-এর ডান সাইড বাদ দিচ্ছি (high = mid_index - 1)
            }
            else if (array[mid_index] < X) // যদি মিডের মান কাঙ্খিত মানের চেয়ে ছোট হয়
            {
                low = mid_index + 1; // তবে আমরা mid_index-এর বাম সাইড বাদ দিচ্ছি (low = mid_index + 1)
            }
        }

        if (flag)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
}
