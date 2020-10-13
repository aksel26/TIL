const toggle = document.querySelector('.toggle');

const menu = document.querySelector('.menu');
const sns = document.querySelector('.sns');
toggle.addEventListener('click', () => {
    menu.classList.toggle('active');
    sns.classList.toggle('active');
})