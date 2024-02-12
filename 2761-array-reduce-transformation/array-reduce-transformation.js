/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let ans = init;
    nums.forEach((item)=>{
        const reducedAns = fn(ans,item);
        ans = reducedAns;
        init = reducedAns;
    })
    return ans;
};