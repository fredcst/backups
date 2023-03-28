

function removeAllChildrenForElement(element) {
  var range = document.createRange();
  range.selectNodeContents(element);
  range.deleteContents();
}

function removeElementWithID(elementID) {
  console.log("remove element", elementID);
  let elem = document.getElementById(elementID);
  if (elem) {
    elem.parentElement.removeChild(elem);
  }
}

function removeClassFromAllElements(className) {
  console.log("remove class", className);
  const menubarButtons = document.getElementsByClassName(className);

  for (const button of menubarButtons) {
    button.classList.remove(className);
  }
}

function addClassToElements(className, elements) {
  console.log("add class", className, elements);
  for (const element of elements) {
    if (document.getElementById(element)) {
      document.getElementById(element).classList.add(className);
    }
  }
}

function removeClassFromElements(className, elements) {
  console.log("remove class", className, elements);
  for (const element of elements) {
    if (
      document.getElementById(element) &&
      document.getElementById(element).classList
    ) {
      document.getElementById(element).classList.remove(className);
    }
  }
}


async function retrieveSFFontIconWithName(sfSymbolName) {
  if (!window.sfSymbols) {
    window.sfSymbols = {};
  }
  if (window.sfSymbols[sfSymbolName]) {
    return window.sfSymbols[sfSymbolName];
  }

  let icon = await callBTT("retrieve_sf_symbol", { name: sfSymbolName });
  if (icon) {
    window.sfSymbols[sfSymbolName] = icon;
  }
  return icon;
}

function decodeBase64(base64) {
  if (!base64) {
    return undefined;
  }

  try {
    const text = atob(base64);
    const length = text.length;
    const bytes = new Uint8Array(length);
    for (let i = 0; i < length; i++) {
      bytes[i] = text.charCodeAt(i);
    }
    const decoder = new TextDecoder(); // default is utf-8
    return decoder.decode(bytes);
  } catch (e) {
    console.error("e", e);
  }
}

function setVariableForElement(variable, value, elementID) {
  let elem = document.getElementById(elementID);
  if (elem) {
    elem.style.setProperty(variable, value);
  }
}
