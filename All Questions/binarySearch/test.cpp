class Solution
{
public:
    int getPivot(vector<int> &nums, int size)
    {
        int s = 0, e = nums.size() - 1, mid = s + (e - s) / 2;

        while (s < e)
        {
            if (nums[mid] >= nums[0])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }

    int bSearch(vector<int> &nums, int s, int e, int target)
    {
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;

            mid = s + (e - s) / 2;
        }
        return -1;
    }

    int search(vector<int> &nums, int target)
    {
        int length = nums.size();
        int pivot = getPivot(nums, length);
        int ans;
        if (nums[pivot] <= target && target <= nums[length - 1])
        {
            ans = bSearch(nums, pivot, length - 1, target);
        }
        else
        {
            ans = bSearch(nums, 0, pivot - 1, target);
        }
        return ans;
    }
};