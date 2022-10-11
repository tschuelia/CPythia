#include "prediction.h"
double predict_margin_unit0(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.244765702891327486) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2698990000000000555) ) ) {
        sum += (double)0.2916578244392992736;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5137965000000001003) ) ) {
          sum += (double)0.3133009339892381395;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9450000000000000622) ) ) {
            sum += (double)0.3146073741279842295;
          } else {
            sum += (double)0.3464538914297494721;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.545000000000000151) ) ) {
        sum += (double)0.2740415052224070558;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.9321266968325812) ) ) {
          sum += (double)0.2944628111042306706;
        } else {
          sum += (double)0.2805539463805245548;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5409275000000001166) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.35002430724355982) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9031987788299341569) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005050000000000001536) ) ) {
              sum += (double)0.3493604415449733103;
            } else {
              sum += (double)0.3128770596992017095;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6345946031821346756) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3722725000000000617) ) ) {
                sum += (double)0.3376078529121780969;
              } else {
                sum += (double)0.3529122608430727559;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4888.247532516838874) ) ) {
                sum += (double)0.3421420027544766485;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.239818381948266879) ) ) {
                  sum += (double)0.3321140458482049751;
                } else {
                  sum += (double)0.2982608096628434624;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3852150000000000296) ) ) {
            sum += (double)0.2944651260249899205;
          } else {
            sum += (double)0.3176144436710620633;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.140910052012023224) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.88333333333333641) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17787.44282608967842) ) ) {
              sum += (double)0.3263981978850364896;
            } else {
              sum += (double)0.3017692577861869618;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3511255000000000348) ) ) {
              sum += (double)0.2863822227585857139;
            } else {
              sum += (double)0.3083172841951478671;
            }
          }
        } else {
          sum += (double)0.2798326638085295026;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.75464600000000015) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7545919176204441969) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.2232789855072479) ) ) {
            sum += (double)0.3691401858143977255;
          } else {
            sum += (double)0.3294032702647531896;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.238308720112518024) ) ) {
            sum += (double)0.3531304807710093918;
          } else {
            sum += (double)0.3255272949454338649;
          }
        }
      } else {
        sum += (double)0.3863469215472162821;
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.43146135265700547) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2698990000000000555) ) ) {
        sum += (double)-0.02064448652232550238;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5137965000000001003) ) ) {
          sum += (double)-0.002486740274089086367;
        } else {
          sum += (double)0.01500209040071528305;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.545000000000000151) ) ) {
        sum += (double)-0.03609962423553956384;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.22649572649572747) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.023643244746905046) ) ) {
            sum += (double)-0.01538285492506856304;
          } else {
            sum += (double)-0.03941214655273974493;
          }
        } else {
          sum += (double)-0.03051500904105276107;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.008771929824562541) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6603875000000001272) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5899477629820119029) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4406795000000000573) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2733690000000000286) ) ) {
              sum += (double)0.007152589664824582534;
            } else {
              sum += (double)0.02851224007565903926;
            }
          } else {
            sum += (double)0.04238489276752724355;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.567300267300267391) ) ) {
            sum += (double)0.02675819594712548072;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1658500000000000252) ) ) {
              sum += (double)-0.004746220465822028299;
            } else {
              sum += (double)0.01591992664970598784;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5408044872135141512) ) ) {
          sum += (double)0.06196985340551480759;
        } else {
          sum += (double)0.04290475205589398822;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.337136704931381148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.24337662337662458) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3430250000000000798) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000000000000594) ) ) {
              sum += (double)0.03294400457522779491;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473650000000000293) ) ) {
                sum += (double)-0.007080312661510304931;
              } else {
                sum += (double)0.008680671680102900259;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2442500000000000504) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6674255000000001159) ) ) {
                sum += (double)-0.007810785841307337808;
              } else {
                sum += (double)0.02072624529882509739;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5081020000000001646) ) ) {
                sum += (double)0.02282669369316599889;
              } else {
                sum += (double)0.0400811779924078182;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4551385000000000569) ) ) {
            sum += (double)-0.01620004646776050314;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18698.09943762341936) ) ) {
              sum += (double)0.02014718233109864462;
            } else {
              sum += (double)-0.009055642680544161854;
            }
          }
        }
      } else {
        sum += (double)-0.02640683382004847118;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3801160000000000649) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.960648148148150582) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2698990000000000555) ) ) {
          sum += (double)-0.01980416961807457757;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33012820512820795) ) ) {
            sum += (double)-0.01123178807981815332;
          } else {
            sum += (double)0.01500401624326464824;
          }
        }
      } else {
        sum += (double)-0.02909109052118008867;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.88333333333333641) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9031987788299341569) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.75595238095238315) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473650000000000293) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01725000000000000491) ) ) {
                sum += (double)0.02357400572588307444;
              } else {
                sum += (double)-0.002808003412682772391;
              }
            } else {
              sum += (double)0.01714739613889288208;
            }
          } else {
            sum += (double)-0.003513185775020705431;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3246.901261113256169) ) ) {
            sum += (double)-0.008014821354638726469;
          } else {
            sum += (double)-0.03070004859912914275;
          }
        }
      } else {
        sum += (double)-0.02409085092128640873;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.710438000000000125) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.943152454780363136) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5104547563113605024) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5740235000000001309) ) ) {
            sum += (double)0.02835355959220844588;
          } else {
            sum += (double)0.04272639619257398436;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.408051529790660394) ) ) {
            sum += (double)0.02386001619190462539;
          } else {
            sum += (double)0.009323548591021201676;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09795000000000000928) ) ) {
            sum += (double)0.006163422927835691956;
          } else {
            sum += (double)-0.0225172224947317659;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7001222624588991916) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.02219474861650994) ) ) {
              sum += (double)0.02917173923994635654;
            } else {
              sum += (double)0.006718148140921587942;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3575.274009667960399) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.9321266968325812) ) ) {
                sum += (double)0.03072240278240387021;
              } else {
                sum += (double)-0.005201663367105594654;
              }
            } else {
              sum += (double)-0.01310346386238676192;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5408044872135141512) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8724.154536341893618) ) ) {
          sum += (double)0.02924291311645870611;
        } else {
          sum += (double)0.05481694656849059322;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.080650406504065186) ) ) {
          sum += (double)0.0533421168465845405;
        } else {
          sum += (double)0.02310566151532557344;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.244765702891327486) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5250000000000001332) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4657072768725835643) ) ) {
          sum += (double)-0.02734267638365704689;
        } else {
          sum += (double)-0.007744989668264343034;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2698990000000000555) ) ) {
          sum += (double)-0.01236360893737332642;
        } else {
          sum += (double)0.006074209163274666909;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.545000000000000151) ) ) {
        sum += (double)-0.02678900701124769385;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
          sum += (double)0.003606629265959405192;
        } else {
          sum += (double)-0.01944010281793049841;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5545740000000000114) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.16263736263736384) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9031987788299341569) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473650000000000293) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01725000000000000491) ) ) {
              sum += (double)0.01919749966442264519;
            } else {
              sum += (double)-0.005027159916581635038;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03705000000000000654) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.238294673539519941) ) ) {
                sum += (double)0.01337686850263357374;
              } else {
                sum += (double)-0.01966931441287847818;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3430250000000000798) ) ) {
                sum += (double)0.01216357045776529644;
              } else {
                sum += (double)0.02297430010251887145;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2914020000000000499) ) ) {
            sum += (double)-0.02214327383636704658;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2854.952487975431268) ) ) {
              sum += (double)0.02253885505338946993;
            } else {
              sum += (double)-0.01143050197208116993;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.140910052012023224) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.88333333333333641) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17787.44282608967842) ) ) {
              sum += (double)0.009982253897049904803;
            } else {
              sum += (double)-0.0108564457419641977;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-33376.32965003637219) ) ) {
              sum += (double)-0.006316642292129668462;
            } else {
              sum += (double)-0.02202715288201764765;
            }
          }
        } else {
          sum += (double)-0.02450635993123441783;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7609450000000000935) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1853605016317695087) ) ) {
          sum += (double)0.03749008291685873573;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.383600000000000052) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5679452574321449676) ) ) {
              sum += (double)0.03629298115456415508;
            } else {
              sum += (double)0.01864398454041530512;
            }
          } else {
            sum += (double)0.008803261457513839039;
          }
        }
      } else {
        sum += (double)0.04610186669139251098;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4165095000000000325) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.960648148148150582) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.0650000000000000161) ) ) {
          sum += (double)-0.02338857686793787555;
        } else {
          sum += (double)-0.006517503141526885709;
        }
      } else {
        sum += (double)-0.02148535918423138957;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.24337662337662458) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.053053766696358862) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473650000000000293) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000000000000594) ) ) {
              sum += (double)0.02100931767422367646;
            } else {
              sum += (double)-0.003668143291112065888;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.040476190476192997) ) ) {
              sum += (double)0.01553126670138608653;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13280.04482759072744) ) ) {
                sum += (double)0.01632030604765901532;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.18545751633987351) ) ) {
                  sum += (double)0.002692727575641266653;
                } else {
                  sum += (double)-0.01671846747547918455;
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3246.901261113256169) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2929020000000000512) ) ) {
              sum += (double)-0.01478026519667332596;
            } else {
              sum += (double)0.0134372159021357452;
            }
          } else {
            sum += (double)-0.02304623424458756425;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3400500000000001299) ) ) {
          sum += (double)-0.02147487460371115889;
        } else {
          sum += (double)-0.008461708951124091022;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6707050000000001067) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4096225461840675153) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          sum += (double)-0.007063280053953647879;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4919500000000000539) ) ) {
            sum += (double)0.0255718854456237453;
          } else {
            sum += (double)0.008054555000329085418;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.943152454780363136) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.50657894736842124) ) ) {
            sum += (double)0.01971073296686005893;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2545.674573732679619) ) ) {
              sum += (double)0.02391411747043749314;
            } else {
              sum += (double)0.003963342760221897493;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9826491253220847044) ) ) {
            sum += (double)0.002015338514237187753;
          } else {
            sum += (double)-0.01214949791578469503;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.875516528925620374) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5408044872135141512) ) ) {
          sum += (double)0.04054945178030520958;
        } else {
          sum += (double)0.02592891885642420458;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7854755000000001042) ) ) {
          sum += (double)0.01553166424038172205;
        } else {
          sum += (double)0.03533314705514720849;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4209690000000000931) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.960648148148150582) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.0650000000000000161) ) ) {
          sum += (double)-0.02003537736923940993;
        } else {
          sum += (double)-0.005583073204949590314;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4450000000000000622) ) ) {
          sum += (double)-0.02050327249995737358;
        } else {
          sum += (double)-0.01564540596955660626;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.86190476190476417) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9031987788299341569) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2811385000000000134) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006650000000000000529) ) ) {
              sum += (double)0.01878624119134334261;
            } else {
              sum += (double)0.001153317100670024891;
            }
          } else {
            sum += (double)0.01274369256490818364;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3246.901261113256169) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2929020000000000512) ) ) {
              sum += (double)-0.01235194487561947982;
            } else {
              sum += (double)0.01560513244181143365;
            }
          } else {
            sum += (double)-0.01882193648276226858;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.88333333333333641) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17787.44282608967842) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3259285000000000099) ) ) {
              sum += (double)-0.001538904583244896833;
            } else {
              sum += (double)0.01904396166785305225;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5658.578324664585125) ) ) {
              sum += (double)-0.01640449072518596757;
            } else {
              sum += (double)0.007291773079463379111;
            }
          }
        } else {
          sum += (double)-0.01488449955538674076;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6603875000000001272) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.691015480139064997) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          sum += (double)-0.005567167694211818708;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.02219474861650994) ) ) {
            sum += (double)0.02220887067306619167;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9887.155709890705111) ) ) {
              sum += (double)0.01014846264029218952;
            } else {
              sum += (double)-0.007543513348158769997;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.677645558861028841) ) ) {
          sum += (double)0.01621851995143519867;
        } else {
          sum += (double)-0.002118342398732035725;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8138480000000000159) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5679452574321449676) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7292.957146226334771) ) ) {
            sum += (double)0.01320635887176065636;
          } else {
            sum += (double)0.03335856129214428284;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            sum += (double)-0.000955162981994060788;
          } else {
            sum += (double)0.01735771011521082541;
          }
        }
      } else {
        sum += (double)0.03762406515998315687;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5409275000000001166) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01195000000000000055) ) ) {
          sum += (double)-0.003889734697028802025;
        } else {
          sum += (double)-0.01656556453447417115;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9638349311435107092) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14584.17359590971137) ) ) {
            sum += (double)-0.01626198742419161791;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.012450000000000001) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.94680432645034784) ) ) {
                sum += (double)-0.0005137755488325615981;
              } else {
                sum += (double)0.02744281896475321558;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2559985000000000732) ) ) {
                sum += (double)-0.009961421344693270272;
              } else {
                sum += (double)0.003009125920966848437;
              }
            }
          }
        } else {
          sum += (double)-0.01931594320343711646;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.691015480139064997) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01405000000000000172) ) ) {
            sum += (double)0.02286743211234743695;
          } else {
            sum += (double)0.008256977200106249692;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6181.876125091131144) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9736.777481127186547) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3926440000000000485) ) ) {
                sum += (double)-0.005179446758021900334;
              } else {
                sum += (double)0.009987158800853726537;
              }
            } else {
              sum += (double)-0.0200615740659806259;
            }
          } else {
            sum += (double)0.01364587177084097477;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.621292937913378029) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1310.535920419476724) ) ) {
            sum += (double)0.01879333699343540415;
          } else {
            sum += (double)-0.006713118456911405102;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4480.563354773491483) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.29843750000000213) ) ) {
              sum += (double)0.004618131489376723318;
            } else {
              sum += (double)-0.01228195614419416194;
            }
          } else {
            sum += (double)-0.01791978881767639434;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8138480000000000159) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1853605016317695087) ) ) {
        sum += (double)0.02471998217884609911;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3677500000000000768) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.467454196533900523) ) ) {
            sum += (double)0.01827285321469307444;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792892156862745612) ) ) {
              sum += (double)0.0115189865828190189;
            } else {
              sum += (double)-0.01611539180085389683;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8776831527315031023) ) ) {
            sum += (double)-0.0005050212213716989956;
          } else {
            sum += (double)0.02079281671251260316;
          }
        }
      }
    } else {
      sum += (double)0.03252628038743397842;
    }
  }
  return sum;
}
