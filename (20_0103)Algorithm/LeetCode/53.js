/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
  let curSum = 0;
  let maxSum = nums[0];

  for (let i = 0; i < nums.length; i++) {
    let tt = nums[i] + curSum;
    if (nums[i] >= tt) {
      curSum = nums[i];
    } else {
      curSum = tt;
    }

    console.log("curSum: ", curSum);
    if (maxSum <= curSum) {
      maxSum = curSum;
    }
  }

  console.log(maxSum);
};

maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]);
