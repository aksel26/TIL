import _ from "lodash";

const userA = [
    {userId : '1', name :"Stark"},
    {userId : '2', name :"Thor"},

]

const userB = [
    {userId : '1', name :"Stark"},
    {userId : '3', name :"Hulk"},

]


const userC = userA.concat(userB)
console.log('userC: ', userC);
console.log('uniqueBy: ', _.uniqBy(userC, 'userId'));


const userD = _.unionBy(userA,userB, 'userId')
console.log('unionBy', userD)



