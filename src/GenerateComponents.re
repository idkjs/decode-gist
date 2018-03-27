open Mapped;

open Variants;

let component = ReasonReact.statelessComponent("Generated");

let make = _children => {
  ...component,
  render: _self =>
    <div className="App">
      <ul>
        (
          componentMap
          |> StringMap.iter((name, component) => {
               let key = {j|key:$name|j};
               let component = {j|val:$component|j};
               <li key> (ReasonReact.stringToElement("key##name")) </li>;
             })
          |> ReasonReact.arrayToElement
        )
      </ul>
    </div>,
};
/* componentMap
     |> StringMap.iter((name, component) =>
          name
          |> VariantsDemo.renderer
          |> ReactDOMRe.createElement(component##name, component##props)
        );

   UI |> Js.log2("UI", _);
   Js.log("UI"); */