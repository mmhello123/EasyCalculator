#include "calculator.h"

Calculator::Calculator(QObject *parent)
    : QObject(parent)
{

}

Calculator::~Calculator() {}

void Calculator::inputNumber(const QString &number)
{
    if (m_waitingForNewValue) {
        if (number == ".") {
            if (!m_resultText.contains(".")) m_resultText += number;
            else return;
        } else {
            m_resultText = number;
        }
        m_waitingForNewValue = false;
    } else if (m_resultText == "0" && number != ".") {
        m_resultText = number;
    } else if (number == "." && m_resultText.contains(".")) {
        return;
    } else {
        m_resultText += number;
    }

    emit resultTextChanged(m_resultText);
}

void Calculator::inputOperator(const QString &op)
{
    // 如果最后一个字符是小数点，移除它
    if (!m_resultText.isEmpty() && m_resultText.endsWith('.')) {
        m_resultText.chop(1);
    }
    
    if (!m_waitingForNewValue) {
        m_previousValue = m_resultText;
    }
    
    m_processText = m_previousValue + " " + op;
    m_waitingForNewValue = true;
    m_operator = op;
    m_resultText = "0";
    emit resultTextChanged(m_resultText);
    emit processTextChanged(m_processText);
}

QString Calculator::resultText() const
{
    return m_resultText;
}

void Calculator::setResultText(const QString &resultText)
{
    if (m_resultText != resultText) {
        m_resultText = resultText;
        emit resultTextChanged(m_resultText);
    }
}

void Calculator::setProcessText(const QString &processText)
{
    if (m_processText != processText) {
        m_processText = processText;
        emit processTextChanged(m_processText);
    }
}

QString Calculator::processText() const
{
    return m_processText;
}

/*----------------------------------------------------------------------------*/

void Calculator::calculate()
{
    if (m_operator.isEmpty() || m_previousValue.isEmpty()) return;

    double previousValue = m_previousValue.toDouble();
    double currentValue = m_resultText.toDouble();
    m_processText += QString(" %1 =").arg(m_resultText);

    if (m_operator == "+") {
        m_resultText = QString::number(previousValue + currentValue);
    } else if (m_operator == "-") {
        m_resultText = QString::number(previousValue - currentValue);
    } else if (m_operator == "×") {
        m_resultText = QString::number(previousValue * currentValue);
    } else if (m_operator == "÷") {
        if (currentValue == 0.0) {
            m_resultText = "错误";
        } else {
            m_resultText = QString::number(previousValue / currentValue);
        }
    }

    emit resultTextChanged(m_resultText);
    emit processTextChanged(m_processText);

    // 清空操作符和等待新值标志
    m_operator = "";
    m_previousValue = m_resultText;
    m_waitingForNewValue = true;
}

void Calculator::clear()
{
    m_resultText = "0";
    m_previousValue = "0";
    m_operator = "";
    m_waitingForNewValue = false;
    m_processText = "";
    emit resultTextChanged(m_resultText);
    emit processTextChanged(m_processText);
}

void Calculator::clearEntry()
{
    if (m_processText.contains("="))
    {
        clear();
        emit processTextChanged(m_processText);
    }
    m_resultText = "0";
    emit resultTextChanged(m_resultText);
}

// 正负号切换
void Calculator::toggleSign()
{
    if (m_resultText == "0" || m_waitingForNewValue) return;

    if (m_resultText.startsWith("-")) m_resultText = m_resultText.mid(1);
    else m_resultText = "-" + m_resultText;
    emit resultTextChanged(m_resultText);
}

void Calculator::backspace()
{
    if (m_resultText == "0" || m_waitingForNewValue) return;

    m_resultText.chop(1);
    if (m_resultText.isEmpty() || m_resultText == "-") {
        m_resultText = "0";
    }

    emit resultTextChanged(m_resultText);
}

void Calculator::square()
{
    m_resultText = QString::number(m_resultText.toDouble() * m_resultText.toDouble());
    emit resultTextChanged(m_resultText);
}

void Calculator::squareRoot()
{
    double value = m_resultText.toDouble();
    if (value < 0.0) {
        m_resultText = "错误";
    } else {
        m_resultText = QString::number(sqrt(value));
    }
    emit resultTextChanged(m_resultText);
}

void Calculator::reciprocal()
{
    if (m_resultText == "0") return;
    m_resultText = QString::number(1 / m_resultText.toDouble());
    emit resultTextChanged(m_resultText);
}

void Calculator::percent()
{
    m_resultText = QString::number(m_resultText.toDouble() / 100.0);
    emit resultTextChanged(m_resultText);
}