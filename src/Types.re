type keyword = string;

type example = string;

type layout = {
  i: string,
  name: string,
  w: int,
  h: int,
  x: int,
  y: int,
  moved: option(bool),
  static: option(bool),
  /* test: Some(string), */
};

/* type layouts = array(layout); */
type props = {
  .
  src: option(string),
  w: option(int),
  mt: option(int),
  mb: option(int),
  my: option(int),
  fontSize: option(array(int)),
  fontWeight: option(string),
  color: option(string),
  borderColor: option(string),
  hover: option(hover),
  active: option(active),
}
and hover = {
  .
  opacity: int,
  transition: string,
}
and active = {
  .
  opacity: int,
  transition: string,
};

/* [@bs.deriving jsConverter] */
type style = {
  display: option(string),
  maxWidth: option(string),
  textTransform: option(string),
  letterSpacing: option(string),
  lineHeight: option(string),
  textDecoration: option(string),
  whiteSpace: option(string),
  transition: option(string),
  opacity: option(int),
  height: option(string),
  width: option(string),
  overflow: option(string),
  textAlign: option(string),
};

/* [@bs.deriving jsConverter] */
type component = {
  name: string,
  type_: option(string),
  props: option(props),
  style: option(style),
  examples: array(example),
  system: option(array(string)),
  imports: option(array(string)),
  jsx: option(string),
  keyword: option(array(keyword)),
  description: option(string),
};

type lab = {
  name: string,
  library: string,
  components: list(component),
  layout: array(layout),
};
/* type components = list(component); */