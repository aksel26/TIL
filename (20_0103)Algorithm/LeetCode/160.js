/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */
var getIntersectionNode = function (headA, headB) {
  if (!headA || !headB) return null;

  var nowA = headA;
  var nowB = headB;

  while (nowA !== nowB) {
    nowA = nowA ? nowA.next : headB;
    nowB = nowB ? nowB.next : headA;
  }

  return nowA;
};
