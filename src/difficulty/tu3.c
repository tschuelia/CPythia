#include "header.h"
double predict_margin_unit3(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3802819997072219849) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.49475526809692383) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2546924948692321777) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1212349981069564819) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002399999939370900393) ) ) {
            sum += (double)0.1205527500000000002;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3667.9722900390625) ) ) {
              sum += (double)0.04115425961538461685;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.34999990463256836) ) ) {
                sum += (double)0.01168790624999999951;
              } else {
                sum += (double)0.005209531249999999752;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4210.100830078125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003499999875202775002) ) ) {
              sum += (double)0.51332061764705883;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.928571224212646484) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3474999964237213135) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12047.69140625) ) ) {
                    sum += (double)0.3776686499999999946;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.152281522750854492) ) ) {
                      sum += (double)0.3206499464285714751;
                    } else {
                      sum += (double)0.2213144666666666538;
                    }
                  }
                } else {
                  sum += (double)0.09664190384615384266;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1883404999971389771) ) ) {
                  sum += (double)0.08739967857142857954;
                } else {
                  sum += (double)0.1721030416666666785;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.488390207290649414) ) ) {
              sum += (double)0.2986794374999999779;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7400038242340087891) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1229999996721744537) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.375) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.526098966598510742) ) ) {
                      sum += (double)0.08449252499999999888;
                    } else {
                      sum += (double)0.01541982500000000159;
                    }
                  } else {
                    sum += (double)0.1557350624999999933;
                  }
                } else {
                  sum += (double)0.180475850000000021;
                }
              } else {
                sum += (double)0.02829944736842105596;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.244957923889160156) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1303.77752685546875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008450000081211328506) ) ) {
                sum += (double)0.4831142749999999819;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.283674955368041992) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.158265471458435059) ) ) {
                    sum += (double)0.3645364456521738572;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.91803586483001709) ) ) {
                      sum += (double)0.472966125000000126;
                    } else {
                      sum += (double)0.4005568641304346755;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3123455047607421875) ) ) {
                    sum += (double)0.2847506718750000276;
                  } else {
                    sum += (double)0.3871101406249999322;
                  }
                }
              }
            } else {
              sum += (double)0.2846555277777777504;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5646.093994140625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32912445068359375) ) ) {
                sum += (double)0.4401301428571428587;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7082999944686889648) ) ) {
                  sum += (double)0.3612829772727272348;
                } else {
                  sum += (double)0.2297117261904762231;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3962.045654296875) ) ) {
                sum += (double)0.07600756250000000047;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2617.844482421875) ) ) {
                  sum += (double)0.2812961666666666805;
                } else {
                  sum += (double)0.15975503846153849;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.661674439907073975) ) ) {
            sum += (double)0.02961574000000000498;
          } else {
            sum += (double)0.1174370874999999953;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2547229975461959839) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1119664981961250305) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1135000027716159821) ) ) {
            sum += (double)0.07818143055555555609;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
                sum += (double)0.02339969999999999897;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03845000080764293671) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03564650006592273712) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    sum += (double)0.003574391304347826568;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0688000023365020752) ) ) {
                    sum += (double)0.011098566666666667;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6311038732528686523) ) ) {
                      sum += (double)0.003629715189873418141;
                    } else {
                      sum += (double)0.007562333333333334101;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.66765689849853516) ) ) {
                sum += (double)0.07505280357142858627;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5758540630340576172) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23590.2578125) ) ) {
                    sum += (double)0.0202650781249999988;
                  } else {
                    sum += (double)0.01028170370370370436;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7836138904094696045) ) ) {
                    sum += (double)0.06374614285714284845;
                  } else {
                    sum += (double)0.0115808684210526331;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1224879026412963867) ) ) {
            sum += (double)0.1969421590909090913;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.29892349243164062) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.28282833099365234) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.78939533233642578) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4992.307861328125) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8511.40869140625) ) ) {
                      sum += (double)0.08484367105263157516;
                    } else {
                      sum += (double)0.02729277173913043433;
                    }
                  } else {
                    sum += (double)0.1368472500000000036;
                  }
                } else {
                  sum += (double)0.009344265625000000575;
                }
              } else {
                sum += (double)0.1199344214285714277;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-32680.4794921875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.661956787109375) ) ) {
                  sum += (double)0.166579458333333319;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)139.5392303466796875) ) ) {
                    sum += (double)0.07392458749999999967;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1655894964933395386) ) ) {
                      sum += (double)0.006503535714285714302;
                    } else {
                      sum += (double)0.02181932142857142751;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.33080387115478516) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10484.99609375) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1688970029354095459) ) ) {
                      sum += (double)0.02066990625000000165;
                    } else {
                      sum += (double)0.06485752173913043872;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.11410140991210938) ) ) {
                      sum += (double)0.009110250000000000292;
                    } else {
                      sum += (double)0.02019506249999999947;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1759964972734451294) ) ) {
                    sum += (double)0.01645316666666666802;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)42.96428489685058594) ) ) {
                      sum += (double)0.007790093750000000143;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5579499900341033936) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2740714997053146362) ) ) {
            sum += (double)0.1567807410714286143;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.402649998664855957) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9484573304653167725) ) ) {
                sum += (double)0.04865348717948717733;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1535000056028366089) ) ) {
                  sum += (double)0.02749045833333333549;
                } else {
                  sum += (double)0.004229583333333334326;
                }
              }
            } else {
              sum += (double)0.1074473369565217551;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8190.785400390625) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.68105220794677734) ) ) {
              sum += (double)0.3114632727272728108;
            } else {
              sum += (double)0.1787140294117647021;
            }
          } else {
            sum += (double)0.1132297916666666626;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3243703395128250122) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5860525071620941162) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5182804763317108154) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1296.39361572265625) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0007000000186963006854) ) ) {
                sum += (double)0.6109698833333333523;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8455500006675720215) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6254500150680541992) ) ) {
                    sum += (double)0.462112785714285601;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6925500035285949707) ) ) {
                      sum += (double)0.5815082023809523548;
                    } else {
                      sum += (double)0.5093470337837838757;
                    }
                  }
                } else {
                  sum += (double)0.4252999999999999559;
                }
              }
            } else {
              sum += (double)0.3972211833333333386;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4132.573974609375) ) ) {
              sum += (double)0.5335817291666667961;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5593884885311126709) ) ) {
                sum += (double)0.642589874999999866;
              } else {
                sum += (double)0.5824579500000000021;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.46055221557617188) ) ) {
            sum += (double)0.4438465080645160321;
          } else {
            sum += (double)0.3084638099999999494;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.51676750183105469) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7414509952068328857) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6892195045948028564) ) ) {
                sum += (double)0.6488863333333333427;
              } else {
                sum += (double)0.7225522833333334338;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06290000118315219879) ) ) {
                sum += (double)0.7556884062499999999;
              } else {
                sum += (double)0.728788661764705914;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0685500018298625946) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9451737403869628906) ) ) {
                sum += (double)0.864619950000000026;
              } else {
                sum += (double)0.8109885322580646649;
              }
            } else {
              sum += (double)0.7522277083333334113;
            }
          }
        } else {
          sum += (double)0.5716218166666666711;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4756494909524917603) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.127567529678344727) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.705772340297698975) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9602659344673156738) ) ) {
              sum += (double)0.4588758421052632208;
            } else {
              sum += (double)0.3257962727272726844;
            }
          } else {
            sum += (double)0.1967088365384615234;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6086706221103668213) ) ) {
            sum += (double)0.3255919705882353021;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1063500009477138519) ) ) {
              sum += (double)0.2520978281250000341;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2136000022292137146) ) ) {
                sum += (double)0.01987037500000000262;
              } else {
                sum += (double)0.1149364999999999831;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.30000019073486328) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.252499997615814209) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.840416669845581055) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.912011027336120605) ) ) {
                sum += (double)0.4722379833333334442;
              } else {
                sum += (double)0.4258262250000000582;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5684239864349365234) ) ) {
                sum += (double)0.3629853235294118186;
              } else {
                sum += (double)0.2391567361111111012;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5235819816589355469) ) ) {
              sum += (double)0.450180500000000039;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6084830164909362793) ) ) {
                sum += (double)0.6129826145833333628;
              } else {
                sum += (double)0.5177241624999999736;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02375000063329935074) ) ) {
            sum += (double)0.5075796299999999484;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1186999976634979248) ) ) {
              sum += (double)0.1016186666666666766;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.040745437145233154) ) ) {
                sum += (double)0.3366745147058823884;
              } else {
                sum += (double)0.2155878026315789786;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.1796875) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2686109989881515503) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7599000036716461182) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.451820075511932373) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.383317470550537109) ) ) {
              sum += (double)0.3861459895833331823;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5297.811767578125) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04779999889433383942) ) ) {
                  sum += (double)0.4105114374999999649;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9106.865234375) ) ) {
                    sum += (double)0.2153747678571428792;
                  } else {
                    sum += (double)0.2892832031249999991;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4483499974012374878) ) ) {
                  sum += (double)0.2386441145833333444;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02015000022947788239) ) ) {
                    sum += (double)0.2503189107142856917;
                  } else {
                    sum += (double)0.0980786785714285736;
                  }
                }
              }
            }
          } else {
            sum += (double)0.05929572368421052314;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2177295014262199402) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1375280022621154785) ) ) {
              sum += (double)0.02695043181818182129;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01229999959468841553) ) ) {
                sum += (double)0.1804579038461538443;
              } else {
                sum += (double)0.08103753571428570779;
              }
            }
          } else {
            sum += (double)0.2521804705882353392;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9677267074584960938) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001499999962106812745) ) ) {
            sum += (double)0.5733782678571428537;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3623910099267959595) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06831086426973342896) ) ) {
                sum += (double)0.4634889130434782234;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7646499872207641602) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3013911545276641846) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.284801959991455078) ) ) {
                      sum += (double)0.4592713787878788256;
                    } else {
                      sum += (double)0.3565332391304347759;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3355.9573974609375) ) ) {
                      sum += (double)0.3923947428571428753;
                    } else {
                      sum += (double)0.2792530625000000377;
                    }
                  }
                } else {
                  sum += (double)0.2731720869565217868;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.042261838912963867) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.723249435424804688) ) ) {
                  sum += (double)0.4552112142857142607;
                } else {
                  sum += (double)0.5255493749999999853;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.484539985656738281) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2955.5545654296875) ) ) {
                    sum += (double)0.4280324230769230187;
                  } else {
                    sum += (double)0.3523272386363636155;
                  }
                } else {
                  sum += (double)0.4801039852941176855;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
            sum += (double)0.2806171447368421279;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.15703582763671875) ) ) {
              sum += (double)0.1732820781249999886;
            } else {
              sum += (double)0.045411394230769217;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2579720020294189453) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.00380945205688477) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8088.412841796875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001999999949475750327) ) ) {
              sum += (double)0.3657682499999999615;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10664.23046875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.34411334991455078) ) ) {
                  sum += (double)0.2688289464285714137;
                } else {
                  sum += (double)0.1156867500000000049;
                }
              } else {
                sum += (double)0.06321763888888888572;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.125330999493598938) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0411499999463558197) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01589999999850988388) ) ) {
                  sum += (double)0.003530416666666666946;
                } else {
                  sum += (double)0.01014965789473684134;
                }
              } else {
                sum += (double)0.03110924999999999455;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.23122549057006836) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4225.302978515625) ) ) {
                  sum += (double)0.06788674999999999571;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2010190039873123169) ) ) {
                    sum += (double)0.03564591176470588429;
                  } else {
                    sum += (double)0.0196650526315789477;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.99285697937011719) ) ) {
                  sum += (double)0.1273904705882352995;
                } else {
                  sum += (double)0.05198635937499999221;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09646349772810935974) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.81313133239746094) ) ) {
              sum += (double)0.05086362499999999565;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.504791259765625) ) ) {
                sum += (double)0.02330488157894736873;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03464949876070022583) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8332000076770782471) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    sum += (double)0.007883884615384615518;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.332977294921875) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06054749898612499237) ) ) {
                      sum += (double)0.005815791666666667026;
                    } else {
                      sum += (double)0.0134787368421052621;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05870799906551837921) ) ) {
                      sum += (double)0.008767333333333333575;
                    } else {
                      sum += (double)0.002578855555555556109;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23638.0078125) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)111.9640769958496094) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1468404978513717651) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-32099.4453125) ) ) {
                    sum += (double)0.1117978611111111326;
                  } else {
                    sum += (double)0.01561182500000000105;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-42361.8203125) ) ) {
                    sum += (double)0.1721499204545454409;
                  } else {
                    sum += (double)0.1029605357142857197;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)397.838775634765625) ) ) {
                  sum += (double)0.009745999999999999455;
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5527.55078125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9114.7666015625) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.78837203979492188) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5265671908855438232) ) ) {
                      sum += (double)0.02976410074626865271;
                    } else {
                      sum += (double)0.06312319852941176979;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2911944836378097534) ) ) {
                      sum += (double)0.008494791666666667851;
                    } else {
                      sum += (double)0.003711049999999999592;
                    }
                  }
                } else {
                  sum += (double)0.0790394032258064233;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1433665007352828979) ) ) {
                  sum += (double)0.02222545238095237699;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3927.7593994140625) ) ) {
                    sum += (double)0.01196227272727272591;
                  } else {
                    sum += (double)0.002500000000000000486;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7517966926097869873) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.7651519775390625) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2443.3973388671875) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4097719937562942505) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.26705217361450195) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07324999943375587463) ) ) {
                    sum += (double)0.1732460781250000081;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1514999940991401672) ) ) {
                      sum += (double)0.4122337380952381114;
                    } else {
                      sum += (double)0.3127237250000000079;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2204999998211860657) ) ) {
                    sum += (double)0.1515765916666666491;
                  } else {
                    sum += (double)0.2583276363636363704;
                  }
                }
              } else {
                sum += (double)0.3885079047619047765;
              }
            } else {
              sum += (double)0.07996063333333330858;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)38.66111183166503906) ) ) {
              sum += (double)0.1546312391304347778;
            } else {
              sum += (double)0.04817326470588235293;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3435.3092041015625) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4347.0146484375) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4153499901294708252) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26848.837890625) ) ) {
                  sum += (double)0.07707785869565217385;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.468395650386810303) ) ) {
                    sum += (double)0.0306163125000000029;
                  } else {
                    sum += (double)0.01238504999999999988;
                  }
                }
              } else {
                sum += (double)0.1601612333333333749;
              }
            } else {
              sum += (double)0.1756557500000000271;
            }
          } else {
            sum += (double)0.01231347656249999999;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3479607552289962769) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5860525071620941162) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.088670015335083008) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.579661369323730469) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.509221315383911133) ) ) {
              sum += (double)0.5359146323529411227;
            } else {
              sum += (double)0.428095578124999987;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5362260043621063232) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4383.6221923828125) ) ) {
                sum += (double)0.5393314722222222191;
              } else {
                sum += (double)0.6037476583333333258;
              }
            } else {
              sum += (double)0.6871056538461538521;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7615000009536743164) ) ) {
            sum += (double)0.3590537222222223157;
          } else {
            sum += (double)0.4833712647058824308;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.681208610534667969) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7701259851455688477) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.115697808563709259) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6546829938888549805) ) ) {
                sum += (double)0.6993600416666666542;
              } else {
                sum += (double)0.788011140624999995;
              }
            } else {
              sum += (double)0.6948925277777777687;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03770000115036964417) ) ) {
              sum += (double)0.8556054880952381758;
            } else {
              sum += (double)0.7848547241379310035;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.56449317932128906) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7005545198917388916) ) ) {
              sum += (double)0.6627236249999999274;
            } else {
              sum += (double)0.755847375000000099;
            }
          } else {
            sum += (double)0.5766322272727272269;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5498940050601959229) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.15932178497314453) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2869.909423828125) ) ) {
            sum += (double)0.5101176547619048485;
          } else {
            sum += (double)0.3558403194444444417;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.978102952241897583) ) ) {
            sum += (double)0.2359666833333333713;
          } else {
            sum += (double)0.06530697619047617919;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-955.803436279296875) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1488500013947486877) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6908099949359893799) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.16666698455810547) ) ) {
                sum += (double)0.4802280833333333332;
              } else {
                sum += (double)0.3284421111111111569;
              }
            } else {
              sum += (double)0.5551534375000001242;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6900966167449951172) ) ) {
              sum += (double)0.6704424218749999165;
            } else {
              sum += (double)0.5251310869565217754;
            }
          }
        } else {
          sum += (double)0.320057425925925898;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709775060415267944) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.49475526809692383) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2315154969692230225) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4321.652587890625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999970197677612) ) ) {
            sum += (double)0.4141571250000000148;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1484484970569610596) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.125) ) ) {
                sum += (double)0.1422152857142857107;
              } else {
                sum += (double)0.06139300694444443235;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.619861125946044922) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6245000064373016357) ) ) {
                  sum += (double)0.3119123666666666073;
                } else {
                  sum += (double)0.2074197499999999861;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.51613044738769531) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.90769672393798828) ) ) {
                    sum += (double)0.1989309761904761442;
                  } else {
                    sum += (double)0.110410375000000005;
                  }
                } else {
                  sum += (double)0.2407995937500000128;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.20361995697021484) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2557000070810317993) ) ) {
              sum += (double)0.04350272058823529547;
            } else {
              sum += (double)0.3059033942307692322;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1921714991331100464) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09604100137948989868) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06494949758052825928) ) ) {
                  sum += (double)0.007606250000000001031;
                } else {
                  sum += (double)0.003708031249999999956;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6155000030994415283) ) ) {
                  sum += (double)0.02181269736842105303;
                } else {
                  sum += (double)0.04630216176470588335;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2087869942188262939) ) ) {
                sum += (double)0.1290330416666666535;
              } else {
                sum += (double)0.03345704999999999513;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.408163070678710938) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2081.919677734375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01695000007748603821) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3698.48828125) ) ) {
                  sum += (double)0.51210971052631582;
                } else {
                  sum += (double)0.420792847222222266;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.402413845062255859) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4839999973773956299) ) ) {
                    sum += (double)0.3849594673913043774;
                  } else {
                    sum += (double)0.4666497968750000225;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4317.9140625) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3277810066938400269) ) ) {
                      sum += (double)0.3620110642857143346;
                    } else {
                      sum += (double)0.4399475595238094838;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3333.374755859375) ) ) {
                      sum += (double)0.2620849444444444121;
                    } else {
                      sum += (double)0.3314762499999999168;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.15288233757019043) ) ) {
                sum += (double)0.3504487946428571088;
              } else {
                sum += (double)0.1682775875000000199;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04615000076591968536) ) ) {
              sum += (double)0.1013838333333333397;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2774204909801483154) ) ) {
                sum += (double)0.2342634218749999886;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.85268831253051758) ) ) {
                  sum += (double)0.3949396785714285874;
                } else {
                  sum += (double)0.3136013295454544991;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4313.30517578125) ) ) {
            sum += (double)0.1382033095238095199;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.237378358840942383) ) ) {
              sum += (double)0.05731360416666667068;
            } else {
              sum += (double)0.01560438636363636368;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2133250012993812561) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4719999879598617554) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.42118263244628906) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29176.09375) ) ) {
              sum += (double)0.1395152236842105431;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10355.8125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11447.72412109375) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.78466510772705078) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21589.8701171875) ) ) {
                      sum += (double)0.1101625178571428443;
                    } else {
                      sum += (double)0.03809049603174603782;
                    }
                  } else {
                    sum += (double)0.01455119047619047798;
                  }
                } else {
                  sum += (double)0.1335464531250000197;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06680249795317649841) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03494950104504823685) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.004197157894736842747;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6440928280353546143) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4293999969959259033) ) ) {
                      sum += (double)0.06831321428571429655;
                    } else {
                      sum += (double)0.02786274999999999516;
                    }
                  } else {
                    sum += (double)0.006382518518518519139;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07603600248694419861) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.89999961853027344) ) ) {
                sum += (double)0.01734519230769230799;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2056499943137168884) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1746628284454345703) ) ) {
                    sum += (double)0.005498961538461539372;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)105.174072265625) ) ) {
                      sum += (double)0.003444736842105263451;
                    } else {
                      sum += (double)0.002500000000000001353;
                    }
                  }
                } else {
                  sum += (double)0.005711176470588235146;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-61420.484375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)182.54779052734375) ) ) {
                  sum += (double)0.06201220312499999138;
                } else {
                  sum += (double)0.006330925925925926477;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9866.6044921875) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)145.4142837524414062) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3219039887189865112) ) ) {
                      sum += (double)0.01236433333333333308;
                    } else {
                      sum += (double)0.02036464583333333703;
                    }
                  } else {
                    sum += (double)0.005832416666666667172;
                  }
                } else {
                  sum += (double)0.003987387096774193916;
                }
              }
            }
          }
        } else {
          sum += (double)0.1358347833333333476;
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5282.243408203125) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.51576328277587891) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-27568.0947265625) ) ) {
                sum += (double)0.2524992608695652008;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.66767692565917969) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.560849994421005249) ) ) {
                    sum += (double)0.117375069444444452;
                  } else {
                    sum += (double)0.2551364166666666433;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2594704926013946533) ) ) {
                    sum += (double)0.1473593653846153873;
                  } else {
                    sum += (double)0.05889385483870967358;
                  }
                }
              }
            } else {
              sum += (double)0.3181123235294118778;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)73.6649169921875) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3251500129699707031) ) ) {
                sum += (double)0.09244132894736840911;
              } else {
                sum += (double)0.0500027083333333261;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8945292234420776367) ) ) {
                sum += (double)0.04018296428571428019;
              } else {
                sum += (double)0.009319783333333333045;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3240.664794921875) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.70285606384277344) ) ) {
              sum += (double)0.1150358157894736943;
            } else {
              sum += (double)0.01038520000000000242;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.28333282470703125) ) ) {
              sum += (double)0.02360119117647059214;
            } else {
              sum += (double)0.002499999999999999618;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6058602333068847656) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.94261360168457031) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.221597194671630859) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1938.53759765625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0009000000136438757181) ) ) {
                  sum += (double)0.5906301406249999664;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.231060504913330078) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.929581522941589355) ) ) {
                      sum += (double)0.5198124705882353203;
                    } else {
                      sum += (double)0.4606127604166666001;
                    }
                  } else {
                    sum += (double)0.5551314342105262423;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1776247471570968628) ) ) {
                  sum += (double)0.3099024833333333118;
                } else {
                  sum += (double)0.4957565000000001554;
                }
              }
            } else {
              sum += (double)0.3940856357142857314;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02550000045448541641) ) ) {
              sum += (double)0.666550629310344811;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.773848652839660645) ) ) {
                sum += (double)0.6095214479166667365;
              } else {
                sum += (double)0.5506975446428570287;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.93550586700439453) ) ) {
            sum += (double)0.3330129741379310726;
          } else {
            sum += (double)0.1980576923076922957;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7224465012550354004) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.00596141815185547) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7096999883651733398) ) ) {
              sum += (double)0.6651714479166667138;
            } else {
              sum += (double)0.7500224666666664985;
            }
          } else {
            sum += (double)0.5797736086956520873;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9177328944206237793) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8372030258178710938) ) ) {
              sum += (double)0.8118001363636363488;
            } else {
              sum += (double)0.8703385624999998571;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7538499832153320312) ) ) {
              sum += (double)0.7949343374999999767;
            } else {
              sum += (double)0.7333662403846156197;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5522460043430328369) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.76419442892074585) ) ) {
          sum += (double)0.3877303249999999868;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.127567529678344727) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2624.4490966796875) ) ) {
              sum += (double)0.340318562499999977;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.409973740577697754) ) ) {
                sum += (double)0.2363153499999999796;
              } else {
                sum += (double)0.1438286899999999813;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3539.998046875) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.19067001342773438) ) ) {
                sum += (double)0.2963390138888888914;
              } else {
                sum += (double)0.1306657236842105052;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.23601388931274414) ) ) {
                sum += (double)0.06288699999999998458;
              } else {
                sum += (double)0.1203032763157894647;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.083450615406036377) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2412999942898750305) ) ) {
            sum += (double)0.6625367763157895551;
          } else {
            sum += (double)0.488293214285714261;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
            sum += (double)0.4514209891304347133;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.433199882507324219) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.207623898983001709) ) ) {
                sum += (double)0.4413700781250000094;
              } else {
                sum += (double)0.3640944062500000578;
              }
            } else {
              sum += (double)0.1524144999999999806;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4168944954872131348) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.972972869873046875) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2431045025587081909) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4212.45947265625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004599999869242310524) ) ) {
            sum += (double)0.3915515652173913175;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12839.53271484375) ) ) {
              sum += (double)0.2999328333333333707;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                sum += (double)0.103050185185185203;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4577737748622894287) ) ) {
                  sum += (double)0.256040639999999986;
                } else {
                  sum += (double)0.1393656826923077019;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.496411561965942383) ) ) {
            sum += (double)0.2029336904761904758;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4877499938011169434) ) ) {
              sum += (double)0.09686149193548387881;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1377794146537780762) ) ) {
                sum += (double)0.06005262500000001225;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2492.314697265625) ) ) {
                  sum += (double)0.02262203125000000065;
                } else {
                  sum += (double)0.01160649999999999876;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8233080506324768066) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003400000045076012611) ) ) {
            sum += (double)0.5294785462962962042;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.755952358245849609) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2719189971685409546) ) ) {
                sum += (double)0.3204558289473684596;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3927595019340515137) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.609243631362915039) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.59375) ) ) {
                      sum += (double)0.3947568750000000071;
                    } else {
                      sum += (double)0.3512300789473684071;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3796.2705078125) ) ) {
                      sum += (double)0.4040917499999999718;
                    } else {
                      sum += (double)0.4849480510204082218;
                    }
                  }
                } else {
                  sum += (double)0.3165397343749999925;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2098.2816162109375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3416135013103485107) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7024.548095703125) ) ) {
                    sum += (double)0.3836587685185185448;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2825939953327178955) ) ) {
                      sum += (double)0.3207611718750000285;
                    } else {
                      sum += (double)0.220875202380952429;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.471078634262084961) ) ) {
                    sum += (double)0.356186375000000055;
                  } else {
                    sum += (double)0.4793794615384614488;
                  }
                }
              } else {
                sum += (double)0.1343691785714285769;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07544999942183494568) ) ) {
            sum += (double)0.0445289204545454495;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709160089492797852) ) ) {
              sum += (double)0.1442405909090908878;
            } else {
              sum += (double)0.3005161000000000082;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1951034963130950928) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.35245323181152344) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10291.52783203125) ) ) {
            sum += (double)0.2242910100000000406;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346000060439109802) ) ) {
              sum += (double)0.07128961764705882276;
            } else {
              sum += (double)0.02547970312500000278;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.31564903259277344) ) ) {
              sum += (double)0.008800065217391305622;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8704000115394592285) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1971499994397163391) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03564650006592273712) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)103.7510147094726562) ) ) {
                      sum += (double)0.00503046428571428568;
                    } else {
                      sum += (double)0.002499999999999999618;
                    }
                  }
                } else {
                  sum += (double)0.005893580000000001561;
                }
              } else {
                sum += (double)0.00655525000000000118;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.4357147216796875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21141.8232421875) ) ) {
                sum += (double)0.1515101833333333536;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007550000213086605072) ) ) {
                  sum += (double)0.1560417499999999791;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6884500086307525635) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.63970565795898438) ) ) {
                      sum += (double)0.02194770569620252756;
                    } else {
                      sum += (double)0.06943808333333333083;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1259685009717941284) ) ) {
                      sum += (double)0.01649710937500000266;
                    } else {
                      sum += (double)0.114512605769230752;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1555000022053718567) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)62.90571403503417969) ) ) {
                  sum += (double)0.01721832142857142658;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1052585020661354065) ) ) {
                    sum += (double)0.01082737500000000019;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)191.6813735961914062) ) ) {
                      sum += (double)0.006380274999999999488;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-72090.04296875) ) ) {
                  sum += (double)0.09667957894736840807;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.825593799352645874) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2317000031471252441) ) ) {
                      sum += (double)0.01929959375000000338;
                    } else {
                      sum += (double)0.05421899193548386509;
                    }
                  } else {
                    sum += (double)0.006471548387096774484;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4374230951070785522) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.48809528350830078) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2951619923114776611) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8053.782470703125) ) ) {
                sum += (double)0.2705410555555555763;
              } else {
                sum += (double)0.07459585937500000374;
              }
            } else {
              sum += (double)0.3523923125000000267;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4505500048398971558) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.42460346221923828) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.132749997079372406) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.97559452056884766) ) ) {
                    sum += (double)0.09228099999999998804;
                  } else {
                    sum += (double)0.04620269444444444207;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2623194903135299683) ) ) {
                    sum += (double)0.1025758472222222245;
                  } else {
                    sum += (double)0.1944541124999999981;
                  }
                }
              } else {
                sum += (double)0.1883511428571428559;
              }
            } else {
              sum += (double)0.2810089038461538458;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3947499990463256836) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08275000005960464478) ) ) {
              sum += (double)0.09452305208333332265;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9475402235984802246) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.35714244842529297) ) ) {
                  sum += (double)0.09509944117647060879;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7002.030517578125) ) ) {
                    sum += (double)0.05464905000000000457;
                  } else {
                    sum += (double)0.007868964285714288159;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.5969390869140625) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.39262294769287109) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3955999910831451416) ) ) {
                      sum += (double)0.009743159090909090519;
                    } else {
                      sum += (double)0.03429505882352940765;
                    }
                  } else {
                    sum += (double)0.06243285937500000354;
                  }
                } else {
                  sum += (double)0.004772868421052630684;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1607499942183494568) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5985.828369140625) ) ) {
                sum += (double)0.05582756250000000392;
              } else {
                sum += (double)0.02208658333333333654;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.59707832336425781) ) ) {
                sum += (double)0.250787093750000023;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21854.98828125) ) ) {
                  sum += (double)0.09493605000000000793;
                } else {
                  sum += (double)0.04529919117647059068;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6061426103115081787) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.91679859161376953) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7854500114917755127) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.491090536117553711) ) ) {
                sum += (double)0.4557310799999999551;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1960000023245811462) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3031.41162109375) ) ) {
                    sum += (double)0.5128095384615384278;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4700095057487487793) ) ) {
                      sum += (double)0.5480469999999999509;
                    } else {
                      sum += (double)0.6124197500000000405;
                    }
                  }
                } else {
                  sum += (double)0.4650612124999998764;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08837949484586715698) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6695.717529296875) ) ) {
                  sum += (double)0.4454847499999999849;
                } else {
                  sum += (double)0.5133128552631579522;
                }
              } else {
                sum += (double)0.3653633823529411906;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.490349292755126953) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7572000026702880859) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.873068094253540039) ) ) {
                  sum += (double)0.587380892857142789;
                } else {
                  sum += (double)0.6281265657894735677;
                }
              } else {
                sum += (double)0.688826712499999938;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3846.3426513671875) ) ) {
                sum += (double)0.6111394999999999467;
              } else {
                sum += (double)0.5179115795454545257;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.15524196624755859) ) ) {
            sum += (double)0.346057281250000015;
          } else {
            sum += (double)0.2233047307692307692;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.41611862182617188) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6401499807834625244) ) ) {
                sum += (double)0.6782856249999998921;
              } else {
                sum += (double)0.7280919500000000433;
              }
            } else {
              sum += (double)0.754328206521739042;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9177328944206237793) ) ) {
              sum += (double)0.8404871637931032868;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.59013211727142334) ) ) {
                sum += (double)0.747844513888888951;
              } else {
                sum += (double)0.7937511875000000661;
              }
            }
          }
        } else {
          sum += (double)0.6089128076923077115;
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5498940050601959229) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.346666574478149414) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1384.33489990234375) ) ) {
            sum += (double)0.3906231309523809925;
          } else {
            sum += (double)0.2401298999999999795;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9684193730354309082) ) ) {
            sum += (double)0.2124089732142857567;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1035500019788742065) ) ) {
              sum += (double)0.2248433846153846116;
            } else {
              sum += (double)0.05631157142857141223;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.287410080432891846) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05835000239312648773) ) ) {
            sum += (double)0.3759211999999999554;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9426297545433044434) ) ) {
              sum += (double)0.5631779605263159683;
            } else {
              sum += (double)0.4345793958333332707;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.999556601047515869) ) ) {
            sum += (double)0.4468681551724137946;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1753.728271484375) ) ) {
              sum += (double)0.3200002321428571106;
            } else {
              sum += (double)0.1574797631578947199;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.18651199340820312) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2315154969692230225) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4938.009033203125) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999970197677612) ) ) {
            sum += (double)0.3821102045454545237;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.737599849700927734) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.204649999737739563) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07255000248551368713) ) ) {
                  sum += (double)0.3764751071428570905;
                } else {
                  sum += (double)0.2527552666666667003;
                }
              } else {
                sum += (double)0.1230463076923077048;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1451269984245300293) ) ) {
                sum += (double)0.06163096739130432405;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.219783976674079895) ) ) {
                  sum += (double)0.2153615882352941657;
                } else {
                  sum += (double)0.1359149299999999616;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.478991508483886719) ) ) {
            sum += (double)0.2366563026315789131;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.60306215286254883) ) ) {
              sum += (double)0.1343129285714285692;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1247824989259243011) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.76339244842529297) ) ) {
                  sum += (double)0.03323225000000000484;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01165000023320317268) ) ) {
                    sum += (double)0.002968750000000000035;
                  } else {
                    sum += (double)0.008832060000000000952;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1975610032677650452) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6155000030994415283) ) ) {
                    sum += (double)0.04247483333333331584;
                  } else {
                    sum += (double)0.1158776136363636328;
                  }
                } else {
                  sum += (double)0.01690697826086956512;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9385171830654144287) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3348525017499923706) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.34117650985717773) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2081.919677734375) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01170000014826655388) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001750000054016709328) ) ) {
                    sum += (double)0.5135698958333333453;
                  } else {
                    sum += (double)0.4517204558823528782;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.360735893249511719) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4607000052928924561) ) ) {
                      sum += (double)0.3389152410714285635;
                    } else {
                      sum += (double)0.4305221544117647237;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5872.31591796875) ) ) {
                      sum += (double)0.3921225312500001281;
                    } else {
                      sum += (double)0.2150823308823530122;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.15288233757019043) ) ) {
                  sum += (double)0.3231390416666666821;
                } else {
                  sum += (double)0.1630300666666666676;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.64444446563720703) ) ) {
                sum += (double)0.1649823333333333419;
              } else {
                sum += (double)0.3072129130434782529;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2457.1514892578125) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.252888217568397522) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08165000006556510925) ) ) {
                  sum += (double)0.5199185434782608306;
                } else {
                  sum += (double)0.4500696375000000637;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6380.7568359375) ) ) {
                  sum += (double)0.4550829270833332552;
                } else {
                  sum += (double)0.3423131333333333526;
                }
              }
            } else {
              sum += (double)0.3502290499999999862;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5047.049072265625) ) ) {
            sum += (double)0.132130838235294118;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09409999847412109375) ) ) {
              sum += (double)0.04946421153846154023;
            } else {
              sum += (double)0.0154604230769230782;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1087980009615421295) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.63666629791259766) ) ) {
          sum += (double)0.08215625000000000011;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06700949743390083313) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04316999949514865875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0290924999862909317) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.44854831695556641) ) ) {
                    sum += (double)0.003020695652173913288;
                  } else {
                    sum += (double)0.002500000000000000919;
                  }
                } else {
                  sum += (double)0.004408227272727272862;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)157.61212158203125) ) ) {
                  sum += (double)0.009438387096774192297;
                } else {
                  sum += (double)0.003797866666666667185;
                }
              }
            } else {
              sum += (double)0.01051158333333333285;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08158849924802780151) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1070999987423419952) ) ) {
                sum += (double)0.1008031730769230611;
              } else {
                sum += (double)0.00720390000000000006;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.8480987548828125) ) ) {
                sum += (double)0.02859953124999999388;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1480499953031539917) ) ) {
                  sum += (double)0.003024296296296296628;
                } else {
                  sum += (double)0.009499789473684213184;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2531195282936096191) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18156.220703125) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.12855434417724609) ) ) {
              sum += (double)0.3434884791666666382;
            } else {
              sum += (double)0.139741016666666662;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2512499913573265076) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.92158031463623047) ) ) {
                sum += (double)0.1008328152173912917;
              } else {
                sum += (double)0.01853129545454545654;
              }
            } else {
              sum += (double)0.1893998166666666649;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.24364500492811203) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.49629640579223633) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6380.465576171875) ) ) {
                sum += (double)0.09539580000000000282;
              } else {
                sum += (double)0.03317820454545454545;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2740499973297119141) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5369869470596313477) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19844.8994140625) ) ) {
                    sum += (double)0.06336607692307691386;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3935753107070922852) ) ) {
                      sum += (double)0.008636083333333332418;
                    } else {
                      sum += (double)0.02801122222222222555;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4368.82763671875) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.11378097534179688) ) ) {
                      sum += (double)0.02145719230769230906;
                    } else {
                      sum += (double)0.006713500000000000717;
                    }
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8161128759384155273) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1737169995903968811) ) ) {
                    sum += (double)0.1034381562499999963;
                  } else {
                    sum += (double)0.0362668409090909083;
                  }
                } else {
                  sum += (double)0.02352554687499999395;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3128.0732421875) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.09465491771697998) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)117.6866874694824219) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3949500024318695068) ) ) {
                    sum += (double)0.254148470588235309;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4692999869585037231) ) ) {
                      sum += (double)0.1107069840425531637;
                    } else {
                      sum += (double)0.2240895875000000204;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.422849997878074646) ) ) {
                    sum += (double)0.0254418906250000014;
                  } else {
                    sum += (double)0.06857461666666667122;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08580000326037406921) ) ) {
                  sum += (double)0.08676485416666666894;
                } else {
                  sum += (double)0.01777934821428571455;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3005899935960769653) ) ) {
                sum += (double)0.003511055555555555891;
              } else {
                sum += (double)0.01411500000000000254;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6061426103115081787) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6223134994506835938) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5358225107192993164) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.57076728343963623) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7084999978542327881) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.968620121479034424) ) ) {
                  sum += (double)0.4650558000000000192;
                } else {
                  sum += (double)0.4861552678571428587;
                }
              } else {
                sum += (double)0.6098855217391304651;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007900000084191560745) ) ) {
                sum += (double)0.3255373148148147933;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1584262475371360779) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.827695608139038086) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1087180711328983307) ) ) {
                      sum += (double)0.4645362727272726588;
                    } else {
                      sum += (double)0.5346437187499999411;
                    }
                  } else {
                    sum += (double)0.369693194444444484;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4351697266101837158) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.74205780029296875) ) ) {
                      sum += (double)0.4983521166666666224;
                    } else {
                      sum += (double)0.5696719921874999759;
                    }
                  } else {
                    sum += (double)0.4687008552631579117;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1214898675680160522) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.681917190551757812) ) ) {
                sum += (double)0.6842100156249999454;
              } else {
                sum += (double)0.6118823181818181522;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1954198703169822693) ) ) {
                sum += (double)0.527216838235294083;
              } else {
                sum += (double)0.5946016293103446593;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5125805139541625977) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.81701087951660156) ) ) {
              sum += (double)0.2672952000000000106;
            } else {
              sum += (double)0.4051943815789473269;
            }
          } else {
            sum += (double)0.2075853437499999843;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.77499997615814209) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5999000072479248047) ) ) {
            sum += (double)0.6842780588235293227;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.832332998514175415) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8314499855041503906) ) ) {
                sum += (double)0.7408362000000000558;
              } else {
                sum += (double)0.7963890530303029403;
              }
            } else {
              sum += (double)0.8616865208333334136;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.782099992036819458) ) ) {
            sum += (double)0.7019613437500000774;
          } else {
            sum += (double)0.527398015625000105;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.119389891624450684) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5858399868011474609) ) ) {
          sum += (double)0.4137530648148147749;
        } else {
          sum += (double)0.4817002954545455129;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5270499885082244873) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6088369786739349365) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2400000020861625671) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4285600036382675171) ) ) {
                sum += (double)0.05634179347826087647;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1361500024795532227) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1417.79876708984375) ) ) {
                    sum += (double)0.2826141166666666371;
                  } else {
                    sum += (double)0.1356992083333333488;
                  }
                } else {
                  sum += (double)0.08278308333333332658;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.124975979328155518) ) ) {
                sum += (double)0.3461425277777777643;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.517727375030517578) ) ) {
                  sum += (double)0.270013026315789495;
                } else {
                  sum += (double)0.0869365921052631524;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04144999943673610687) ) ) {
              sum += (double)0.4405066195652174721;
            } else {
              sum += (double)0.2521046388888888434;
            }
          }
        } else {
          sum += (double)0.4785531805555554574;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.009064197540283203) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2035.1141357421875) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.294934496283531189) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0008999999845400452614) ) ) {
            sum += (double)0.4553144624999999612;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1855640038847923279) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3667.9722900390625) ) ) {
                sum += (double)0.1903211916666666115;
              } else {
                sum += (double)0.04149469642857141899;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.344528675079345703) ) ) {
                sum += (double)0.3569967749999999884;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6807.02197265625) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9269.400390625) ) ) {
                    sum += (double)0.246427013888888824;
                  } else {
                    sum += (double)0.4018031071428571077;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3792500048875808716) ) ) {
                    sum += (double)0.1264419423076923177;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2546811550855636597) ) ) {
                      sum += (double)0.1897314761904762004;
                    } else {
                      sum += (double)0.2483135833333333375;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3638500124216079712) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.138278722763061523) ) ) {
              sum += (double)0.349597352941176498;
            } else {
              sum += (double)0.1872608437499999889;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0198499998077750206) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.60615384578704834) ) ) {
                sum += (double)0.4357285882352940343;
              } else {
                sum += (double)0.5628282500000000299;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3597664982080459595) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.05374860763549805) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1039000004529953003) ) ) {
                    sum += (double)0.4420012019230769029;
                  } else {
                    sum += (double)0.3893702222222222287;
                  }
                } else {
                  sum += (double)0.3500783939393938837;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06560000032186508179) ) ) {
                  sum += (double)0.4999465000000000714;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4147095084190368652) ) ) {
                    sum += (double)0.4722400749999999259;
                  } else {
                    sum += (double)0.3844619833333333125;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3301160037517547607) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7353208959102630615) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.20238113403320312) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05024999938905239105) ) ) {
                sum += (double)0.170497487499999989;
              } else {
                sum += (double)0.2669299666666666293;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.57500076293945312) ) ) {
                sum += (double)0.116820261904761899;
              } else {
                sum += (double)0.03062135294117646414;
              }
            }
          } else {
            sum += (double)0.02357196875000000177;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7503237128257751465) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1172.25115966796875) ) ) {
              sum += (double)0.4600751527777777738;
            } else {
              sum += (double)0.3528572499999999557;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.481407403945922852) ) ) {
              sum += (double)0.219410444444444408;
            } else {
              sum += (double)0.0680168374999999964;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1859119981527328491) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.84882450103759766) ) ) {
          sum += (double)0.1379795576923076861;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1035875007510185242) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.32142829895019531) ) ) {
                sum += (double)0.08416539583333333685;
              } else {
                sum += (double)0.009119640000000001773;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07213700190186500549) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.042966499924659729) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8024092018604278564) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)106.4178237915039062) ) ) {
                      sum += (double)0.003043546875000000679;
                    } else {
                      sum += (double)0.002500000000000001353;
                    }
                  } else {
                    sum += (double)0.00842479999999999965;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06275549903512001038) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)117.4571647644042969) ) ) {
                      sum += (double)0.01759556249999999836;
                    } else {
                      sum += (double)0.004978113636363635554;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.06475162506103516) ) ) {
                      sum += (double)0.002867647058823529459;
                    } else {
                      sum += (double)0.004147526315789473901;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11813.16015625) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.04714393615722656) ) ) {
                    sum += (double)0.04787506666666666716;
                  } else {
                    sum += (double)0.01791209285714285421;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.85833263397216797) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4075.2080078125) ) ) {
                      sum += (double)0.01005830769230769278;
                    } else {
                      sum += (double)0.003669312500000000265;
                    }
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19468.4267578125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.30397891998291016) ) ) {
                sum += (double)0.1441319642857143146;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3966000080108642578) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1452070027589797974) ) ) {
                    sum += (double)0.01310892592592592665;
                  } else {
                    sum += (double)0.04701885483870966304;
                  }
                } else {
                  sum += (double)0.0917288593749999992;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.77678585052490234) ) ) {
                sum += (double)0.0835043636363636127;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1323999986052513123) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2329382151365280151) ) ) {
                    sum += (double)0.03044321250000000048;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5356979668140411377) ) ) {
                      sum += (double)0.01488554054054054207;
                    } else {
                      sum += (double)0.002923473684210526995;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3086999952793121338) ) ) {
                    sum += (double)0.06729586111111111879;
                  } else {
                    sum += (double)0.02045799999999999702;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2686086893081665039) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7803.377197265625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.2788395881652832) ) ) {
              sum += (double)0.4282484500000000027;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3156024962663650513) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21983.5849609375) ) ) {
                  sum += (double)0.2656258333333333388;
                } else {
                  sum += (double)0.1601231071428571295;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7342999875545501709) ) ) {
                  sum += (double)0.3650911666666666888;
                } else {
                  sum += (double)0.2654999642857143183;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.53987264633178711) ) ) {
              sum += (double)0.07505514583333332268;
            } else {
              sum += (double)0.2280477586206896279;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8536425232887268066) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3306660056114196777) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3480499982833862305) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04784999974071979523) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3946626186370849609) ) ) {
                    sum += (double)0.04885843750000000429;
                  } else {
                    sum += (double)0.01516777083333333172;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.71354198455810547) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4911.5478515625) ) ) {
                      sum += (double)0.1656337499999999685;
                    } else {
                      sum += (double)0.08720576562500000073;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2611179947853088379) ) ) {
                      sum += (double)0.02584563709677419399;
                    } else {
                      sum += (double)0.08031596666666666884;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.34951019287109375) ) ) {
                  sum += (double)0.2239134134615385074;
                } else {
                  sum += (double)0.08761160714285716467;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4314.147705078125) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2042500004172325134) ) ) {
                  sum += (double)0.2601573529411764785;
                } else {
                  sum += (double)0.372560200000000008;
                }
              } else {
                sum += (double)0.1114147499999999791;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3837545067071914673) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.113673985004425049) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2818710058927536011) ) ) {
                  sum += (double)0.101345447368421035;
                } else {
                  sum += (double)0.03040363333333333251;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5137.2138671875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1776999980211257935) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1258500032126903534) ) ) {
                      sum += (double)0.01914210869565217965;
                    } else {
                      sum += (double)0.04104191176470588232;
                    }
                  } else {
                    sum += (double)0.01002147222222222328;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.346220433712005615) ) ) {
                    sum += (double)0.01347481578947368544;
                  } else {
                    sum += (double)0.005268528571428572616;
                  }
                }
              }
            } else {
              sum += (double)0.1182703879310344625;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.422753453254699707) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5856605172157287598) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5403254926204681396) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.784899979829788208) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.579661369323730469) ) ) {
              sum += (double)0.4698190312500000743;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1546500027179718018) ) ) {
                sum += (double)0.61757159523809535;
              } else {
                sum += (double)0.5305883333333333285;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.27826082706451416) ) ) {
              sum += (double)0.5548143593750000102;
            } else {
              sum += (double)0.3951803161764705918;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6906999945640563965) ) ) {
            sum += (double)0.5263726805555555277;
          } else {
            sum += (double)0.6208456036585365823;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.62627506256103516) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8366500139236450195) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.858775615692138672) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1426.83929443359375) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6773000061511993408) ) ) {
                    sum += (double)0.6816539852941176925;
                  } else {
                    sum += (double)0.600031109375000038;
                  }
                } else {
                  sum += (double)0.6925362499999999644;
                }
              } else {
                sum += (double)0.7168155468750000425;
              }
            } else {
              sum += (double)0.7564713026315788014;
            }
          } else {
            sum += (double)0.5852234807692308083;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09455000236630439758) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.832332998514175415) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.486638545989990234) ) ) {
                sum += (double)0.8226323888888887881;
              } else {
                sum += (double)0.7497011176470588234;
              }
            } else {
              sum += (double)0.8723319523809522913;
            }
          } else {
            sum += (double)0.7416262105263157212;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5522460043430328369) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.85396003723144531) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3201.2772216796875) ) ) {
            sum += (double)0.4681181875000000048;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.711839199066162109) ) ) {
              sum += (double)0.3882262666666667084;
            } else {
              sum += (double)0.2355385000000000117;
            }
          }
        } else {
          sum += (double)0.1200297222222221905;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9539542198181152344) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4294999986886978149) ) ) {
            sum += (double)0.6842773088235294399;
          } else {
            sum += (double)0.5040183684210526316;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.385843515396118164) ) ) {
            sum += (double)0.4632282499999999525;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.087804913520812988) ) ) {
              sum += (double)0.443388760416666694;
            } else {
              sum += (double)0.2835687499999999805;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.456695079803466797) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.969126582145690918) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.260218009352684021) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4202.166259765625) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1488799974322319031) ) ) {
              sum += (double)0.1811608611111111267;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0284000001847743988) ) ) {
                sum += (double)0.4589137105263157435;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.372843503952026367) ) ) {
                  sum += (double)0.357032000000000016;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1818999946117401123) ) ) {
                    sum += (double)0.219587828125000023;
                  } else {
                    sum += (double)0.3152460441176470063;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.624080896377563477) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2108425945043563843) ) ) {
                sum += (double)0.1115858387096774207;
              } else {
                sum += (double)0.2356682499999999958;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03564999997615814209) ) ) {
                sum += (double)0.01578591379310344961;
              } else {
                sum += (double)0.1003060961538461415;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001500000013038516045) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2752.694091796875) ) ) {
              sum += (double)0.5951867380952380326;
            } else {
              sum += (double)0.4490060113636362704;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3408444970846176147) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.935222864151000977) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.31885910034179688) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7137999832630157471) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2893639951944351196) ) ) {
                      sum += (double)0.3553645151515151812;
                    } else {
                      sum += (double)0.4146320437500000677;
                    }
                  } else {
                    sum += (double)0.2385256029411765011;
                  }
                } else {
                  sum += (double)0.4407362812500000282;
                }
              } else {
                sum += (double)0.2624687500000000284;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2580661028623580933) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.00507354736328125) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6990000009536743164) ) ) {
                    sum += (double)0.5252029249999999871;
                  } else {
                    sum += (double)0.4736422962962962835;
                  }
                } else {
                  sum += (double)0.4008472777777777329;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                  sum += (double)0.4627290000000000569;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3104.9818115234375) ) ) {
                    sum += (double)0.4289442272727272965;
                  } else {
                    sum += (double)0.2724793333333333512;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.116380572319030762) ) ) {
          sum += (double)0.2403912500000000008;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5086.92724609375) ) ) {
            sum += (double)0.1778651071428571651;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3645955026149749756) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.459129095077514648) ) ) {
                sum += (double)0.01278820000000000304;
              } else {
                sum += (double)0.02301215384615384885;
              }
            } else {
              sum += (double)0.07348804545454545867;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2436510026454925537) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.78939533233642578) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.999999747378751636e-05) ) ) {
            sum += (double)0.2168249407894736469;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13710.310546875) ) ) {
              sum += (double)0.1826484568965517363;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1382984966039657593) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2542.4822998046875) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.82026100158691406) ) ) {
                    sum += (double)0.02054270535714285834;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.06140327453613281) ) ) {
                      sum += (double)0.009247849999999998433;
                    } else {
                      sum += (double)0.004412647058823529825;
                    }
                  }
                } else {
                  sum += (double)0.06539518333333332878;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6773999929428100586) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2162154987454414368) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3959999978542327881) ) ) {
                      sum += (double)0.01696509523809523745;
                    } else {
                      sum += (double)0.04787585638297871954;
                    }
                  } else {
                    sum += (double)0.1288249423076923139;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5539.716552734375) ) ) {
                    sum += (double)0.2153955694444444346;
                  } else {
                    sum += (double)0.07051709210526316274;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1083905026316642761) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06727499887347221375) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1408999934792518616) ) ) {
                sum += (double)0.01792015217391304538;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04316999949514865875) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1825999990105628967) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001400000008288770914) ) ) {
                      sum += (double)0.003429375000000000132;
                    } else {
                      sum += (double)0.002534755000000001382;
                    }
                  } else {
                    sum += (double)0.004890461538461538839;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4705000072717666626) ) ) {
                    sum += (double)0.004373520833333334294;
                  } else {
                    sum += (double)0.01258301000000000384;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08847199752926826477) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.86541366577148438) ) ) {
                  sum += (double)0.06987190000000000067;
                } else {
                  sum += (double)0.02564733333333332754;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.42535209655761719) ) ) {
                  sum += (double)0.01560953846153846289;
                } else {
                  sum += (double)0.006008407407407408488;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21648.1162109375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.06551742553710938) ) ) {
                sum += (double)0.226945670000000016;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2172499969601631165) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4545499980449676514) ) ) {
                    sum += (double)0.007734456521739130862;
                  } else {
                    sum += (double)0.02514071739130434996;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)92.30295944213867188) ) ) {
                    sum += (double)0.138986211538461496;
                  } else {
                    sum += (double)0.04485846153846152762;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8094488382339477539) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09295000135898590088) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1470890045166015625) ) ) {
                    sum += (double)0.004630406249999999974;
                  } else {
                    sum += (double)0.02195486904761904598;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6337999999523162842) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.85084438323974609) ) ) {
                      sum += (double)0.04154083333333333933;
                    } else {
                      sum += (double)0.08784196428571426629;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15459.23974609375) ) ) {
                      sum += (double)0.04538174999999999848;
                    } else {
                      sum += (double)0.01643594736842104997;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4368.82763671875) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2103500068187713623) ) ) {
                    sum += (double)0.007334060000000000752;
                  } else {
                    sum += (double)0.0199092000000000019;
                  }
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4293383657932281494) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09785000234842300415) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3222295045852661133) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2848735004663467407) ) ) {
                sum += (double)0.1093582968750000106;
              } else {
                sum += (double)0.07416621153846153502;
              }
            } else {
              sum += (double)0.2610238928571428363;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.95985794067382812) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.88352251052856445) ) ) {
                sum += (double)0.4387611874999999828;
              } else {
                sum += (double)0.3376953181818180827;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.76782608032226562) ) ) {
                sum += (double)0.2567993214285714809;
              } else {
                sum += (double)0.1493911500000000003;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07245000079274177551) ) ) {
            sum += (double)0.2764531785714285372;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.17857170104980469) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9470.396484375) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3123324960470199585) ) ) {
                  sum += (double)0.1398982500000000018;
                } else {
                  sum += (double)0.3595235673076923044;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2747084945440292358) ) ) {
                  sum += (double)0.1561956029411764868;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7690512239933013916) ) ) {
                    sum += (double)0.1082409741379310175;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3658484965562820435) ) ) {
                      sum += (double)0.0130266333333333359;
                    } else {
                      sum += (double)0.05928177631578946533;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8495055139064788818) ) ) {
                sum += (double)0.03703761363636363935;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3161525130271911621) ) ) {
                  sum += (double)0.004429571428571429416;
                } else {
                  sum += (double)0.0216725781250000013;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412058353424072266) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.878899991512298584) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.044230937957763672) ) ) {
                sum += (double)0.4797378250000000621;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2393.98193359375) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.780245542526245117) ) ) {
                    sum += (double)0.5064713125000001037;
                  } else {
                    sum += (double)0.5660188269230769231;
                  }
                } else {
                  sum += (double)0.6031695131578947988;
                }
              }
            } else {
              sum += (double)0.4625947352941176538;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.399865150451660156) ) ) {
              sum += (double)0.5653528500000000179;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01159999985247850418) ) ) {
                sum += (double)0.6761031527777778827;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.495454549789428711) ) ) {
                  sum += (double)0.6511681022727272561;
                } else {
                  sum += (double)0.5876468833333333697;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.95000076293945312) ) ) {
            sum += (double)0.5395748529411763528;
          } else {
            sum += (double)0.3217168804347825817;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.767405033111572266) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7139790058135986328) ) ) {
            sum += (double)0.7232756785714284931;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07485000044107437134) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8302393555641174316) ) ) {
                sum += (double)0.8598076388888888921;
              } else {
                sum += (double)0.8160679553571428269;
              }
            } else {
              sum += (double)0.7620844531249999498;
            }
          }
        } else {
          sum += (double)0.6452813800000000155;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6748605072498321533) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.354223012924194336) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.674565970897674561) ) ) {
            sum += (double)0.5188782499999999853;
          } else {
            sum += (double)0.3595700500000000299;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6288500130176544189) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5510655045509338379) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.82926845550537109) ) ) {
                sum += (double)0.257358583333333335;
              } else {
                sum += (double)0.1383175234374999785;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.288537740707397461) ) ) {
                sum += (double)0.1966719807692307864;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6187930107116699219) ) ) {
                  sum += (double)0.4352204078947369825;
                } else {
                  sum += (double)0.2986640249999999996;
                }
              }
            }
          } else {
            sum += (double)0.47145367187499998;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.385843515396118164) ) ) {
          sum += (double)0.6608593194444445373;
        } else {
          sum += (double)0.4484880535714285132;
        }
      }
    }
  }
  return sum;
}
