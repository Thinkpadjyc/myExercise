#ifndef SICMY_H
#define SICMY_H

#include <QWidget>
#include <QtUiPlugin/QDesignerExportWidget>

//这个控件 应该是个智能控件，需要实现不一样的功能

namespace Ui {
class Sicmy;
}

class QDESIGNER_WIDGET_EXPORT Sicmy : public QWidget
{
    Q_OBJECT

public:
    explicit Sicmy(QWidget *parent = nullptr);
    ~Sicmy();
    void initialization();      //初始化数据
    void initialization(int hcodeBatch, int hcodeok, int hcodeng,
                        int uploadyid, int dcodeok, int dcodeng,
                        QString Hip, QString Dip);//初始化数据
    void freeClearShow();       //清空显示
    void setStatus();           //设置生产状态
    bool getStatus();           //得到设备状态
    void setStaticName(int st);//设置工位号
    int getStaticName();       //得到工位号
    void setHcode(QString str); //设置盒码
    void setCodeBatch(int it);  //设置盒码批次
    int getHCodeBatch();        //得到盒码批次
    void setiDEquipmentID_1(QString id);//设置盒码机器id
    void setHcodeQuantityNow(); //盒码OK数 触发一次自增一次
    void setHcodeQuantityNow(int va);
    void setHcodeNgQuantity();  //盒码NG数
    void setHcodeNgQuantity(int va);  //盒码NG数
    void setHcodeYield();       //盒码良率
    void setUploadYiedl(int ye);//上传数
    void setUploadYidle();      //更新上传数
    void setDcode(QString str); //设置箱码
    void setDEquipmentID(QString id);//设置箱码机器id
    void setDcodeQuantityNow(); //箱码数量
    void setDcodeQuantityNow(int va);//箱码数量
    int getDcodeQuantity();     //得到箱码数
    void setDcodeNGQuantity();  //设置箱码NG数
    void setDcodeNGQuantity(int va);//设置箱码NG数
    void setDcodeYidle();       //设置箱码良率
    void setHIP(QString i = "");//获取、设置IP
    void setDIP(QString i = "");
    QString getHIP();
    QString getDIP();
    void setImageMy(QPixmap map);
signals:
    void onwStatus(bool st,int sit);    //现在的生产状态是否结束
    void hYedle();               //良率变化 更新良率标签显示
    void dYedle();               //良率变化 更新良率标签显示
    void uploadYedl();          //上传良率更新触发
private slots:
    void on_pushButtonStart_clicked();//生产按钮

private:
    Ui::Sicmy *ui;

    bool statusLab;         //生产状态
    int staticName01;       //当前工位号

    int hcodeQuantityNow;   //盒码数量
    int hCodeBatch;         //盒码批次号
    QString iDEquipmentID_1;//盒码设备id
    int hcodeNgQuantity;    //盒码NG数
    double hcodeYield;      //盒码良率
    int hcodeUploadQuantity;//上传数
    double hcodeUploadYield;//盒码上传率

    int dcodeQuantityNow;   //大码数量
    QString dEquipmentID;   //大码设备ID
    int scanDcodeNGVal;     //大码NG数
    double dcodeYield;      //大码良率
    double dcodeUploadYield;//大码上传率

    QImage m_img;
    QPixmap map, xmap;
    QPixmap * m_Map;

    QString hCodeIP;
    QString dCodeIP;

    QWidget * wid;
};

#endif // SICMY_H
