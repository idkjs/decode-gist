# decode-gist

## [@yawaramin Guidance](https://reasonml.chat/t/belt-vs-pure-reason-and-json/365/6)

1.  When you get a JSON file as an external, you need to type it as Js.Json.t, not Js.t({..}), because the former tells Reason that this is a raw JSON structure to be decoded, but the latter tells Reason that it’s an already-decoded JavaScript object. Since it’s actually JSON, treating it as a JavaScript object is not type-safe because at runtime, any of the fields which you try to get out of it may not be present. => DONE.

2.  Use Belt.Option.map instead of options.

## Run Project

```sh
npm install
npm start
# in another tab
npm run webpack
```

After you see the webpack compilation succeed (the `npm run webpack` step), open up `src/index.html` (**no server needed!**). Then modify whichever `.re` file in `src` and refresh the page to see the changes.

**For more elaborate ReasonReact examples**, please see https://github.com/reasonml-community/reason-react-example

## Build for Production

```sh
npm run build
npm run webpack:production
```

This will replace the development artifact `build/Index.js` for an optimized version.

**To enable dead code elimination**, change `bsconfig.json`'s `package-specs` `module` from `"commonjs"` to `"es6"`. Then re-run the above 2 commands. This will allow Webpack to remove unused code.
