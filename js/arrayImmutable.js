const arr = [1,2,3];

// concat : 배열에 값을 추가 할때 (ADD)
const arr2 = arr.concat(4);

console.log(arr, arr2);

// splice : 배열에서 값을 제거할 때 (DELETE) => !! 제거한 요소들이 담긴 배열을 반환함!
const arr3 = arr.splice(1,2); // 1번 인덱스에서부터 2개의 값 제거

console.log(arr3);
