/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */


var searchInsert = function (nums, target) {

    if (nums.indexOf(target) !== -1) {
        return nums.indexOf(target)
    } else {
        const isLargeNumber = (element) => element > target;
        let num = nums.findIndex(isLargeNumber)
        if (num === -1) {
            return nums.length
        }
        return num;
    }



};