<h1>Table of content</h1>

- [Starting from Scrath](#starting-from-scrath)
- [Hierarchy is Everything](#hierarchy-is-everything)
- [Layout and Spacing](#layout-and-spacing)
- [Design Text](#design-text)
- [Working with Color](#working-with-color)
- [Creating Depth](#creating-depth)
- [Working with Images](#working-with-images)
- [Finishing Touches](#finishing-touches)
- [Leveling up](#leveling-up)

# Starting from Scrath

- Start with a feature, not a layout
- Details comes later
  - Hold the color
  - Don't over invest
- Don't design too much
  - Work in cycles: Design, code, design, code...
  - Be a pessimist: Design only features you're implementing right now
- Choose a personality based on: font, color, border radius, language
- Limit your choices
  - Define systems in advance for:
    - color
    - font (size, weight)
    - line height
    - margin
    - padding
    - width
    - height
    - box shadows
    - border width
    - opacity
    - extra things you run into
  - Design by process of elimination: choose the middle out of 3

# Hierarchy is Everything

- Not all elements are equal (Visual Hierarchy)
- Size isn't everything (use also font weight and color)
  - Color: dark, grey, lighter gray
  - Font weight: normal, heavier
- Don't use grey text on colored backgrounds
  - Hand-pick a new color based on bg color.
  - Same hue, adjust only saturation and lightness
  - Text should not look faded
- Emphasize by de-emphasizing
- Labels are a last resort
  - You might not need a label at all
  - Combine labels and values
  - Labels are secondary (in case you need them)
  - Only emphasize label if you know user will look for it
- Separate visual hierarchy from document hierarchy
- Balance weight and contrast
  - Using contrast to compansate for weight (for icons example)
  - Using weight to compansate for contrast (for border example)
- Semantics are secondary (design by hierarchy)
  - Primary actions: should be obvious: solid, hight contrast bg colors are good options
  - Secondary actions: should be clear but not prominent: outline styles or lower contrast bg colors are good options
  - Tertiary actions: should be discoverable but unobstusive. Basic link styling is good option
  - Destructive actions: you can give secondary or tertiary design and add a confirmation step, where the desctructive action is the primary action

# Layout and Spacing

- Start with too much white space
  - White space should be removed not added
  - Dense UIs have their place (dashboards, deliberate decision)
- Establish a spacing and sizing system
  - A linear scale won't work (>25%)
  - Defining the systems (spacing and sizing): start with a default value 16px is commonly used
    - 4px (16 x 0.25)
    - 8px (16 x 0.5)
    - 16px (16 x 1)
    - 32px (16 x 2)
    - 64px (16 x 4)
    - 96px (16 x 6)
    - 128px (16 x 8)
    - 192px (16 x 12)
    - 256px (16 x 16)
    - 384px (16 x 24)
    - 512px (16 x 32)
    - 640px (16 x 40)
    - 768px (16 x 48)
- You don't have to fill the whole screen (only the space it needs)
  - Shrink the canvas (mobile first for web responsive apps)
  - Thinking in columns
  - Don't force it (Don't cramp everything)
- Grids are overrated
  - Not all elements should be fluid
  - Don't shrink an element until you need to
- Relative sizing doesn't scale
  - Relationships within elements
- Avoid ambiguous spacing

# Design Text

- Establish a type scale
  - Modular scales: hand crafted, just like spacing and sizing
  - Avoid em units
- Use good fonts
  - Play it safe
  - Ignore typefaces with less than five weights
  - Steal from people who care
- Keep your line length in check
  - 45 to 75 characters per line (easist with em)
  - Dealing with wider content (don't ocupy the entire space)
- Baseline, not center
- Line-height is proportional
  - 1.5 is a good place to start (don't use it everywhere)
  - Accounting for line length (wider -> bigger)
  - Accounting for font size (small -> bigger)
- Not every link needs a color (can be only on hover)
- Align with readability in mind
  - Don't center long form text
  - Right-align numbers
  - Hyphenate justified text
- Use letter-spacing effectively
  - Tightening headlines
  - Improving all-caps legibility (increase by 0.05em)

# Working with Color

- Ditch hex for HSL
- You need more colors than you think
  - Greys 8-10; dark to low
  - Primary color 5-10
  - Accent colors 5-10
    - Eye-grabbing
    - Destructive actions
    - Warning messages
    - Etc.
- Define your shades up front
  - Choose the base color first
    - Works good as a button background
  - Darkest should be used as text in an alert
  - Lightest bg of an alert
  - Darkest and ligthest should have the same hue as base
  - Filling in the gaps
    - From 100 to 900
    - Pick 700 and 300 first and so on
- Don't let the ligthness kill your saturation
  - Lighter and darker color should use more saturation
  - Use perceived brightness to your advantage
  - Changing brightness by rotating hue, no more than 20-30
    - Lightest 60, 180, 300
    - Darkest 0, 120, 240
- Greys don't have to be grey, use saturation
  - Neutral, 0 sat
  - Cool, blue sat
  - Warm, yellow sat
- Accessible doesn't have to mean ugly
  - <18px 4.5:1
  - \>18px 3:1
  - Flipping the contrast (use light bg and darker text)
  - Rotating the hue of bg
- Don't rely on color alone

# Creating Depth
- Emulate a light source
  - Raised elements (top lighter, handpicked)
    - box-shadow: inset 0 1px 0 hsl(224, 84%, 74%)
    - box-shadow: 0 1px 3px hsla(0, 0%, 0%, .2) (vertical offset)
  - Inset elements (bottom light)
    - box-shadow: 0 2px 0 hsla(0, 0%, 100%, .15)
    - box-shadow: inset 0 2px 2px hsla(0,0%, 0%, 0.1)
  - Don't get carried away
- Use shadows to convey elevation
  - small shadow + tight blur = slightly raised
  - big shadow + higher blur = higher raised (attracts focus)
  - small for buttons
  - medium for dropdowns
  - large for modals
  - Establish an elevation system
    - 5 from smallest to largest shadow
  - Combining shadows with interaction
- Shadows can have two parts
  - box-shadow: 0 4px 6px rgba(0, 0, 0, .7), 0 5px 15px rgba(0, 0, 0, .1);
  - Accounting for elevation
- Even flat design can have depth
  - Creating depth with color
  - Using solid shadows
- Overlap elements to create layers

# Working with Images
- Text on photos
  - Add overlay
  - Lower the image contrast
  - Colorize the image
  - Add a text shadow
- Don't scale icons
- Don't add unreadable screenshots
- Beware user-uploaded content
  - Control the shape and size
  - Prevent backgrounf bleed with box-shadow

# Finishing Touches
- Supercharge the defaults
  - Replace bullet lists with icons
  - Replace quotes with icons for testimonials
  - Links: color, weight, custom underline
  - Forms: Add custom checkboxed, radio buttons
- Add color with accent borders
- Decorate your backgrounds
  - Change bg color or add slight gradient
  - Use a repeating pattern (Hero Patterns)
  - Add a simple shape or illustration
- Don't overlook empty states
  - Add call to action with an img or an illustration
  - Hide unnecessary content
- Use fewer borders
  - Use a box shadow
  - Use two different bg colors
  - Add extra spacing
- Think outside the box
  - Dropdowns: split them up, use icons, title, desc
  - Tables: if they don't require sorting use more data in cells, images
  - Radio buttons: make them selectable cards

# Leveling up
  - Look for decisions you wouldn't have made
    - Inverted data pickeg bg color
    - Button inside text input
    - Two different colors in a headline
  - Rebuild your favorite interfaces