module StringMap = Map.Make(String);

let components = Belt.List.fromArray(DCode.lab##components);

List.length(components) |> Js.log;

/* let myList = Belt.List.ofArray(components); */
/* List.length(myList) |> Js.log; */
let getComponentMap = myList =>
  List.fold_left(
    (map, component) => StringMap.add(component##name, component, map),
    StringMap.empty,
    myList,
  );

let componentMap = getComponentMap(components);

componentMap
|> StringMap.iter((name, component) =>
     Js.log({j|key:$name, val:$component|j})
   );

let test = StringMap.find("Image", componentMap);

Js.log(test##name);

Js.log(test##examples);