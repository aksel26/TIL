class ListNode {
  constructor(val, next) {
    this.val = val === undefined ? 0 : val;
    this.next = next === undefined ? null : next;
  }
}
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var mergeTwoLists = function (l1, l2) {
  let l1 = new ListNode(l1);
  let newList = new ListNode(0);
  console.log("newList: ", newList);

  let headOfNewList = newList;

  while (l1 !== null && l2 !== null) {
    if (l1.val < l2.val) {
      newList.next = l1;
      l1 = l1.next;
    } else {
      newList.next = l2;
      l2 = l2.next;
    }

    newList = newList.next;
  }
  if (l1 === null) {
    newList.next = l2;
  } else {
    nextList.next = l1;
  }

  return headOfNewList.next;
};

mergeTwoLists([1, 2, 4], [1, 3, 4]);
// mergeTwoLists([], []);
// mergeTwoLists([], [0]);
