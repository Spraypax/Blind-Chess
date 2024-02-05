//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
void TForm1::NouvellePartie()
{   monEchiquier.InitialiserEchiquier();
	mode=1;
	envoyerCoup=false;
	modeAveugle=false;
	MiseAJourEchiquierIHM();
	monEchiquier.JBlancs()->Initialiser(5,0);
	monEchiquier.JNoirs()->Initialiser(5,0);
	Label1->Caption=(String)monEchiquier.JNoirs()->Minutes()+":"+(String)monEchiquier.JNoirs()->Secondes();
	Label2->Caption=(String)monEchiquier.JBlancs()->Minutes()+":"+(String)monEchiquier.JBlancs()->Secondes();
	maPartie.InitialiserPartie();
	Timer1->Enabled=false;
	MiseAJourEchiquierIHM();
	TrackBar1->Enabled=true;
	Shape1->Visible=false;


}
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
laCase[0][0]=Image1; laCase[0][1]=Image2; laCase[0][2]=Image3; laCase[0][3]=Image4;
laCase[0][4]=Image5; laCase[0][5]=Image6; laCase[0][6]=Image7; laCase[0][7]=Image8;
laCase[1][0]=Image9; laCase[1][1]=Image10; laCase[1][2]=Image11; laCase[1][3]=Image12;
laCase[1][4]=Image13; laCase[1][5]=Image14; laCase[1][6]=Image15; laCase[1][7]=Image16;
laCase[2][0]=Image17; laCase[2][1]=Image18; laCase[2][2]=Image19; laCase[2][3]=Image20;
laCase[2][4]=Image21; laCase[2][5]=Image22; laCase[2][6]=Image23; laCase[2][7]=Image24;
laCase[3][0]=Image25; laCase[3][1]=Image26; laCase[3][2]=Image27; laCase[3][3]=Image28;
laCase[3][4]=Image29; laCase[3][5]=Image30; laCase[3][6]=Image31; laCase[3][7]=Image32;
laCase[4][0]=Image33; laCase[4][1]=Image34; laCase[4][2]=Image35; laCase[4][3]=Image36;
laCase[4][4]=Image37; laCase[4][5]=Image38; laCase[4][6]=Image39; laCase[4][7]=Image40;
laCase[5][0]=Image41; laCase[5][1]=Image42; laCase[5][2]=Image43; laCase[5][3]=Image44;
laCase[5][4]=Image45; laCase[5][5]=Image46; laCase[5][6]=Image47; laCase[5][7]=Image48;
laCase[6][0]=Image49; laCase[6][1]=Image50; laCase[6][2]=Image51; laCase[6][3]=Image52;
laCase[6][4]=Image53; laCase[6][5]=Image54; laCase[6][6]=Image55; laCase[6][7]=Image56;
laCase[7][0]=Image57; laCase[7][1]=Image58; laCase[7][2]=Image59; laCase[7][3]=Image60;
laCase[7][4]=Image61; laCase[7][5]=Image62; laCase[7][6]=Image63; laCase[7][7]=Image64;
NouvellePartie();
}
//---------------------------------------------------------------------------
void TForm1::MiseAJourEchiquierIHM()
{
 if(mode==3 || mode==1){

 {for (int i = 0 ; i < 8; i++)
   { for (int j = 0 ; j < 8; j++)
	  {     if(monEchiquier.LireCaseEchiquier(i,j)=='P')
			laCase[i][j]->Picture->LoadFromFile("Images\\pionB.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='p')
			laCase[i][j]->Picture->LoadFromFile("Images\\pionN.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)==' ')
			laCase[i][j]->Picture->LoadFromFile("Images\\vide.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='T')
			laCase[i][j]->Picture->LoadFromFile("Images\\tourB.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='t')
			laCase[i][j]->Picture->LoadFromFile("Images\\tourN.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='C')
			laCase[i][j]->Picture->LoadFromFile("Images\\cavB.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='c')
			laCase[i][j]->Picture->LoadFromFile("Images\\cavN.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='F')
			laCase[i][j]->Picture->LoadFromFile("Images\\fouB.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='f')
			laCase[i][j]->Picture->LoadFromFile("Images\\fouN.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='D')
			laCase[i][j]->Picture->LoadFromFile("Images\\dameB.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='d')
			laCase[i][j]->Picture->LoadFromFile("Images\\dameN.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='R')
			laCase[i][j]->Picture->LoadFromFile("Images\\roiB.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='r')
			laCase[i][j]->Picture->LoadFromFile("Images\\roiN.bmp");
	   }
   }
    }
  }
   if(mode== 2)
 {for (int i = 0 ; i < 8; i++)
   { for (int j = 0 ; j < 8; j++)
	  {     if(monEchiquier.LireCaseEchiquier(i,j)=='P')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\pionB.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='p')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\pionN.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)==' ')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\vide.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='T')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\tourB.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='t')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\tourN.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='C')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\cavB.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='c')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\cavN.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='F')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\fouB.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='f')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\fouN.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='D')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\dameB.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='d')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\dameN.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='R')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\roiB.bmp");
		  if(monEchiquier.LireCaseEchiquier(i,j)=='r')
			laCase[7-i][7-j]->Picture->LoadFromFile("Images\\roiN.bmp");
	   }
   }
  }

if(modeAveugle==true)
{
  for (int i = 0 ; i < 8; i++)
	for (int j = 0 ; j < 8; j++)
		laCase[i][j]->Picture->LoadFromFile("Images\\vide.bmp");
        Shape1->Visible=false;
}
}


