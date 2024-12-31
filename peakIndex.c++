class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;

        while (start < end)
        {
            if (arr[mid] < arr[mid + 1])
            {
                start = mid + 1; // search range moves to the right.
            }
            else
            {
                end = mid; // keeping the peak in the search range.
            }
            mid = start + (end - start) / 2;
        }
        return start;
    }
};
