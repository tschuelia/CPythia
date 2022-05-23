#include "prediction.h"
double predict_margin_unit6(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2983449995517730713) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.84375) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
            sum += (double)0.1367114999999999858;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1843472644686698914) ) ) {
              sum += (double)0.01398043589743589755;
            } else {
              sum += (double)0.08322819642857141875;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03344999905675649643) ) ) {
            sum += (double)0.29034583928571428;
          } else {
            sum += (double)0.150955700000000026;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2849999964237213135) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.85714244842529297) ) ) {
            sum += (double)0.05251513999999999488;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.146622002124786377) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.86111068725585938) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.29895000159740448) ) ) {
                  sum += (double)0.03620360526315789113;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08994349837303161621) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.004181902777777779176;
                    } else {
                      sum += (double)0.01219485937499999867;
                    }
                  } else {
                    sum += (double)0.02319227499999999831;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.185000002384185791) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                      sum += (double)0.00295779677419354993;
                    } else {
                      sum += (double)0.005848983333333333465;
                    }
                  } else {
                    sum += (double)0.007324638888888890947;
                  }
                } else {
                  sum += (double)0.01674431250000000052;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5395244061946868896) ) ) {
                sum += (double)0.0549502499999999991;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1349999979138374329) ) ) {
                  sum += (double)0.002895630434782608953;
                } else {
                  sum += (double)0.0121902499999999997;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01340000005438923836) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3048542588949203491) ) ) {
              sum += (double)0.1838710312500000388;
            } else {
              sum += (double)0.06414011842105263317;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7162499725818634033) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1946429982781410217) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8783564567565917969) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6450000107288360596) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09735000133514404297) ) ) {
                      sum += (double)0.008168900000000001507;
                    } else {
                      sum += (double)0.02833436250000000503;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.10009574890136719) ) ) {
                      sum += (double)0.02834504545454545957;
                    } else {
                      sum += (double)0.04922427500000001177;
                    }
                  }
                } else {
                  sum += (double)0.006718185185185186412;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4466.470703125) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11262.47607421875) ) ) {
                      sum += (double)0.05408748076923076964;
                    } else {
                      sum += (double)0.1581708068181818527;
                    }
                  } else {
                    sum += (double)0.03124530357142857317;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4635499864816665649) ) ) {
                    sum += (double)0.01410025862068965685;
                  } else {
                    sum += (double)0.04518325000000000119;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7650000154972076416) ) ) {
                sum += (double)0.05108738888888888358;
              } else {
                sum += (double)0.1489628124999999859;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.395299196243286133) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9036570489406585693) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675489962100982666) ) ) {
            sum += (double)0.3510479868421052529;
          } else {
            sum += (double)0.5066066527777777218;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.951639533042907715) ) ) {
            sum += (double)0.3420995576923076542;
          } else {
            sum += (double)0.06972466176470588917;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5753526389598846436) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.06066131591796875) ) ) {
                sum += (double)0.04692194565217391172;
              } else {
                sum += (double)0.1913011896551724267;
              }
            } else {
              sum += (double)0.283831447916666646;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4285600036382675171) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3667979985475540161) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.021914303302764893) ) ) {
                  sum += (double)0.04891118750000000154;
                } else {
                  sum += (double)0.01088026315789473834;
                }
              } else {
                sum += (double)0.07359258333333333624;
              }
            } else {
              sum += (double)0.1335832499999999867;
            }
          }
        } else {
          sum += (double)0.3509413977272727303;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.84999990463256836) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00215000007301568985) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3319960087537765503) ) ) {
              sum += (double)0.5286210499999999257;
            } else {
              sum += (double)0.6110978846153846122;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441440001130104065) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13015.6142578125) ) ) {
                sum += (double)0.3398321333333332861;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.283272743225097656) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1824589967727661133) ) ) {
                    sum += (double)0.1906005178571428538;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.401972293853759766) ) ) {
                      sum += (double)0.3120842031249999593;
                    } else {
                      sum += (double)0.2494583749999999822;
                    }
                  }
                } else {
                  sum += (double)0.1271864666666666643;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3368515074253082275) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4185.778564453125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6334.18505859375) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.403204441070556641) ) ) {
                      sum += (double)0.3954108243243242282;
                    } else {
                      sum += (double)0.3397829999999998907;
                    }
                  } else {
                    sum += (double)0.4293162407407407621;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2710480093955993652) ) ) {
                    sum += (double)0.2685668928571428582;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                      sum += (double)0.3955301874999999079;
                    } else {
                      sum += (double)0.2882519230769231;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2493.7919921875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.394444003701210022) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3750080019235610962) ) ) {
                      sum += (double)0.4519062954545454147;
                    } else {
                      sum += (double)0.5141474749999999094;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.992016792297363281) ) ) {
                      sum += (double)0.4574575192307692162;
                    } else {
                      sum += (double)0.3626654666666666582;
                    }
                  }
                } else {
                  sum += (double)0.5135486333333333375;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3337879925966262817) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02084999997168779373) ) ) {
              sum += (double)0.3009301973684211373;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2018499970436096191) ) ) {
                sum += (double)0.1024701129032257879;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2301319986581802368) ) ) {
                  sum += (double)0.1396015681818181808;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3444418162107467651) ) ) {
                    sum += (double)0.3087056315789474259;
                  } else {
                    sum += (double)0.1918727812500000407;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.82509660720825195) ) ) {
              sum += (double)0.2750549687500000173;
            } else {
              sum += (double)0.379861761904761952;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.896885991096496582) ) ) {
          sum += (double)0.2622581964285713996;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.850671052932739258) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
              sum += (double)0.2249993281250000088;
            } else {
              sum += (double)0.06076649999999998025;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1884500011801719666) ) ) {
              sum += (double)0.1367057053571428538;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3887500017881393433) ) ) {
                sum += (double)0.0100748750000000005;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953705042600631714) ) ) {
                  sum += (double)0.03422572058823530189;
                } else {
                  sum += (double)0.02190469999999999917;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749606013298034668) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7349939048290252686) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5259833037853240967) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4858189970254898071) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3130.37890625) ) ) {
                  sum += (double)0.5827409047619047655;
                } else {
                  sum += (double)0.5215992857142857098;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5000065118074417114) ) ) {
                  sum += (double)0.4418170400000000497;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5208895206451416016) ) ) {
                    sum += (double)0.5574256944444444528;
                  } else {
                    sum += (double)0.468274644736842105;
                  }
                }
              }
            } else {
              sum += (double)0.3835135441176470983;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8047.837158203125) ) ) {
              sum += (double)0.4933623529411764741;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7119204998016357422) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09833887591958045959) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6230034828186035156) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8291000127792358398) ) ) {
                      sum += (double)0.63582339062500004;
                    } else {
                      sum += (double)0.6855259565217391993;
                    }
                  } else {
                    sum += (double)0.7192558666666666323;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1691.09600830078125) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.858974218368530273) ) ) {
                      sum += (double)0.5899055571428571954;
                    } else {
                      sum += (double)0.6607577321428571571;
                    }
                  } else {
                    sum += (double)0.6587200833333333172;
                  }
                }
              } else {
                sum += (double)0.7443757343750000421;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5139805078506469727) ) ) {
            sum += (double)0.2298751964285714322;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3698.1630859375) ) ) {
              sum += (double)0.4851042976190476641;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.009945094585418701) ) ) {
                sum += (double)0.4423338452380951025;
              } else {
                sum += (double)0.2085847499999999577;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3112.591552734375) ) ) {
          sum += (double)0.7283162155172413499;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.311963319778442383) ) ) {
            sum += (double)0.8090079700000002427;
          } else {
            sum += (double)0.8587936111111110771;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473865002393722534) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36350345611572266) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.555000007152557373) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3238740265369415283) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07454922795295715332) ) ) {
              sum += (double)0.1122590166666666417;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08994349837303161621) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                  sum += (double)0.002499999999999999618;
                } else {
                  sum += (double)0.007137058823529411275;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.4838714599609375) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04344999976456165314) ) ) {
                    sum += (double)0.01002482608695652241;
                  } else {
                    sum += (double)0.02786164285714285913;
                  }
                } else {
                  sum += (double)0.05261036538461538042;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2165.6353759765625) ) ) {
              sum += (double)0.04324473999999999679;
            } else {
              sum += (double)0.1490778703703703467;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02309999987483024597) ) ) {
            sum += (double)0.2538057799999999808;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.676785945892333984) ) ) {
              sum += (double)0.1705784913793103597;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.203549996018409729) ) ) {
                sum += (double)0.03511906896551725277;
              } else {
                sum += (double)0.1132559999999999817;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.23571586608886719) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1961.59429931640625) ) ) {
              sum += (double)0.01502482142857142731;
            } else {
              sum += (double)0.002499999999999999618;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8010999858379364014) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1375010013580322266) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                  sum += (double)0.002500000000000001787;
                } else {
                  sum += (double)0.002753464285714285736;
                }
              } else {
                sum += (double)0.008146750000000001213;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)48.09340667724609375) ) ) {
                sum += (double)0.002500000000000000052;
              } else {
                sum += (double)0.01311789285714285748;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.177914544939994812) ) ) {
            sum += (double)0.07783188461538460834;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3218000084161758423) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3527500033378601074) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9924200177192687988) ) ) {
                  sum += (double)0.008157093750000000282;
                } else {
                  sum += (double)0.002782866666666666908;
                }
              } else {
                sum += (double)0.01660481250000000325;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3513499945402145386) ) ) {
                sum += (double)0.05481686956521738402;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.428399994969367981) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3250000029802322388) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12610.11279296875) ) ) {
                      sum += (double)0.007986591666666665798;
                    } else {
                      sum += (double)0.01776255882352941601;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4441718906164169312) ) ) {
                      sum += (double)0.0191359056603773621;
                    } else {
                      sum += (double)0.04104109615384616411;
                    }
                  }
                } else {
                  sum += (double)0.05397234615384615547;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.5) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.61263751983642578) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.494164943695068359) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1328.70172119140625) ) ) {
              sum += (double)0.2564312361111111271;
            } else {
              sum += (double)0.3707841333333333766;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6312865316867828369) ) ) {
              sum += (double)0.2617231428571428209;
            } else {
              sum += (double)0.09141098214285713064;
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7949999868869781494) ) ) {
            sum += (double)0.2801107692307692743;
          } else {
            sum += (double)0.4375914999999999666;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5704225003719329834) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.14985275268554688) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4962705075740814209) ) ) {
              sum += (double)0.1046412857142857006;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3007000088691711426) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3046880066394805908) ) ) {
                  sum += (double)0.004313437500000000431;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1615500003099441528) ) ) {
                    sum += (double)0.004802464285714285776;
                  } else {
                    sum += (double)0.02905631944444444711;
                  }
                }
              } else {
                sum += (double)0.04781910869565216687;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9187.72265625) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.417188987135887146) ) ) {
                sum += (double)0.128133583333333384;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)212.2103500366210938) ) ) {
                  sum += (double)0.05871379999999999655;
                } else {
                  sum += (double)0.01581726388888889112;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5150000154972076416) ) ) {
                sum += (double)0.06611477083333332228;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.70769119262695312) ) ) {
                  sum += (double)0.159216162500000008;
                } else {
                  sum += (double)0.3887183749999999494;
                }
              }
            }
          }
        } else {
          sum += (double)0.3388844903846154333;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.710501670837402344) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3392730057239532471) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005050000036135315895) ) ) {
              sum += (double)0.461928766666666657;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.589755773544311523) ) ) {
                  sum += (double)0.3270608815789473045;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5818000137805938721) ) ) {
                    sum += (double)0.264818136363636325;
                  } else {
                    sum += (double)0.1698194166666666671;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7127999961376190186) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.27479100227355957) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3796.2705078125) ) ) {
                      sum += (double)0.3763454921874999637;
                    } else {
                      sum += (double)0.4401443166666666462;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5249.234130859375) ) ) {
                      sum += (double)0.3833875999999999395;
                    } else {
                      sum += (double)0.3194523235294117747;
                    }
                  }
                } else {
                  sum += (double)0.3303432205882352868;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00544999993871897459) ) ) {
              sum += (double)0.5723807115384615951;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2690.5767822265625) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4031770080327987671) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3662505000829696655) ) ) {
                    sum += (double)0.4488812205882352635;
                  } else {
                    sum += (double)0.4756744318181817532;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4676.1787109375) ) ) {
                    sum += (double)0.4625307083333333735;
                  } else {
                    sum += (double)0.3684050192307692928;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0358500014990568161) ) ) {
                  sum += (double)0.4416465499999999711;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.105350002646446228) ) ) {
                    sum += (double)0.5655002000000001194;
                  } else {
                    sum += (double)0.5072215555555554811;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3333054929971694946) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
              sum += (double)0.3763606710526316013;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.239620506763458252) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.18330764770507812) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.273736804723739624) ) ) {
                    sum += (double)0.07319522413793103088;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.19370250403881073) ) ) {
                      sum += (double)0.09656751470588234576;
                    } else {
                      sum += (double)0.1924444568965517355;
                    }
                  }
                } else {
                  sum += (double)0.2454327173913042892;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2489500045776367188) ) ) {
                  sum += (double)0.2037385999999999642;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.7604827880859375) ) ) {
                    sum += (double)0.3488313846153845987;
                  } else {
                    sum += (double)0.2609381551724137549;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4864999949932098389) ) ) {
              sum += (double)0.2527749499999999427;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7366000115871429443) ) ) {
                sum += (double)0.4615020000000000233;
              } else {
                sum += (double)0.3312876911764706112;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.234565258026123047) ) ) {
          sum += (double)0.2651615999999999973;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29237.2587890625) ) ) {
            sum += (double)0.2087227125000000183;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3820239901542663574) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7943.31005859375) ) ) {
                sum += (double)0.01564940322580645263;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3367.7078857421875) ) ) {
                  sum += (double)0.06822256249999998634;
                } else {
                  sum += (double)0.01555647500000000016;
                }
              }
            } else {
              sum += (double)0.1077550555555555484;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9435398280620574951) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6059480011463165283) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.34293699264526367) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.141082048416137695) ) ) {
                  sum += (double)0.5515170740740740207;
                } else {
                  sum += (double)0.4421083629032258044;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6665.898681640625) ) ) {
                  sum += (double)0.4921221805555554552;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.26449298858642578) ) ) {
                    sum += (double)0.5541587205882352318;
                  } else {
                    sum += (double)0.6184960909090909675;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08734999969601631165) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3868.938232421875) ) ) {
                  sum += (double)0.6806256249999999008;
                } else {
                  sum += (double)0.6383803804347826238;
                }
              } else {
                sum += (double)0.560594696428571404;
              }
            }
          } else {
            sum += (double)0.3939946374999999668;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1063999980688095093) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.658275991678237915) ) ) {
                sum += (double)0.6699119772727273325;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.16220378875732422) ) ) {
                  sum += (double)0.6876617708333333523;
                } else {
                  sum += (double)0.7834205156250000357;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7694000005722045898) ) ) {
                sum += (double)0.6580282738095238892;
              } else {
                sum += (double)0.6062591029411763532;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.218671143054962158) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02724999934434890747) ) ) {
                sum += (double)0.8635299166666666748;
              } else {
                sum += (double)0.8129397307692307617;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.1683502197265625) ) ) {
                sum += (double)0.7149317105263158778;
              } else {
                sum += (double)0.7803473552631580157;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.804650306701660156) ) ) {
          sum += (double)0.4388735333333332322;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
            sum += (double)0.4075274000000000396;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5965064764022827148) ) ) {
              sum += (double)0.1683813571428571243;
            } else {
              sum += (double)0.3006248333333333411;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.084967374801635742) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2549335062503814697) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1743154972791671753) ) ) {
          sum += (double)0.05733413636363633714;
        } else {
          sum += (double)0.1668731481481481593;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.32692337036132812) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.99833834171295166) ) ) {
            sum += (double)0.362957500000000044;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6030691564083099365) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7282499969005584717) ) ) {
                sum += (double)0.3759037343750000204;
              } else {
                sum += (double)0.1558394264705882382;
              }
            } else {
              sum += (double)0.09708514814814812877;
            }
          }
        } else {
          sum += (double)0.4360187822580645078;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5704225003719329834) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1169065013527870178) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07263750210404396057) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.17857122421264648) ) ) {
                      sum += (double)0.003354791666666666946;
                    } else {
                      sum += (double)0.002500000000000001787;
                    }
                  } else {
                    sum += (double)0.006083464285714286664;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5709000229835510254) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07499999925494194031) ) ) {
                      sum += (double)0.002500000000000000486;
                    } else {
                      sum += (double)0.004519075000000000002;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05536649934947490692) ) ) {
                      sum += (double)0.005151437500000000634;
                    } else {
                      sum += (double)0.007932416666666667476;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.07916641235351562) ) ) {
                  sum += (double)0.02218422222222222323;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2270668894052505493) ) ) {
                    sum += (double)0.01313241176470588377;
                  } else {
                    sum += (double)0.003766224137931035391;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4392126351594924927) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2650000005960464478) ) ) {
                  sum += (double)0.02006089285714285353;
                } else {
                  sum += (double)0.01002872222222222359;
                }
              } else {
                sum += (double)0.04994207407407407623;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.625) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.84444427490234375) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04224999994039535522) ) ) {
                  sum += (double)0.01031243243243243346;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1664.1246337890625) ) ) {
                    sum += (double)0.05590506428571428293;
                  } else {
                    sum += (double)0.1746313676470588327;
                  }
                }
              } else {
                sum += (double)0.1505084230769230536;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)134.8636322021484375) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.640539705753326416) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3007394075393676758) ) ) {
                    sum += (double)0.01203837499999999873;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2123055011034011841) ) ) {
                      sum += (double)0.02398711363636363628;
                    } else {
                      sum += (double)0.05287766666666665616;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5545.951904296875) ) ) {
                    sum += (double)0.01465321428571428504;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.48958396911621094) ) ) {
                      sum += (double)0.002499999999999999618;
                    } else {
                      sum += (double)0.004105794117647059913;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2154999971389770508) ) ) {
                  sum += (double)0.02200111999999999554;
                } else {
                  sum += (double)0.09574176923076922752;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6756999790668487549) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000071246176958) ) ) {
              sum += (double)0.2150299444444444263;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2315535023808479309) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5787686407566070557) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.50743865966796875) ) ) {
                    sum += (double)0.1014383970588235567;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2774000018835067749) ) ) {
                      sum += (double)0.0284271445312499968;
                    } else {
                      sum += (double)0.07426421739130432964;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.15571022033691406) ) ) {
                    sum += (double)0.005838833333333333028;
                  } else {
                    sum += (double)0.02238303260869565353;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.92708301544189453) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.949505150318145752) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07065000012516975403) ) ) {
                      sum += (double)0.0489495978260869602;
                    } else {
                      sum += (double)0.1663674843749999854;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.70121955871582031) ) ) {
                      sum += (double)0.0127569166666666664;
                    } else {
                      sum += (double)0.02964821739130434758;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7745.342529296875) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2827855050563812256) ) ) {
                      sum += (double)0.1156727343750000025;
                    } else {
                      sum += (double)0.06505197058823528056;
                    }
                  } else {
                    sum += (double)0.2655259843750000237;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1694865003228187561) ) ) {
              sum += (double)0.03384389999999999621;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08469999954104423523) ) ) {
                sum += (double)0.29606234259259262;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2153499945998191833) ) ) {
                  sum += (double)0.1809058100000000002;
                } else {
                  sum += (double)0.09984034722222220881;
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.3609746375000000285;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5472330152988433838) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9664483964443206787) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45238733291625977) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01830000057816505432) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001700000022538006306) ) ) {
                sum += (double)0.5026352619047618209;
              } else {
                sum += (double)0.4079298017241378971;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2311585023999214172) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.55174398422241211) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.893887519836425781) ) ) {
                    sum += (double)0.2753786999999999763;
                  } else {
                    sum += (double)0.3418845499999999538;
                  }
                } else {
                  sum += (double)0.1813462900000000488;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.77923965454101562) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.30450439453125) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3312.6978759765625) ) ) {
                      sum += (double)0.3708505982142857316;
                    } else {
                      sum += (double)0.4470784090909090125;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5090.98779296875) ) ) {
                      sum += (double)0.3630387968750000138;
                    } else {
                      sum += (double)0.255125586956521766;
                    }
                  }
                } else {
                  sum += (double)0.4491686874999999413;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999824678525329) ) ) {
              sum += (double)0.6106051136363636056;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4442545026540756226) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.502192974090576172) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03250000067055225372) ) ) {
                      sum += (double)0.4919769999999999976;
                    } else {
                      sum += (double)0.4503099666666666723;
                    }
                  } else {
                    sum += (double)0.5311916842105263159;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.476533174514770508) ) ) {
                    sum += (double)0.4563989411764706183;
                  } else {
                    sum += (double)0.3958054523809523828;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.25652217864990234) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1098678819835186005) ) ) {
                    sum += (double)0.450128101851851814;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3996060043573379517) ) ) {
                      sum += (double)0.54607164473684211;
                    } else {
                      sum += (double)0.4518425833333333252;
                    }
                  }
                } else {
                  sum += (double)0.5924522083333333411;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3349194973707199097) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506500184535980225) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19972.0791015625) ) ) {
                  sum += (double)0.3401619599999999299;
                } else {
                  sum += (double)0.2354834749999999699;
                }
              } else {
                sum += (double)0.1477139558823529486;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.89281749725341797) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2301319986581802368) ) ) {
                  sum += (double)0.1267551499999999831;
                } else {
                  sum += (double)0.2609410104166666744;
                }
              } else {
                sum += (double)0.07016220454545454843;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5634999871253967285) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17266.62451171875) ) ) {
                sum += (double)0.1631018461538461251;
              } else {
                sum += (double)0.2777479886363636852;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2070500031113624573) ) ) {
                sum += (double)0.4618138250000000111;
              } else {
                sum += (double)0.3549376290322580063;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.274611353874206543) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1843999996781349182) ) ) {
            sum += (double)0.2840937065217390978;
          } else {
            sum += (double)0.1543619886363636617;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.782791495323181152) ) ) {
            sum += (double)0.1951653599999999544;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1856000050902366638) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3129.850341796875) ) ) {
                sum += (double)0.1496068392857143048;
              } else {
                sum += (double)0.05132308333333333167;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3299115002155303955) ) ) {
                sum += (double)0.01616217000000000348;
              } else {
                sum += (double)0.05635817000000000604;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7734.72119140625) ) ) {
            sum += (double)0.5329511634615384796;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.307249546051025391) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.039481222629547119) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.213711261749267578) ) ) {
                  sum += (double)0.6181561562499998663;
                } else {
                  sum += (double)0.7108317187499999523;
                }
              } else {
                sum += (double)0.5489426730769231266;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6171754896640777588) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05345000140368938446) ) ) {
                  sum += (double)0.6899101750000000699;
                } else {
                  sum += (double)0.6262417625000000765;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.80823850631713867) ) ) {
                  sum += (double)0.6884629047619048592;
                } else {
                  sum += (double)0.7317976617647059534;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08980000019073486328) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8502727746963500977) ) ) {
              sum += (double)0.8766210952380952826;
            } else {
              sum += (double)0.8095956875000001052;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7972725033760070801) ) ) {
              sum += (double)0.7339727499999998406;
            } else {
              sum += (double)0.7677876607142856136;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.98280489444732666) ) ) {
          sum += (double)0.4433778020833332723;
        } else {
          sum += (double)0.2934175288461538522;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.291855096817016602) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.375) ) ) {
            sum += (double)0.05113386842105262925;
          } else {
            sum += (double)0.1405522115384615078;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.93142843246459961) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06745000183582305908) ) ) {
              sum += (double)0.109709882352941171;
            } else {
              sum += (double)0.2046738035714285586;
            }
          } else {
            sum += (double)0.346692475;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2775000035762786865) ) ) {
          sum += (double)0.3226695526315790374;
        } else {
          sum += (double)0.5119372333333332969;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1829499974846839905) ) ) {
            sum += (double)0.01962842857142857098;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09559578448534011841) ) ) {
              sum += (double)0.005529107142857143768;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.22916650772094727) ) ) {
                sum += (double)0.003734981481481482787;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8209500014781951904) ) ) {
                  sum += (double)0.002500000000000001787;
                } else {
                  sum += (double)0.002858281250000000145;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3564935028553009033) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000118743628263) ) ) {
              sum += (double)0.05987627777777777133;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09618249908089637756) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04762550070881843567) ) ) {
                    sum += (double)0.007487823529411765516;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.7426910400390625) ) ) {
                      sum += (double)0.005111022727272727072;
                    } else {
                      sum += (double)0.002760416666666667528;
                    }
                  }
                } else {
                  sum += (double)0.01377742391304347981;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.830587923526763916) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06244999915361404419) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1050000004470348358) ) ) {
                      sum += (double)0.03602966176470587256;
                    } else {
                      sum += (double)0.01120884883720930404;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5629499852657318115) ) ) {
                      sum += (double)0.07380609821428571471;
                    } else {
                      sum += (double)0.03131477173913042866;
                    }
                  }
                } else {
                  sum += (double)0.005855517241379310824;
                }
              }
            }
          } else {
            sum += (double)0.07210935937499997339;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.28449249267578125) ) ) {
              sum += (double)0.2526494500000000532;
            } else {
              sum += (double)0.06690008333333331836;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2551099956035614014) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7516116797924041748) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02389999944716691971) ) ) {
                  sum += (double)0.13907964285714286;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2791499942541122437) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2090284973382949829) ) ) {
                      sum += (double)0.03553053153153153815;
                    } else {
                      sum += (double)0.09952581578947368446;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4007647931575775146) ) ) {
                      sum += (double)0.06791042499999999649;
                    } else {
                      sum += (double)0.1331466739130434951;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3748999983072280884) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8999.86083984375) ) ) {
                    sum += (double)0.02082370000000000054;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2053925022482872009) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.01349569230769231097;
                    }
                  }
                } else {
                  sum += (double)0.03615575000000000039;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.03125) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7119949460029602051) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.939999997615814209) ) ) {
                    sum += (double)0.064247941176470591;
                  } else {
                    sum += (double)0.1653022499999999839;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1194499991834163666) ) ) {
                    sum += (double)0.002794884615384615745;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3908079862594604492) ) ) {
                      sum += (double)0.01778128571428571475;
                    } else {
                      sum += (double)0.04551858333333333451;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7254.22216796875) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4293383657932281494) ) ) {
                    sum += (double)0.1393673000000000273;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.74658298492431641) ) ) {
                      sum += (double)0.04921125925925925321;
                    } else {
                      sum += (double)0.1002665178571428423;
                    }
                  }
                } else {
                  sum += (double)0.2635218200000000177;
                }
              }
            }
          }
        } else {
          sum += (double)0.3066811944444444715;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83318185806274414) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.292850494384765625) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01354999979957938194) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4473.6708984375) ) ) {
                sum += (double)0.4906362391304346926;
              } else {
                sum += (double)0.3835159464285714526;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5821264684200286865) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1097999997437000275) ) ) {
                    sum += (double)0.1095319705882353001;
                  } else {
                    sum += (double)0.1800676153846154093;
                  }
                } else {
                  sum += (double)0.2943844886363635727;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.91845893859863281) ) ) {
                  sum += (double)0.3610078229166666652;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8028.033203125) ) ) {
                    sum += (double)0.3339923472222222078;
                  } else {
                    sum += (double)0.2285666944444443849;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02025000005960464478) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3422569930553436279) ) ) {
                sum += (double)0.4528158749999999233;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2611.2100830078125) ) ) {
                  sum += (double)0.589892812499999919;
                } else {
                  sum += (double)0.5224880526315789364;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3593995124101638794) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.33291530609130859) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3796.2705078125) ) ) {
                    sum += (double)0.3932614913793102684;
                  } else {
                    sum += (double)0.4469383529411765088;
                  }
                } else {
                  sum += (double)0.3152323306451612628;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.20640254020690918) ) ) {
                    sum += (double)0.4683784166666665749;
                  } else {
                    sum += (double)0.5491923529411766314;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07950000092387199402) ) ) {
                    sum += (double)0.492335727272727286;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3942845016717910767) ) ) {
                      sum += (double)0.4550733611111110744;
                    } else {
                      sum += (double)0.3768120208333333165;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3677815049886703491) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3444418162107467651) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16381.51171875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.41341972351074219) ) ) {
                  sum += (double)0.3430366000000000803;
                } else {
                  sum += (double)0.2197431578947368347;
                }
              } else {
                sum += (double)0.1604838181818181719;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13118.8046875) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2221499979496002197) ) ) {
                  sum += (double)0.04639993750000000194;
                } else {
                  sum += (double)0.1531026428571428677;
                }
              } else {
                sum += (double)0.1935594117647058965;
              }
            }
          } else {
            sum += (double)0.3206914117647058915;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.896885991096496582) ) ) {
          sum += (double)0.2371931718750000251;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21313.9375) ) ) {
            sum += (double)0.203456322916666682;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.758207559585571289) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                sum += (double)0.2085230543478260867;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08190000057220458984) ) ) {
                  sum += (double)0.02833415789473683888;
                } else {
                  sum += (double)0.09856115909090906735;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.041625142097473145) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5919.336181640625) ) ) {
                  sum += (double)0.02996144230769230352;
                } else {
                  sum += (double)0.01333735416666666923;
                }
              } else {
                sum += (double)0.06211645312500000543;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6843680143356323242) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.519616365432739258) ) ) {
              sum += (double)0.5039190000000000058;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5057774782180786133) ) ) {
                sum += (double)0.5831749342105263523;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.52576446533203125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5996280014514923096) ) ) {
                    sum += (double)0.6730163695652173761;
                  } else {
                    sum += (double)0.7438187812499998941;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01210000040009617805) ) ) {
                    sum += (double)0.6674566944444444427;
                  } else {
                    sum += (double)0.6247898653846154504;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.88528156280517578) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.54122200608253479) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1072998940944671631) ) ) {
                  sum += (double)0.445262205882352935;
                } else {
                  sum += (double)0.5347721923076923511;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6199675202369689941) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1721500009298324585) ) ) {
                    sum += (double)0.588636902777777804;
                  } else {
                    sum += (double)0.5365582941176469944;
                  }
                } else {
                  sum += (double)0.6176972058823531064;
                }
              }
            } else {
              sum += (double)0.3873987499999999584;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.205824196338653564) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06292375177145004272) ) ) {
              sum += (double)0.8644310374999998325;
            } else {
              sum += (double)0.7948451125000001172;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.592549026012420654) ) ) {
              sum += (double)0.658728078125000005;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.77499997615814209) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.74592065811157227) ) ) {
                  sum += (double)0.7573209843749999504;
                } else {
                  sum += (double)0.8193381041666666365;
                }
              } else {
                sum += (double)0.7061127840909090514;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6088369786739349365) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.259615302085876465) ) ) {
            sum += (double)0.362410425000000036;
          } else {
            sum += (double)0.2410257222222222107;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06845000013709068298) ) ) {
            sum += (double)0.3562610476190475883;
          } else {
            sum += (double)0.5487605735294117659;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4899999946355819702) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            sum += (double)0.01147346428571428649;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1845415011048316956) ) ) {
              sum += (double)0.07907035294117646662;
            } else {
              sum += (double)0.1491965277777777821;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8093999922275543213) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.741173475980758667) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07190000265836715698) ) ) {
                sum += (double)0.2610864516129031698;
              } else {
                sum += (double)0.1526288333333333525;
              }
            } else {
              sum += (double)0.1182899374999999698;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.94428443908691406) ) ) {
              sum += (double)0.3797368999999999883;
            } else {
              sum += (double)0.2617561333333333073;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3449999988079071045) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1088919974863529205) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992499828338623047) ) ) {
                sum += (double)0.01210434722222222467;
              } else {
                sum += (double)0.003318220000000000631;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6561000049114227295) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.68571376800537109) ) ) {
                  sum += (double)0.06451418333333333588;
                } else {
                  sum += (double)0.008163657894736843154;
                }
              } else {
                sum += (double)0.0913628499999999677;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07499999925494194031) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04403600096702575684) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8429999947547912598) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1731499955058097839) ) ) {
                    sum += (double)0.002500000000000000919;
                  } else {
                    sum += (double)0.003069560000000000691;
                  }
                } else {
                  sum += (double)0.004249190476190476719;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08565000072121620178) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02419999986886978149) ) ) {
                    sum += (double)0.002500000000000000486;
                  } else {
                    sum += (double)0.01618983333333333385;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3687999993562698364) ) ) {
                    sum += (double)0.005665117647058823952;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7702707648277282715) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3520500063896179199) ) ) {
                  sum += (double)0.06310244999999999049;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4536006748676300049) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5620499849319458008) ) ) {
                      sum += (double)0.01365479166666666751;
                    } else {
                      sum += (double)0.005798304878048781037;
                    }
                  } else {
                    sum += (double)0.02312896874999999242;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1680999994277954102) ) ) {
                  sum += (double)0.008109281250000001037;
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3943244963884353638) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4288852214813232422) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2717945128679275513) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03084999974817037582) ) ) {
                  sum += (double)0.1446056691176471065;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.70445728302001953) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8350000083446502686) ) ) {
                      sum += (double)0.04650871354166665611;
                    } else {
                      sum += (double)0.08622155769230767375;
                    }
                  } else {
                    sum += (double)0.01308167391304347962;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1070999987423419952) ) ) {
                  sum += (double)0.1320917031249999873;
                } else {
                  sum += (double)0.2384178666666666446;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1002999991178512573) ) ) {
                sum += (double)0.1202318235294117243;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7399341762065887451) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1855499967932701111) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2100059986114501953) ) ) {
                      sum += (double)0.01540043103448275955;
                    } else {
                      sum += (double)0.04125579166666667325;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20590.1484375) ) ) {
                      sum += (double)0.04874268749999999956;
                    } else {
                      sum += (double)0.1280764624999999879;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2792354971170425415) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1942500025033950806) ) ) {
                      sum += (double)0.02125694444444444636;
                    } else {
                      sum += (double)0.01045733035714285775;
                    }
                  } else {
                    sum += (double)0.03345750806451611159;
                  }
                }
              }
            }
          } else {
            sum += (double)0.2426207343750000078;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7597746551036834717) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3218879997730255127) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.84718418121337891) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05040000006556510925) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10842.26806640625) ) ) {
                sum += (double)0.331453782608695624;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001099999994039535522) ) ) {
                  sum += (double)0.5234825263157893982;
                } else {
                  sum += (double)0.4088592954545454683;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.008303403854370117) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.898275852203369141) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4492499977350234985) ) ) {
                    sum += (double)0.3503036333333333086;
                  } else {
                    sum += (double)0.4187690131578946651;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6042.8046875) ) ) {
                    sum += (double)0.3764753684210526141;
                  } else {
                    sum += (double)0.2534835300000000124;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412595003843307495) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1769642606377601624) ) ) {
                    sum += (double)0.09677772058823529144;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3471561670303344727) ) ) {
                      sum += (double)0.2456306617647059098;
                    } else {
                      sum += (double)0.1612912972972973258;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13944.6357421875) ) ) {
                    sum += (double)0.3616920869565216634;
                  } else {
                    sum += (double)0.2472352870370370381;
                  }
                }
              }
            }
          } else {
            sum += (double)0.08403659615384614923;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.70351552963256836) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003499999875202775002) ) ) {
              sum += (double)0.6080476527777778362;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4195740073919296265) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1734500005841255188) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
                    sum += (double)0.3998758970588235373;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1820521131157875061) ) ) {
                      sum += (double)0.5049884270833333577;
                    } else {
                      sum += (double)0.4596665064102563591;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3644700050354003906) ) ) {
                    sum += (double)0.4386610666666666547;
                  } else {
                    sum += (double)0.3617669833333333473;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07564999908208847046) ) ) {
                  sum += (double)0.5377974444444444391;
                } else {
                  sum += (double)0.4876377647058823817;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
              sum += (double)0.2337663653846153988;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3152808547019958496) ) ) {
                sum += (double)0.4124479218749999565;
              } else {
                sum += (double)0.2958611413043478189;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.722097396850585938) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
            sum += (double)0.3153910476190475709;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.896885991096496582) ) ) {
              sum += (double)0.3027829375000000156;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1154000014066696167) ) ) {
                sum += (double)0.03412580952380952354;
              } else {
                sum += (double)0.1555236500000000133;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18550.0615234375) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.63336181640625) ) ) {
              sum += (double)0.2699777205882352704;
            } else {
              sum += (double)0.05418825000000000031;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.383478999137878418) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.18286848068237305) ) ) {
                sum += (double)0.007379139999999999311;
              } else {
                sum += (double)0.02954746551724137665;
              }
            } else {
              sum += (double)0.07064830882352941821;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4716695547103881836) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6142930090427398682) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.751275539398193359) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5180985033512115479) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3143.6741943359375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1242299787700176239) ) ) {
                sum += (double)0.4504780333333333053;
              } else {
                sum += (double)0.5510205882352940954;
              }
            } else {
              sum += (double)0.5623035576923076651;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992000043392181396) ) ) {
              sum += (double)0.5548513706896551767;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005999999819323420525) ) ) {
                sum += (double)0.7026578125000000341;
              } else {
                sum += (double)0.6340395899999999862;
              }
            }
          }
        } else {
          sum += (double)0.4186083020833333834;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7415895164012908936) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.595028400421142578) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7320500016212463379) ) ) {
              sum += (double)0.6628658333333332653;
            } else {
              sum += (double)0.7209627687499998716;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1704944297671318054) ) ) {
              sum += (double)0.5823729021739131317;
            } else {
              sum += (double)0.6776996562500000598;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.259391546249389648) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7972500026226043701) ) ) {
              sum += (double)0.7849352812499998944;
            } else {
              sum += (double)0.8576251022727273687;
            }
          } else {
            sum += (double)0.7601309130434783512;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9600000083446502686) ) ) {
        sum += (double)0.1926174537037037282;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.604643642902374268) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1049.307220458984375) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.344300001859664917) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.569020003080368042) ) ) {
                sum += (double)0.4583043166666667667;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.73011589050292969) ) ) {
                  sum += (double)0.6557011911764706324;
                } else {
                  sum += (double)0.5393300781250000009;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.883182048797607422) ) ) {
                sum += (double)0.4940633437499999392;
              } else {
                sum += (double)0.3299672361111111174;
              }
            }
          } else {
            sum += (double)0.3112602500000000161;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5454215109348297119) ) ) {
            sum += (double)0.2036947222222221798;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.087804913520812988) ) ) {
              sum += (double)0.4364370113636363291;
            } else {
              sum += (double)0.3148185760869565697;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.405882358551025391) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6373854875564575195) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2549335062503814697) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.035119056701660156) ) ) {
            sum += (double)0.08203942647058823368;
          } else {
            sum += (double)0.1813084722222222112;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1033.249481201171875) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2467999979853630066) ) ) {
              sum += (double)0.2437267000000000183;
            } else {
              sum += (double)0.356697070000000005;
            }
          } else {
            sum += (double)0.1840793586956521732;
          }
        }
      } else {
        sum += (double)0.549859983333333302;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4650000035762786865) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.70384645462036133) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.27777862548828125) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1891285032033920288) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661259710788726807) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1098520010709762573) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.39978790283203125) ) ) {
                    sum += (double)0.007604100000000000789;
                  } else {
                    sum += (double)0.004175499999999999524;
                  }
                } else {
                  sum += (double)0.02447866666666666247;
                }
              } else {
                sum += (double)0.04984576315789473328;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03405000083148479462) ) ) {
                sum += (double)0.02293353333333333563;
              } else {
                sum += (double)0.1270060000000000078;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1050000004470348358) ) ) {
              sum += (double)0.0400494130434782547;
            } else {
              sum += (double)0.1698779342105262991;
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2164499983191490173) ) ) {
              sum += (double)0.01609667857142857081;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8337500095367431641) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.25) ) ) {
                  sum += (double)0.006220357142857143792;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1731267869472503662) ) ) {
                    sum += (double)0.003542961538461538665;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1908999979496002197) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003265318181818181731;
                    }
                  }
                }
              } else {
                sum += (double)0.008761346153846156018;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7680511474609375) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)246.47222900390625) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4522500038146972656) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6109035313129425049) ) ) {
                    sum += (double)0.06677881250000000657;
                  } else {
                    sum += (double)0.0297300416666666685;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.196788005530834198) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06159999966621398926) ) ) {
                      sum += (double)0.00675499999999999972;
                    } else {
                      sum += (double)0.01350235849056603647;
                    }
                  } else {
                    sum += (double)0.02722605555555555543;
                  }
                }
              } else {
                sum += (double)0.07757323529411765117;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.185000002384185791) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3074999898672103882) ) ) {
                  sum += (double)0.002500000000000000052;
                } else {
                  sum += (double)0.004155617647058824395;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1791500002145767212) ) ) {
                  sum += (double)0.01927529761904762245;
                } else {
                  sum += (double)0.005561354166666666703;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.64260244369506836) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5964152216911315918) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02224999945610761642) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.29963207244873047) ) ) {
                  sum += (double)0.1708287500000000292;
                } else {
                  sum += (double)0.3503449305555555449;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05640000104904174805) ) ) {
                  sum += (double)0.09132568750000003011;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.557799994945526123) ) ) {
                    sum += (double)0.2262605454545454642;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.90625) ) ) {
                      sum += (double)0.09059268055555555477;
                    } else {
                      sum += (double)0.2225427499999999836;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.184615612030029297) ) ) {
                sum += (double)0.09764491666666666458;
              } else {
                sum += (double)0.01523444047619047607;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2093200013041496277) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.94276714324951172) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.70852756500244141) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.81436681747436523) ) ) {
                    sum += (double)0.01533947727272727372;
                  } else {
                    sum += (double)0.03693622619047618599;
                  }
                } else {
                  sum += (double)0.08211979310344827421;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3755999952554702759) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9099999964237213135) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6150000095367431641) ) ) {
                      sum += (double)0.01530850000000000093;
                    } else {
                      sum += (double)0.007628703703703704382;
                    }
                  } else {
                    sum += (double)0.02598761666666666442;
                  }
                } else {
                  sum += (double)0.04044558333333334033;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6999999880790710449) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2097999975085258484) ) ) {
                  sum += (double)0.1999578981481481277;
                } else {
                  sum += (double)0.1228106999999999949;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6150684952735900879) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9108.07666015625) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.484249994158744812) ) ) {
                      sum += (double)0.06646056250000000054;
                    } else {
                      sum += (double)0.1172603541666666777;
                    }
                  } else {
                    sum += (double)0.1873291833333333434;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.348315507173538208) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
                      sum += (double)0.005617000000000000465;
                    } else {
                      sum += (double)0.01682978124999999839;
                    }
                  } else {
                    sum += (double)0.07286336904761904487;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.3388082499999999775;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6284088790416717529) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2639304995536804199) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0171500006690621376) ) ) {
            sum += (double)0.3981378362068965782;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1832548975944519043) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1227128729224205017) ) ) {
                sum += (double)0.2009652500000000397;
              } else {
                sum += (double)0.1028313295454545556;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4038999974727630615) ) ) {
                sum += (double)0.152035516666666648;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3028513491153717041) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.227314487099647522) ) ) {
                    sum += (double)0.2867964117647058275;
                  } else {
                    sum += (double)0.1769448300000000251;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.403312981128692627) ) ) {
                    sum += (double)0.3682742708333333059;
                  } else {
                    sum += (double)0.2741199791666666941;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.0625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3549064993858337402) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01705000083893537521) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.71758079528808594) ) ) {
                  sum += (double)0.4510544642857143294;
                } else {
                  sum += (double)0.5268660657894737032;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.01013278961181641) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3695.2999267578125) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1563500016927719116) ) ) {
                      sum += (double)0.3484833611111111118;
                    } else {
                      sum += (double)0.3980724218749999155;
                    }
                  } else {
                    sum += (double)0.4440518214285714693;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1516499966382980347) ) ) {
                    sum += (double)0.2369058055555555431;
                  } else {
                    sum += (double)0.3969139264705882075;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2855009734630584717) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0009000000136438757181) ) ) {
                    sum += (double)0.6158186153846154642;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05234999954700469971) ) ) {
                      sum += (double)0.5019135769230769206;
                    } else {
                      sum += (double)0.5697929027777778321;
                    }
                  }
                } else {
                  sum += (double)0.4755013095238095344;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
                  sum += (double)0.5029565517241378902;
                } else {
                  sum += (double)0.4043091249999999914;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.56195259094238281) ) ) {
              sum += (double)0.340935465517241354;
            } else {
              sum += (double)0.2201626642857142657;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.4148097038269043) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.380549997091293335) ) ) {
              sum += (double)0.4464123666666666712;
            } else {
              sum += (double)0.2823789318181817998;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2557999938726425171) ) ) {
              sum += (double)0.06035419736842106281;
            } else {
              sum += (double)0.1995695657894736574;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.177647113800048828) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07725000008940696716) ) ) {
              sum += (double)0.1087881785714285704;
            } else {
              sum += (double)0.2940488181818182167;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1788500025868415833) ) ) {
              sum += (double)0.1351927499999999727;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3625984936952590942) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3306000083684921265) ) ) {
                  sum += (double)0.009127675000000001759;
                } else {
                  sum += (double)0.0350695892857142838;
                }
              } else {
                sum += (double)0.07815684090909090498;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572405099868774414) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569136321544647217) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.895092487335205078) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8026999831199645996) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05609999969601631165) ) ) {
                  sum += (double)0.4559386052631579922;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1801431626081466675) ) ) {
                    sum += (double)0.4895403874999999516;
                  } else {
                    sum += (double)0.5312514558823528965;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03435000032186508179) ) ) {
                  sum += (double)0.5897155882352941303;
                } else {
                  sum += (double)0.5283780166666666167;
                }
              }
            } else {
              sum += (double)0.3754511000000000376;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.558600008487701416) ) ) {
              sum += (double)0.5458110909090908569;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.455137014389038086) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1557.5447998046875) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.30580568313598633) ) ) {
                    sum += (double)0.6085658382352940876;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5800004899501800537) ) ) {
                      sum += (double)0.640763764705882255;
                    } else {
                      sum += (double)0.6823200312499998477;
                    }
                  }
                } else {
                  sum += (double)0.6965928874999999243;
                }
              } else {
                sum += (double)0.572294066666666601;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.4331111363636363509;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2562.16064453125) ) ) {
              sum += (double)0.3658621153846154384;
            } else {
              sum += (double)0.2035834047619047293;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5613919496536254883) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1804.5211181640625) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.16220378875732422) ) ) {
                sum += (double)0.6623375000000000234;
              } else {
                sum += (double)0.7203744861111112119;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3278.4515380859375) ) ) {
                sum += (double)0.7325539666666667227;
              } else {
                sum += (double)0.7940633055555554876;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1167.03961181640625) ) ) {
              sum += (double)0.8426223750000000345;
            } else {
              sum += (double)0.8027098863636364934;
            }
          }
        } else {
          sum += (double)0.5887915500000000524;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.972972869873046875) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47832450270652771) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0009999999892897903919) ) ) {
            sum += (double)0.1470632083333333062;
          } else {
            sum += (double)0.08020399999999999752;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.93142843246459961) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.383582830429077148) ) ) {
              sum += (double)0.1568367058823529614;
            } else {
              sum += (double)0.2492370178571428341;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1693.33221435546875) ) ) {
              sum += (double)0.2572204861111111462;
            } else {
              sum += (double)0.412968587500000095;
            }
          }
        }
      } else {
        sum += (double)0.459404532608695737;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4285600036382675171) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.949834346771240234) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.204999923706054688) ) ) {
              sum += (double)0.02259256249999999633;
            } else {
              sum += (double)0.1660456250000000022;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.76785755157470703) ) ) {
              sum += (double)0.07604681818181818764;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0721325017511844635) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.54464340209960938) ) ) {
                      sum += (double)0.005131214285714285825;
                    } else {
                      sum += (double)0.002849741758241759564;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.26666736602783203) ) ) {
                      sum += (double)0.01009550000000000031;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.333250001072883606) ) ) {
                    sum += (double)0.04527302272727272425;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7344500124454498291) ) ) {
                      sum += (double)0.005523336956521740504;
                    } else {
                      sum += (double)0.01596237500000000087;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7680511474609375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1862149983644485474) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4933216571807861328) ) ) {
                      sum += (double)0.02130846287128711908;
                    } else {
                      sum += (double)0.0540428676470588315;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6294000148773193359) ) ) {
                      sum += (double)0.03686890624999999977;
                    } else {
                      sum += (double)0.111462500000000006;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5545.951904296875) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1685185059905052185) ) ) {
                      sum += (double)0.006748051724137931612;
                    } else {
                      sum += (double)0.01824003846153846378;
                    }
                  } else {
                    sum += (double)0.002499999999999999618;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9298.3466796875) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2464440762996673584) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16459.00341796875) ) ) {
                sum += (double)0.1173589218750000218;
              } else {
                sum += (double)0.07143061538461537019;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4696499854326248169) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14759.43505859375) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.32916450500488281) ) ) {
                    sum += (double)0.0514945263157894767;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2455404922366142273) ) ) {
                      sum += (double)0.01954449056603773521;
                    } else {
                      sum += (double)0.03782879545454544828;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3935753107070922852) ) ) {
                    sum += (double)0.08542389285714284408;
                  } else {
                    sum += (double)0.04603862500000000663;
                  }
                }
              } else {
                sum += (double)0.1067625147058823692;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033567547798156738) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.52173995971679688) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4589.531494140625) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1304500028491020203) ) ) {
                    sum += (double)0.0485890750000000024;
                  } else {
                    sum += (double)0.163490576923076919;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2060725018382072449) ) ) {
                    sum += (double)0.2840456250000000238;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
                      sum += (double)0.0558878571428571419;
                    } else {
                      sum += (double)0.1886077647058823359;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7016999721527099609) ) ) {
                  sum += (double)0.3674638000000000626;
                } else {
                  sum += (double)0.1753870263157895071;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.85531139373779297) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.44376826286315918) ) ) {
                  sum += (double)0.00524705263157894744;
                } else {
                  sum += (double)0.02876393333333333163;
                }
              } else {
                sum += (double)0.06045815476190474769;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)38.39583396911621094) ) ) {
            sum += (double)0.1206248124999999977;
          } else {
            sum += (double)0.2064527361111111459;
          }
        } else {
          sum += (double)0.3145495714285714284;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5470429956912994385) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7597746551036834717) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3338970094919204712) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12884.72509765625) ) ) {
              sum += (double)0.2951428690476190497;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001700000022538006306) ) ) {
                sum += (double)0.490154416666666648;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.28221149742603302) ) ) {
                  sum += (double)0.348081928571428556;
                } else {
                  sum += (double)0.4518071964285714226;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.670949459075927734) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2889155000448226929) ) ) {
                sum += (double)0.3542930874999999924;
              } else {
                sum += (double)0.4202519285714285679;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.10837459564208984) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2282579988241195679) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3391499966382980347) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.61293339729309082) ) ) {
                      sum += (double)0.1792532386363636376;
                    } else {
                      sum += (double)0.2666579071428571424;
                    }
                  } else {
                    sum += (double)0.1118693472222222346;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11835.208984375) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.38640499114990234) ) ) {
                      sum += (double)0.4080760131578947125;
                    } else {
                      sum += (double)0.2873765441176470148;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.168954849243164062) ) ) {
                      sum += (double)0.3024951833333333062;
                    } else {
                      sum += (double)0.2092803387096774104;
                    }
                  }
                }
              } else {
                sum += (double)0.1239520277777777513;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.70351552963256836) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999824678525329) ) ) {
                sum += (double)0.6173046022727273208;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3677970021963119507) ) ) {
                  sum += (double)0.4131214374999999106;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.04416179656982422) ) ) {
                    sum += (double)0.4800104741379311313;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4704035073518753052) ) ) {
                      sum += (double)0.5548722986111109812;
                    } else {
                      sum += (double)0.6172122343750000573;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4564709961414337158) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2565.864990234375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.62989044189453125) ) ) {
                    sum += (double)0.3049492187500000284;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3942845016717910767) ) ) {
                      sum += (double)0.4670973478260868617;
                    } else {
                      sum += (double)0.4105984852941176322;
                    }
                  }
                } else {
                  sum += (double)0.4919427656249999448;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7691500186920166016) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.939125537872314453) ) ) {
                    sum += (double)0.5032606166666666603;
                  } else {
                    sum += (double)0.5757911249999998482;
                  }
                } else {
                  sum += (double)0.4699722000000000066;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5203999876976013184) ) ) {
              sum += (double)0.2121491999999999822;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.76550579071044922) ) ) {
                sum += (double)0.4570778472222223332;
              } else {
                sum += (double)0.3370456249999999043;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.45491504669189453) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4821.172607421875) ) ) {
              sum += (double)0.4029081666666667338;
            } else {
              sum += (double)0.2163083375000000308;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3844000101089477539) ) ) {
              sum += (double)0.1187224342105263342;
            } else {
              sum += (double)0.2102005657894736868;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.582383632659912109) ) ) {
            sum += (double)0.2955824705882353354;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3774434924125671387) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4948.815673828125) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1025499999523162842) ) ) {
                  sum += (double)0.1511847023809524126;
                } else {
                  sum += (double)0.0378626956521739208;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3226030021905899048) ) ) {
                  sum += (double)0.007891954545454547484;
                } else {
                  sum += (double)0.02914461764705882779;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.712801992893218994) ) ) {
                sum += (double)0.2218120166666666393;
              } else {
                sum += (double)0.1060158387096774013;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6571570038795471191) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09205000102519989014) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.220705032348632812) ) ) {
              sum += (double)0.596880785714285711;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.868712663650512695) ) ) {
                sum += (double)0.7120876093750000413;
              } else {
                sum += (double)0.6427583399999998726;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3459.4644775390625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.957264900207519531) ) ) {
                sum += (double)0.5344323157894736998;
              } else {
                sum += (double)0.5566498676470588158;
              }
            } else {
              sum += (double)0.6281298333333332762;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1061999984085559845) ) ) {
              sum += (double)0.7340616982758620956;
            } else {
              sum += (double)0.6677602968750000478;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0271500004455447197) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8998999893665313721) ) ) {
                sum += (double)0.836781826923076788;
              } else {
                sum += (double)0.8786506764705880324;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1074000000953674316) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.400805234909057617) ) ) {
                  sum += (double)0.7627196071428572477;
                } else {
                  sum += (double)0.808860066666666655;
                }
              } else {
                sum += (double)0.7340994479166669251;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1211.6964111328125) ) ) {
          sum += (double)0.2942840454545455064;
        } else {
          sum += (double)0.4433755462962963301;
        }
      }
    }
  }
  return sum;
}
