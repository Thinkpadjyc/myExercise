#include "sicmy.h"
#include "ui_sicmy.h"

Sicmy::Sicmy(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sicmy)
{
    ui->setupUi(this);
    initialization();//初始化数据
    //良率建立连接
    connect(this,&Sicmy::hYedle,this,&Sicmy::setHcodeYield);
    connect(this,&Sicmy::dYedle,this,&Sicmy::setDcodeYidle);
    //上传率建立连接
    connect(this,&Sicmy::uploadYedl,this,&Sicmy::setUploadYidle);
}

Sicmy::~Sicmy()
{
    delete ui;
}

void Sicmy::initialization()//初始化数据
{
    setCodeBatch(0);//设置盒码批次
    setHcodeQuantityNow(0);//盒码OK数
    setHcodeNgQuantity(0);//盒码NG数
    setUploadYiedl(0);      //上传数
    setDcodeQuantityNow(0);//箱码OK数量
    setDcodeNGQuantity(0);  //箱码NG数
    ui->lineEditHcodeValue->clear();//清除盒码数据
    ui->lineEditDcodeValue->clear();//清除箱码数据
    statusLab = false;
    setHIP();
    setDIP();
    //设置设备状态图标
}

void Sicmy::initialization(int hcodeBatch, int hcodeok, int hcodeng, int uploadyid, int dcodeok, int dcodeng, QString Hip, QString Dip)
{
    setCodeBatch(hcodeBatch);//设置盒码批次
    setHcodeQuantityNow(hcodeok);//盒码OK数
    setHcodeNgQuantity(hcodeng);//盒码NG数
    setUploadYiedl(uploadyid);      //上传数
    setDcodeQuantityNow(dcodeok);//箱码OK数量
    setDcodeNGQuantity(dcodeng);  //箱码NG数
    setHIP(Hip);
    setDIP(Dip);
    ui->lineEditHcodeValue->clear();//清除盒码数据
    ui->lineEditDcodeValue->clear();//清除箱码数据
}

void Sicmy::freeClearShow()//清空显示
{
    setCodeBatch(0);//设置盒码批次
    setHcodeQuantityNow(0);//盒码OK数
    setHcodeNgQuantity(0);//盒码NG数
    setUploadYiedl(0);      //上传数
    setDcodeQuantityNow(0);//箱码OK数量
    setDcodeNGQuantity(0);  //箱码NG数
    ui->lineEditHcodeValue->clear();//清除盒码数据
    ui->lineEditDcodeValue->clear();//清除箱码数据
}

void Sicmy::setStatus()//设置设备状态
{
    if(statusLab)
    {
        statusLab = false;
        //设置设备状态图标
//        setStatusIcon(0);//停止
    }else
    {
        statusLab = true;
        freeClearShow();//清除数据
//        setStatusIcon(1);//开始
    }
}

bool Sicmy::getStatus()//得到设备状态
{
    return statusLab;
}

void Sicmy::setStaticName(int str)//设置工位号
{
    staticName01 = str;
    ui->labelStaticName01->setText(QString::number(str));
}

int Sicmy::getStaticName()//得到工位号
{
    return staticName01;
}

void Sicmy::setHcode(QString str)//设置盒码显示
{
    ui->lineEditHcodeValue->setText(str);
}

void Sicmy::setCodeBatch(int it)//设置盒码批次
{
    ui->labelCodeBatch->setText("["+QString::number(it)+"]");
    hCodeBatch = it;
}

int Sicmy::getHCodeBatch()//得到盒码批次
{
    return hCodeBatch;
}

void Sicmy::setiDEquipmentID_1(QString id)//设置盒码机器id
{
    iDEquipmentID_1 = id;
    ui->labelDEquipmentID_2->setText(id);
}

void Sicmy::setHcodeQuantityNow()//设置盒码数 触发一次自增一次
{
    hcodeQuantityNow ++;
    //设置盒码数显示
    ui->labelHcodeQuantityNow->setText(QString::number(hcodeQuantityNow));
    emit hYedle();//良率变化 更新良率标签显示
}

