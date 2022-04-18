#!/usr/bin/node

const Squares = require('./4-rectangle');
class Square extends Squares {
  charPrint (C) {
    const x = !C ? 'x' : C;
    for (let i = 0; i < this.height; i++) {
      console.log(x.repeat(this.width));
    }
  }
}
module.exports = Square;
