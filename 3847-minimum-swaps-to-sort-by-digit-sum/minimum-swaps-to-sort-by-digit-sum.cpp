class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<tuple<int,int,int>> v;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            int temp = nums[i];

            while (temp != 0) {
                int rem = temp % 10;
                sum += rem;
                temp /= 10;
            }

            v.push_back({sum, nums[i], i});
        }

        sort(v.begin(), v.end());

        vector<int> target(n);

        for (int i = 0; i < n; i++) {
            target[get<2>(v[i])] = i;
        }

        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i] || target[i] == i)
                continue;

            int cycle = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = target[j];
                cycle++;
            }

            swaps += cycle - 1;
        }

        return swaps;
    }
};