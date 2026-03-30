class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n = mountainArr.length() - 1;
        int l = 0, r = n;
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (mountainArr.get(mid) > mountainArr.get(mid + 1)) r = mid;
            else l = mid + 1;
        }
        int peak = l;
        int res = binarySearch(mountainArr, 0, peak, target, true);
        if (res != -1) return res;
        return binarySearch(mountainArr, peak + 1, n, target, false);
    }

    int binarySearch(MountainArray &mountainArr, int l, int r, int target, bool ascending) {
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int val = mountainArr.get(mid);
            if (val == target) return mid;
            if (ascending) {
                if (val < target) l = mid + 1;
                else r = mid - 1;
            } else {
                if (val > target) l = mid + 1;
                else r = mid - 1;
            }
        }
        return -1;
    }
};