## Boyer-Moore

> 오른쪽에서 왼쪽으로 문자열 비교. 하지만 이동은 왼쪽에서 오른쪽.

- KMP 알고리즘과 유사하나 text에서 비교하지 않을 부분을 건너띔

- 2가지 이동방법

  1. 나쁜 문자 이동

     - 순서 

       <img width="861" alt="스크린샷 2020-01-17 오후 5 21 28" src="https://user-images.githubusercontent.com/50945713/72595754-e1b19c80-394d-11ea-9b2f-4101e56f740b.png">

  2. 착한 접미부 이동