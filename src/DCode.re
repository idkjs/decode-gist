module Decode = {
  open Json.Decode;
  let hover = json => {
    "opacity": json |> field("opacity", int),
    "transition": json |> field("transition", string),
  };
  let active = json => {
    "opacity": json |> field("opacity", int),
    "transition": json |> field("transition", string),
  };
  let props = json => {
    "src": json |> optional(field("src", string)),
    "w": json |> optional(field("w", float)),
    "mt": json |> optional(field("mt", float)),
    "mb": json |> optional(field("mb", int)),
    "my": json |> optional(field("my", int)),
    "fontSize": json |> optional(field("fontSize", array(int))),
    "fontWeight": json |> optional(field("fontWeight", string)),
    "color": json |> optional(field("color", string)),
    "borderColor": json |> optional(field("borderColor", string)),
    "hover": json |> optional(field("hover", hover)),
    "active": json |> optional(field("active", active)),
  };
  let layout = json => {
    "i": json |> field("i", string),
    "name": json |> field("name", string),
    "w": json |> field("w", int),
    "h": json |> field("h", int),
    "x": json |> field("x", int),
    "y": json |> field("y", int),
    "moved": json |> optional(field("moved", bool)),
    "static": json |> optional(field("static", bool)),
  };
  let style = json => {
    "display": json |> optional(field("display", string)),
    "maxWidth": json |> optional(field("maxWidth", string)),
    "textTransform": json |> optional(field("textTransform", string)),
    "letterSpacing": json |> optional(field("letterSpacing", string)),
    "lineHeight": json |> optional(field("lineHeight", string)),
    "textDecoration": json |> optional(field("textDecoration", string)),
    "whiteSpace": json |> optional(field("whiteSpace", string)),
    "transition": json |> optional(field("transition", string)),
    "opacity": json |> optional(field("opacity", int)),
    "height": json |> optional(field("height", string)),
    "width": json |> optional(field("width", string)),
    "overflow": json |> optional(field("overflow", string)),
    "textAlign": json |> optional(field("textAlign", string)),
  };
  let component = json => {
    "name": json |> field("name", string),
    "type": json |> optional(field("type", string)),
    "props": json |> optional(field("props", props)),
    "style": json |> optional(field("style", style)),
    "examples": json |> optional(field("examples", array(string))),
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
/* lab |> Js.log; */
Array.length(lab##components) |> Js.log;

lab##components |> Js.log2("COMPONENTS", _);
/* lab##components.examples |> Js.log2("Examples", _); */
/* [nodemon] starting `node src/DCode.bs.js`
   { name: [Function: name],
     library: [Function: library],
     layout: [Function: layout],
     components: [Function: components] }
   [Function: components] */