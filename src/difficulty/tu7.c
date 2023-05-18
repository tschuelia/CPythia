#include "prediction.h"
double predict_margin_unit7(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
        sum += (double)-0.002176204311239604561;
      } else {
        sum += (double)0.001522194319214912684;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)16838.47520585079837) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.65524034672972675) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
            sum += (double)0.0009617688646880646376;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
              sum += (double)0.0008726436334407704177;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.219437893081761315) ) ) {
                sum += (double)-0.0005995215033039915774;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1031000000000000111) ) ) {
                  sum += (double)-0.001315013027618372942;
                } else {
                  sum += (double)-0.008368953622092013475;
                }
              }
            }
          }
        } else {
          sum += (double)-0.004731465962478883722;
        }
      } else {
        sum += (double)0.007314011566539152;
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9745000000000000329) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2353.687490992878338) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32109164420485392) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2063695000000000113) ) ) {
              sum += (double)-0.002534115360022299278;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08905000000000001803) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09832488768552394287) ) ) {
                  sum += (double)0.001558169300590764392;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4928625677951861683) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.419765446224257488) ) ) {
                      sum += (double)0.002578454612575122994;
                    } else {
                      sum += (double)0.007958412333655932522;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
                      sum += (double)0.006234523343267563307;
                    } else {
                      sum += (double)-0.005416331273994184035;
                    }
                  }
                }
              } else {
                sum += (double)0.000798520703537939215;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2552661953259802718) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7661500000000001087) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02500000000000000486) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.60851063829787932) ) ) {
                    sum += (double)0.0042611814847870709;
                  } else {
                    sum += (double)0.01031855540969390736;
                  }
                } else {
                  sum += (double)0.0005008545242658692283;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3791.556210767445464) ) ) {
                    sum += (double)-0.0009550609550479090097;
                  } else {
                    sum += (double)-0.006512578084239293262;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.07059800664451998) ) ) {
                      sum += (double)-0.003107014433448168373;
                    } else {
                      sum += (double)0.004449176694980456863;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5706.165657108974301) ) ) {
                      sum += (double)0.00316759653697400341;
                    } else {
                      sum += (double)-0.001476081377958589737;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2951822687085968178) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                  sum += (double)0.001072215784622792363;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38051350000000006) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3283310000000000395) ) ) {
                      sum += (double)-0.005379427434362628324;
                    } else {
                      sum += (double)0.005931679889366441201;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7328500000000001124) ) ) {
                      sum += (double)-0.005974942330554993547;
                    } else {
                      sum += (double)-0.01513875499750026027;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4103386442176324422) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6770500000000000407) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02075000000000000108) ) ) {
                      sum += (double)0.0005626703064718287413;
                    } else {
                      sum += (double)0.005726905895462586042;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2364.153332471118119) ) ) {
                      sum += (double)-0.002532760978598434711;
                    } else {
                      sum += (double)0.001874901509280664296;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2038.087406351012987) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2144260000000000332) ) ) {
                      sum += (double)0.003506871274317234239;
                    } else {
                      sum += (double)-0.0004784180649829382326;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                      sum += (double)8.259684602181942053e-05;
                    } else {
                      sum += (double)-0.006361996841067209772;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.71626984126984361) ) ) {
            sum += (double)-0.004797339193790784925;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.88883399209486491) ) ) {
              sum += (double)0.003936448875505639718;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3112500000000000822) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4165800000000000058) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4105955000000000576) ) ) {
                      sum += (double)-0.0003971414269142009828;
                    } else {
                      sum += (double)-0.005244197953723578332;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2042500000000000426) ) ) {
                      sum += (double)0.001338389287713787632;
                    } else {
                      sum += (double)-0.0009969641463546464241;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6657846984349986563) ) ) {
                      sum += (double)-0.00367273256382471755;
                    } else {
                      sum += (double)0.002094283574455516311;
                    }
                  } else {
                    sum += (double)-0.0007321145100463320645;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5261.246056081498864) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6768.866270911575157) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
                      sum += (double)0.001183828324433670951;
                    } else {
                      sum += (double)-0.001903478395936734251;
                    }
                  } else {
                    sum += (double)0.008527618149040417858;
                  }
                } else {
                  sum += (double)-0.005611897813328773493;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.04124149659864074) ) ) {
            sum += (double)-0.008276064163347916433;
          } else {
            sum += (double)-0.002654769590541351896;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8284500000000000197) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2059541029866850392) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
                sum += (double)-0.0006147264070243751511;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1316846325177797872) ) ) {
                  sum += (double)-0.0001781781762838861437;
                } else {
                  sum += (double)0.008354329184188708304;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1624179537353906966) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                  sum += (double)-0.0004723929647679801585;
                } else {
                  sum += (double)-0.005204468007012747442;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.432034895516332895) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
                      sum += (double)0.01042477630678148061;
                    } else {
                      sum += (double)0.002887336006796870688;
                    }
                  } else {
                    sum += (double)0.0005840085498910844997;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2361862430022099446) ) ) {
                    sum += (double)-0.003647287001218310967;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.548804922219870317) ) ) {
                      sum += (double)0.001212526554396581606;
                    } else {
                      sum += (double)-0.001029045775459668617;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8478500000000001036) ) ) {
              sum += (double)-0.007375545454032749609;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8551000000000000822) ) ) {
                sum += (double)0.005483531874781966305;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1514018167545138904) ) ) {
                  sum += (double)-0.001302257403061207698;
                } else {
                  sum += (double)-0.006534398966695711616;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228310000000000346) ) ) {
        sum += (double)0.0005547567903207664035;
      } else {
        sum += (double)-0.007492850161909042281;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)38933.33430093093193) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02030850352529866079) ) ) {
          sum += (double)-0.005013995262235006536;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4013.229638921312926) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5938500000000001) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04145000000000000767) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3787240042526709427) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3535211598876289441) ) ) {
                      sum += (double)0.006587738517246370835;
                    } else {
                      sum += (double)-0.0007108897338930782834;
                    }
                  } else {
                    sum += (double)-0.001401967881530894995;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3546921061251228635) ) ) {
                    sum += (double)-0.006327545291269651151;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5435000000000000941) ) ) {
                      sum += (double)0.009097662009038583533;
                    } else {
                      sum += (double)0.00267715492486215274;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78888888888889497) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33592821992194288) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2040413945387017647) ) ) {
                      sum += (double)0.005058781217651244291;
                    } else {
                      sum += (double)-0.0001351404319258554441;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
                      sum += (double)-0.002391469228293933904;
                    } else {
                      sum += (double)0.007693655472236794572;
                    }
                  }
                } else {
                  sum += (double)0.005592941173365267166;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6087500000000001243) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.45767090620031858) ) ) {
                    sum += (double)-0.004839435630566961064;
                  } else {
                    sum += (double)-0.01423545892135359009;
                  }
                } else {
                  sum += (double)-0.001280451616492825915;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.50611355962782556) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4853978233193322334) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
                      sum += (double)2.015447265055193726e-05;
                    } else {
                      sum += (double)-0.001507226910565663634;
                    }
                  } else {
                    sum += (double)0.00548303825460880797;
                  }
                } else {
                  sum += (double)-0.006522336542997429244;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                sum += (double)0.003045532524471827179;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2577865146990329093) ) ) {
                  sum += (double)-0.0009473817762285307404;
                } else {
                  sum += (double)-0.004620929307881256262;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7350500000000000922) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2602911804898560555) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7179500000000001991) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04214999999999999997) ) ) {
                      sum += (double)0.00635900868276256543;
                    } else {
                      sum += (double)-0.002339119282125403081;
                    }
                  } else {
                    sum += (double)0.0153633721965855622;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2063695000000000113) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4236293998663874238) ) ) {
                      sum += (double)0.0001546610295893210399;
                    } else {
                      sum += (double)-0.006545389970134627561;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
                      sum += (double)0.004536425700012077129;
                    } else {
                      sum += (double)0.0008313512289633853908;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2344066382699040996) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13395.22104316800687) ) ) {
                      sum += (double)0.004773034171849732145;
                    } else {
                      sum += (double)-5.559655971928857129e-05;
                    }
                  } else {
                    sum += (double)0.006921001505052642479;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2951822687085968178) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08388546939293617388) ) ) {
                      sum += (double)0.0005083334472425984516;
                    } else {
                      sum += (double)-0.00530245272934033729;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.58257918552036436) ) ) {
                      sum += (double)0.005760174465722744941;
                    } else {
                      sum += (double)-0.003775845418167413786;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.004859243884949328296;
      }
    } else {
      sum += (double)-0.0005963533962671874536;
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.927352500000000135) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9455500000000001126) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.908568443051202213) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3704.779412412050533) ) ) {
                sum += (double)-0.000622033954058082237;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4283830000000000693) ) ) {
                  sum += (double)0.005438278805686151858;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02030850352529866079) ) ) {
                    sum += (double)0.005097724673569923454;
                  } else {
                    sum += (double)0.0008077643919271800411;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1206.163682551244392) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1427.072464577498522) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
                      sum += (double)-0.004209457152701225578;
                    } else {
                      sum += (double)-0.0001527698206248398916;
                    }
                  } else {
                    sum += (double)0.004488137709421045028;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4709808304613328223) ) ) {
                    sum += (double)-0.007803017948128728072;
                  } else {
                    sum += (double)-0.0004930901536950632515;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02715000000000000399) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5291855000000000864) ) ) {
                    sum += (double)0.006589181846733123231;
                  } else {
                    sum += (double)-0.003949885198464732697;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
                    sum += (double)0.0003545237982104111596;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
                      sum += (double)-0.008072755353772782805;
                    } else {
                      sum += (double)-0.0008227293455882446699;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3028.043267225880754) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2627.9895310241468) ) ) {
                sum += (double)-0.001182258858081256057;
              } else {
                sum += (double)-0.01165322821916076231;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.572427572427572473) ) ) {
                sum += (double)0.001459698551112815048;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5029.288454347889456) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
                    sum += (double)0.004727468868406801625;
                  } else {
                    sum += (double)-0.001181810275827245311;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01651861945051705596) ) ) {
                    sum += (double)-0.0005658515495598796189;
                  } else {
                    sum += (double)-0.006278089009157961434;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-776.627462522484393) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.948187489548568796) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6795141123970477315) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006850000000000001053) ) ) {
                    sum += (double)0.003610420493883634112;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1316846325177797872) ) ) {
                      sum += (double)-0.0001987321042039457862;
                    } else {
                      sum += (double)0.001857906083981196227;
                    }
                  }
                } else {
                  sum += (double)0.005206231744444208935;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4648510000000000697) ) ) {
                  sum += (double)-0.006025629561100935908;
                } else {
                  sum += (double)0.0002166015101930121546;
                }
              }
            } else {
              sum += (double)0.006065575071575394182;
            }
          } else {
            sum += (double)-0.004437007365906108121;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2450.380029300642036) ) ) {
          sum += (double)0.001362512661019871186;
        } else {
          sum += (double)-0.002582992610610638541;
        }
      }
    } else {
      sum += (double)0.002666289396292485011;
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
        sum += (double)-0.001990494779768591481;
      } else {
        sum += (double)0.001327475937151179194;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)16838.47520585079837) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.65524034672972675) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.851479682565888352) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6199606872203474728) ) ) {
                sum += (double)0.0008093026576346922787;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1810.080069446367361) ) ) {
                  sum += (double)0.005569499279011715966;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925320000000000253) ) ) {
                    sum += (double)-0.00207078417629971397;
                  } else {
                    sum += (double)0.002596886136546625208;
                  }
                }
              }
            } else {
              sum += (double)-0.001796920952656921259;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
                sum += (double)0.004772602444023758654;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-95.57213752792789307) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4105955000000000576) ) ) {
                      sum += (double)-0.002439805978944637344;
                    } else {
                      sum += (double)0.003556850121317320628;
                    }
                  } else {
                    sum += (double)-0.005918627595731399196;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08395000000000001072) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4978420000000000623) ) ) {
                      sum += (double)0.005438644172949479681;
                    } else {
                      sum += (double)0.001098623738363762453;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.624858597285068651) ) ) {
                      sum += (double)0.001262862871328233102;
                    } else {
                      sum += (double)-0.008267283446764760874;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.219437893081761315) ) ) {
                sum += (double)-0.0005359192623439639792;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1031000000000000111) ) ) {
                  sum += (double)-0.001274136809607030437;
                } else {
                  sum += (double)-0.007631359300591828224;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
            sum += (double)-0.0004719708239139932876;
          } else {
            sum += (double)-0.007253482039640609703;
          }
        }
      } else {
        sum += (double)0.006512938077150851914;
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9745000000000000329) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.567091454272864226) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)49.6585239618122003) ) ) {
            sum += (double)-0.001580466072946647626;
          } else {
            sum += (double)-0.009279896502928819402;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3191980000000000373) ) ) {
            sum += (double)0.006482433305250855093;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2539.379249415995218) ) ) {
                sum += (double)-0.0007354373280081524583;
              } else {
                sum += (double)-0.005536095390023945857;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1.00000001800250948e-35) ) ) {
                sum += (double)-0.004866548101383092947;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1607000000000000095) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2178.807099952505723) ) ) {
                    sum += (double)0.006267254904959568967;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.004450000000000001697) ) ) {
                      sum += (double)0.004029762779716785162;
                    } else {
                      sum += (double)-0.002027745279998533108;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
                    sum += (double)-0.006852050082726062266;
                  } else {
                    sum += (double)7.198278414873062457e-05;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.56607352231188468) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
            sum += (double)-0.002875517371574571202;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05255000000000000643) ) ) {
                sum += (double)-0.0048694566435395336;
              } else {
                sum += (double)0.00206335431139092855;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.317357322368964523) ) ) {
                sum += (double)0.00676357907583663865;
              } else {
                sum += (double)-0.0007812464276341713268;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.940712851405623773) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
              sum += (double)-0.009888014252751558056;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3545500000000000873) ) ) {
                sum += (double)-0.004386513061081314356;
              } else {
                sum += (double)0.002442849108516663946;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7350500000000000922) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2523846967694989285) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.196750000000000036) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7236.996653052084184) ) ) {
                      sum += (double)0.01308417438481588625;
                    } else {
                      sum += (double)0.003042697960491206558;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.313112745098040435) ) ) {
                      sum += (double)0.0007127848637659394684;
                    } else {
                      sum += (double)-0.008932107281219908365;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4126257761330971996) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6010500000000000842) ) ) {
                      sum += (double)0.004080235183330777407;
                    } else {
                      sum += (double)0.0001952664404269843085;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                      sum += (double)0.0002464518054129336282;
                    } else {
                      sum += (double)-0.001435745289854529474;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6672.266741891098718) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.09453843892841291841) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5565325000000000966) ) ) {
                      sum += (double)-0.00239465754547435114;
                    } else {
                      sum += (double)-0.008491813338637597963;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1486176851638061902) ) ) {
                      sum += (double)0.0006244821570602459822;
                    } else {
                      sum += (double)-0.001190901747970220118;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2344066382699040996) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1544380000000000197) ) ) {
                      sum += (double)-0.002121691043580574247;
                    } else {
                      sum += (double)0.001242678523335932848;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                      sum += (double)0.0006111758510560124898;
                    } else {
                      sum += (double)-0.0035870829996713623;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5435000000000000941) ) ) {
                    sum += (double)-0.003146502658995803912;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6319000000000001283) ) ) {
                      sum += (double)0.009557696534726710033;
                    } else {
                      sum += (double)-0.001127290977992567332;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
                    sum += (double)-0.0006285805773787092989;
                  } else {
                    sum += (double)-0.00394175485030623992;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
                    sum += (double)-0.001041868633930224984;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3266.861991663331082) ) ) {
                      sum += (double)-9.137265973143319879e-05;
                    } else {
                      sum += (double)0.005199900665689277494;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
                      sum += (double)-0.003312086289442240251;
                    } else {
                      sum += (double)0.003065292743820536691;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
                      sum += (double)-9.807512282705253685e-05;
                    } else {
                      sum += (double)-0.00093547659745303179;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228310000000000346) ) ) {
        sum += (double)0.0006265164959144050574;
      } else {
        sum += (double)-0.006882175307777139636;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1057530000000000137) ) ) {
      sum += (double)-0.0008515469543137849052;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)129.5625000000000284) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2467.232142857143572) ) ) {
            sum += (double)0.009805460573130007212;
          } else {
            sum += (double)0.001388264169788031238;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02030850352529866079) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4615.66579550800634) ) ) {
              sum += (double)-0.008375305629182058439;
            } else {
              sum += (double)-0.00109273414873831934;
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)43305.24755796225509) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4061.155400297998767) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
                      sum += (double)-0.001143902636274712415;
                    } else {
                      sum += (double)0.0004116954068793578507;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8337.708244919273056) ) ) {
                      sum += (double)-0.001625743629823949961;
                    } else {
                      sum += (double)0.0005325138481059456903;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6152500000000001856) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.42792207792208359) ) ) {
                      sum += (double)0.001665108452563611365;
                    } else {
                      sum += (double)0.007469025151791046542;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6672.266741891098718) ) ) {
                      sum += (double)-0.0008602144778166447448;
                    } else {
                      sum += (double)0.0008606450311777266845;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4050000000000000822) ) ) {
                  sum += (double)-0.001007406767379901346;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3488086661974699187) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19099.32569550648986) ) ) {
                      sum += (double)0.0001540371348641552329;
                    } else {
                      sum += (double)0.009453666108062591319;
                    }
                  } else {
                    sum += (double)-0.0002602803396238396257;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)269.9002463054187615) ) ) {
                sum += (double)0.007704086063467557345;
              } else {
                sum += (double)0.001182949702192149458;
              }
            }
          }
        }
      } else {
        sum += (double)-0.001794845690901866091;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9074435000000001805) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9381000000000000449) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1642951312239392114) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2082206845299330589) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0711364934725852438) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8992000000000001103) ) ) {
                    sum += (double)0.00231200872277284716;
                  } else {
                    sum += (double)-0.003817799703859524243;
                  }
                } else {
                  sum += (double)-0.006094536431287812112;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08513526784538440195) ) ) {
                  sum += (double)0.001167289266129545007;
                } else {
                  sum += (double)-0.004268856860435090925;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1211200960218856565) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4231.908399006179934) ) ) {
                  sum += (double)-0.001768187511580166741;
                } else {
                  sum += (double)0.004532066071063363052;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
                    sum += (double)0.0004843705967565445965;
                  } else {
                    sum += (double)0.007053889713273384619;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6178.216161766199548) ) ) {
                    sum += (double)0.01133468069450982788;
                  } else {
                    sum += (double)0.004600951665305036582;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.005332576668939425016;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2552661953259802718) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7166500000000001203) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1506500000000000339) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4648510000000000697) ) ) {
                    sum += (double)0.0111174286453460322;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6200500000000001011) ) ) {
                      sum += (double)-0.0005592812612952456543;
                    } else {
                      sum += (double)0.004576462277711187271;
                    }
                  }
                } else {
                  sum += (double)-0.004310697035258279422;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05015000000000000707) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7985500000000000931) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6257.283101614548286) ) ) {
                      sum += (double)0.001997827214843962695;
                    } else {
                      sum += (double)-0.005136923972615951156;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.975304878048781188) ) ) {
                      sum += (double)-0.0002207632347032535366;
                    } else {
                      sum += (double)-0.007281159853496420829;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.169986979704803115) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1404478012977176671) ) ) {
                      sum += (double)0.001619300976877052073;
                    } else {
                      sum += (double)0.006642969404478980128;
                    }
                  } else {
                    sum += (double)-0.002243653764666630763;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
                      sum += (double)0.001669414123858764965;
                    } else {
                      sum += (double)0.008025339885788093305;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02075000000000000108) ) ) {
                      sum += (double)-0.0009106668919000354603;
                    } else {
                      sum += (double)0.0003934143092246770307;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1492500000000000215) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                      sum += (double)-0.001596541011853827531;
                    } else {
                      sum += (double)0.0007915978802718421845;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1250500000000000222) ) ) {
                      sum += (double)-0.006756163645024176358;
                    } else {
                      sum += (double)-0.0005619469679128061279;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09832488768552394287) ) ) {
                  sum += (double)-0.0006277605846000857814;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7966500000000000803) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33592821992194288) ) ) {
                      sum += (double)-0.003885823211428992424;
                    } else {
                      sum += (double)-0.01042664447398580947;
                    }
                  } else {
                    sum += (double)-0.0001818467350435016173;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
                sum += (double)-0.003048201550434630116;
              } else {
                sum += (double)-0.01065711659662744483;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                sum += (double)0.003495721664292573451;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3686.786422307056) ) ) {
                  sum += (double)0.001592662262051222416;
                } else {
                  sum += (double)-0.005004876531647745042;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.212912087912088488) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
            sum += (double)0.001351757365267274415;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.06446597211275277572) ) ) {
              sum += (double)-0.002780974848591119975;
            } else {
              sum += (double)0.002610916140643827765;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5029.288454347889456) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.536038961038963535) ) ) {
              sum += (double)0.001840392507788892905;
            } else {
              sum += (double)-0.003564970576218919138;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.04618346993186531885) ) ) {
              sum += (double)-0.01100405052962589829;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09065000000000002223) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9544500000000001316) ) ) {
                  sum += (double)-0.003612588279688229952;
                } else {
                  sum += (double)0.003009323685775432914;
                }
              } else {
                sum += (double)-0.00958397708600132979;
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.001988975472754620638;
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.317357322368964523) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8850000000000001199) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
                  sum += (double)0.0001307139878319610803;
                } else {
                  sum += (double)0.00474381038973826271;
                }
              } else {
                sum += (double)-0.00270969624471456734;
              }
            } else {
              sum += (double)0.005246460687878801328;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5160139698723101853) ) ) {
              sum += (double)-0.0001973342957940154663;
            } else {
              sum += (double)-0.006376074783199852866;
            }
          }
        } else {
          sum += (double)0.004100177507082481895;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-776.627462522484393) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000000000000697) ) ) {
            sum += (double)0.002941992758009336333;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5995.730546760533798) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7517.831857566079634) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5801.456541730448407) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.487050000000000094) ) ) {
                      sum += (double)0.001408133261178238539;
                    } else {
                      sum += (double)-0.005367781167559601899;
                    }
                  } else {
                    sum += (double)0.00454216905145043634;
                  }
                } else {
                  sum += (double)0.005668359823826833559;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2144260000000000332) ) ) {
                  sum += (double)0.003791842285879208456;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2086500000000000299) ) ) {
                    sum += (double)-0.003210417899778638014;
                  } else {
                    sum += (double)-0.01071572817281520734;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1283.269061062331048) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9554166948649117641) ) ) {
                    sum += (double)0.0003909192692897421324;
                  } else {
                    sum += (double)0.004800599946888975227;
                  }
                } else {
                  sum += (double)0.004160263811760502549;
                }
              } else {
                sum += (double)0.003874980166019115213;
              }
            }
          }
        } else {
          sum += (double)-0.003582132518403289938;
        }
      }
    } else {
      sum += (double)-0.001438645671423599993;
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.71626984126984361) ) ) {
      sum += (double)-0.003464579224195930233;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3112500000000000822) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.23959827833572689) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4133440879166302429) ) ) {
              sum += (double)-0.002432127178690331269;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                sum += (double)-0.0007018953247314780501;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)166.9041125316803402) ) ) {
                  sum += (double)-0.0001435688011903840883;
                } else {
                  sum += (double)0.009512798977488879162;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3339271889634866652) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7444500000000001672) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2114255000000000162) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4350000000000000533) ) ) {
                    sum += (double)-0.000451182859590839268;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6941500000000001558) ) ) {
                      sum += (double)0.007779109864530406662;
                    } else {
                      sum += (double)-0.000888837337103780289;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2312300000000000189) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9581.734211346893062) ) ) {
                      sum += (double)0.005330372041348959734;
                    } else {
                      sum += (double)0.01454056573141703813;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2523846967694989285) ) ) {
                      sum += (double)0.00586756969573980474;
                    } else {
                      sum += (double)0.001048835797718458912;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02395000000000000254) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
                    sum += (double)-0.001469590675807421094;
                  } else {
                    sum += (double)-0.009405406117248710576;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)43305.24755796225509) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1331779278199183014) ) ) {
                      sum += (double)-7.593610405661630955e-05;
                    } else {
                      sum += (double)-0.002228768876837524358;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
                      sum += (double)0.000283048532044211684;
                    } else {
                      sum += (double)0.008723415970824377474;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09947290620547651063) ) ) {
                sum += (double)0.006378838160593660288;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1155500000000000277) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                    sum += (double)0.004529356265048504852;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
                      sum += (double)-0.00421282015353467796;
                    } else {
                      sum += (double)-0.001012669799099511934;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1650000000000000355) ) ) {
                      sum += (double)0.0004584801732708612969;
                    } else {
                      sum += (double)0.009322577639439824301;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
                      sum += (double)-0.004496749277758812016;
                    } else {
                      sum += (double)-0.0002049396579360264448;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4951140000000000541) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1708.479834708773978) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1254.980453496960536) ) ) {
                sum += (double)-0.000656004872870663623;
              } else {
                sum += (double)0.01065459699408327458;
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3344.138681686334621) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
                  sum += (double)-0.007972652232049948912;
                } else {
                  sum += (double)-0.00223851069012426197;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.90625000000000711) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
                    sum += (double)-0.003785481272202725032;
                  } else {
                    sum += (double)0.006226477938678764285;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596939932693950182) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.20714285714286262) ) ) {
                      sum += (double)-0.00588231958800590829;
                    } else {
                      sum += (double)-0.001578045534644913119;
                    }
                  } else {
                    sum += (double)7.727970822780621109e-06;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2399659671015315077) ) ) {
              sum += (double)0.0004218029681393960012;
            } else {
              sum += (double)-0.005576139009970357795;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
          sum += (double)0.00572176628172167169;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3962.214750511102011) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3368947088135722523) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)12670.19278798460982) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7821500000000000119) ) ) {
                    sum += (double)-0.005549303007238536381;
                  } else {
                    sum += (double)9.805081749146415525e-05;
                  }
                } else {
                  sum += (double)0.003223604829408476501;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6988000000000001988) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5289000000000001478) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.13209924403954787) ) ) {
                      sum += (double)0.0003406711430222797475;
                    } else {
                      sum += (double)0.005004497527679690853;
                    }
                  } else {
                    sum += (double)-1.206451788342511062e-05;
                  }
                } else {
                  sum += (double)0.009082516956454842957;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6682000000000001272) ) ) {
                sum += (double)-0.001747928179133896023;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3535211598876289441) ) ) {
                  sum += (double)-0.003217716043665642088;
                } else {
                  sum += (double)0.005180699760343620078;
                }
              }
            }
          } else {
            sum += (double)-0.006144119073210225178;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
      sum += (double)-0.001020403842327424846;
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)16838.47520585079837) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
          sum += (double)0.0005425499980414298;
        } else {
          sum += (double)-0.004086513604571884693;
        }
      } else {
        sum += (double)0.005883414908996998337;
      }
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32109164420485392) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5141168753850328121) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4401670142345356918) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13395.22104316800687) ) ) {
                sum += (double)0.004479460396113810368;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.81858974358974734) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2043540000000000079) ) ) {
                    sum += (double)-0.00710191308105511971;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361985000000000334) ) ) {
                      sum += (double)0.00323102212938791624;
                    } else {
                      sum += (double)-0.003169602836683478673;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2444518245208232299) ) ) {
                    sum += (double)-0.0006997971062349279134;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
                      sum += (double)0.006403651850417127131;
                    } else {
                      sum += (double)-0.001901625743583362739;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.007873890989586636302;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1934555000000000302) ) ) {
              sum += (double)0.0009139025409650026847;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.04124149659864074) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.286607142857144837) ) ) {
                  sum += (double)-0.007080692098223552965;
                } else {
                  sum += (double)-0.0008645765348832857048;
                }
              } else {
                sum += (double)-0.009632248167919691545;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9305500000000000993) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.78345184227537601) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.57417582417583191) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3864500000000000712) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)321.774772462952626) ) ) {
                      sum += (double)0.001796961272982734205;
                    } else {
                      sum += (double)0.009417896131612519747;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.875961538461539568) ) ) {
                      sum += (double)0.004620785523604856171;
                    } else {
                      sum += (double)-0.0002508775729766912028;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4018505548079681078) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                      sum += (double)-5.626263126582164997e-05;
                    } else {
                      sum += (double)0.003053551825780444293;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
                      sum += (double)-0.00203296384469000245;
                    } else {
                      sum += (double)0.000100083321788555231;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)6483.553124530845707) ) ) {
                  sum += (double)-0.005694439252315719457;
                } else {
                  sum += (double)0.0007138358882087530869;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7985500000000000931) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1582500000000000295) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5452.444267353072973) ) ) {
                    sum += (double)0.00377711813504006972;
                  } else {
                    sum += (double)0.01061533160422621809;
                  }
                } else {
                  sum += (double)-0.0001003380735488856103;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1702908340369640727) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3371.239524566822638) ) ) {
                    sum += (double)0.00295094996893344565;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01695000000000000326) ) ) {
                      sum += (double)0.0001108682782118298587;
                    } else {
                      sum += (double)-0.006889775719280423309;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                    sum += (double)0.001266077942278178445;
                  } else {
                    sum += (double)-0.007517397623923634427;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
              sum += (double)-0.008457138072298709883;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7451.581543301115744) ) ) {
                sum += (double)-0.006547524928370225192;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.1500000000000199) ) ) {
                  sum += (double)0.003787603545137750976;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)19887.81802584273828) ) ) {
                    sum += (double)-0.005341430266055925864;
                  } else {
                    sum += (double)0.001571810483224330866;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.71626984126984361) ) ) {
          sum += (double)-0.00498006997058701717;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.88883399209486491) ) ) {
            sum += (double)0.004084361335979841932;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3183000000000000829) ) ) {
                sum += (double)-0.000212621459071294592;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1708.479834708773978) ) ) {
                    sum += (double)0.002533581605044439491;
                  } else {
                    sum += (double)-0.003742334800356380501;
                  }
                } else {
                  sum += (double)-0.0005637368201237870358;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5261.246056081498864) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6768.866270911575157) ) ) {
                  sum += (double)0.000617071626402594252;
                } else {
                  sum += (double)0.007608758149982425972;
                }
              } else {
                sum += (double)-0.004830159620143330453;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
          sum += (double)-0.01009241314845762613;
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2190711269459436339) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3057365000000000221) ) ) {
              sum += (double)-0.001192108107417847286;
            } else {
              sum += (double)-0.008138921936939463864;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.650443786982250138) ) ) {
              sum += (double)0.003752361567567092347;
            } else {
              sum += (double)-0.002404441650177935579;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2025.244583427236194) ) ) {
          sum += (double)-0.003967368046837197945;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1297121988736138765) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1514018167545138904) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06175000000000000627) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1000142058976443288) ) ) {
                  sum += (double)-0.003320300507947325681;
                } else {
                  sum += (double)0.003590394811505200068;
                }
              } else {
                sum += (double)-0.005965690313429626926;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2166315049226441858) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2087.634986269159981) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38051350000000006) ) ) {
                    sum += (double)-0.004936349586155840477;
                  } else {
                    sum += (double)-0.0121052987492445141;
                  }
                } else {
                  sum += (double)-0.001742423885834558806;
                }
              } else {
                sum += (double)0.0001471610207454737348;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.830018761726079468) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                sum += (double)0.001981007674837974471;
              } else {
                sum += (double)-0.004638946641972559008;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.808257918552036436) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2802500000000000546) ) ) {
                  sum += (double)0.008752805571689755218;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.886045828437135086) ) ) {
                    sum += (double)-0.001172012217183964009;
                  } else {
                    sum += (double)0.002800912398135207114;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
                  sum += (double)-0.001486514731623384466;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1879.768845692260356) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.811253561253562516) ) ) {
                      sum += (double)0.0102692644569719882;
                    } else {
                      sum += (double)0.0009526557034828982964;
                    }
                  } else {
                    sum += (double)0.0003346240578624115852;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2313484523829452688) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1298745000000000316) ) ) {
          sum += (double)-0.0008234916332624780261;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1564500000000000335) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01815000000000000294) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3064.437254561459213) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.813439329220060792) ) ) {
                  sum += (double)0.002074738464460537755;
                } else {
                  sum += (double)-0.006316503595319034742;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1404478012977176671) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.811253561253562516) ) ) {
                    sum += (double)0.002933526416687043479;
                  } else {
                    sum += (double)-0.003922305260501131145;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1664534368267386599) ) ) {
                    sum += (double)0.009536707601353801994;
                  } else {
                    sum += (double)0.001076993425380743264;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7852500000000001146) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03305000000000000299) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8006.423874351355153) ) ) {
                    sum += (double)0.006415450305279320545;
                  } else {
                    sum += (double)0.01730842726472984344;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04825000000000000816) ) ) {
                    sum += (double)-0.0003410330596690164446;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
                      sum += (double)0.002379778734169627798;
                    } else {
                      sum += (double)0.01092827305334150879;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0796521464731583112) ) ) {
                  sum += (double)0.007103803035441615468;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1784550515539286286) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2648210000000000286) ) ) {
                      sum += (double)-0.0002734834796334171137;
                    } else {
                      sum += (double)0.008996592562721070566;
                    }
                  } else {
                    sum += (double)-0.001194723716952781831;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6350000000000001199) ) ) {
              sum += (double)-0.002875470752085456608;
            } else {
              sum += (double)0.003491082816007292939;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1250500000000000222) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1766435000000000366) ) ) {
                  sum += (double)-0.001438628025287253583;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4736.924814125954072) ) ) {
                    sum += (double)0.001552660292327458658;
                  } else {
                    sum += (double)0.00590117068371559441;
                  }
                }
              } else {
                sum += (double)-0.0006292411125408162945;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                sum += (double)0.001830744208432993772;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.76388888888889284) ) ) {
                  sum += (double)-0.006936689318553313291;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7942500000000002336) ) ) {
                    sum += (double)-0.002538582140609388881;
                  } else {
                    sum += (double)0.00503406802882694869;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.006183325760549849594;
          }
        } else {
          sum += (double)5.987826706577055864e-05;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1360340320715830165) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4059235000000000482) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05500000000000000722) ) ) {
            sum += (double)-0.0009179048492287118603;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003750000000000000295) ) ) {
              sum += (double)0.006565033197218232697;
            } else {
              sum += (double)0.0007043270342126785148;
            }
          }
        } else {
          sum += (double)0.007211463337637534672;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.376459500000000058) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9050000000000001377) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07618126899281679743) ) ) {
              sum += (double)0.001915159167682871973;
            } else {
              sum += (double)-0.002330774255783651504;
            }
          } else {
            sum += (double)-0.006847567898891003882;
          }
        } else {
          sum += (double)-0.006766924717500835337;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.927352500000000135) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4257500000000000173) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2391000000000000347) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.106374722838138425) ) ) {
                  sum += (double)-0.0001451954357286632826;
                } else {
                  sum += (double)0.00987080015354525539;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4550085000000000934) ) ) {
                  sum += (double)-0.002590262655543169954;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1839.943830114362981) ) ) {
                      sum += (double)0.0009838971061336876291;
                    } else {
                      sum += (double)0.008791413918288980972;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
                      sum += (double)0.0005278887736667290005;
                    } else {
                      sum += (double)-0.00542053250178670034;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.01237126943320508189;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4473314962819884832) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7396500000000000297) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2552661953259802718) ) ) {
                      sum += (double)0.003567462266186230586;
                    } else {
                      sum += (double)0.000954140891515968927;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1944435586226250512) ) ) {
                      sum += (double)0.0007451691306737399023;
                    } else {
                      sum += (double)-0.0008803329378139651031;
                    }
                  }
                } else {
                  sum += (double)-0.005561916215966496504;
                }
              } else {
                sum += (double)0.006677445342793086186;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.31844888366627622) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32109164420485392) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.438750000000000639) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.293597746500404877) ) ) {
                      sum += (double)-0.001178633099929454362;
                    } else {
                      sum += (double)0.00122921240493106842;
                    }
                  } else {
                    sum += (double)-0.006308231165318772642;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4795045000000000557) ) ) {
                    sum += (double)0.0003426592630346249921;
                  } else {
                    sum += (double)0.007401282711446532242;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5430163914776303669) ) ) {
                  sum += (double)-0.0003020243831252691609;
                } else {
                  sum += (double)-0.005538712919515895172;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.78345184227537601) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4901430000000000509) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4625500000000000722) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.831026909314261597) ) ) {
                  sum += (double)0.008334071627686156711;
                } else {
                  sum += (double)0.002865953086767064964;
                }
              } else {
                sum += (double)-0.002236684737865524391;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.275716440422323128) ) ) {
                sum += (double)-0.000145718605044484271;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-824.1224939772984044) ) ) {
                  sum += (double)0.001127738682364806243;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04185000000000000525) ) ) {
                    sum += (double)-0.0008837634534368672386;
                  } else {
                    sum += (double)-0.008586529077121603237;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.0105411288024825165;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9414500000000001201) ) ) {
          sum += (double)-0.0001450854716021509781;
        } else {
          sum += (double)-0.004171508747115536958;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.155357142857144304) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000000000001173) ) ) {
          sum += (double)0.007610489053402407292;
        } else {
          sum += (double)0.001460143406964167128;
        }
      } else {
        sum += (double)0.000369965667048106244;
      }
    }
  }
  return sum;
}
