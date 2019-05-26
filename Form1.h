#pragma once
#include "libZPlayNET.h"

namespace PlayerBass {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Un4seen::Bass;
	using namespace libZPlay;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{			
		ZPlay^ player;
	public:
		Form1(void)
		{
			player = gcnew ZPlay();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  Ù‡ÈÎToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ÓÚÍ˚Ú¸ToolStripMenuItem;
	private: System::Windows::Forms::Button^  play;
	private: System::Windows::Forms::Button^  stop;
	private: System::Windows::Forms::Label^  label1;


	private: System::ComponentModel::IContainer^  components;
	

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ù‡ÈÎToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÓÚÍ˚Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->play = (gcnew System::Windows::Forms::Button());
			this->stop = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(1, 218);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 112);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(509, 217);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 112);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->trackBar1->Location = System::Drawing::Point(1, 172);
			this->trackBar1->Margin = System::Windows::Forms::Padding(2);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(758, 45);
			this->trackBar1->TabIndex = 2;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Form1::trackBar1_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->trackBar2->Location = System::Drawing::Point(703, 35);
			this->trackBar2->Margin = System::Windows::Forms::Padding(2);
			this->trackBar2->Maximum = 100;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBar2->Size = System::Drawing::Size(45, 123);
			this->trackBar2->TabIndex = 3;
			this->trackBar2->TickFrequency = 0;
			this->trackBar2->Value = 100;
			this->trackBar2->ValueChanged += gcnew System::EventHandler(this, &Form1::trackBar2_ValueChanged);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(251, 218);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 112);
			this->button3->TabIndex = 4;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(117, 218);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 112);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(367, 218);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 112);
			this->button5->TabIndex = 6;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(637, 217);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 112);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->Ù‡ÈÎToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(760, 24);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ù‡ÈÎToolStripMenuItem
			// 
			this->Ù‡ÈÎToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ÓÚÍ˚Ú¸ToolStripMenuItem });
			this->Ù‡ÈÎToolStripMenuItem->Name = L"Ù‡ÈÎToolStripMenuItem";
			this->Ù‡ÈÎToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->Ù‡ÈÎToolStripMenuItem->Text = L"‘‡ÈÎ";
			// 
			// ÓÚÍ˚Ú¸ToolStripMenuItem
			// 
			this->ÓÚÍ˚Ú¸ToolStripMenuItem->Name = L"ÓÚÍ˚Ú¸ToolStripMenuItem";
			this->ÓÚÍ˚Ú¸ToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->ÓÚÍ˚Ú¸ToolStripMenuItem->Text = L"ŒÚÍ˚Ú¸";
			this->ÓÚÍ˚Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ÓÚÍ˚Ú¸ToolStripMenuItem_Click);
			// 
			// play
			// 
			this->play->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"play.Image")));
			this->play->Location = System::Drawing::Point(832, 50);
			this->play->Name = L"play";
			this->play->Size = System::Drawing::Size(75, 23);
			this->play->TabIndex = 10;
			this->play->Text = L"play";
			this->play->UseVisualStyleBackColor = true;
			// 
			// stop
			// 
			this->stop->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stop.Image")));
			this->stop->Location = System::Drawing::Point(832, 79);
			this->stop->Name = L"stop";
			this->stop->Size = System::Drawing::Size(75, 23);
			this->stop->TabIndex = 11;
			this->stop->Text = L"stop";
			this->stop->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(14, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(673, 121);
			this->label1->TabIndex = 12;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(760, 340);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->stop);
			this->Controls->Add(this->play);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"¿Û‰ËÓ-œÎÂÂ";
			this->TransparencyKey = System::Drawing::Color::Maroon;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		static	bool pOrs = true, rev = true, rec = true;
	private: 
		int str1, str2, speed;
	private: 
		String^ FileName;
	float setvolume;
	

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 BassNet::Registration("starkov100@gmail.com", "2X28183620152222");
				 Bass::BASS_Init(-1, 44100, BASSInit::BASS_DEVICE_DEFAULT, IntPtr::Zero);
				 FileName = "";
				 str1 = 0;
				 str2 = 0;
				 speed = 44100;
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
						if (FileName == "")
							if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
									FileName = openFileDialog1->FileName;
							else
								return;
						if (str1 == 0)
						{
							str1 = Bass::BASS_StreamCreateFile(FileName, 0, 0, BASSFlag::BASS_DEFAULT);
							Bass::BASS_ChannelSetAttribute(str1, BASSAttribute::BASS_ATTRIB_VOL,1);
							Bass::BASS_ChannelSetAttribute(str1, BASSAttribute::BASS_ATTRIB_FREQ,44100);
						}
							trackBar1->Value = 0;
							trackBar1->Maximum = Bass::BASS_ChannelBytes2Seconds(str1, Bass::BASS_ChannelGetLength(str1));
							timer1->Interval = 1000;
							timer1->Enabled = true;

						if (pOrs)
						{
							button1->Image = stop->Image;
							Bass::BASS_ChannelPlay(str1, false);
							pOrs = false;
						}
						else
						{
							Bass::BASS_ChannelPause(str1);
							button1->Image = play->Image;
							pOrs = true;
							timer1->Enabled = false;
						}
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (FileName == "")
					 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
						 FileName = openFileDialog1->FileName;
					 else
						 return;
					Bass::BASS_ChannelStop(str1);
				 	Bass::BASS_StreamFree(str1);

						if (rev)
							{
								str1 = Bass::BASS_StreamCreateFile(openFileDialog1->FileName,0L, 0L,BASSFlag::BASS_STREAM_DECODE | BASSFlag::BASS_STREAM_PRESCAN);
								trackBar1->Maximum = Bass::BASS_ChannelBytes2Seconds(str1, Bass::BASS_ChannelGetLength(str1));
								trackBar1->Value = trackBar1->Maximum;
								timer1->Enabled = true;
								str2 = AddOn::Fx::BassFx::BASS_FX_ReverseCreate(str1, 1, BASSFlag::BASS_FX_FREESOURCE);
								Bass::BASS_ChannelSetAttribute(str2, BASSAttribute::BASS_ATTRIB_REVERSE_DIR, (float)Un4seen::Bass::AddOn::Fx::BASSFXReverse::BASS_FX_RVS_REVERSE);
								Bass::BASS_ChannelSetPosition(str2,Bass::BASS_ChannelSeconds2Bytes(str1, trackBar1->Value));
								Bass::BASS_ChannelPlay(str2,false);
								rev = false;
							}
						else
						{
							str1 = Bass::BASS_StreamCreateFile(FileName,0, 0, BASSFlag::BASS_DEFAULT);
							Bass::BASS_ChannelSetPosition(str1, Bass::BASS_ChannelSeconds2Bytes(str1,trackBar1->Value));
							Bass::BASS_ChannelPlay(str1,false);
							rev = true;
						}
				 }
	private: System::Void trackBar2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

				if ((Bass::BASS_ChannelIsActive(str1) == BASSActive::BASS_ACTIVE_PLAYING)&&(str1 != 0))
					Bass::BASS_ChannelSetAttribute(str1, BASSAttribute::BASS_ATTRIB_VOL,(float)trackBar2->Value/100);

				if ((Bass::BASS_ChannelIsActive(str2) == BASSActive::BASS_ACTIVE_PLAYING)&&(str2 != 0))
					Bass::BASS_ChannelSetAttribute(str2,BASSAttribute::BASS_ATTRIB_VOL,(float)trackBar2->Value/100);
			 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

				if (Bass::BASS_ChannelIsActive(str1) == BASSActive::BASS_ACTIVE_PLAYING)
					trackBar1->Value = Bass::BASS_ChannelBytes2Seconds(str1, Bass::BASS_ChannelGetPosition(str1));
				else
					timer1->Enabled = false;

				if (Bass::BASS_ChannelIsActive(str2) == BASSActive::BASS_ACTIVE_PLAYING)
					trackBar1->Value = Bass::BASS_ChannelBytes2Seconds(str2, Bass::BASS_ChannelGetPosition(str1));
				else
					timer1->Enabled = false;
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Bass::BASS_ChannelStop(str1);
			 Bass::BASS_StreamFree(str1);
			 Bass::BASS_ChannelStop(str2);
			 Bass::BASS_StreamFree(str2);
			 str1 = 0;
			 str2 = 0;
			 button1->Image = play->Image;
			 pOrs = true;
			 trackBar1->Value = 0;
			 timer1->Enabled = false;
		 }