void Sicmy::setHcodeQuantityNow(int va)
{
    hcodeQuantityNow = va;
    //设置盒码数显示
    ui->labelHcodeQuantityNow->setText(QString::number(hcodeQuantityNow));
    emit hYedle();//良率变化 更新良率标签显示
}

void Sicmy::setHcodeNgQuantity()//盒码NG数
{
    hcodeNgQuantity++;
    emit hYedle();//良率变化 更新良率标签显示
}

void Sicmy::setHcodeNgQuantity(int va)
{
    hcodeNgQuantity = va;
    emit hYedle();//良率变化 更新良率标签显示
}

void Sicmy::setHcodeYield()//盒码良率
{
    hcodeYield = hcodeQuantityNow + hcodeNgQuantity;
    if(hcodeQuantityNow >0 && hcodeYield != 0)
    {
        hcodeYield = (hcodeQuantityNow / hcodeYield) * 100;
    }
    else
    {
        hcodeYield = 100;
    }
    ui->label_12->setText(QString::number(hcodeYield,'f',2)+"%");
}

void Sicmy::setUploadYiedl(int ye)//上传
{
    hcodeUploadQuantity += ye;
    if(hcodeQuantityNow > 0 )
    {
        hcodeUploadYield = hcodeQuantityNow / hcodeUploadQuantity * 100;
    }
    else
    {
        hcodeUploadYield = 100;
    }
    emit uploadYedl();
}

void Sicmy::setUploadYidle()//更新上传数
{
    ui->label_18->setText(QString::number(hcodeUploadYield,'f',2)+"%");
}

void Sicmy::setDcode(QString str)//设置箱码
{
    ui->lineEditDcodeValue->setText(str);
}

void Sicmy::setDEquipmentID(QString id)//箱码机器id
{
    dEquipmentID = id;
    ui->labelDEquipmentID->setText(id);
}

void Sicmy::setDcodeQuantityNow()//设置箱码数量
{
    dcodeQuantityNow ++;
    ui->labelDcodeQuantityNow->setText(QString::number(dcodeQuantityNow));
    emit dYedle();
}

void Sicmy::setDcodeQuantityNow(int va)//设置箱码数量
{
    dcodeQuantityNow = va;
    ui->labelDcodeQuantityNow->setText(QString::number(dcodeQuantityNow));
    emit dYedle();
}

int Sicmy::getDcodeQuantity()//得到箱码数
{
    return dcodeQuantityNow;
}

void Sicmy::setDcodeNGQuantity()//设置箱码NG数
{
    scanDcodeNGVal ++;
    ui->labelScanDcodeNGVal->setText(QString::number(scanDcodeNGVal));
    emit dYedle();
}

void Sicmy::setDcodeNGQuantity(int va)//设置箱码NG数
{
    scanDcodeNGVal = va;
    ui->labelScanDcodeNGVal->setText(QString::number(scanDcodeNGVal));
    emit dYedle();
}

void Sicmy::setDcodeYidle()//设置箱码良率显示
{
    double ng = scanDcodeNGVal;
    double ok = dcodeQuantityNow;
    if((ng + ok)!=0)
        dcodeYield = dcodeQuantityNow / (ng + ok) * 100;
    else
        dcodeYield = 100;
    ui-> label_11->setText(QString::number(dcodeYield,'f',2)+"%");
}

void Sicmy::setHIP(QString i)
{
    hCodeIP = i;
}

void Sicmy::setDIP(QString i)
{
    dCodeIP = i;
}

QString Sicmy::getHIP()
{
    return hCodeIP;
}

QString Sicmy::getDIP()
{
    return dCodeIP;
}

void Sicmy::setImageMy(QPixmap map)
{

    int h = ui->labellStatusIcon->height();
    int w = ui->labellStatusIcon->width();
    QPixmap p = map.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation);
    ui->labellStatusIcon->setPixmap(p);
}

void Sicmy::on_pushButtonStart_clicked()//生产按钮
{
    setStatus();//改变设备状态
    emit onwStatus(statusLab,staticName01);//发送当前工位是否有在生产
}
