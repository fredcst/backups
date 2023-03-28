/*
 * By default this file will be overridden with every BetterTouchTool update.
 * If you make changes to this file, BTT will not update the file, however
 * features might not work correctly anymore.
 *
 * If possible only override the BTTNochBarUser.css and BTTNotchBarUser.js.
 *
 * If you absolutely need to make changes to this file, make sure to integrate the
 * changes from /Applications/BetterTouchTool.app/Contents/Resources/NotchBar/
 */

function BTTInitialize() {
  window.isInitialized = true;
}

function updateImage(b64Image, btnID) {
  let img = document.getElementById(btnID + "img");
  let containerElement = document.getElementById(
    "BTTStreamDeckPreviewContainer"
  );
  if (!img) {
    img = document.createElement("img");
    img.setAttribute("data-btnID", btnID);
    img.id = btnID + "img";
    img.setAttribute("x-apple-data-detectors", "false");
    img.classList.add("stream-deck-button-image");
    img.classList.add("BTTDraggable");
    img.draggable = false;
    img.onmousedown = () => {
      callBTT("widget_clicked", { id: btnID, up: false });
    };

    img.onmouseup = () => {
      callBTT("widget_clicked", { id: btnID, up: true });
    };
    containerElement.appendChild(img);
  }

  img.src = b64Image;

  let children = Array.prototype.slice.call(containerElement.children, 0);

  children.sort(function (a, b) {
    var aord = +a.getAttribute("data-btnID");
    var bord = +b.getAttribute("data-btnID");
    return aord - bord;
  });

  removeAllChildrenForElement(containerElement);

  for (var i = 0, l = children.length; i < l; i++) {
    containerElement.appendChild(children[i]);
  }
}


function setRowsAndCols(rows, cols) {
  const root = document.querySelector(':root');

// set css variable
  root.style.setProperty('--btt-stream-deck-rows', rows);
  root.style.setProperty('--btt-stream-deck-columns', cols);
}