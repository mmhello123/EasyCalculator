import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import EasyCalculator

Window {
    // 1. id
    id: root

    // 2. 尺寸 / 可见性
    width: 328
    height: 505
    minimumWidth: 328
    minimumHeight: 505
    visible: true

    // 3. 窗口属性
    title: "计算器"
    color: "#f4f2f2"

    Calculator {
        id: calculator
    }

    // 4. 内容
    ColumnLayout {
        anchors.fill: parent
        spacing: 0
        anchors {
            topMargin: 20
            leftMargin: 5
            rightMargin: 5
            bottomMargin: 5
        }

        // 过程显示区域
        Text {
            id: processTextId
            text: calculator.processText
            color: "#606263"
            font.pixelSize: 16
            horizontalAlignment: Text.AlignRight
            verticalAlignment: Text.AlignBottom

            Layout.fillWidth: true
            Layout.preferredHeight: 20
            Layout.rightMargin: 11
        }

        // 显示区域
        Text {
            id: resultTextId
            text: calculator.resultText
            color: "#000000"
            font.pixelSize: 44
            horizontalAlignment: Text.AlignRight
            verticalAlignment: Text.AlignTop

            Layout.fillWidth: true
            Layout.fillHeight: true
            Layout.preferredHeight: 72
            Layout.rightMargin: 11
        }

        // 按钮区域
        GridLayout {
            Layout.fillWidth: true
            Layout.fillHeight: true
            columns: 4
            columnSpacing: 2
            rowSpacing: 2

            // 第一行：%、CE、C、Backspace
            FunctionalButton {
                text: "%"
                onClicked: calculator.percent()
            }
            FunctionalButton {
                text: "CE"
                onClicked: calculator.clearEntry()
            }
            FunctionalButton {
                text: "C"
                onClicked: calculator.clear()
            }
            FunctionalButton {
                text: "⌫"
                onClicked: calculator.backspace()
            }
            
            // 第二行：1/x、x2、2x
            FunctionalButton {
                text: "x⁻¹"
                onClicked: calculator.reciprocal()
            }
            FunctionalButton {
                text: "x²"
                onClicked: calculator.square()
            }
            FunctionalButton {
                text: "√x"
                onClicked: calculator.squareRoot()
            }
            FunctionalButton {
                text: "÷"
                onClicked: calculator.inputOperator("÷")
            }

            // 第三行：7、8、9
            NumberButton {
                text: "7"
                onClicked: calculator.inputNumber("7")
            }
            NumberButton {
                text: "8"
                onClicked: calculator.inputNumber("8")
            }
            NumberButton {
                text: "9"
                onClicked: calculator.inputNumber("9")
            }
            FunctionalButton {
                text: "×"
                onClicked: calculator.inputOperator("×")
            }

            // 第四行：4、5、6
            NumberButton {
                text: "4"
                onClicked: calculator.inputNumber("4")
            }
            NumberButton {
                text: "5"
                onClicked: calculator.inputNumber("5")
            }
            NumberButton {
                text: "6"
                onClicked: calculator.inputNumber("6")
            }
            FunctionalButton {
                text: "-"
                onClicked: calculator.inputOperator("-")
            }

            // 第五行：1、2、3
            NumberButton {
                text: "1"
                onClicked: calculator.inputNumber("1")
            }
            NumberButton {
                text: "2"
                onClicked: calculator.inputNumber("2")
            }
            NumberButton {
                text: "3"
                onClicked: calculator.inputNumber("3")
            }
            FunctionalButton {
                text: "+"
                onClicked: calculator.inputOperator("+")
            }

            // 第六行：0、.、=
            NumberButton {
                text: "+/-"
                onClicked: calculator.toggleSign()
            }
            NumberButton {
                text: "0"
                onClicked: calculator.inputNumber("0")
            }
            NumberButton {
                text: "."
                onClicked: calculator.inputNumber(".")
            }
            EqualSignButton {
                text: "="
                onClicked: calculator.calculate()
            }
        }
    }
}
