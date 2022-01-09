import { useReducer } from 'react';

function reducer(state, action) {
    switch (action.type) {
        case 'INCREMENT':
            return state + 1;
        case 'DECREMENT':
            return state - 1 ;
        default :
            return state;
    }
}

const Counter = () => {
    const [number, dispatch] = useReducer(reducer, 0);

    const countUp = () => {
        dispatch({type: 'INCREMENT'});
    }
    const countDown = () => {
        dispatch({type: 'DECREMENT'});
    }
    return(
        <>
            <h1>{number}</h1>
            <button onClick={countUp}>플러스</button>
            <button onClick={countDown}>마이너스</button>
        </>
    )
}

export default Counter;