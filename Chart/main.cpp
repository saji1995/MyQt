#include <iostream>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QApplication>

QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 构建 series，作为图表的数据源，为其添加 6 个坐标点
    QLineSeries *series = new QLineSeries();
    series->append(0, 5);
    series->append(4, 10);
    series->append(8, 6);
    *series << QPointF(13, 5) << QPointF(17, 6) << QPointF(20, 2);

    // 构建图表
    QChart *chart = new QChart();
    chart->legend()->hide();  // 隐藏图例
    chart->addSeries(series);  // 将 series 添加至图表中
    chart->createDefaultAxes();  // 基于已添加到图表的 series 来创轴
    chart->setTitle("Simple line chart");  // 设置图表的标题

    // 构建 QChartView，并设置抗锯齿、标题、大小
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setWindowTitle("Simple line chart");
    chartView->resize(400, 300);
    chartView->show();

    return a.exec();
}