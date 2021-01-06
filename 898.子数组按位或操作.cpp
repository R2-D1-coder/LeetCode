/*
 * @Descripttion: 功能
 * @Version: 
 * @Author:  
 * @Date: 2021-01-06 08:32:08
 * @LastEditors: Yang DongHao
 * @LastEditTime: 2021-01-06 08:37:59
 * @FilePath: \LeetCode\898.子数组按位或操作.cpp
 * @@copyright: Copyright (c) 2020, Dreame Inc.
 */
/*
 * @lc app=leetcode.cn id=898 lang=cpp
 *
 * [898] 子数组按位或操作
 */

// @lc code=start
class Solution
{
public:
    int subarrayBitwiseORs(vector<int> &arr)
    {
        unordered_set<int> ans;
        unordered_set<int> cur;
        unordered_set<int> nxt;
        for (int a : arr)
        {
            nxt.clear();
            nxt.insert({a});
            for (int b : cur)
            {
                nxt.insert(a | b);
            }
            cur.swap(nxt);
            ans.insert(begin(cur), end(cur));
        }
        return ans.size();
    }
};
// @lc code=end
