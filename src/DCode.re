module Decode = {
  open Json.Decode;
  let props = json => {
    "src": field("src", optional(string)),
    "w": field("w", float),
  };
  let layout = json => {
    "i": field("i", string),
    "name": field("name", string),
    "w": field("w", int),
    "h": field("h", int),
    "x": field("x", int),
    "y": field("y", int),
    "moved": field("y", optional(bool)),
    "static": field("y", nullable(bool)),
  };
  let style = json => {
    "display": field("display", string),
    "maxWidth": field("maxWidth", string),
  };
  let component = json => {
    "name": field("name", string),
    "type": field("type", string),
    "props": field("props", props),
    "style": field("style", style),
    "examples": field("examples", array(string)),
  };
  let lab = json => {
    "name": field("name", string),
    "library": field("library", string),
    "layout": field("layout", array(layout)),
    "components": field("components", array(component)),
  };
};

[@bs.module] external lab : Js.Json.t = "./lab.json";

let lab = Decode.lab(lab);

/* Array.length(lab) |> Js.log; */
/* Belt.Array.forEach(lab, x => Js.log(x)); */
lab |> Js.log;

lab##components |> Js.log;
/* [nodemon] starting `node src/DCode.bs.js`
   { name: [Function: name],
     library: [Function: library],
     layout: [Function: layout],
     components: [Function: components] }
   [Function: components] */