

## HTML

### inline display ( 같은 줄에 있으려는 성질)

1.span
2. a
3. b
4. i
5. img
6. button


inline은 width, height 값 변경을 주어도 auto 로 표시돔

방법은 `display : inline-block;` 을 입력한다.

### block display (줄이 바뀌려는 성질을 가짐)

1. div
2. h1, h2, h3
3. p 
4. nav
5. ul
6. li


### img태그에 대해서

같은 줄에 있으면서도 가로세로 길이를 줄 수 있다 -> inline block
하지만 요소 검사를 하면 inline display로 나옴 
(대체요소)
엄청 큰 글자처럼 보면된다.

inline요소와 <-> inline block요소의 차이점
    : 차이점은 text처럼 다룰 수 있다.

가운데 정렬 
```css
img{
    display:block:
    margin-left:auto;
    margin-right:auto;
}
```


### 다양한 링크


