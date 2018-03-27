type componentV = [
  | `Image
  | `NavLink
  | `TextLink
  | `BlockLink
  | `Avatar
  | `PageTitle
  | `PageSubtitle
  | `Card
  | `CardImage
  | `CardTitle
  | `CardSubtitle
  | `CardText
  | `CardKicker
  | `CardLink
  | `Container
  | `Svg
  | `DribbbleIcon
  | `TwitterIcon
  | `GitHubIcon
  | `FacebookIcon
  | `InstagramIcon
  | `PinterestIcon
  | `YoutubeIcon
  | `CodepenIcon
  | `VimeoIcon
  | `SnapchatIcon
  | `BehanceIcon
  | `EtsyIcon
  | `KickstarterIcon
  | `ProducthuntIcon
  | `StackoverflowIcon
  | `SlackIcon
  | `NpmIcon
  | `SoundcloudIcon
  | `LinkedinIcon
  | `IconLink
  | `Panel
  | `PanelAlt
  | `PanelTitle
  | `PanelSubtitle
  | `PanelKicker
  | `PanelText
  | `PanelImage
  | `PanelLink
  | `Flexbox
  | `Text
  | `SectionTitle
  | `Div
  | `Caps
  | `Capitalize
  | `PageBG
  | `Center
  | `SiteHeader
  | `HorizontalRule
  | `Tile
  | `TileLink
  | `TileTitle
  | `TileSubtitle
  | `TileKicker
  | `TileText
  | `TileImage
  | `Meta
  | `List
  | `ListItem
  | `ListItemLink
  | `LinkList
  | `Papercraft
  | `Icon
  | `Button
  | `BigButton
  | `CardComposite
];

let renderComponentToString = component =>
  switch (component) {
  | `Image => "Image"
  | `NavLink => "NavLink"
  | `TextLink => "TextLink"
  | `BlockLink => "BlockLink"
  | `Avatar => "Avatar"
  | `PageTitle => "PageTitle"
  | `PageSubtitle => "PageSubtitle"
  | `Card => "Card"
  | `CardImage => "CardImage"
  | `CardTitle => "CardTitle"
  | `CardSubtitle => "CardSubtitle"
  | `CardText => "CardText"
  | `CardKicker => "CardKicker"
  | `CardLink => "CardLink"
  | `Container => "Container"
  | `Svg => "Svg"
  | `DribbbleIcon => "DribbbleIcon"
  | `TwitterIcon => "TwitterIcon"
  | `GitHubIcon => "GitHubIcon"
  | `FacebookIcon => "FacebookIcon"
  | `InstagramIcon => "InstagramIcon"
  | `PinterestIcon => "PinterestIcon"
  | `YoutubeIcon => "YoutubeIcon"
  | `CodepenIcon => "CodepenIcon"
  | `VimeoIcon => "VimeoIcon"
  | `SnapchatIcon => "SnapchatIcon"
  | `BehanceIcon => "BehanceIcon"
  | `EtsyIcon => "EtsyIcon"
  | `KickstarterIcon => "KickstarterIcon"
  | `ProducthuntIcon => "ProducthuntIcon"
  | `StackoverflowIcon => "StackoverflowIcon"
  | `SlackIcon => "SlackIcon"
  | `NpmIcon => "NpmIcon"
  | `SoundcloudIcon => "SoundcloudIcon"
  | `LinkedinIcon => "LinkedinIcon"
  | `IconLink => "IconLink"
  | `Panel => "Panel"
  | `PanelAlt => "PanelAlt"
  | `PanelTitle => "PanelTitle"
  | `PanelSubtitle => "PanelSubtitle"
  | `PanelKicker => "PanelKicker"
  | `PanelText => "PanelText"
  | `PanelImage => "PanelImage"
  | `PanelLink => "PanelLink"
  | `Flexbox => "Flexbox"
  | `Text => "Text"
  | `SectionTitle => "SectionTitle"
  | `Div => "Div"
  | `Caps => "Caps"
  | `Capitalize => "Capitalize"
  | `PageBG => "PageBG"
  | `Center => "Center"
  | `SiteHeader => "SiteHeader"
  | `HorizontalRule => "HorizontalRule"
  | `Tile => "Tile"
  | `TileLink => "TileLink"
  | `TileTitle => "TileTitle"
  | `TileSubtitle => "TileSubtitle"
  | `TileKicker => "TileKicker"
  | `TileText => "TileText"
  | `TileImage => "TileImage"
  | `Meta => "Meta"
  | `List => "List"
  | `ListItem => "ListItem"
  | `ListItemLink => "ListItemLink"
  | `LinkList => "LinkList"
  | `Papercraft => "Papercraft"
  | `Icon => "Icon"
  | `Button => "Button"
  | `BigButton => "BigButton"
  | `CardComposite => "CardComposite"
  };

let renderer = component =>
  component |> renderComponentToString |> Mapped.find;
/* `Image |> renderer |> Js.log; */
/* renderer(`Image) |> Js.log; */