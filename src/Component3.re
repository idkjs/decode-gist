/* This is the basic component. */
let component = ReasonReact.statelessComponent("Page");

let make = _children => {
  ...component,
  render: _self => {
    let components = Mapped.components;
    /* let whatever = Mapped.find(`Image); */
    let x = Variants.renderer(`Image);
    /* Js.log(components); */
    <div className="App">

        <h1> (ReasonReact.stringToElement("One Random Component")) </h1>
        /* <div> (ReasonReact.stringToElement(whatever.name)) </div> */
        <h1> (ReasonReact.stringToElement("Using Variants?")) </h1>
        <div> (ReasonReact.stringToElement(x##name)) </div>
        <h1> (ReasonReact.stringToElement("Components")) </h1>
      </div>;
      /* <ul> Mapped.UI </ul> */
    /* <ul>
         (
           Mapped.componentMap
           |> Mapped.StringMap.iter((name, component) =>
                <li key=name>
                  (ReasonReact.stringToElement(component##name))
                </li>
              )
           /* (
              Array.map(components, component =>
                <li key=component.name>
                  (ReasonReact.stringToElement(component.name))
                </li>
              ) */
           |> ReasonReact.arrayToElement
         )
       </ul> */
  },
};