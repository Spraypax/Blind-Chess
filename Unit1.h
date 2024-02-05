//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "Echiquier.h"
#include <Vcl.Graphics.hpp>
#include "Unit2.h"
#include "Partie.h"
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// Composants gérés par l'EDI
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TImage *Image7;
	TImage *Image8;
	TImage *Image9;
	TImage *Image10;
	TImage *Image11;
	TImage *Image12;
	TImage *Image13;
	TImage *Image14;
	TImage *Image15;
	TImage *Image16;
	TImage *Image17;
	TImage *Image18;
	TImage *Image19;
	TImage *Image20;
	TImage *Image21;
	TImage *Image22;
	TImage *Image23;
	TImage *Image24;
	TImage *Image25;
	TImage *Image26;
	TImage *Image27;
	TImage *Image28;
	TImage *Image29;
	TImage *Image30;
	TImage *Image31;
	TImage *Image32;
	TImage *Image33;
	TImage *Image34;
	TImage *Image35;
	TImage *Image36;
	TImage *Image37;
	TImage *Image38;
	TImage *Image39;
	TImage *Image40;
	TImage *Image41;
	TImage *Image42;
	TImage *Image43;
	TImage *Image44;
	TImage *Image45;
	TImage *Image46;
	TImage *Image47;
	TImage *Image48;
	TImage *Image49;
	TImage *Image50;
	TImage *Image51;
	TImage *Image52;
	TImage *Image53;
	TImage *Image54;
	TImage *Image55;
	TImage *Image56;
	TImage *Image57;
	TImage *Image58;
	TImage *Image59;
	TImage *Image60;
	TImage *Image61;
	TImage *Image62;
	TImage *Image63;
	TImage *Image64;
	TImage *Image65;
	TTimer *Timer1;
	TLabel *Label1;
	TLabel *Label2;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TCheckBox *CheckBox3;
	TButton *Button1;
	TEdit *Edit1;
	TButton *Button2;
	TButton *Button3;
	TTrackBar *TrackBar1;
	TShape *Shape1;
	TLabel *Label3;
	TButton *Button4;
	void __fastcall AccepterPiece(TObject *Sender, TObject *Source, int X, int Y, TDragState State,
          bool &Accept);
	void __fastcall LacherPiece(TObject *Sender, TObject *Source, int X, int Y);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall TrackBar1Change(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);


private:	// Déclarations utilisateur
public:		// Déclarations utilisateur
	__fastcall TForm1(TComponent* Owner);
	TImage *laCase[8][8];
	Echiquier monEchiquier;
    Partie maPartie;
	Joueur JBlanc,JNoir;
	void MiseAJourEchiquierIHM();
	int mode;
    bool envoyerCoup;
	ThClientServeur *threadClientServeur;
	bool jaiLesBlancs;
	bool AttendreCoupDistant();
	bool modeAveugle;
    void NouvellePartie();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
