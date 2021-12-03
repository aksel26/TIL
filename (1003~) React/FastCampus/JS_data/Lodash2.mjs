import _ from "lodash";

const userA = [
    {userId : '1', name :"Stark"},
    {userId : '2', name :"Thor"},
    {userId : '3', name :"Hulk"},
    {userId : '4', name :"BlackWidow"},
    {userId : '5', name :"HawkEye"},

]

const foundUser = _.find(userA, {name:'Thor'})
console.log('foundUser: ', foundUser);

const foundUserIndex = _.findIndex(userA, {name:'Hulk'})
console.log('foundUserIndex: ', foundUserIndex);


_.remove(userA, {name : 'HawkEye'})
console.log('userA: ', userA);


