import { createStore } from "redux";
import React, { useState } from "react";

// 아래 함수는 리듀서입니다. useReduce 의 리듀서랑 모양이 똑같습니다.
function counter(state = 0, action) {
  switch (action.type) {
    case "INCREMENT":
      return state;
    case "DECREMENT":
      return state - 1;
    default:
      return state;
  }
}

// 앱의 상태를 보관하는 Redux 저장소를 만듦니다.
// 한 애플리케이션에 단 1개의 스토어가 있다.
// 스토어 안에는 state, reducer, {dispatch, subscribe, getState (내장함수)}가 있다.
let store = createStore(counter);

store.subscribe(() => console.log(store.getState()));

const Counter = () => {
  const [value, setValue] = useState(store.getState());

  const countUp = () => {
    store.dispatch({ type: "INCREMENT" });
    setValue(store.getState());
  };
  const countDown = () => {
    store.dispatch({ type: "DECREMENT" });
    setValue(store.getState());
  };
  return (
    <>
      <h1>{value}</h1>
      <button onClick={countUp}>플러스</button>
      <button onClick={countDown}>마이너스</button>
    </>
  );
};

export const CounterMemo = React.memo(Counter);
