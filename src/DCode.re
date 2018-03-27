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
    "static": json |> field("y", optional(bool)),
  };
  let hover = json => {
    "opacity": json |> field("opacity", int),
    "transition": json |> field("transition", string),
  };
  let active = json => {
    "opacity": json |> field("opacity", int),
    "transition": json |> field("transition", string),
  };
  let props = json => {
    "src": json |> optional(string),
    "w": json |> optional(int),
    "mt": json |> optional(int),
    "mb": json |> optional(int),
    "my": json |> optional(int),
    "fontSize": json |> optional(array(int)),
    "fontWeight": json |> optional(string),
    "color": json |> optional(string),
    "borderColor": json |> optional(string),
    "hover": json |> optional(hover),
    "active": json |> optional(active),
  };
  let style = json => {
    "display": json |> field("display", optional(string)),
    "maxWidth": json |> field("maxWidth", optional(string)),
    "textTransform": json |> field("textTransform", optional(string)),
    "letterSpacing": json |> field("letterSpacing", optional(string)),
    "lineHeight": json |> field("lineHeight", optional(string)),
    "textDecoration": json |> field("textDecoration", optional(string)),
    "whiteSpace": json |> field("whiteSpace", optional(string)),
    "transition": json |> field("transition", optional(string)),
    "opacity": json |> field("opacity", optional(int)),
    "height": json |> field("height", optional(string)),
    "width": json |> field("width", optional(string)),
    "overflow": json |> field("overflow", optional(string)),
    "textAlign": json |> field("textAlign", optional(string)),
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