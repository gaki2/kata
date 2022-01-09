var module = require("./event");

module.timer.on("tick", function () {
  var time = new Date();
  console.log(`now is ${time}`);
});