private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Enabled = false;
			 if ((Bass::BASS_ChannelIsActive(str1) == BASSActive::BASS_ACTIVE_PLAYING) && (str1 != 0))
			 { 
				Bass::BASS_ChannelStop(str1);
				Bass::BASS_ChannelSetPosition(str1, Bass::BASS_ChannelSeconds2Bytes(str1,trackBar1->Value));
				Bass::BASS_ChannelPlay(str1,false);
			 }

			 if ((Bass::BASS_ChannelIsActive(str2) == BASSActive::BASS_ACTIVE_PLAYING) && (str2 != 0))
			 { 
				Bass::BASS_ChannelStop(str2);
				Bass::BASS_ChannelSetPosition(str2, Bass::BASS_ChannelSeconds2Bytes(str1,trackBar1->Value));
				Bass::BASS_ChannelPlay(str2,false);
			 }

			 timer1->Enabled = true;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (str1 != 0)
				 {timer1->Enabled = false;
					Bass::BASS_StreamFree(str1);}
			 trackBar1->Value = 0;
			 pOrs = true;
			 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 FileName=openFileDialog1->FileName;

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			speed += 1000;
			if ((Bass::BASS_ChannelIsActive(str1) == BASSActive::BASS_ACTIVE_PLAYING)&&(str1 != 0))
				Bass::BASS_ChannelSetAttribute(str1, BASSAttribute::BASS_ATTRIB_FREQ, speed);

			if ((Bass::BASS_ChannelIsActive(str2) == BASSActive::BASS_ACTIVE_PLAYING) && (str2 != 0))
				Bass::BASS_ChannelSetAttribute(str2, BASSAttribute::BASS_ATTRIB_FREQ, speed);
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			speed -= 1000;
			if ((Bass::BASS_ChannelIsActive(str1) == BASSActive::BASS_ACTIVE_PLAYING)&&(str1 != 0))
				Bass::BASS_ChannelSetAttribute(str1,BASSAttribute::BASS_ATTRIB_FREQ,speed);

			if ((Bass::BASS_ChannelIsActive(str2) == BASSActive::BASS_ACTIVE_PLAYING)&&(str2 != 0))
				Bass::BASS_ChannelSetAttribute(str2,BASSAttribute::BASS_ATTRIB_FREQ, speed);
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			if (rec) 
			{
				 player->Close();
				 if (! (player->OpenFile("wavein://src=line;volume=50;",  TStreamFormat::sfAutodetect)))
				 {
					 MessageBox::Show(System::Convert::ToString(player->GetError()), " Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 return;
				 }
				 saveFileDialog1->Filter="Mp3|*.mp3";
				 saveFileDialog1->FileName="";
				 saveFileDialog1->Title="—ÓÁ‰‡Ú¸ Ù‡ÈÎ ‰Îˇ Á‡ÔËÒË Á‚ÛÍ‡.";

				 if(saveFileDialog1->ShowDialog()==System::Windows::Forms::DialogResult::OK)
				 {
					 if(player->SetWaveOutFile(saveFileDialog1->FileName, TStreamFormat::sfMp3, true)== 0)
					 {
						 MessageBox::Show(System::Convert::ToString(player->GetError()), " Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						 return;
					 }
					 else 
					 {
						 setvolume=Bass::BASS_GetVolume();
						 Bass::BASS_SetVolume(0);
						 player->StartPlayback();
						 rec = false;
					 }
				}
				else
				{
					MessageBox::Show("ÕÂÚ Ù‡ÈÎ‡!", " Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else
			{
				player->StopPlayback();
				MessageBox::Show("‘‡ÈÎ Á‡ÔËÒ‡Ì.", "«‡ÔËÒ¸");
				Bass::BASS_SetVolume(setvolume);
				rec=true;
			}
} 
private: System::Void ÓÚÍ˚Ú¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (str1 != 0)
	{
		timer1->Enabled = false;
		Bass::BASS_StreamFree(str1);
	}

	trackBar1->Value = 0;
	pOrs = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileName = openFileDialog1->FileName;
		label1->Text = openFileDialog1->FileName;
	}
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