//---------------------------------------------------------------------------
void __fastcall TForm1::AccepterPiece(TObject *Sender, TObject *Source, int X, int Y,
          TDragState State, bool &Accept)
{   Accept=1;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::LacherPiece(TObject *Sender, TObject *Source, int X, int Y)

{
   int idep,jdep,iarr,jarr;
   char piecePromo='D';
   if(Source!=Sender)
	{   for(int i=0;  i<8; i++)
		{   for(int j=0; j<8; j++)
			{   if(Source == laCase[i][j])
				{   idep=i;  jdep=j;
				}
				if(Sender == laCase[i][j])
				{   iarr=i; jarr=j;
				}
			}
	   }
   if(mode== 2){
			for (int i = 0 ; i < 8; i++)
			{ for (int j = 0 ; j < 8; j++)
				{ if(Source == laCase[7-i][7-j])
				{   idep=i; jdep=j;
				}
			if(Sender == laCase[7-i][7-j])
				{   iarr=i;  jarr=j;

				}
			}

			}
		   }

	   if(RadioButton1->Checked) piecePromo='D';
	   if(RadioButton2->Checked) piecePromo='T';
	   if(RadioButton3->Checked) piecePromo='C';
	   if(RadioButton4->Checked) piecePromo='F';
	   if(mode==1 || (mode==3 && monEchiquier.Trait()=="Blancs") || (mode==2 && monEchiquier.Trait()=="Noirs"))
	   if(monEchiquier.Deplacer(idep,jdep,iarr,jarr,piecePromo))
	   {
			Timer1->Enabled=true;
			TrackBar1->Enabled=false;
			if(mode!=1) envoyerCoup=true;
			Label3->Caption=monEchiquier.Notation().c_str();
			Shape1->Visible=true;
			Shape1->Left=laCase[iarr][jarr]->Left;
			Shape1->Top=laCase[iarr][jarr]->Top;
			if(mode==2)
			{
				Shape1->Left=laCase[7-iarr][7-jarr]->Left;
			   	Shape1->Top=laCase[7-iarr][7-jarr]->Top;
            }
	   }
	   MiseAJourEchiquierIHM();
       maPartie.SauvegarderEchiquier(monEchiquier);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	if(monEchiquier.JBlancs()->Trait()) monEchiquier.JBlancs()->Decrementer();
	if(monEchiquier.JNoirs()->Trait()) monEchiquier.JNoirs()->Decrementer();
	if(mode == 1 || mode == 3)
	{
	Label1->Caption=(String)monEchiquier.JNoirs()->Minutes()+":"+(String)monEchiquier.JNoirs()->Secondes();
	Label2->Caption=(String)monEchiquier.JBlancs()->Minutes()+":"+(String)monEchiquier.JBlancs()->Secondes();
	}
	if(mode == 2)
	{
	Label2->Caption=(String)monEchiquier.JNoirs()->Minutes()+":"+(String)monEchiquier.JNoirs()->Secondes();
	Label1->Caption=(String)monEchiquier.JBlancs()->Minutes()+":"+(String)monEchiquier.JBlancs()->Secondes();
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
	if(Sender==CheckBox1 && CheckBox1->Checked)
	{   CheckBox2->Checked=false;   CheckBox3->Checked=false;
		Edit1->Visible=false;
		Button1->Visible=false;
		mode=1;
	}
	if(Sender==CheckBox2 && CheckBox2->Checked)
	{   CheckBox1->Checked=false;   CheckBox3->Checked=false;
		Edit1->Visible=false;
		Button1->Visible=true;
		mode=2;
	}
	if(Sender==CheckBox3 && CheckBox3->Checked)
	{   CheckBox2->Checked=false;   CheckBox1->Checked=false;
		Edit1->Visible=true;
		Button1->Visible=true;
		mode=3;
	}

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	threadClientServeur=new ThClientServeur(false);
	Button1->Visible=false;
	CheckBox1->Visible=false;
	if(mode==2) CheckBox3->Visible=false;
	if(mode==3) CheckBox2->Visible=false;

}
//---------------------------------------------------------------------------
bool TForm1::AttendreCoupDistant()
{   if(!((monEchiquier.Trait()=="Blancs" && jaiLesBlancs) || (monEchiquier.Trait()=="Noirs" && !jaiLesBlancs)))
		return true;
	return false;

}
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	NouvellePartie();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	if(modeAveugle==true)
		{
			modeAveugle=false;
			Shape1->Visible=true;
		}

		else
		{
		  modeAveugle=true;

		}
	MiseAJourEchiquierIHM();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::TrackBar1Change(TObject *Sender)
{
	monEchiquier.JBlancs()->Initialiser(TrackBar1->Position,0);
    monEchiquier.JNoirs()->Initialiser(TrackBar1->Position,0);
	Label2->Caption=(String)TrackBar1->Position+":00";
	Label1->Caption=(String)TrackBar1->Position+":00";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
	if(mode==1)
	{
	monEchiquier = maPartie.AnnulerDernierCoup();
	MiseAJourEchiquierIHM();
	}
	if(mode==2 || mode==3)
	{

    }
}
//---------------------------------------------------------------------------

