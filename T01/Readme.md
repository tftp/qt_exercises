## Objectives:

Create an application which allows to display/select a color. Read through the existing code template, first. This time we create a widget by specializing QWidget. Our own color selection dialog is already laying out the UI elements.

Your job will be to implement the actual application logic using Signals and Slots.

## Example:

- Create an application as shown in the sample Output for Qt Programming assignment 1:
  - Clicking on “Select Color” updates label with color’s name.
## Hints
- QColorDialog::getColor() to fetch a color
- QColor::name() to get the color name
## Optional
- In QColorDialog, honor the user clicking “cancel”, and provide it with
- the current color to start from.
- Set the selected color as the label’s background
- Hint: see QPalette
- Hint: see QWidget::setAutoFillBackground()
