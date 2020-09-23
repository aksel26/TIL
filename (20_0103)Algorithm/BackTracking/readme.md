# 전수검사

- 어떤 문제가 Smart하게 해결되지 않을 경우, 모든 가능성을 다 점검해 보는 방법
- 상태공간트리로 구성됨
- N종류의 물건에 대해 0 / 1 Knapsack문제
- DFS와 유사



# BackTracking

- 전수검사에서 불필요한 분기(Branch)를 가지치기(Pruning)를 통해 줄여 효율을 꾀함.

- 복수개의 최적해를 찾을 수 있다.

- 적용대상

  - 다른 알고리즘 방법론으로는 해결하기 힘든 문제
  - 해결은되지만 비 효율정인 문제 (NP문제)
    - Traveling Salesman (`O(N2^n)`)

- ```c++
  BackTracking(node v){
  
    // Promising : 최적해 가능성이 있이면 파고들어가는 함수
    if(Promising(v)){
      if(Solution exist at v) Write Solution;
      else
        for (each child u of v) BackTracking(u);
    }
  }
  ```

  