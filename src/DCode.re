module Decode = {
  open Json.Decode;
  let props = json => {
    "src": json |> field("src", optional(string)),
    "w": json |> field("w", float),
  };
  let layout = json => {
    "i": json |> field("i", string),
    "name": json |> field("name", string),
    "w": json |> field("w", int),
    "h": json |> field("h", int),
    "x": json |> field("x", int),
    "y": json |> field("y", int),
    "moved": json |> field("y", optional(bool)),
    "static": json |> field("y", nullable(bool)),
  };
  let style = json => {
    "display": json |> field("display", string),
    "maxWidth": json |> field("maxWidth", string),
  };
  let component = json => {
    "name": json |> field("name", string),
    "type": json |> field("type", string),
    "props": json |> field("props", props),
    "style": json |> field("style", style),
    "examples": json |> field("examples", array(string)),
  };
  let lab = json => {
    "name": json |> field("name", string),
    "library": json |> field("library", string),
    "layout": json |> field("layout", array(layout)),
    "components": json |> field("components", array(component)),
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