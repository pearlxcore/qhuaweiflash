// просмотр и редактирование произвольных файлов 

#include "viewer.h"

//***********************************************************
//* Конструктор просмотрщика
//***********************************************************
viewer::viewer(cpfiledir* dfile, uint8_t rmode) : QWidget(0) {

// сохраняем на будущее входные параметры  
fileptr=dfile;
readonly=rmode;

// основной компоновщик
vlm=new QVBoxLayout(this);

// текстовый редактор
ted=new QTextEdit(this);
vlm->addWidget(ted);

// наполнение текстового редактора
textdata=fileptr->fdata();
ted->append(textdata);
}

//***********************************************************
//* Деструктор просмотрщика
//***********************************************************
viewer::~viewer() {
  
}