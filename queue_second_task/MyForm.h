#pragma once
#include <random>
#include"/./study/yaziki_i_metodi/git_labs/queue/TQueue.h"
struct Tasks {
	int id;
	int procs; //compexity/number of processes
	int time;  //time in tackts
};

namespace graficQueue{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	TQueue<Tasks> que;
	bool stop = true;
	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			//gr = CreateGraphics();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ setP;
	private: System::Windows::Forms::TextBox^ setQ;
	private: System::Windows::Forms::Label^ lableP;
	private: System::Windows::Forms::Label^ labelQ;
	private: System::Windows::Forms::PictureBox^ diagramma;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ labelSize;
	private: System::Windows::Forms::TextBox^ setSize;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ lableStartElements;
	private: System::Windows::Forms::TextBox^ setStartElements;
	private: System::ComponentModel::IContainer^ components;
	private: Graphics^ gr;
	private: Graphics^ grDia;
	private: System::Windows::Forms::Label^ label1empQue;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ labelFullQue;
	private: System::Windows::Forms::Label^ EndEmpty;
	private: System::Windows::Forms::Label^ EndFull;
	private: System::Windows::Forms::Label^ labelPushes;
	private: System::Windows::Forms::Label^ labelPushesCount;
	private: System::Windows::Forms::Label^ labelPopsCount;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ setTimeU;
	private: Graphics^ grDiaCl;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->setP = (gcnew System::Windows::Forms::TextBox());
			this->setQ = (gcnew System::Windows::Forms::TextBox());
			this->lableP = (gcnew System::Windows::Forms::Label());
			this->labelQ = (gcnew System::Windows::Forms::Label());
			this->diagramma = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->labelSize = (gcnew System::Windows::Forms::Label());
			this->setSize = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lableStartElements = (gcnew System::Windows::Forms::Label());
			this->setStartElements = (gcnew System::Windows::Forms::TextBox());
			this->label1empQue = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelFullQue = (gcnew System::Windows::Forms::Label());
			this->EndEmpty = (gcnew System::Windows::Forms::Label());
			this->EndFull = (gcnew System::Windows::Forms::Label());
			this->labelPushes = (gcnew System::Windows::Forms::Label());
			this->labelPushesCount = (gcnew System::Windows::Forms::Label());
			this->labelPopsCount = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->setTimeU = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->diagramma))->BeginInit();
			this->SuspendLayout();
			// 
			// setP
			// 
			this->setP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->setP->Location = System::Drawing::Point(25, 211);
			this->setP->Name = L"setP";
			this->setP->Size = System::Drawing::Size(100, 30);
			this->setP->TabIndex = 0;
			this->setP->Text = L"0,5";
			// 
			// setQ
			// 
			this->setQ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->setQ->Location = System::Drawing::Point(180, 211);
			this->setQ->Name = L"setQ";
			this->setQ->Size = System::Drawing::Size(100, 30);
			this->setQ->TabIndex = 1;
			this->setQ->Text = L"0,5";
			// 
			// lableP
			// 
			this->lableP->AutoSize = true;
			this->lableP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lableP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lableP->Location = System::Drawing::Point(25, 180);
			this->lableP->Name = L"lableP";
			this->lableP->Size = System::Drawing::Size(78, 27);
			this->lableP->TabIndex = 2;
			this->lableP->Text = L"Enter P";
			// 
			// labelQ
			// 
			this->labelQ->AutoSize = true;
			this->labelQ->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelQ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelQ->Location = System::Drawing::Point(180, 180);
			this->labelQ->Name = L"labelQ";
			this->labelQ->Size = System::Drawing::Size(81, 27);
			this->labelQ->TabIndex = 3;
			this->labelQ->Text = L"Enter Q";
			// 
			// diagramma
			// 
			this->diagramma->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->diagramma->Location = System::Drawing::Point(339, 156);
			this->diagramma->Name = L"diagramma";
			this->diagramma->Size = System::Drawing::Size(283, 283);
			this->diagramma->TabIndex = 4;
			this->diagramma->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(339, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 50);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::StartFunc);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(487, 100);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 50);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Draw";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::DrawFunc);
			// 
			// labelSize
			// 
			this->labelSize->AutoSize = true;
			this->labelSize->BackColor = System::Drawing::SystemColors::Menu;
			this->labelSize->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelSize->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->labelSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelSize->Location = System::Drawing::Point(25, 9);
			this->labelSize->Name = L"labelSize";
			this->labelSize->Size = System::Drawing::Size(255, 27);
			this->labelSize->TabIndex = 8;
			this->labelSize->Text = L"Enter max size of the queue";
			// 
			// setSize
			// 
			this->setSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->setSize->Location = System::Drawing::Point(25, 48);
			this->setSize->Name = L"setSize";
			this->setSize->Size = System::Drawing::Size(100, 30);
			this->setSize->TabIndex = 9;
			this->setSize->Text = L"20";
			// 
			// lableStartElements
			// 
			this->lableStartElements->AutoSize = true;
			this->lableStartElements->BackColor = System::Drawing::SystemColors::Menu;
			this->lableStartElements->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lableStartElements->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lableStartElements->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->lableStartElements->Location = System::Drawing::Point(25, 91);
			this->lableStartElements->Name = L"lableStartElements";
			this->lableStartElements->Size = System::Drawing::Size(278, 27);
			this->lableStartElements->TabIndex = 10;
			this->lableStartElements->Text = L"Enter start number of elements";
			// 
			// setStartElements
			// 
			this->setStartElements->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->setStartElements->Location = System::Drawing::Point(25, 131);
			this->setStartElements->Name = L"setStartElements";
			this->setStartElements->Size = System::Drawing::Size(100, 30);
			this->setStartElements->TabIndex = 11;
			this->setStartElements->Text = L"10";
			// 
			// label1empQue
			// 
			this->label1empQue->AutoSize = true;
			this->label1empQue->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1empQue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1empQue->Location = System::Drawing::Point(25, 258);
			this->label1empQue->Name = L"label1empQue";
			this->label1empQue->Size = System::Drawing::Size(199, 27);
			this->label1empQue->TabIndex = 12;
			this->label1empQue->Text = L"Queue was empty for";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label1->Location = System::Drawing::Point(273, 258);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 27);
			this->label1->TabIndex = 14;
			this->label1->Text = L"times";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label2->Location = System::Drawing::Point(273, 305);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 27);
			this->label2->TabIndex = 15;
			this->label2->Text = L"times";
			// 
			// labelFullQue
			// 
			this->labelFullQue->AutoSize = true;
			this->labelFullQue->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelFullQue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelFullQue->Location = System::Drawing::Point(25, 305);
			this->labelFullQue->Name = L"labelFullQue";
			this->labelFullQue->Size = System::Drawing::Size(170, 27);
			this->labelFullQue->TabIndex = 17;
			this->labelFullQue->Text = L"Queue was full for";
			// 
			// EndEmpty
			// 
			this->EndEmpty->AutoSize = true;
			this->EndEmpty->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->EndEmpty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->EndEmpty->Location = System::Drawing::Point(230, 258);
			this->EndEmpty->Name = L"EndEmpty";
			this->EndEmpty->Size = System::Drawing::Size(21, 27);
			this->EndEmpty->TabIndex = 18;
			this->EndEmpty->Text = L"-";
			// 
			// EndFull
			// 
			this->EndFull->AutoSize = true;
			this->EndFull->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->EndFull->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->EndFull->Location = System::Drawing::Point(214, 305);
			this->EndFull->Name = L"EndFull";
			this->EndFull->Size = System::Drawing::Size(21, 27);
			this->EndFull->TabIndex = 19;
			this->EndFull->Text = L"-";
			// 
			// labelPushes
			// 
			this->labelPushes->AutoSize = true;
			this->labelPushes->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelPushes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelPushes->Location = System::Drawing::Point(115, 349);
			this->labelPushes->Name = L"labelPushes";
			this->labelPushes->Size = System::Drawing::Size(80, 27);
			this->labelPushes->TabIndex = 20;
			this->labelPushes->Text = L"Pushes";
			// 
			// labelPushesCount
			// 
			this->labelPushesCount->AutoSize = true;
			this->labelPushesCount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelPushesCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelPushesCount->Location = System::Drawing::Point(214, 349);
			this->labelPushesCount->Name = L"labelPushesCount";
			this->labelPushesCount->Size = System::Drawing::Size(21, 27);
			this->labelPushesCount->TabIndex = 21;
			this->labelPushesCount->Text = L"-";
			// 
			// labelPopsCount
			// 
			this->labelPopsCount->AutoSize = true;
			this->labelPopsCount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelPopsCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->labelPopsCount->Location = System::Drawing::Point(214, 393);
			this->labelPopsCount->Name = L"labelPopsCount";
			this->labelPopsCount->Size = System::Drawing::Size(21, 27);
			this->labelPopsCount->TabIndex = 22;
			this->labelPopsCount->Text = L"-";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label3->Location = System::Drawing::Point(136, 393);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 27);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Pops";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label4->Location = System::Drawing::Point(339, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(226, 27);
			this->label4->TabIndex = 24;
			this->label4->Text = L"How many times do you ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->label5->Location = System::Drawing::Point(339, 36);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(239, 27);
			this->label5->TabIndex = 25;
			this->label5->Text = L"want to generate p and q\?";
			// 
			// setTimeU
			// 
			this->setTimeU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->setTimeU->Location = System::Drawing::Point(339, 64);
			this->setTimeU->Name = L"setTimeU";
			this->setTimeU->Size = System::Drawing::Size(100, 30);
			this->setTimeU->TabIndex = 26;
			this->setTimeU->Text = L"60";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 476);
			this->Controls->Add(this->setTimeU);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->labelPopsCount);
			this->Controls->Add(this->labelPushesCount);
			this->Controls->Add(this->labelPushes);
			this->Controls->Add(this->EndFull);
			this->Controls->Add(this->EndEmpty);
			this->Controls->Add(this->labelFullQue);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label1empQue);
			this->Controls->Add(this->setStartElements);
			this->Controls->Add(this->lableStartElements);
			this->Controls->Add(this->setSize);
			this->Controls->Add(this->labelSize);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->diagramma);
			this->Controls->Add(this->labelQ);
			this->Controls->Add(this->lableP);
			this->Controls->Add(this->setQ);
			this->Controls->Add(this->setP);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->diagramma))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void DrawFunc(System::Object^ sender, System::EventArgs^ e) {
		gr = this->diagramma->CreateGraphics();
		Pen^ pen = gcnew Pen(Color::FromArgb(5, 5, 5));
		Brush^ brush = gcnew SolidBrush(Color::FromArgb(66, 3, 87));
		gr->FillEllipse(brush, 27, 27, 236, 236);
	}
	private: System::Void StartFunc(System::Object^ sender, System::EventArgs^ e) {
		std::random_device rd;   // non-deterministic generator
		std::mt19937 gen(rd());  // to seed mersenne twister.

		std::uniform_int_distribution<> prob_add(1, 1000);
		std::uniform_int_distribution<> prob_out(1, 1000);
		std::uniform_int_distribution<> prob_proc(1, 9);
		std::uniform_int_distribution<> prob_time(1, 5);

		int s = Int32::Parse(setSize->Text);
		//TQueue<Tasks> que(s);
		TQueue<Tasks> t(s);
		que = t;
		double qStatic = Convert::ToDouble(setQ->Text), pStatic = Convert::ToDouble(setP->Text);
		int n = Int32::Parse(setStartElements->Text);
		
		int pushes = 0, pops = 0, empty_que = 0, full_que = 0, iden = 0;
		for (int i = 0; i < n; i++) {
			int proc = prob_proc(gen), tim = prob_time(gen);
			Tasks temp = { iden, proc, tim };
			que.push(temp);
			iden++;
		}
		//DrawQueue();
		int u = Int32::Parse(setTimeU->Text),currU=0;
		while (currU < u) {
			double p = prob_add(gen) / 1000.0, q = prob_out(gen) / 1000.0;
			if (p < pStatic) {
				int proc = prob_proc(gen), tim = prob_time(gen);
				Tasks temp = { iden, proc, tim };
				if (!que.is_full()) {
					que.push(temp);
					pushes++;
					iden++;
				}
				else {
					full_que++;
				}
			}
			if (q < qStatic) {
				if (!que.is_empty()) {
					que.pop();
					pops++;
					
				}
				else {
					empty_que++;
				}
			}
			Clean();
			DrawQueue();
			currU++;
			System::Threading::Thread::Sleep(150);
		}
		EndEmpty->Text = empty_que.ToString();
		EndFull->Text = full_que.ToString();
		labelPushesCount->Text = pushes.ToString();
		labelPopsCount->Text = pops.ToString();
	}
private:
	void DrawQueue() {
		grDia = this->diagramma->CreateGraphics();
		int start = 360 * (que.GetStart()*1.0 / que.GetMaxSize());
		int finish = 360 * ((que.GetCount())*1.0 / que.GetMaxSize());
		Pen^ pen = gcnew Pen(Color::FromArgb(225, 225, 5));
		pen->Width = 16.0F;
		grDia->DrawArc(pen, 35, 35, 220,220, start, finish);
	   }
private: void Clean() {
	grDiaCl = this->diagramma->CreateGraphics();
	Pen^ pen = gcnew Pen(Color::FromArgb(66, 3, 87));
	pen->Width = 18.0F;
	grDiaCl->DrawArc(pen, 35, 35, 220, 220, 0, 360);
}
};
}
