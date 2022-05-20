#include "header.h"
double predict_margin_unit14(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3837890028953552246) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.950584888458251953) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.969126582145690918) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2316309958696365356) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1410804986953735352) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.92658710479736328) ) ) {
              sum += (double)0.1789910972222222285;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3005.784912109375) ) ) {
                sum += (double)0.05663632352941176673;
              } else {
                sum += (double)0.0135841293103448283;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4155.423583984375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07629999890923500061) ) ) {
                sum += (double)0.3653773499999999896;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1789999976754188538) ) ) {
                  sum += (double)0.1787832321428571292;
                } else {
                  sum += (double)0.2784825340909091174;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.44529438018798828) ) ) {
                sum += (double)0.2265048815789473535;
              } else {
                sum += (double)0.09189015999999998463;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2083.4365234375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
              sum += (double)0.5596923500000000606;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.509141445159912109) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3122.8629150390625) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.388118743896484375) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3541253507137298584) ) ) {
                      sum += (double)0.3995001718750000319;
                    } else {
                      sum += (double)0.3239744264705882726;
                    }
                  } else {
                    sum += (double)0.4311811893939394014;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2562.4544677734375) ) ) {
                    sum += (double)0.4573398437500000302;
                  } else {
                    sum += (double)0.4854822656250000756;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7024.548095703125) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.380628630518913269) ) ) {
                    sum += (double)0.462970093749999978;
                  } else {
                    sum += (double)0.3606623749999999795;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3227490037679672241) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2703710049390792847) ) ) {
                      sum += (double)0.3107571590909091186;
                    } else {
                      sum += (double)0.163888687499999991;
                    }
                  } else {
                    sum += (double)0.3794893749999999621;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.604651212692260742) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2927275002002716064) ) ) {
                sum += (double)0.2525313928571428224;
              } else {
                sum += (double)0.363134289473684202;
              }
            } else {
              sum += (double)0.137417890625000011;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09284999966621398926) ) ) {
          sum += (double)0.1120645520833333242;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3132205009460449219) ) ) {
            sum += (double)0.01892994047619047521;
          } else {
            sum += (double)0.04709128947368421136;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2574760019779205322) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1035875007510185242) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07210149988532066345) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.05039787292480469) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2599000036716461182) ) ) {
                sum += (double)0.0362119423076923061;
              } else {
                sum += (double)0.01009936363636363722;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.156800001859664917) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03564650006592273712) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02316300012171268463) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    sum += (double)0.002748249999999999391;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2516563981771469116) ) ) {
                    sum += (double)0.004559249999999999935;
                  } else {
                    sum += (double)0.002683823529411764539;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9067691564559936523) ) ) {
                  sum += (double)0.009905016129032259697;
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.67555999755859375) ) ) {
              sum += (double)0.07895176666666665899;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11957.29248046875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.5552215576171875) ) ) {
                  sum += (double)0.05918503333333332422;
                } else {
                  sum += (double)0.02053655357142856672;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3395284414291381836) ) ) {
                  sum += (double)0.009533718750000001393;
                } else {
                  sum += (double)0.003084656250000000592;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)9.999999747378751636e-05) ) ) {
            sum += (double)0.2413720375000000806;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2219502776861190796) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20697.4169921875) ) ) {
                sum += (double)0.2416821249999999976;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2139030024409294128) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1477064937353134155) ) ) {
                    sum += (double)0.005021928571428572151;
                  } else {
                    sum += (double)0.06939736111111111105;
                  }
                } else {
                  sum += (double)0.1516263416666666919;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.82173919677734375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10825.7841796875) ) ) {
                  sum += (double)0.1447701465517241548;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7312069833278656006) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3356008380651473999) ) ) {
                      sum += (double)0.0364953837209302176;
                    } else {
                      sum += (double)0.1081403897058823282;
                    }
                  } else {
                    sum += (double)0.01527360000000000176;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8247.181640625) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.880615234375) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.61155605316162109) ) ) {
                      sum += (double)0.05209325000000000067;
                    } else {
                      sum += (double)0.1141896124999999956;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-45171.6953125) ) ) {
                      sum += (double)0.04279154878048779809;
                    } else {
                      sum += (double)0.01210202222222222374;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2232000008225440979) ) ) {
                    sum += (double)0.01056494000000000009;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5045086443424224854) ) ) {
                      sum += (double)0.007573900000000000597;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3032126426696777344) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9417.5849609375) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45791292190551758) ) ) {
              sum += (double)0.430377166666666644;
            } else {
              sum += (double)0.2957021354166666782;
            }
          } else {
            sum += (double)0.1447776406249999814;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3506.6256103515625) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2690234929323196411) ) ) {
              sum += (double)0.2219034624999999816;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8536425232887268066) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.63333511352539062) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20577.25) ) ) {
                    sum += (double)0.2584954423076922803;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11508.85888671875) ) ) {
                      sum += (double)0.08556464473684209648;
                    } else {
                      sum += (double)0.167676875000000003;
                    }
                  }
                } else {
                  sum += (double)0.05863190476190475314;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26951.1015625) ) ) {
                  sum += (double)0.09521068333333330969;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3974500000476837158) ) ) {
                    sum += (double)0.04576386904761903934;
                  } else {
                    sum += (double)0.02825938333333333913;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9493490159511566162) ) ) {
              sum += (double)0.05530622826086956795;
            } else {
              sum += (double)0.00492869565217391413;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5349995195865631104) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)87.44927597045898438) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.94261360168457031) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.00900459289550781) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1938.53759765625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07459999993443489075) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.600885629653930664) ) ) {
                    sum += (double)0.5081295238095238087;
                  } else {
                    sum += (double)0.5666186578947368657;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.455177009105682373) ) ) {
                    sum += (double)0.436415488636363591;
                  } else {
                    sum += (double)0.4907430526315788577;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7421000003814697266) ) ) {
                  sum += (double)0.4617257105263158357;
                } else {
                  sum += (double)0.3543585535714285362;
                }
              }
            } else {
              sum += (double)0.5911498951612902397;
            }
          } else {
            sum += (double)0.3415072794117646748;
          }
        } else {
          sum += (double)0.2752835326086955914;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6673499941825866699) ) ) {
              sum += (double)0.5305059342105262754;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02245000004768371582) ) ) {
                sum += (double)0.666356795454545292;
              } else {
                sum += (double)0.5899712916666667306;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8408499956130981445) ) ) {
                sum += (double)0.6817037499999999417;
              } else {
                sum += (double)0.7317095833333331356;
              }
            } else {
              sum += (double)0.6327675454545453881;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1074000000953674316) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05746184848248958588) ) ) {
              sum += (double)0.8763299999999999423;
            } else {
              sum += (double)0.806116706521739057;
            }
          } else {
            sum += (double)0.7361824333333334414;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5498940050601959229) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.883204728364944458) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.50297641754150391) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.201754331588745117) ) ) {
              sum += (double)0.4973987500000000561;
            } else {
              sum += (double)0.3598216296296296579;
            }
          } else {
            sum += (double)0.1301465208333333068;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1361499950289726257) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1690.56494140625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.855000019073486328) ) ) {
                sum += (double)0.3965616249999999732;
              } else {
                sum += (double)0.1962319722222221896;
              }
            } else {
              sum += (double)0.165357000000000004;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3349999934434890747) ) ) {
              sum += (double)0.04448802884615384035;
            } else {
              sum += (double)0.1336967300000000136;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.083450615406036377) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1117499992251396179) ) ) {
            sum += (double)0.3524640192307693098;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6205655336380004883) ) ) {
              sum += (double)0.630391131578947217;
            } else {
              sum += (double)0.5832341052631579981;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3779.5599365234375) ) ) {
            sum += (double)0.4785307499999998382;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
              sum += (double)0.42329848387096769;
            } else {
              sum += (double)0.2393165978260869409;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3804139941930770874) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.947972774505615234) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2596110105514526367) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4202.166259765625) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1974449977278709412) ) ) {
                sum += (double)0.4000416547619047303;
              } else {
                sum += (double)0.3234113750000000009;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2195909991860389709) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6850.1201171875) ) ) {
                  sum += (double)0.1459664285714285803;
                } else {
                  sum += (double)0.276315525862068978;
                }
              } else {
                sum += (double)0.3712822205882351789;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.488390207290649414) ) ) {
              sum += (double)0.2545660961538461775;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3786696642637252808) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2254600003361701965) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1652235016226768494) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1903.9832763671875) ) ) {
                      sum += (double)0.02587749999999999773;
                    } else {
                      sum += (double)0.009486944444444445415;
                    }
                  } else {
                    sum += (double)0.07446574999999998334;
                  }
                } else {
                  sum += (double)0.1421155138888889058;
                }
              } else {
                sum += (double)0.1923756500000000369;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.935222864151000977) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3255925029516220093) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2035.7894287109375) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3122.8629150390625) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4532.45458984375) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1988999992609024048) ) ) {
                      sum += (double)0.4036886477272726981;
                    } else {
                      sum += (double)0.3638183977272727021;
                    }
                  } else {
                    sum += (double)0.3417264821428571131;
                  }
                } else {
                  sum += (double)0.4308119166666666833;
                }
              } else {
                sum += (double)0.2670815357142857782;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05049999989569187164) ) ) {
                sum += (double)0.4937002338709677307;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.6709437370300293) ) ) {
                  sum += (double)0.427840902777777754;
                } else {
                  sum += (double)0.3606882352941176428;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5713.6728515625) ) ) {
              sum += (double)0.4503035499999999969;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6042500138282775879) ) ) {
                sum += (double)0.1248701111111111123;
              } else {
                sum += (double)0.3124806029411764663;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.208595514297485352) ) ) {
          sum += (double)0.1949582941176470907;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4324.498779296875) ) ) {
            sum += (double)0.08462305263157895996;
          } else {
            sum += (double)0.01290926785714285874;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2574760019779205322) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.81422901153564453) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11037.96533203125) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5785000026226043701) ) ) {
              sum += (double)0.2539763333333333595;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15572.18115234375) ) ) {
                sum += (double)0.1888417619047619289;
              } else {
                sum += (double)0.0627218593749999942;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1146005019545555115) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.97999954223632812) ) ) {
                sum += (double)0.05346941666666667203;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02960000094026327133) ) ) {
                  sum += (double)0.00345073333333333369;
                } else {
                  sum += (double)0.0232221833333333301;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4392.39404296875) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6569.977783203125) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7883.8984375) ) ) {
                    sum += (double)0.1020302282608695627;
                  } else {
                    sum += (double)0.03624369230769230316;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.27173900604248047) ) ) {
                    sum += (double)0.2097064423076922812;
                  } else {
                    sum += (double)0.1287976153846153715;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1727944985032081604) ) ) {
                  sum += (double)0.1028350156249999703;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06044999882578849792) ) ) {
                    sum += (double)0.02374953571428571261;
                  } else {
                    sum += (double)0.03214271875000000028;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4887499958276748657) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.22939586639404297) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12398.7353515625) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.03095626831054688) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3737999945878982544) ) ) {
                    sum += (double)0.09043142391304348493;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.85665035247802734) ) ) {
                      sum += (double)0.03240421093750000398;
                    } else {
                      sum += (double)0.06896953571428571239;
                    }
                  }
                } else {
                  sum += (double)0.1469301249999999948;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5658999979496002197) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2944.8892822265625) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1505180001258850098) ) ) {
                      sum += (double)0.0258014722222222187;
                    } else {
                      sum += (double)0.01124139473684210647;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1630.6607666015625) ) ) {
                      sum += (double)0.01010268421052631753;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08588349819183349609) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.004480352941176470906;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1463450044393539429) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.52115249633789062) ) ) {
                  sum += (double)0.03112872727272726625;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02944599930197000504) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                      sum += (double)0.002602664634146342401;
                    } else {
                      sum += (double)0.006199690476190476696;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3264500051736831665) ) ) {
                      sum += (double)0.002500000000000000486;
                    } else {
                      sum += (double)0.008979747474747470232;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.244588673114776611) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3476241081953048706) ) ) {
                    sum += (double)0.03832360714285713149;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22429.4951171875) ) ) {
                      sum += (double)0.01292650000000000049;
                    } else {
                      sum += (double)0.002499999999999999618;
                    }
                  }
                } else {
                  sum += (double)0.06458748863636364079;
                }
              }
            }
          } else {
            sum += (double)0.113618657894736852;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7375432848930358887) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09785000234842300415) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3329025059938430786) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.85591745376586914) ) ) {
                sum += (double)0.09900931818181818445;
              } else {
                sum += (double)0.03604847321428571172;
              }
            } else {
              sum += (double)0.2245296964285714292;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.87153339385986328) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10576.72021484375) ) ) {
                sum += (double)0.389852152777777794;
              } else {
                sum += (double)0.3087260576923076538;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.66000843048095703) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17290.5791015625) ) ) {
                  sum += (double)0.2996084852941175991;
                } else {
                  sum += (double)0.1709078625000000073;
                }
              } else {
                sum += (double)0.120550895833333338;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19818.314453125) ) ) {
            sum += (double)0.07759642499999999665;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.052016228437423706) ) ) {
              sum += (double)0.04135615000000000818;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3066499978303909302) ) ) {
                sum += (double)0.004843181818181818525;
              } else {
                sum += (double)0.02148651785714286028;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6061426103115081787) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.04704713821411133) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5057889819145202637) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8477500081062316895) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07990000024437904358) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4318.3248291015625) ) ) {
                  sum += (double)0.5837872499999999798;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05205000005662441254) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.455853000283241272) ) ) {
                      sum += (double)0.4470744553571428526;
                    } else {
                      sum += (double)0.5298023452380952181;
                    }
                  } else {
                    sum += (double)0.5602545326086956212;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7304500043392181396) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2473.6697998046875) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6254500150680541992) ) ) {
                      sum += (double)0.4076038958333332851;
                    } else {
                      sum += (double)0.5051589230769230054;
                    }
                  } else {
                    sum += (double)0.5297601145833333858;
                  }
                } else {
                  sum += (double)0.3450877678571428464;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.95000004768371582) ) ) {
                sum += (double)0.5131321718749999317;
              } else {
                sum += (double)0.322885421052631516;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.70156550407409668) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05509999953210353851) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.587050020694732666) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8206999897956848145) ) ) {
                    sum += (double)0.6591736249999998742;
                  } else {
                    sum += (double)0.6182324880952381196;
                  }
                } else {
                  sum += (double)0.7170574305555555972;
                }
              } else {
                sum += (double)0.5689701018518518172;
              }
            } else {
              sum += (double)0.5008576599999998713;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16029.767578125) ) ) {
            sum += (double)0.3358894264705881705;
          } else {
            sum += (double)0.1857703888888888877;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.259259223937988281) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.370747089385986328) ) ) {
            sum += (double)0.6927909305555556285;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
              sum += (double)0.737583380434782554;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8944000005722045898) ) ) {
                sum += (double)0.8075324807692307871;
              } else {
                sum += (double)0.8542503399999997749;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.43028163909912109) ) ) {
            sum += (double)0.7078932413793102008;
          } else {
            sum += (double)0.5942486136363634985;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5457390248775482178) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1756.57928466796875) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.50454568862915039) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2845.7130126953125) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3356999903917312622) ) ) {
                sum += (double)0.4613991562500000532;
              } else {
                sum += (double)0.3288466718749999962;
              }
            } else {
              sum += (double)0.2268720263157895101;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11235.466796875) ) ) {
              sum += (double)0.235569912500000006;
            } else {
              sum += (double)0.09448266666666664537;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4564329981803894043) ) ) {
            sum += (double)0.06301395689655170385;
          } else {
            sum += (double)0.2111153260869565174;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7463580071926116943) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2671000063419342041) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.876771211624145508) ) ) {
              sum += (double)0.4474121388888888662;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2705.234619140625) ) ) {
                sum += (double)0.3628798500000000038;
              } else {
                sum += (double)0.1646976406249999747;
              }
            }
          } else {
            sum += (double)0.4725255267857142449;
          }
        } else {
          sum += (double)0.5718080535714286095;
        }
      }
    }
  }
  return sum;
}
