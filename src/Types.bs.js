// Generated by BUCKLESCRIPT VERSION 2.2.3, PLEASE EDIT WITH CARE
'use strict';


function styleToJs(param) {
  return {
          display: param[/* display */0],
          maxWidth: param[/* maxWidth */1],
          textTransform: param[/* textTransform */2],
          letterSpacing: param[/* letterSpacing */3],
          lineHeight: param[/* lineHeight */4],
          textDecoration: param[/* textDecoration */5],
          whiteSpace: param[/* whiteSpace */6],
          transition: param[/* transition */7],
          opacity: param[/* opacity */8],
          height: param[/* height */9],
          width: param[/* width */10],
          overflow: param[/* overflow */11],
          textAlign: param[/* textAlign */12]
        };
}

function styleFromJs(param) {
  return /* record */[
          /* display */param.display,
          /* maxWidth */param.maxWidth,
          /* textTransform */param.textTransform,
          /* letterSpacing */param.letterSpacing,
          /* lineHeight */param.lineHeight,
          /* textDecoration */param.textDecoration,
          /* whiteSpace */param.whiteSpace,
          /* transition */param.transition,
          /* opacity */param.opacity,
          /* height */param.height,
          /* width */param.width,
          /* overflow */param.overflow,
          /* textAlign */param.textAlign
        ];
}

function componentToJs(param) {
  return {
          name: param[/* name */0],
          type_: param[/* type_ */1],
          props: param[/* props */2],
          style: param[/* style */3],
          examples: param[/* examples */4],
          system: param[/* system */5],
          imports: param[/* imports */6],
          jsx: param[/* jsx */7],
          keyword: param[/* keyword */8],
          description: param[/* description */9]
        };
}

function componentFromJs(param) {
  return /* record */[
          /* name */param.name,
          /* type_ */param.type_,
          /* props */param.props,
          /* style */param.style,
          /* examples */param.examples,
          /* system */param.system,
          /* imports */param.imports,
          /* jsx */param.jsx,
          /* keyword */param.keyword,
          /* description */param.description
        ];
}

exports.styleToJs = styleToJs;
exports.styleFromJs = styleFromJs;
exports.componentToJs = componentToJs;
exports.componentFromJs = componentFromJs;
/* No side effect */
