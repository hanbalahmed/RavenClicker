namespace Autoclicker
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.cbToggle = new System.Windows.Forms.CheckBox();
            this.sldCPS = new System.Windows.Forms.TrackBar();
            this.lbCPS = new System.Windows.Forms.Label();
            this.LeftClicker = new System.Windows.Forms.Timer(this.components);
            this.Random = new System.Windows.Forms.Timer(this.components);
            this.cbShiftID = new System.Windows.Forms.CheckBox();
            this.btBind = new System.Windows.Forms.Button();
            this.Bind = new System.Windows.Forms.Timer(this.components);
            ((System.ComponentModel.ISupportInitialize)(this.sldCPS)).BeginInit();
            this.SuspendLayout();
            // 
            // cbToggle
            // 
            this.cbToggle.AutoSize = true;
            this.cbToggle.Location = new System.Drawing.Point(25, 31);
            this.cbToggle.Name = "cbToggle";
            this.cbToggle.Size = new System.Drawing.Size(85, 24);
            this.cbToggle.TabIndex = 0;
            this.cbToggle.Text = "Enable";
            this.cbToggle.UseVisualStyleBackColor = true;
            // 
            // sldCPS
            // 
            this.sldCPS.BackColor = System.Drawing.SystemColors.ControlText;
            this.sldCPS.Location = new System.Drawing.Point(25, 79);
            this.sldCPS.Maximum = 20;
            this.sldCPS.Minimum = 5;
            this.sldCPS.Name = "sldCPS";
            this.sldCPS.Size = new System.Drawing.Size(601, 69);
            this.sldCPS.TabIndex = 1;
            this.sldCPS.Value = 10;
            this.sldCPS.Scroll += new System.EventHandler(this.trackBar1_Scroll);
            // 
            // lbCPS
            // 
            this.lbCPS.AutoSize = true;
            this.lbCPS.Location = new System.Drawing.Point(632, 93);
            this.lbCPS.Name = "lbCPS";
            this.lbCPS.Size = new System.Drawing.Size(27, 20);
            this.lbCPS.TabIndex = 2;
            this.lbCPS.Text = "10";
            this.lbCPS.Click += new System.EventHandler(this.label1_Click);
            // 
            // LeftClicker
            // 
            this.LeftClicker.Enabled = true;
            this.LeftClicker.Tick += new System.EventHandler(this.timer1_Tick);
            // 
            // Random
            // 
            this.Random.Enabled = true;
            this.Random.Tick += new System.EventHandler(this.timer1_Tick_1);
            // 
            // cbShiftID
            // 
            this.cbShiftID.AutoSize = true;
            this.cbShiftID.Location = new System.Drawing.Point(25, 154);
            this.cbShiftID.Name = "cbShiftID";
            this.cbShiftID.Size = new System.Drawing.Size(125, 24);
            this.cbShiftID.TabIndex = 3;
            this.cbShiftID.Text = "Shift Disable";
            this.cbShiftID.UseVisualStyleBackColor = true;
            this.cbShiftID.CheckedChanged += new System.EventHandler(this.checkBox1_CheckedChanged);
            // 
            // btBind
            // 
            this.btBind.BackColor = System.Drawing.SystemColors.GrayText;
            this.btBind.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.btBind.Location = new System.Drawing.Point(551, 20);
            this.btBind.Name = "btBind";
            this.btBind.Size = new System.Drawing.Size(108, 44);
            this.btBind.TabIndex = 4;
            this.btBind.Text = "none";
            this.btBind.UseVisualStyleBackColor = false;
            this.btBind.Click += new System.EventHandler(this.btBind_Click);
            this.btBind.KeyUp += new System.Windows.Forms.KeyEventHandler(this.btBind_KeyUp);
            // 
            // Bind
            // 
            this.Bind.Enabled = true;
            this.Bind.Interval = 150;
            this.Bind.Tick += new System.EventHandler(this.timer1_Tick_2);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.InfoText;
            this.ClientSize = new System.Drawing.Size(681, 517);
            this.Controls.Add(this.btBind);
            this.Controls.Add(this.cbShiftID);
            this.Controls.Add(this.lbCPS);
            this.Controls.Add(this.sldCPS);
            this.Controls.Add(this.cbToggle);
            this.ForeColor = System.Drawing.SystemColors.ButtonHighlight;
            this.Name = "Form1";
            this.Text = "Raven Clicker";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.sldCPS)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.CheckBox cbToggle;
        private System.Windows.Forms.TrackBar sldCPS;
        private System.Windows.Forms.Label lbCPS;
        private System.Windows.Forms.Timer LeftClicker;
        private System.Windows.Forms.Timer Random;
        private System.Windows.Forms.CheckBox cbShiftID;
        private System.Windows.Forms.Button btBind;
        private System.Windows.Forms.Timer Bind;
    }
}

