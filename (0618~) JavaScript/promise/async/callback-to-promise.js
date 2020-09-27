// 5. 콜백지옥 ?
// 콜백nesting이 너무 많게하는것을 지양하자..
// 가독성이 떨어진다.
class UserStorage {
    loginUser(id, password) {
        return new Promise((resolve, reject) => {


            setTimeout(() => {
                if (
                    (id === 'kim' && password === '1243') ||
                    (id === 'kevin' && password === '3333')

                ) {
                    resolve(id);
                } else {
                    reject(new Error('not found'));
                }
            }, 2000);
        })
    }

    getRoles(user) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                if (user === 'kim') {
                    resolve({ name: 'kim', role: 'admin' });
                } else {
                    reject(new Error('not access'));
                }
            }, 1000)

        })
    }
}

const userStorage = new UserStorage();
const id = prompt('enter your id');
const password = prompt('enter your pw');

userStorage.loginUser(id, password)
    .then(userStorage.getRoles)
    .then(user => alert(`hello ${user.name},you have a ${user.role} role`))
    .catch(console.log);

