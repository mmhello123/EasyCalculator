import QtQuick
import QtQuick.Controls

Item {
    width: 78
    height: 48

    property alias text: textId.text

    property color backgroundColor: "white"
    property color hoverColor: "white"
    property color pressedColor: "white"

    property color fontColor: "#5d5d5d"
    property color fontPressedColor: "#5d5d5d"

    Rectangle {
        id: rectId
        anchors.fill: parent
        color: mouseAreaId.pressed ? pressedColor : (mouseAreaId.containsMouse ? hoverColor : backgroundColor)
        border.color: "gray"
        border.width: 1
        radius: 5
        
        Text {
            id: textId
            anchors.centerIn: parent
            text: ""
            font.pixelSize: 20
            color: mouseAreaId.pressed ? fontPressedColor : fontColor
        }

        MouseArea {
            id: mouseAreaId
            anchors.fill: parent
            hoverEnabled: true
            onClicked: {}
        }
    }
}