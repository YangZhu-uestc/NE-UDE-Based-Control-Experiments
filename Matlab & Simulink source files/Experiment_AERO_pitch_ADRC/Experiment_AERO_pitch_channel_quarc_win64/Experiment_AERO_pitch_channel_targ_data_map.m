  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 7;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Experiment_AERO_pitch_channel_P)
    ;%
      section.nData     = 29;
      section.data(29)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.Dp
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.Dp_static
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channel_P.Dy
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channel_P.Jp
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channel_P.Jy
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_P.Kpp
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channel_P.Ksp
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channel_P.PitchAxisEnable
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channel_P.PitchMotorEnable
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channel_P.YawAxisEnable
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channel_P.YawMotorEnable
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channel_P.a1
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channel_P.a2
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Experiment_AERO_pitch_channel_P.alpha1
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Experiment_AERO_pitch_channel_P.alpha2
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Experiment_AERO_pitch_channel_P.beta1
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Experiment_AERO_pitch_channel_P.beta1_HGOB
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channel_P.beta2
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Experiment_AERO_pitch_channel_P.beta2_HGOB
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Experiment_AERO_pitch_channel_P.beta3
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Experiment_AERO_pitch_channel_P.beta3_HGOB
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Experiment_AERO_pitch_channel_P.delta
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Experiment_AERO_pitch_channel_P.kd
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Experiment_AERO_pitch_channel_P.kp
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Experiment_AERO_pitch_channel_P.psi_dot_initial
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channel_P.psi_initial
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Experiment_AERO_pitch_channel_P.theta_dot_initial
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Experiment_AERO_pitch_channel_P.theta_initial
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Experiment_AERO_pitch_channel_P.BaseLEDColour_color
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.HILRead_analog_channels
	  section.data(1).logicalSrcIdx = 29;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.HILWrite_analog_channels
	  section.data(2).logicalSrcIdx = 30;
	  section.data(2).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channel_P.HILRead_digital_channels
	  section.data(3).logicalSrcIdx = 31;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_P.HILWrite_digital_channels
	  section.data(4).logicalSrcIdx = 32;
	  section.data(4).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channel_P.HILRead_encoder_channels
	  section.data(5).logicalSrcIdx = 33;
	  section.data(5).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channel_P.HILRead_other_channels
	  section.data(6).logicalSrcIdx = 34;
	  section.data(6).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channel_P.HILWrite_other_channels
	  section.data(7).logicalSrcIdx = 35;
	  section.data(7).dtTransOffset = 19;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 100;
      section.data(100)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.noinput_Value
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.Yawcmdlimit24V_UpperSat
	  section.data(2).logicalSrcIdx = 37;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channel_P.Yawcmdlimit24V_LowerSat
	  section.data(3).logicalSrcIdx = 38;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V1_UpperSat
	  section.data(4).logicalSrcIdx = 39;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V1_LowerSat
	  section.data(5).logicalSrcIdx = 40;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V_UpperSat
	  section.data(6).logicalSrcIdx = 41;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V_LowerSat
	  section.data(7).logicalSrcIdx = 42;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOTerminate
	  section.data(8).logicalSrcIdx = 43;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOExit
	  section.data(9).logicalSrcIdx = 44;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOStart
	  section.data(10).logicalSrcIdx = 45;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOEnter
	  section.data(11).logicalSrcIdx = 46;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOFinal
	  section.data(12).logicalSrcIdx = 47;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOFinal
	  section.data(13).logicalSrcIdx = 48;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AIHigh
	  section.data(14).logicalSrcIdx = 49;
	  section.data(14).dtTransOffset = 15;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AILow
	  section.data(15).logicalSrcIdx = 50;
	  section.data(15).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOHigh
	  section.data(16).logicalSrcIdx = 51;
	  section.data(16).dtTransOffset = 17;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOLow
	  section.data(17).logicalSrcIdx = 52;
	  section.data(17).dtTransOffset = 18;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOInitial
	  section.data(18).logicalSrcIdx = 53;
	  section.data(18).dtTransOffset = 19;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOWatchdog
	  section.data(19).logicalSrcIdx = 54;
	  section.data(19).dtTransOffset = 20;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOInitial
	  section.data(20).logicalSrcIdx = 55;
	  section.data(20).dtTransOffset = 21;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOWatchdog
	  section.data(21).logicalSrcIdx = 56;
	  section.data(21).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channel_P.GyroCalibration_Gain
	  section.data(22).logicalSrcIdx = 57;
	  section.data(22).dtTransOffset = 27;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcountstodeg_Gain
	  section.data(23).logicalSrcIdx = 58;
	  section.data(23).dtTransOffset = 30;
	
	  ;% Experiment_AERO_pitch_channel_P.p1_Value
	  section.data(24).logicalSrcIdx = 59;
	  section.data(24).dtTransOffset = 31;
	
	  ;% Experiment_AERO_pitch_channel_P.cost_Amp
	  section.data(25).logicalSrcIdx = 60;
	  section.data(25).dtTransOffset = 32;
	
	  ;% Experiment_AERO_pitch_channel_P.cost_Bias
	  section.data(26).logicalSrcIdx = 61;
	  section.data(26).dtTransOffset = 33;
	
	  ;% Experiment_AERO_pitch_channel_P.cost_Freq
	  section.data(27).logicalSrcIdx = 62;
	  section.data(27).dtTransOffset = 34;
	
	  ;% Experiment_AERO_pitch_channel_P.cost_Phase
	  section.data(28).logicalSrcIdx = 63;
	  section.data(28).dtTransOffset = 35;
	
	  ;% Experiment_AERO_pitch_channel_P.gain_Gain
	  section.data(29).logicalSrcIdx = 64;
	  section.data(29).dtTransOffset = 36;
	
	  ;% Experiment_AERO_pitch_channel_P.uc_Value
	  section.data(30).logicalSrcIdx = 65;
	  section.data(30).dtTransOffset = 37;
	
	  ;% Experiment_AERO_pitch_channel_P.zd_IC
	  section.data(31).logicalSrcIdx = 66;
	  section.data(31).dtTransOffset = 38;
	
	  ;% Experiment_AERO_pitch_channel_P.z1_IC
	  section.data(32).logicalSrcIdx = 67;
	  section.data(32).dtTransOffset = 40;
	
	  ;% Experiment_AERO_pitch_channel_P.z2_IC
	  section.data(33).logicalSrcIdx = 68;
	  section.data(33).dtTransOffset = 41;
	
	  ;% Experiment_AERO_pitch_channel_P.z3_IC
	  section.data(34).logicalSrcIdx = 69;
	  section.data(34).dtTransOffset = 42;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain1_Gain
	  section.data(35).logicalSrcIdx = 70;
	  section.data(35).dtTransOffset = 43;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V2_UpperSat
	  section.data(36).logicalSrcIdx = 71;
	  section.data(36).dtTransOffset = 44;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V2_LowerSat
	  section.data(37).logicalSrcIdx = 72;
	  section.data(37).dtTransOffset = 45;
	
	  ;% Experiment_AERO_pitch_channel_P.p2_Value
	  section.data(38).logicalSrcIdx = 73;
	  section.data(38).dtTransOffset = 46;
	
	  ;% Experiment_AERO_pitch_channel_P.p3_Value
	  section.data(39).logicalSrcIdx = 74;
	  section.data(39).dtTransOffset = 47;
	
	  ;% Experiment_AERO_pitch_channel_P.p4_Value
	  section.data(40).logicalSrcIdx = 75;
	  section.data(40).dtTransOffset = 48;
	
	  ;% Experiment_AERO_pitch_channel_P.p5_Value
	  section.data(41).logicalSrcIdx = 76;
	  section.data(41).dtTransOffset = 49;
	
	  ;% Experiment_AERO_pitch_channel_P.a_Value
	  section.data(42).logicalSrcIdx = 77;
	  section.data(42).dtTransOffset = 50;
	
	  ;% Experiment_AERO_pitch_channel_P.b_Value
	  section.data(43).logicalSrcIdx = 78;
	  section.data(43).dtTransOffset = 51;
	
	  ;% Experiment_AERO_pitch_channel_P.c_Value
	  section.data(44).logicalSrcIdx = 79;
	  section.data(44).dtTransOffset = 52;
	
	  ;% Experiment_AERO_pitch_channel_P.d_Value
	  section.data(45).logicalSrcIdx = 80;
	  section.data(45).dtTransOffset = 53;
	
	  ;% Experiment_AERO_pitch_channel_P.u0Vifnotenabled_Value
	  section.data(46).logicalSrcIdx = 81;
	  section.data(46).dtTransOffset = 54;
	
	  ;% Experiment_AERO_pitch_channel_P.Switch_Threshold
	  section.data(47).logicalSrcIdx = 82;
	  section.data(47).dtTransOffset = 55;
	
	  ;% Experiment_AERO_pitch_channel_P._Gain
	  section.data(48).logicalSrcIdx = 83;
	  section.data(48).dtTransOffset = 56;
	
	  ;% Experiment_AERO_pitch_channel_P.Switch1_Threshold
	  section.data(49).logicalSrcIdx = 84;
	  section.data(49).dtTransOffset = 57;
	
	  ;% Experiment_AERO_pitch_channel_P.PitchMotorEnable_Value
	  section.data(50).logicalSrcIdx = 85;
	  section.data(50).dtTransOffset = 58;
	
	  ;% Experiment_AERO_pitch_channel_P.YawEnableMotor_Value
	  section.data(51).logicalSrcIdx = 86;
	  section.data(51).dtTransOffset = 59;
	
	  ;% Experiment_AERO_pitch_channel_P.TF1_A
	  section.data(52).logicalSrcIdx = 87;
	  section.data(52).dtTransOffset = 60;
	
	  ;% Experiment_AERO_pitch_channel_P.TF1_C
	  section.data(53).logicalSrcIdx = 88;
	  section.data(53).dtTransOffset = 61;
	
	  ;% Experiment_AERO_pitch_channel_P.LPF7_A
	  section.data(54).logicalSrcIdx = 89;
	  section.data(54).dtTransOffset = 62;
	
	  ;% Experiment_AERO_pitch_channel_P.LPF7_C
	  section.data(55).logicalSrcIdx = 90;
	  section.data(55).dtTransOffset = 63;
	
	  ;% Experiment_AERO_pitch_channel_P.LPF6_A
	  section.data(56).logicalSrcIdx = 91;
	  section.data(56).dtTransOffset = 64;
	
	  ;% Experiment_AERO_pitch_channel_P.LPF6_C
	  section.data(57).logicalSrcIdx = 92;
	  section.data(57).dtTransOffset = 65;
	
	  ;% Experiment_AERO_pitch_channel_P.LPF5_A
	  section.data(58).logicalSrcIdx = 93;
	  section.data(58).dtTransOffset = 66;
	
	  ;% Experiment_AERO_pitch_channel_P.LPF5_C
	  section.data(59).logicalSrcIdx = 94;
	  section.data(59).dtTransOffset = 67;
	
	  ;% Experiment_AERO_pitch_channel_P.TF3_A
	  section.data(60).logicalSrcIdx = 95;
	  section.data(60).dtTransOffset = 68;
	
	  ;% Experiment_AERO_pitch_channel_P.TF3_C
	  section.data(61).logicalSrcIdx = 96;
	  section.data(61).dtTransOffset = 69;
	
	  ;% Experiment_AERO_pitch_channel_P.TF3_D
	  section.data(62).logicalSrcIdx = 97;
	  section.data(62).dtTransOffset = 70;
	
	  ;% Experiment_AERO_pitch_channel_P.TF2_A
	  section.data(63).logicalSrcIdx = 98;
	  section.data(63).dtTransOffset = 71;
	
	  ;% Experiment_AERO_pitch_channel_P.TF2_C
	  section.data(64).logicalSrcIdx = 99;
	  section.data(64).dtTransOffset = 72;
	
	  ;% Experiment_AERO_pitch_channel_P.TF2_D
	  section.data(65).logicalSrcIdx = 100;
	  section.data(65).dtTransOffset = 73;
	
	  ;% Experiment_AERO_pitch_channel_P.TF1_A_c
	  section.data(66).logicalSrcIdx = 101;
	  section.data(66).dtTransOffset = 74;
	
	  ;% Experiment_AERO_pitch_channel_P.TF1_C_b
	  section.data(67).logicalSrcIdx = 102;
	  section.data(67).dtTransOffset = 75;
	
	  ;% Experiment_AERO_pitch_channel_P.TF3_A_g
	  section.data(68).logicalSrcIdx = 103;
	  section.data(68).dtTransOffset = 76;
	
	  ;% Experiment_AERO_pitch_channel_P.TF3_C_i
	  section.data(69).logicalSrcIdx = 104;
	  section.data(69).dtTransOffset = 77;
	
	  ;% Experiment_AERO_pitch_channel_P.TF3_D_m
	  section.data(70).logicalSrcIdx = 105;
	  section.data(70).dtTransOffset = 78;
	
	  ;% Experiment_AERO_pitch_channel_P.TF2_A_l
	  section.data(71).logicalSrcIdx = 106;
	  section.data(71).dtTransOffset = 79;
	
	  ;% Experiment_AERO_pitch_channel_P.TF2_C_i
	  section.data(72).logicalSrcIdx = 107;
	  section.data(72).dtTransOffset = 80;
	
	  ;% Experiment_AERO_pitch_channel_P.TF2_D_m
	  section.data(73).logicalSrcIdx = 108;
	  section.data(73).dtTransOffset = 81;
	
	  ;% Experiment_AERO_pitch_channel_P.TF1_A_d
	  section.data(74).logicalSrcIdx = 109;
	  section.data(74).dtTransOffset = 82;
	
	  ;% Experiment_AERO_pitch_channel_P.TF1_C_h
	  section.data(75).logicalSrcIdx = 110;
	  section.data(75).dtTransOffset = 83;
	
	  ;% Experiment_AERO_pitch_channel_P.TF3_A_l
	  section.data(76).logicalSrcIdx = 111;
	  section.data(76).dtTransOffset = 84;
	
	  ;% Experiment_AERO_pitch_channel_P.TF3_C_j
	  section.data(77).logicalSrcIdx = 112;
	  section.data(77).dtTransOffset = 85;
	
	  ;% Experiment_AERO_pitch_channel_P.TF3_D_p
	  section.data(78).logicalSrcIdx = 113;
	  section.data(78).dtTransOffset = 86;
	
	  ;% Experiment_AERO_pitch_channel_P.TF2_A_j
	  section.data(79).logicalSrcIdx = 114;
	  section.data(79).dtTransOffset = 87;
	
	  ;% Experiment_AERO_pitch_channel_P.TF2_C_if
	  section.data(80).logicalSrcIdx = 115;
	  section.data(80).dtTransOffset = 88;
	
	  ;% Experiment_AERO_pitch_channel_P.TF2_D_a
	  section.data(81).logicalSrcIdx = 116;
	  section.data(81).dtTransOffset = 89;
	
	  ;% Experiment_AERO_pitch_channel_P.TF1_A_i
	  section.data(82).logicalSrcIdx = 117;
	  section.data(82).dtTransOffset = 90;
	
	  ;% Experiment_AERO_pitch_channel_P.TF1_C_j
	  section.data(83).logicalSrcIdx = 118;
	  section.data(83).dtTransOffset = 91;
	
	  ;% Experiment_AERO_pitch_channel_P.TF3_A_o
	  section.data(84).logicalSrcIdx = 119;
	  section.data(84).dtTransOffset = 92;
	
	  ;% Experiment_AERO_pitch_channel_P.TF3_C_p
	  section.data(85).logicalSrcIdx = 120;
	  section.data(85).dtTransOffset = 93;
	
	  ;% Experiment_AERO_pitch_channel_P.TF3_D_j
	  section.data(86).logicalSrcIdx = 121;
	  section.data(86).dtTransOffset = 94;
	
	  ;% Experiment_AERO_pitch_channel_P.TF2_A_a
	  section.data(87).logicalSrcIdx = 122;
	  section.data(87).dtTransOffset = 95;
	
	  ;% Experiment_AERO_pitch_channel_P.TF2_C_n
	  section.data(88).logicalSrcIdx = 123;
	  section.data(88).dtTransOffset = 96;
	
	  ;% Experiment_AERO_pitch_channel_P.TF2_D_i
	  section.data(89).logicalSrcIdx = 124;
	  section.data(89).dtTransOffset = 97;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain_Gain
	  section.data(90).logicalSrcIdx = 125;
	  section.data(90).dtTransOffset = 98;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain_Gain_k
	  section.data(91).logicalSrcIdx = 126;
	  section.data(91).dtTransOffset = 99;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain_Gain_h
	  section.data(92).logicalSrcIdx = 127;
	  section.data(92).dtTransOffset = 100;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain1_Gain_a
	  section.data(93).logicalSrcIdx = 128;
	  section.data(93).dtTransOffset = 101;
	
	  ;% Experiment_AERO_pitch_channel_P.Constant_Value
	  section.data(94).logicalSrcIdx = 129;
	  section.data(94).dtTransOffset = 102;
	
	  ;% Experiment_AERO_pitch_channel_P.Constant_Value_k
	  section.data(95).logicalSrcIdx = 130;
	  section.data(95).dtTransOffset = 103;
	
	  ;% Experiment_AERO_pitch_channel_P.Constant_Value_ks
	  section.data(96).logicalSrcIdx = 131;
	  section.data(96).dtTransOffset = 104;
	
	  ;% Experiment_AERO_pitch_channel_P.Constant_Value_e
	  section.data(97).logicalSrcIdx = 132;
	  section.data(97).dtTransOffset = 105;
	
	  ;% Experiment_AERO_pitch_channel_P.modeluncertainty_Gain
	  section.data(98).logicalSrcIdx = 133;
	  section.data(98).dtTransOffset = 106;
	
	  ;% Experiment_AERO_pitch_channel_P.modeluncertainty1_Gain
	  section.data(99).logicalSrcIdx = 134;
	  section.data(99).dtTransOffset = 107;
	
	  ;% Experiment_AERO_pitch_channel_P.tauyuncontrolled_Value
	  section.data(100).logicalSrcIdx = 135;
	  section.data(100).dtTransOffset = 108;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_CKChannels
	  section.data(1).logicalSrcIdx = 136;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOWatchdog
	  section.data(2).logicalSrcIdx = 137;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIInitial
	  section.data(3).logicalSrcIdx = 138;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 20;
      section.data(20)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AIChannels
	  section.data(1).logicalSrcIdx = 139;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOChannels
	  section.data(2).logicalSrcIdx = 140;
	  section.data(2).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOChannels
	  section.data(3).logicalSrcIdx = 141;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIChannels
	  section.data(4).logicalSrcIdx = 142;
	  section.data(4).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIQuadrature
	  section.data(5).logicalSrcIdx = 143;
	  section.data(5).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOChannels
	  section.data(6).logicalSrcIdx = 144;
	  section.data(6).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile1_Decimation
	  section.data(7).logicalSrcIdx = 145;
	  section.data(7).dtTransOffset = 14;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile1_BitRate
	  section.data(8).logicalSrcIdx = 146;
	  section.data(8).dtTransOffset = 15;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile2_Decimation
	  section.data(9).logicalSrcIdx = 147;
	  section.data(9).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile2_BitRate
	  section.data(10).logicalSrcIdx = 148;
	  section.data(10).dtTransOffset = 17;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile3_Decimation
	  section.data(11).logicalSrcIdx = 149;
	  section.data(11).dtTransOffset = 18;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile3_BitRate
	  section.data(12).logicalSrcIdx = 150;
	  section.data(12).dtTransOffset = 19;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile4_Decimation
	  section.data(13).logicalSrcIdx = 151;
	  section.data(13).dtTransOffset = 20;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile4_BitRate
	  section.data(14).logicalSrcIdx = 152;
	  section.data(14).dtTransOffset = 21;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile5_Decimation
	  section.data(15).logicalSrcIdx = 153;
	  section.data(15).dtTransOffset = 22;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile5_BitRate
	  section.data(16).logicalSrcIdx = 154;
	  section.data(16).dtTransOffset = 23;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile6_Decimation
	  section.data(17).logicalSrcIdx = 155;
	  section.data(17).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile6_BitRate
	  section.data(18).logicalSrcIdx = 156;
	  section.data(18).dtTransOffset = 25;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile7_Decimation
	  section.data(19).logicalSrcIdx = 157;
	  section.data(19).dtTransOffset = 26;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile7_BitRate
	  section.data(20).logicalSrcIdx = 158;
	  section.data(20).dtTransOffset = 27;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 37;
      section.data(37)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_Active
	  section.data(1).logicalSrcIdx = 159;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOTerminate
	  section.data(2).logicalSrcIdx = 160;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOExit
	  section.data(3).logicalSrcIdx = 161;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOTerminate
	  section.data(4).logicalSrcIdx = 162;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOExit
	  section.data(5).logicalSrcIdx = 163;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POTerminate
	  section.data(6).logicalSrcIdx = 164;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POExit
	  section.data(7).logicalSrcIdx = 165;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_CKPStart
	  section.data(8).logicalSrcIdx = 166;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_CKPEnter
	  section.data(9).logicalSrcIdx = 167;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_CKStart
	  section.data(10).logicalSrcIdx = 168;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_CKEnter
	  section.data(11).logicalSrcIdx = 169;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AIPStart
	  section.data(12).logicalSrcIdx = 170;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AIPEnter
	  section.data(13).logicalSrcIdx = 171;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOPStart
	  section.data(14).logicalSrcIdx = 172;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOPEnter
	  section.data(15).logicalSrcIdx = 173;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOStart
	  section.data(16).logicalSrcIdx = 174;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOEnter
	  section.data(17).logicalSrcIdx = 175;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOReset
	  section.data(18).logicalSrcIdx = 176;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOPStart
	  section.data(19).logicalSrcIdx = 177;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOPEnter
	  section.data(20).logicalSrcIdx = 178;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOStart
	  section.data(21).logicalSrcIdx = 179;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOEnter
	  section.data(22).logicalSrcIdx = 180;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOReset
	  section.data(23).logicalSrcIdx = 181;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIPStart
	  section.data(24).logicalSrcIdx = 182;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIPEnter
	  section.data(25).logicalSrcIdx = 183;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIStart
	  section.data(26).logicalSrcIdx = 184;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIEnter
	  section.data(27).logicalSrcIdx = 185;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POPStart
	  section.data(28).logicalSrcIdx = 186;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POPEnter
	  section.data(29).logicalSrcIdx = 187;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POStart
	  section.data(30).logicalSrcIdx = 188;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POEnter
	  section.data(31).logicalSrcIdx = 189;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POReset
	  section.data(32).logicalSrcIdx = 190;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOReset
	  section.data(33).logicalSrcIdx = 191;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOFinal
	  section.data(34).logicalSrcIdx = 192;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOInitial
	  section.data(35).logicalSrcIdx = 193;
	  section.data(35).dtTransOffset = 34;
	
	  ;% Experiment_AERO_pitch_channel_P.HILRead_Active
	  section.data(36).logicalSrcIdx = 194;
	  section.data(36).dtTransOffset = 35;
	
	  ;% Experiment_AERO_pitch_channel_P.HILWrite_Active
	  section.data(37).logicalSrcIdx = 195;
	  section.data(37).dtTransOffset = 36;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 30;
      section.data(30)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.ManualSwitch8_CurrentSetting
	  section.data(1).logicalSrcIdx = 196;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.ManualSwitch10_CurrentSetting
	  section.data(2).logicalSrcIdx = 197;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channel_P.ManualSwitch2_CurrentSetting
	  section.data(3).logicalSrcIdx = 198;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channel_P.ManualSwitch1_CurrentSetting
	  section.data(4).logicalSrcIdx = 199;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channel_P.ManualSwitch3_CurrentSetting
	  section.data(5).logicalSrcIdx = 200;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile1_file_name
	  section.data(6).logicalSrcIdx = 201;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile1_VarName
	  section.data(7).logicalSrcIdx = 202;
	  section.data(7).dtTransOffset = 26;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile1_FileFormat
	  section.data(8).logicalSrcIdx = 203;
	  section.data(8).dtTransOffset = 43;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile2_file_name
	  section.data(9).logicalSrcIdx = 204;
	  section.data(9).dtTransOffset = 44;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile2_VarName
	  section.data(10).logicalSrcIdx = 205;
	  section.data(10).dtTransOffset = 67;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile2_FileFormat
	  section.data(11).logicalSrcIdx = 206;
	  section.data(11).dtTransOffset = 86;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile3_file_name
	  section.data(12).logicalSrcIdx = 207;
	  section.data(12).dtTransOffset = 87;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile3_VarName
	  section.data(13).logicalSrcIdx = 208;
	  section.data(13).dtTransOffset = 99;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile3_FileFormat
	  section.data(14).logicalSrcIdx = 209;
	  section.data(14).dtTransOffset = 107;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile4_file_name
	  section.data(15).logicalSrcIdx = 210;
	  section.data(15).dtTransOffset = 108;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile4_VarName
	  section.data(16).logicalSrcIdx = 211;
	  section.data(16).dtTransOffset = 130;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile4_FileFormat
	  section.data(17).logicalSrcIdx = 212;
	  section.data(17).dtTransOffset = 148;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile5_file_name
	  section.data(18).logicalSrcIdx = 213;
	  section.data(18).dtTransOffset = 149;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile5_VarName
	  section.data(19).logicalSrcIdx = 214;
	  section.data(19).dtTransOffset = 170;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile5_FileFormat
	  section.data(20).logicalSrcIdx = 215;
	  section.data(20).dtTransOffset = 187;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile6_file_name
	  section.data(21).logicalSrcIdx = 216;
	  section.data(21).dtTransOffset = 188;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile6_VarName
	  section.data(22).logicalSrcIdx = 217;
	  section.data(22).dtTransOffset = 215;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile6_FileFormat
	  section.data(23).logicalSrcIdx = 218;
	  section.data(23).dtTransOffset = 238;
	
	  ;% Experiment_AERO_pitch_channel_P.ManualSwitch11_CurrentSetting
	  section.data(24).logicalSrcIdx = 219;
	  section.data(24).dtTransOffset = 239;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile7_file_name
	  section.data(25).logicalSrcIdx = 220;
	  section.data(25).dtTransOffset = 240;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile7_VarName
	  section.data(26).logicalSrcIdx = 221;
	  section.data(26).dtTransOffset = 272;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile7_FileFormat
	  section.data(27).logicalSrcIdx = 222;
	  section.data(27).dtTransOffset = 300;
	
	  ;% Experiment_AERO_pitch_channel_P.ManualSwitch_CurrentSetting
	  section.data(28).logicalSrcIdx = 223;
	  section.data(28).dtTransOffset = 301;
	
	  ;% Experiment_AERO_pitch_channel_P.ManualSwitch1_CurrentSetting_i
	  section.data(29).logicalSrcIdx = 224;
	  section.data(29).dtTransOffset = 302;
	
	  ;% Experiment_AERO_pitch_channel_P.ManualSwitch2_CurrentSetting_g
	  section.data(30).logicalSrcIdx = 225;
	  section.data(30).dtTransOffset = 303;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Experiment_AERO_pitch_channel_B)
    ;%
      section.nData     = 42;
      section.data(42)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_B.GyroCalibration
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_B.Pitchcountstodeg
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channel_B.gain
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_B.z1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channel_B.k1
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channel_B.z2
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channel_B.k2
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channel_B.z3
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain2
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channel_B.Switch
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channel_B.u
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% Experiment_AERO_pitch_channel_B.PitchaxisEnable
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% Experiment_AERO_pitch_channel_B.YawaxisEnable
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum4
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channel_B.ManualSwitch11
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% Experiment_AERO_pitch_channel_B.theta_fb0
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum2
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum2_d
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% Experiment_AERO_pitch_channel_B.theta_fb0_f
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 21;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum2_e
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 22;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum3
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 23;
	
	  ;% Experiment_AERO_pitch_channel_B.theta_fb0_g
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum2_g
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 25;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum5
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 26;
	
	  ;% Experiment_AERO_pitch_channel_B.theta_fb0_i
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 27;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum2_a
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 28;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum6
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 29;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain_a
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 30;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain_j
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 33;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain_h
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 36;
	
	  ;% Experiment_AERO_pitch_channel_B.e
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 37;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain1
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 38;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 39;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum24
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 40;
	
	  ;% Experiment_AERO_pitch_channel_B.theta_dot
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 41;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain2_p
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 42;
	
	  ;% Experiment_AERO_pitch_channel_B.psi_dot
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 43;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain7
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 44;
	
	  ;% Experiment_AERO_pitch_channel_B.theta_d
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 45;
	
	  ;% Experiment_AERO_pitch_channel_B.omega_d
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 46;
	
	  ;% Experiment_AERO_pitch_channel_B.zd_dot
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 47;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_B.sf_falxalphadelta1.y
	  section.data(1).logicalSrcIdx = 42;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_B.sf_falxalphadelta.y
	  section.data(1).logicalSrcIdx = 43;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 9;
    sectIdxOffset = 3;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Experiment_AERO_pitch_channe_DW)
    ;%
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_AIMinimums
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_AIMaximums
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_AOMinimums
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_AOMaximums
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_AOVoltages
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_FilterFrequency
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILRead_AnalogBuffer
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 14;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILRead_OtherBuffer
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILWrite_AnalogBuffer
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILWrite_OtherBuffer
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 26;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile1_PointsWritten
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile2_PointsWritten
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile3_PointsWritten
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile4_PointsWritten
	  section.data(4).logicalSrcIdx = 13;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile5_PointsWritten
	  section.data(5).logicalSrcIdx = 14;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile6_PointsWritten
	  section.data(6).logicalSrcIdx = 15;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile7_PointsWritten
	  section.data(7).logicalSrcIdx = 16;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 29;
      section.data(29)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.HILRead_PWORK
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILWrite_PWORK
	  section.data(2).logicalSrcIdx = 19;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channe_DW.PitchMoment_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 20;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channe_DW.PitchMotorV_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 21;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile1_PWORK
	  section.data(5).logicalSrcIdx = 22;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile2_PWORK
	  section.data(6).logicalSrcIdx = 23;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile3_PWORK
	  section.data(7).logicalSrcIdx = 24;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile4_PWORK
	  section.data(8).logicalSrcIdx = 25;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile5_PWORK
	  section.data(9).logicalSrcIdx = 26;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile6_PWORK
	  section.data(10).logicalSrcIdx = 27;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile7_PWORK
	  section.data(11).logicalSrcIdx = 28;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channe_DW.f_hat_PWORK.LoggedData
	  section.data(12).logicalSrcIdx = 29;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channe_DW.n1_PWORK.LoggedData
	  section.data(13).logicalSrcIdx = 30;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Experiment_AERO_pitch_channe_DW.n3_PWORK.LoggedData
	  section.data(14).logicalSrcIdx = 31;
	  section.data(14).dtTransOffset = 14;
	
	  ;% Experiment_AERO_pitch_channe_DW.thetadeg1_PWORK.LoggedData
	  section.data(15).logicalSrcIdx = 32;
	  section.data(15).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channe_DW.thetarad_PWORK.LoggedData
	  section.data(16).logicalSrcIdx = 33;
	  section.data(16).dtTransOffset = 17;
	
	  ;% Experiment_AERO_pitch_channe_DW.theta_dotdegs_PWORK.LoggedData
	  section.data(17).logicalSrcIdx = 34;
	  section.data(17).dtTransOffset = 18;
	
	  ;% Experiment_AERO_pitch_channe_DW.theta_dotrads1_PWORK.LoggedData
	  section.data(18).logicalSrcIdx = 35;
	  section.data(18).dtTransOffset = 19;
	
	  ;% Experiment_AERO_pitch_channe_DW.theta_dot_compensated_PWORK.LoggedData
	  section.data(19).logicalSrcIdx = 36;
	  section.data(19).dtTransOffset = 20;
	
	  ;% Experiment_AERO_pitch_channe_DW.theta_tildedeg_PWORK.LoggedData
	  section.data(20).logicalSrcIdx = 37;
	  section.data(20).dtTransOffset = 21;
	
	  ;% Experiment_AERO_pitch_channe_DW.theta_tilderad_PWORK.LoggedData
	  section.data(21).logicalSrcIdx = 38;
	  section.data(21).dtTransOffset = 22;
	
	  ;% Experiment_AERO_pitch_channe_DW.n1_PWORK_c.LoggedData
	  section.data(22).logicalSrcIdx = 39;
	  section.data(22).dtTransOffset = 23;
	
	  ;% Experiment_AERO_pitch_channe_DW.n2_PWORK.LoggedData
	  section.data(23).logicalSrcIdx = 40;
	  section.data(23).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channe_DW.n3_PWORK_i.LoggedData
	  section.data(24).logicalSrcIdx = 41;
	  section.data(24).dtTransOffset = 26;
	
	  ;% Experiment_AERO_pitch_channe_DW.n4_PWORK.LoggedData
	  section.data(25).logicalSrcIdx = 42;
	  section.data(25).dtTransOffset = 28;
	
	  ;% Experiment_AERO_pitch_channe_DW.n8_PWORK.LoggedData
	  section.data(26).logicalSrcIdx = 43;
	  section.data(26).dtTransOffset = 29;
	
	  ;% Experiment_AERO_pitch_channe_DW.Dcontrol_PWORK.LoggedData
	  section.data(27).logicalSrcIdx = 44;
	  section.data(27).dtTransOffset = 31;
	
	  ;% Experiment_AERO_pitch_channe_DW.Pcontrol_PWORK.LoggedData
	  section.data(28).logicalSrcIdx = 45;
	  section.data(28).dtTransOffset = 32;
	
	  ;% Experiment_AERO_pitch_channe_DW.ud_PWORK.LoggedData
	  section.data(29).logicalSrcIdx = 46;
	  section.data(29).dtTransOffset = 33;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 47;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_DOStates
	  section.data(2).logicalSrcIdx = 48;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_QuadratureModes
	  section.data(3).logicalSrcIdx = 49;
	  section.data(3).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_InitialEICounts
	  section.data(4).logicalSrcIdx = 50;
	  section.data(4).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILRead_EncoderBuffer
	  section.data(5).logicalSrcIdx = 51;
	  section.data(5).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile1_SamplesCount
	  section.data(1).logicalSrcIdx = 52;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile1_ArrayNameLength
	  section.data(2).logicalSrcIdx = 53;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile2_SamplesCount
	  section.data(3).logicalSrcIdx = 54;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile2_ArrayNameLength
	  section.data(4).logicalSrcIdx = 55;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile3_SamplesCount
	  section.data(5).logicalSrcIdx = 56;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile3_ArrayNameLength
	  section.data(6).logicalSrcIdx = 57;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile4_SamplesCount
	  section.data(7).logicalSrcIdx = 58;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile4_ArrayNameLength
	  section.data(8).logicalSrcIdx = 59;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile5_SamplesCount
	  section.data(9).logicalSrcIdx = 60;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile5_ArrayNameLength
	  section.data(10).logicalSrcIdx = 61;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile6_SamplesCount
	  section.data(11).logicalSrcIdx = 62;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile6_ArrayNameLength
	  section.data(12).logicalSrcIdx = 63;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile7_SamplesCount
	  section.data(13).logicalSrcIdx = 64;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile7_ArrayNameLength
	  section.data(14).logicalSrcIdx = 65;
	  section.data(14).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK
	  section.data(1).logicalSrcIdx = 66;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK_f
	  section.data(2).logicalSrcIdx = 67;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK_g
	  section.data(3).logicalSrcIdx = 68;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channe_DW.theta_fb0_IWORK_k
	  section.data(4).logicalSrcIdx = 69;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_DOBits
	  section.data(1).logicalSrcIdx = 70;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.HILRead_DigitalBuffer
	  section.data(1).logicalSrcIdx = 71;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILWrite_DigitalBuffer
	  section.data(2).logicalSrcIdx = 72;
	  section.data(2).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 2174120589;
  targMap.checksum1 = 577112314;
  targMap.checksum2 = 1209651797;
  targMap.checksum3 = 1669188575;

