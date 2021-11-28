let sandwich = {
	meat : "sausage",
	sauce: "salt",
	cheese: "mocha",
};

let {meat, ...rest} = sandwich;

console.log(meat, rest);
