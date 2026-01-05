#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>
#include <QtQml>

class Calculator : public QObject
{
    Q_OBJECT
    QML_ELEMENT
    Q_PROPERTY(QString processText READ processText WRITE setProcessText NOTIFY processTextChanged)
    Q_PROPERTY(QString resultText READ resultText WRITE setResultText NOTIFY resultTextChanged)
public:
    explicit Calculator(QObject *parent = nullptr);
    ~Calculator();

    Q_INVOKABLE void inputNumber(const QString &number);
    Q_INVOKABLE void inputOperator(const QString &op);
    Q_INVOKABLE void calculate();
    Q_INVOKABLE void clear();
    Q_INVOKABLE void clearEntry();
    Q_INVOKABLE void toggleSign();
    Q_INVOKABLE void backspace();

    Q_INVOKABLE void percent();
    Q_INVOKABLE void square();
    Q_INVOKABLE void squareRoot();
    Q_INVOKABLE void reciprocal();

    void setResultText(const QString &resultText);
    QString resultText() const;
    void setProcessText(const QString &processText);
    QString processText() const;

signals:
    void resultTextChanged(const QString &resultText);
    void processTextChanged(const QString &processText);

private:
    QString m_resultText{"0"};
    QString m_processText{"0"};

    QString m_previousValue{"0"};
    QString m_operator{""};
    bool m_waitingForNewValue{false};
};

#endif // CALCULATOR_H