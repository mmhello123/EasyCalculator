import QtQuick
import QtQuick.Layouts

Item {
    id: rootId
    width: 78
    height: 48

    property alias text: textId.text

    signal clicked(string text)

    // Layout 属性默认值
    Layout.minimumWidth: 78
    Layout.minimumHeight: 48
    Layout.fillWidth: true
    Layout.fillHeight: true

    // 默认背景色、悬浮背景色、按下背景色
    property color defaultBackgroundColor: "#f9f9f9"
    property color hoveredBackgroundColor: "#f7f5f5"
    property color pressedBackgroundColor: "#f5f4f4"

    // 默认字体色、按下字体色
    property color defaultFontColor: "#1b1b1b"
    property color pressedFontColor: "#5e5f5f"

    Rectangle {
        id: rectId
        anchors.fill: parent
        color: mouseAreaId.containsMouse ? (mouseAreaId.pressed ? pressedBackgroundColor : hoveredBackgroundColor) : defaultBackgroundColor
        border.color: "gray"
        border.width: 1
        radius: 5
        
        Text {
            id: textId
            anchors.centerIn: parent
            text: ""
            font.pixelSize: 20
            color: mouseAreaId.pressed ? pressedFontColor : defaultFontColor
        }

        MouseArea {
            id: mouseAreaId
            anchors.fill: parent
            hoverEnabled: true
            onClicked: rootId.clicked(text)
        }
    }
}