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
            sum += (double)0.1352584861198533606;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1843472644686698914) ) ) {
              sum += (double)0.01461528337468982579;
            } else {
              sum += (double)0.08197622298862954071;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03344999905675649643) ) ) {
            sum += (double)0.3159189746945377242;
          } else {
            sum += (double)0.1690227096934864837;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2849999964237213135) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.85714244842529297) ) ) {
            sum += (double)0.05324408699289571306;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.089816998690366745) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.06340599060058594) ) ) {
                    sum += (double)0.007316888888888890136;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)507.416656494140625) ) ) {
                      sum += (double)0.00407340168067227195;
                    } else {
                      sum += (double)0.005715903030303031394;
                    }
                  }
                } else {
                  sum += (double)0.009391057142857145781;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04800000041723251343) ) ) {
                  sum += (double)0.0281731675324675343;
                } else {
                  sum += (double)0.006702678260869565641;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8272999823093414307) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001499999954830855131) ) ) {
                  sum += (double)0.03375666988073654229;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.68333339691162109) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5967.834716796875) ) ) {
                      sum += (double)0.03908788421052631495;
                    } else {
                      sum += (double)0.01436364210526315521;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8429903388023376465) ) ) {
                      sum += (double)0.01245206315789473828;
                    } else {
                      sum += (double)0.004000000000000000951;
                    }
                  }
                }
              } else {
                sum += (double)0.04267002777777777894;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1860604509711265564) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.15155000239610672) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1915089935064315796) ) ) {
                sum += (double)0.1632063114088841693;
              } else {
                sum += (double)0.09793368076067784922;
              }
            } else {
              sum += (double)0.06543808583217798625;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07710549980401992798) ) ) {
              sum += (double)0.1091483551417510023;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1948949992656707764) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8783564567565917969) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6450000107288360596) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)81.74560928344726562) ) ) {
                      sum += (double)0.01478158444444444518;
                    } else {
                      sum += (double)0.03244924705882352989;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1724100038409233093) ) ) {
                      sum += (double)0.04574017534195447959;
                    } else {
                      sum += (double)0.01848252888888889459;
                    }
                  }
                } else {
                  sum += (double)0.007013060317460319097;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.045092463493347168) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3896000087261199951) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6155000030994415283) ) ) {
                      sum += (double)0.04766275610055332318;
                    } else {
                      sum += (double)0.1202313308170587514;
                    }
                  } else {
                    sum += (double)0.1340785758868454081;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.366443991661071777) ) ) {
                    sum += (double)0.009828042105263159675;
                  } else {
                    sum += (double)0.02845098205857685483;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.395299196243286133) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9036570489406585693) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675489962100982666) ) ) {
            sum += (double)0.3737587861345106344;
          } else {
            sum += (double)0.5572042090744135923;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.116380572319030762) ) ) {
            sum += (double)0.4325976510985073964;
          } else {
            sum += (double)0.08222869471429697374;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5530949532985687256) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.06066131591796875) ) ) {
                sum += (double)0.03850765053763440665;
              } else {
                sum += (double)0.1958884984451323696;
              }
            } else {
              sum += (double)0.3244754635277176114;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4285600036382675171) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3599950075149536133) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034300804138183594) ) ) {
                  sum += (double)0.04267865857768790572;
                } else {
                  sum += (double)0.01095323972169512904;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1931500062346458435) ) ) {
                  sum += (double)0.04363313721034974696;
                } else {
                  sum += (double)0.0945629723736962774;
                }
              }
            } else {
              sum += (double)0.1371414887748887701;
            }
          }
        } else {
          sum += (double)0.3483406480635284352;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603369981050491333) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.84999990463256836) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441440001130104065) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
              sum += (double)0.5005895736471354107;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.27991724014282227) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5456.853515625) ) ) {
                  sum += (double)0.412048687502205413;
                } else {
                  sum += (double)0.2700969408500868418;
                }
              } else {
                sum += (double)0.1967822920311293466;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001650000049266964197) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596359938383102417) ) ) {
                sum += (double)0.6477595279665609995;
              } else {
                sum += (double)0.6923805138888887711;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3352134972810745239) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4185.778564453125) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2698989957571029663) ) ) {
                    sum += (double)0.5537504228485045088;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.956862688064575195) ) ) {
                      sum += (double)0.5138910454319791654;
                    } else {
                      sum += (double)0.441873700267826186;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7048499882221221924) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3107.2119140625) ) ) {
                      sum += (double)0.3645413743426331177;
                    } else {
                      sum += (double)0.4880475545606371979;
                    }
                  } else {
                    sum += (double)0.3021346711415234254;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7281999886035919189) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.27230052649974823) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3959.3702392578125) ) ) {
                      sum += (double)0.5352445309630328163;
                    } else {
                      sum += (double)0.6165654354531490133;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4147095084190368652) ) ) {
                      sum += (double)0.5589188733693697397;
                    } else {
                      sum += (double)0.4680814275144768999;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09095000103116035461) ) ) {
                    sum += (double)0.5252368660476768314;
                  } else {
                    sum += (double)0.4125865861544549262;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3337879925966262817) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02084999997168779373) ) ) {
              sum += (double)0.3721322779178313778;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2018499970436096191) ) ) {
                sum += (double)0.1132292088857312778;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2301319986581802368) ) ) {
                  sum += (double)0.1708907272032199609;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3444418162107467651) ) ) {
                    sum += (double)0.3815484617148019453;
                  } else {
                    sum += (double)0.2401420872739873369;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.82509660720825195) ) ) {
              sum += (double)0.3286758873247033752;
            } else {
              sum += (double)0.4582512376872912019;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.896885991096496582) ) ) {
          sum += (double)0.3341360060988358138;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.850671052932739258) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
              sum += (double)0.2910077960542574171;
            } else {
              sum += (double)0.06375910907179052622;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1884500011801719666) ) ) {
              sum += (double)0.1514491743716897265;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4721999913454055786) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3887500017881393433) ) ) {
                  sum += (double)0.01165990000000000429;
                } else {
                  sum += (double)0.02311239999999999822;
                }
              } else {
                sum += (double)0.04004635586020326848;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9539542198181152344) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7119204998016357422) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5259833037853240967) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4858189970254898071) ) ) {
                sum += (double)0.6419772391433747893;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5000065118074417114) ) ) {
                  sum += (double)0.5274683689343168114;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5208895206451416016) ) ) {
                    sum += (double)0.6449217311321058244;
                  } else {
                    sum += (double)0.535492422827600234;
                  }
                }
              }
            } else {
              sum += (double)0.4379221946570081569;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7233.654052734375) ) ) {
              sum += (double)0.5695268313172990871;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.120183311402797699) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1541.4549560546875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8854999840259552002) ) ) {
                    sum += (double)0.7034633657596880418;
                  } else {
                    sum += (double)0.7598265999999999076;
                  }
                } else {
                  sum += (double)0.7635886260869565456;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04609999991953372955) ) ) {
                  sum += (double)0.6308916549351982761;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.658749997615814209) ) ) {
                    sum += (double)0.7151470869565217381;
                  } else {
                    sum += (double)0.6845502679365079723;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3193.9530029296875) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7950769960880279541) ) ) {
              sum += (double)0.7475518519314553467;
            } else {
              sum += (double)0.820648966666666646;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.311963319778442383) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1553.44091796875) ) ) {
                sum += (double)0.8257994201374080356;
              } else {
                sum += (double)0.8635709384615383177;
              }
            } else {
              sum += (double)0.8758380153657789879;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
          sum += (double)0.5397361940126412794;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
            sum += (double)0.5493017631726312411;
          } else {
            sum += (double)0.2013892267942252456;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5749999880790710449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361164987087249756) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.464285612106323242) ) ) {
            sum += (double)0.08555471083980151215;
          } else {
            sum += (double)0.01566243211382114045;
          }
        } else {
          sum += (double)0.2024253409225927058;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.89999961853027344) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.494164943695068359) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1014499999582767487) ) ) {
              sum += (double)0.3188409709419815496;
            } else {
              sum += (double)0.4702747840392871859;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6085087060928344727) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2016.8912353515625) ) ) {
                sum += (double)0.1969563276098098004;
              } else {
                sum += (double)0.3165539781126030516;
              }
            } else {
              sum += (double)0.09251570766123486111;
            }
          }
        } else {
          sum += (double)0.4390266155913919444;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.949834346771240234) ) ) {
            sum += (double)0.1098111069818383939;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.46153831481933594) ) ) {
                sum += (double)0.03442796525989897521;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8725500106811523438) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.59523773193359375) ) ) {
                      sum += (double)0.007789810526315788138;
                    } else {
                      sum += (double)0.004159651485148518034;
                    }
                  } else {
                    sum += (double)0.01012985714285714357;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6884500086307525635) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.619566798210144043) ) ) {
                      sum += (double)0.009986193103448278569;
                    } else {
                      sum += (double)0.004284635294117647951;
                    }
                  } else {
                    sum += (double)0.03367186607142857308;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6470028162002563477) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.20666599273681641) ) ) {
                  sum += (double)0.1092184786789938411;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)118.1903228759765625) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1281524971127510071) ) ) {
                      sum += (double)0.01385481035353535242;
                    } else {
                      sum += (double)0.03229898654827847992;
                    }
                  } else {
                    sum += (double)0.09098311569021975964;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.082261323928833008) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.80000019073486328) ) ) {
                    sum += (double)0.03192575413533834533;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1831000000238418579) ) ) {
                      sum += (double)0.01053446666666666733;
                    } else {
                      sum += (double)0.02186577142857143094;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5723.20849609375) ) ) {
                    sum += (double)0.00866218461538461465;
                  } else {
                    sum += (double)0.004000000000000000083;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4127454459667205811) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02309999987483024597) ) ) {
              sum += (double)0.2252602316229022905;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2717945128679275513) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.76870346069335938) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0762499980628490448) ) ) {
                    sum += (double)0.06174487885690758265;
                  } else {
                    sum += (double)0.1384516730778475591;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.814999997615814209) ) ) {
                    sum += (double)0.01706296000000000201;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.70034980773925781) ) ) {
                      sum += (double)0.0302132972431077701;
                    } else {
                      sum += (double)0.06826684566834109735;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1446000039577484131) ) ) {
                  sum += (double)0.2824513208349865301;
                } else {
                  sum += (double)0.1521566143247730096;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2576499953866004944) ) ) {
                sum += (double)0.04005325176767676743;
              } else {
                sum += (double)0.2126100260598238756;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.736466825008392334) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2430334910750389099) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4605499953031539917) ) ) {
                    sum += (double)0.01999314979757085484;
                  } else {
                    sum += (double)0.04605526096458662649;
                  }
                } else {
                  sum += (double)0.0855909550211882697;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2989989966154098511) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5921.614990234375) ) ) {
                    sum += (double)0.02345254885954381821;
                  } else {
                    sum += (double)0.00525778461538461625;
                  }
                } else {
                  sum += (double)0.02711305690725741499;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5704225003719329834) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1754500046372413635) ) ) {
            sum += (double)0.2306507217750499161;
          } else {
            sum += (double)0.07191560058479533335;
          }
        } else {
          sum += (double)0.3238829724955876177;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.710501670837402344) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.5308603386536500102;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6001500189304351807) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.39281916618347168) ) ) {
                  sum += (double)0.3999830652999938341;
                } else {
                  sum += (double)0.3259530052985425419;
                }
              } else {
                sum += (double)0.198516827997819667;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3557374924421310425) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7127999961376190186) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2953102290630340576) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3602.5106201171875) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.873922348022460938) ) ) {
                      sum += (double)0.5387125639519406706;
                    } else {
                      sum += (double)0.4753748690990758918;
                    }
                  } else {
                    sum += (double)0.5649672122154079101;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.183954477310180664) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.354981184005737305) ) ) {
                      sum += (double)0.4806987314406628853;
                    } else {
                      sum += (double)0.5237187174738840989;
                    }
                  } else {
                    sum += (double)0.4152755134708405738;
                  }
                }
              } else {
                sum += (double)0.4046235805416068532;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08999999985098838806) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.183465957641601562) ) ) {
                  sum += (double)0.5604223261338068252;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6985000073909759521) ) ) {
                    sum += (double)0.6709516888888888975;
                  } else {
                    sum += (double)0.603297553953036747;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                  sum += (double)0.6077020970879060124;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.24188946932554245) ) ) {
                    sum += (double)0.4466618537792330645;
                  } else {
                    sum += (double)0.5432646876444204853;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3226494938135147095) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04179999977350234985) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2162578403949737549) ) ) {
                sum += (double)0.466473534643206178;
              } else {
                sum += (double)0.2868192695496633027;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.239620506763458252) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.273736804723739624) ) ) {
                  sum += (double)0.09226260072617059604;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.48737621307373047) ) ) {
                    sum += (double)0.2323670597040319863;
                  } else {
                    sum += (double)0.1498011288907390992;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2489500045776367188) ) ) {
                  sum += (double)0.2414359781400939042;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.47304916381835938) ) ) {
                    sum += (double)0.4145343634250662213;
                  } else {
                    sum += (double)0.3117309818301339797;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.56195259094238281) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3047000020742416382) ) ) {
                sum += (double)0.5336926065905986949;
              } else {
                sum += (double)0.4580380893776668239;
              }
            } else {
              sum += (double)0.2861491127486108232;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
          sum += (double)0.3407352491354149748;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29237.2587890625) ) ) {
            sum += (double)0.255756294117834071;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3820239901542663574) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.355137228965759277) ) ) {
                sum += (double)0.07324034344973716359;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3127129971981048584) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.77636873722076416) ) ) {
                    sum += (double)0.0131280842105263168;
                  } else {
                    sum += (double)0.03241198156819601051;
                  }
                } else {
                  sum += (double)0.04607193959151609924;
                }
              }
            } else {
              sum += (double)0.1228417186094858671;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9435398280620574951) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6059480011463165283) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.921626925468444824) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02909999992698431015) ) ) {
                  sum += (double)0.6750726915491379598;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4883529990911483765) ) ) {
                    sum += (double)0.5903470244642802234;
                  } else {
                    sum += (double)0.6464644317532552975;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.99043750762939453) ) ) {
                  sum += (double)0.5150789412254411781;
                } else {
                  sum += (double)0.6182797825751460419;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08734999969601631165) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3868.938232421875) ) ) {
                  sum += (double)0.7391476892857141712;
                } else {
                  sum += (double)0.7039235866930171337;
                }
              } else {
                sum += (double)0.6453464110228647188;
              }
            }
          } else {
            sum += (double)0.4629441076782051523;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.455137014389038086) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1063999980688095093) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6751540005207061768) ) ) {
                  sum += (double)0.7468003581336695174;
                } else {
                  sum += (double)0.8096570221606647078;
                }
              } else {
                sum += (double)0.7241604895299778022;
              }
            } else {
              sum += (double)0.6837999554056081175;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.218671143054962158) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02724999934434890747) ) ) {
                sum += (double)0.8903910329004328661;
              } else {
                sum += (double)0.8495523629204405625;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.1683502197265625) ) ) {
                sum += (double)0.7703830564142007953;
              } else {
                sum += (double)0.8242778842105262793;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
          sum += (double)0.5413292047857549694;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
            sum += (double)0.4663451267790045263;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6017224788665771484) ) ) {
              sum += (double)0.1824917792137420169;
            } else {
              sum += (double)0.3358306878254891936;
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
          sum += (double)0.06077283493761140298;
        } else {
          sum += (double)0.1757592074690721984;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.32692337036132812) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.99833834171295166) ) ) {
            sum += (double)0.4390154444935891465;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1282.22564697265625) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5296977460384368896) ) ) {
                sum += (double)0.4081069612425338167;
              } else {
                sum += (double)0.1906584658820994205;
              }
            } else {
              sum += (double)0.1129439504026922975;
            }
          }
        } else {
          sum += (double)0.4525657066503897541;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1169065013527870178) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07263750210404396057) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.17857122421264648) ) ) {
                    sum += (double)0.004850500000000001512;
                  } else {
                    sum += (double)0.004000000000000002685;
                  }
                } else {
                  sum += (double)0.007152485714285714002;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5709000229835510254) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07499999925494194031) ) ) {
                    sum += (double)0.004000000000000000951;
                  } else {
                    sum += (double)0.006115259999999999967;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05536649934947490692) ) ) {
                    sum += (double)0.006871150000000001215;
                  } else {
                    sum += (double)0.00979037777777777736;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.07916641235351562) ) ) {
                sum += (double)0.02394620818713450935;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21842.0498046875) ) ) {
                  sum += (double)0.01451557142857142976;
                } else {
                  sum += (double)0.005961225000000001419;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4392126351594924927) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2650000005960464478) ) ) {
                sum += (double)0.02254510678210678437;
              } else {
                sum += (double)0.01202297777777778034;
              }
            } else {
              sum += (double)0.04695330858834328297;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.625) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04224999994039535522) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.30952262878417969) ) ) {
                sum += (double)0.01181611764705882417;
              } else {
                sum += (double)0.1102326363248432306;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1664.1246337890625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1617830023169517517) ) ) {
                  sum += (double)0.04383827081165758699;
                } else {
                  sum += (double)0.07405648695848096597;
                }
              } else {
                sum += (double)0.1630389618066099;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6241779923439025879) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)134.2167816162109375) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3007394075393676758) ) ) {
                  sum += (double)0.01346403333333333341;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2123055011034011841) ) ) {
                    sum += (double)0.0238260545454545454;
                  } else {
                    sum += (double)0.04985768888888889028;
                  }
                }
              } else {
                sum += (double)0.08875389631826045844;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9866.6044921875) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.914350658655166626) ) ) {
                  sum += (double)0.03247507500000000602;
                } else {
                  sum += (double)0.009521967204301075294;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2720139920711517334) ) ) {
                  sum += (double)0.006120685714285715485;
                } else {
                  sum += (double)0.004000000000000000083;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6756999790668487549) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000071246176958) ) ) {
              sum += (double)0.2514924775484678188;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2315535023808479309) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.19277095794677734) ) ) {
                  sum += (double)0.09079036556984065864;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2774000018835067749) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1831059977412223816) ) ) {
                      sum += (double)0.01671282528860028663;
                    } else {
                      sum += (double)0.04010019772041907571;
                    }
                  } else {
                    sum += (double)0.07347624554817185072;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.92708301544189453) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.777349621057510376) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07065000012516975403) ) ) {
                      sum += (double)0.05510019110004781701;
                    } else {
                      sum += (double)0.1783471776599100944;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.70121955871582031) ) ) {
                      sum += (double)0.01431664444444444295;
                    } else {
                      sum += (double)0.03356633615988834779;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7745.342529296875) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2827855050563812256) ) ) {
                      sum += (double)0.1326756255926087869;
                    } else {
                      sum += (double)0.0638995568407878245;
                    }
                  } else {
                    sum += (double)0.2847577623492426602;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1694865003228187561) ) ) {
              sum += (double)0.03727369846641669093;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08469999954104423523) ) ) {
                sum += (double)0.3265497144910472493;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3109924942255020142) ) ) {
                  sum += (double)0.116289977124690011;
                } else {
                  sum += (double)0.2061391010093226173;
                }
              }
            }
          }
        } else {
          sum += (double)0.3809472160089841242;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760489910840988159) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9664483964443206787) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45238733291625977) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3348135054111480713) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03329999931156635284) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001700000022538006306) ) ) {
                sum += (double)0.6016675641557981402;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2194355428218841553) ) ) {
                  sum += (double)0.5304172355727820865;
                } else {
                  sum += (double)0.4455917972926046744;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.893887519836425781) ) ) {
                    sum += (double)0.3533360695047885192;
                  } else {
                    sum += (double)0.4476070427619999181;
                  }
                } else {
                  sum += (double)0.2370890231069521514;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1498499959707260132) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.640492916107177734) ) ) {
                    sum += (double)0.4928985304802514511;
                  } else {
                    sum += (double)0.2826822338538883539;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3957751095294952393) ) ) {
                    sum += (double)0.5531609577727386595;
                  } else {
                    sum += (double)0.4757728186707811391;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08009999990463256836) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
                sum += (double)0.6548110853741496706;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05205000005662441254) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.533333420753479004) ) ) {
                    sum += (double)0.5919252293431864764;
                  } else {
                    sum += (double)0.5415829682733768191;
                  }
                } else {
                  sum += (double)0.6177014089093700866;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7306500077247619629) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4326595067977905273) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.303977727890014648) ) ) {
                    sum += (double)0.5671894742448109206;
                  } else {
                    sum += (double)0.5070000833784927829;
                  }
                } else {
                  sum += (double)0.6058125530649530743;
                }
              } else {
                sum += (double)0.4186936060402355331;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3284385055303573608) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506500184535980225) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19972.0791015625) ) ) {
                  sum += (double)0.4368868721187540993;
                } else {
                  sum += (double)0.2743744327947683637;
                }
              } else {
                sum += (double)0.1720060626415602645;
              }
            } else {
              sum += (double)0.4911431367867546971;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.33650779724121094) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2301319986581802368) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5384776294231414795) ) ) {
                  sum += (double)0.08258361545640970081;
                } else {
                  sum += (double)0.2355490169722869453;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.43890857696533203) ) ) {
                  sum += (double)0.1956357139566129444;
                } else {
                  sum += (double)0.3880406332490268229;
                }
              }
            } else {
              sum += (double)0.08620025324332029892;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.25275653600692749) ) ) {
          sum += (double)0.2501453111136296426;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.744037389755249023) ) ) {
            sum += (double)0.2127531556830296877;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04360000044107437134) ) ) {
              sum += (double)0.1436206212653519387;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.386479496955871582) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3299115002155303955) ) ) {
                  sum += (double)0.01965837348489548123;
                } else {
                  sum += (double)0.05008387641219738673;
                }
              } else {
                sum += (double)0.1143251069050350288;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7049920260906219482) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.32692289352416992) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347345173358917236) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.54652214050292969) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
                  sum += (double)0.6433346295154598327;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.33928585052490234) ) ) {
                    sum += (double)0.5992152239432968486;
                  } else {
                    sum += (double)0.4746518225807642155;
                  }
                }
              } else {
                sum += (double)0.668242171840020549;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7665.83203125) ) ) {
                sum += (double)0.6001089910478112355;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4877958297729492188) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5900890231132507324) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.79540586471557617) ) ) {
                      sum += (double)0.6457483229872494901;
                    } else {
                      sum += (double)0.708452156410256495;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1064999997615814209) ) ) {
                      sum += (double)0.7657552832457751313;
                    } else {
                      sum += (double)0.7139236371488976163;
                    }
                  }
                } else {
                  sum += (double)0.6296132911965812706;
                }
              }
            }
          } else {
            sum += (double)0.3920262544004883831;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            sum += (double)0.7540104382238208558;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08980000019073486328) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8502727746963500977) ) ) {
                sum += (double)0.900238675132275068;
              } else {
                sum += (double)0.8474497926303855566;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7972725033760070801) ) ) {
                sum += (double)0.7866678331738439223;
              } else {
                sum += (double)0.8134454803837953829;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.115192294120788574) ) ) {
          sum += (double)0.5479456778121851723;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
            sum += (double)0.4868579514480393944;
          } else {
            sum += (double)0.1198332691108796866;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.291855096817016602) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.375) ) ) {
            sum += (double)0.05082061561783227099;
          } else {
            sum += (double)0.1379065259987714287;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.93142843246459961) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06745000183582305908) ) ) {
              sum += (double)0.1183537302933687363;
            } else {
              sum += (double)0.248521438613036133;
            }
          } else {
            sum += (double)0.3751211620250115009;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.620915055274963379) ) ) {
          sum += (double)0.5545772669149889866;
        } else {
          sum += (double)0.3671540528242551171;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1829499974846839905) ) ) {
            sum += (double)0.01827417142857143059;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09559578448534011841) ) ) {
              sum += (double)0.006709000000000002288;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.22916650772094727) ) ) {
                sum += (double)0.005358355555555555962;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8209500014781951904) ) ) {
                  sum += (double)0.004000000000000002685;
                } else {
                  sum += (double)0.004411625000000000615;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000118743628263) ) ) {
            sum += (double)0.05535429495814603307;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09618249908089637756) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04762550070881843567) ) ) {
                  sum += (double)0.00928437647058823548;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.7426910400390625) ) ) {
                    sum += (double)0.006543363636363636222;
                  } else {
                    sum += (double)0.004375000000000001284;
                  }
                }
              } else {
                sum += (double)0.01528280869565217318;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06264999881386756897) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.71198081970214844) ) ) {
                    sum += (double)0.01601615999999999804;
                  } else {
                    sum += (double)0.03459241789023301955;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6910499930381774902) ) ) {
                    sum += (double)0.1121016459197049925;
                  } else {
                    sum += (double)0.03899836408846529823;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.25769424438476562) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5350119918584823608) ) ) {
                      sum += (double)0.01372880000000000281;
                    } else {
                      sum += (double)0.004441885714285715228;
                    }
                  } else {
                    sum += (double)0.02205522328513162891;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1627499982714653015) ) ) {
                    sum += (double)0.06098327705053853409;
                  } else {
                    sum += (double)0.02243452413793103548;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.670041203498840332) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8251.01318359375) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09915671870112419128) ) ) {
                sum += (double)0.1591434736568174968;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4694499969482421875) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5199999809265136719) ) ) {
                      sum += (double)0.07865608064278342693;
                    } else {
                      sum += (double)0.03007522149188069163;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.23208427429199219) ) ) {
                      sum += (double)0.1127577257507222791;
                    } else {
                      sum += (double)0.03772698562091503227;
                    }
                  }
                } else {
                  sum += (double)0.1421644942941792111;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1318000033497810364) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02389999944716691971) ) ) {
                  sum += (double)0.3205080621181202183;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2869.2137451171875) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2222229987382888794) ) ) {
                      sum += (double)0.05964647039320503802;
                    } else {
                      sum += (double)0.1147081253914946225;
                    }
                  } else {
                    sum += (double)0.1650190196803196785;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2426500022411346436) ) ) {
                  sum += (double)0.353826219860057023;
                } else {
                  sum += (double)0.2169784143142936272;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.68433570861816406) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7777924835681915283) ) ) {
                sum += (double)0.06602334789840541562;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3887499868869781494) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000214576721191) ) ) {
                    sum += (double)0.03206092282821407929;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                      sum += (double)0.007219860000000003289;
                    } else {
                      sum += (double)0.02054789999999999742;
                    }
                  }
                } else {
                  sum += (double)0.05278744376537385097;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2729000002145767212) ) ) {
                sum += (double)0.1680287819073511268;
              } else {
                sum += (double)0.03270333629629629951;
              }
            }
          }
        } else {
          sum += (double)0.287004469778221194;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83318185806274414) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2901324927806854248) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01354999979957938194) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4473.6708984375) ) ) {
                sum += (double)0.5847175574259574349;
              } else {
                sum += (double)0.4723661732753006715;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5821264684200286865) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6035999953746795654) ) ) {
                    sum += (double)0.2162079239837794431;
                  } else {
                    sum += (double)0.133794299223885832;
                  }
                } else {
                  sum += (double)0.3896569864592477339;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3480.5570068359375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.423465967178344727) ) ) {
                    sum += (double)0.4754086440693012783;
                  } else {
                    sum += (double)0.393314700211727819;
                  }
                } else {
                  sum += (double)0.3258522026070329591;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02025000005960464478) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3422569930553436279) ) ) {
                sum += (double)0.5445576191683415557;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2611.2100830078125) ) ) {
                  sum += (double)0.6662878123715753054;
                } else {
                  sum += (double)0.6137799157894735513;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3593995124101638794) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.33291530609130859) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3796.2705078125) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4960500001907348633) ) ) {
                      sum += (double)0.4912727047862806007;
                    } else {
                      sum += (double)0.5253933990231989259;
                    }
                  } else {
                    sum += (double)0.5532928574334681215;
                  }
                } else {
                  sum += (double)0.3793045589231334724;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.20640254020690918) ) ) {
                    sum += (double)0.5730241049498853156;
                  } else {
                    sum += (double)0.6393538823529412163;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07950000092387199402) ) ) {
                    sum += (double)0.5852935068139996089;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3942845016717910767) ) ) {
                      sum += (double)0.5538853745489079605;
                    } else {
                      sum += (double)0.4566730534639787398;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3608281761407852173) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16494.0283203125) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.41341972351074219) ) ) {
                sum += (double)0.4772030025578584134;
              } else {
                sum += (double)0.2543592253919733093;
              }
            } else {
              sum += (double)0.2019165102058249617;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4016999900341033936) ) ) {
              sum += (double)0.0976349209654876482;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14795.021484375) ) ) {
                sum += (double)0.1590810309486583585;
              } else {
                sum += (double)0.2949942792978444972;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.896885991096496582) ) ) {
          sum += (double)0.3070165025718505913;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21313.9375) ) ) {
            sum += (double)0.2545842171454639757;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.758207559585571289) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                sum += (double)0.2640154081133726516;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1154000014066696167) ) ) {
                  sum += (double)0.03932296338414884712;
                } else {
                  sum += (double)0.122554845558625447;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.041625142097473145) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5919.336181640625) ) ) {
                  sum += (double)0.03336996711492062201;
                } else {
                  sum += (double)0.01416988333333333433;
                }
              } else {
                sum += (double)0.06186443245416468895;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.03952598571777344) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5080394744873046875) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2764.6925048828125) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09219999983906745911) ) ) {
                  sum += (double)0.6676110766771947702;
                } else {
                  sum += (double)0.5767536470495756573;
                }
              } else {
                sum += (double)0.5297496137915215231;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06799999997019767761) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7933999896049499512) ) ) {
                  sum += (double)0.6963972696261199191;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5611950159072875977) ) ) {
                    sum += (double)0.7298958052287582987;
                  } else {
                    sum += (double)0.7631916717391303839;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.7865452766418457) ) ) {
                  sum += (double)0.6672444928946830167;
                } else {
                  sum += (double)0.6031713284190804991;
                }
              }
            }
          } else {
            sum += (double)0.4412229116989249134;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3240606635808944702) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567690074443817139) ) ) {
                sum += (double)0.7378265369052484646;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7084965109825134277) ) ) {
                  sum += (double)0.7887811124735729651;
                } else {
                  sum += (double)0.7473292396297483986;
                }
              }
            } else {
              sum += (double)0.6685257673753589591;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01849999930709600449) ) ) {
              sum += (double)0.8957885636363636106;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6342000067234039307) ) ) {
                sum += (double)0.7609326464461304562;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.23895031213760376) ) ) {
                  sum += (double)0.8643539647058824382;
                } else {
                  sum += (double)0.8052904942912838537;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.074011802673339844) ) ) {
          sum += (double)0.5448171726230361944;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
            sum += (double)0.4876604281877843783;
          } else {
            sum += (double)0.2092188240624145712;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3923554867506027222) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4999999850988388062) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            sum += (double)0.01175311545189504543;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1845415011048316956) ) ) {
              sum += (double)0.08355900832137733159;
            } else {
              sum += (double)0.1325629642200473468;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.741173475980758667) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1685.1536865234375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01729999948292970657) ) ) {
                sum += (double)0.3262812013832981362;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.682360410690307617) ) ) {
                  sum += (double)0.2572788551692735126;
                } else {
                  sum += (double)0.1347067320864777651;
                }
              }
            } else {
              sum += (double)0.4217440597851010442;
            }
          } else {
            sum += (double)0.070269504107341757;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.01704549789428711) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.31666946411132812) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09475000202655792236) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1088919974863529205) ) ) {
                  sum += (double)0.005862171428571429435;
                } else {
                  sum += (double)0.01553543157894736633;
                }
              } else {
                sum += (double)0.04400736067077200969;
              }
            } else {
              sum += (double)0.09379679640595112167;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.35714340209960938) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2434.1444091796875) ) ) {
                    sum += (double)0.006470447058823529211;
                  } else {
                    sum += (double)0.00959040000000000066;
                  }
                } else {
                  sum += (double)0.03153168453486657891;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8187500238418579102) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.005943320000000001935;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)121.6741371154785156) ) ) {
                      sum += (double)0.007455364705882352484;
                    } else {
                      sum += (double)0.004947200000000001423;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5010244697332382202) ) ) {
                    sum += (double)0.01748696974789916078;
                  } else {
                    sum += (double)0.004483880000000000851;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001499999983934685588) ) ) {
                sum += (double)0.06770698194833488226;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05434999987483024597) ) ) {
                  sum += (double)0.006688984615384616778;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.94999980926513672) ) ) {
                    sum += (double)0.05130437385211137485;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3063500076532363892) ) ) {
                      sum += (double)0.006614714982578399557;
                    } else {
                      sum += (double)0.02483029315068492962;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4288852214813232422) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2914834916591644287) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03084999974817037582) ) ) {
                sum += (double)0.178552449625918791;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3679367154836654663) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7481499910354614258) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2090284973382949829) ) ) {
                      sum += (double)0.02703961859757951156;
                    } else {
                      sum += (double)0.07517310692117433468;
                    }
                  } else {
                    sum += (double)0.1192254892467465577;
                  }
                } else {
                  sum += (double)0.166546917524773852;
                }
              }
            } else {
              sum += (double)0.2200103693751223333;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2944000065326690674) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2528180032968521118) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.82516765594482422) ) ) {
                  sum += (double)0.00893065454545454579;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20283.6181640625) ) ) {
                    sum += (double)0.01592984285714285977;
                  } else {
                    sum += (double)0.03698672823667904785;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.35661506652832031) ) ) {
                  sum += (double)0.02288217333333333187;
                } else {
                  sum += (double)0.06828465425737860472;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8000000119209289551) ) ) {
                sum += (double)0.1638843254453902776;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6256621778011322021) ) ) {
                  sum += (double)0.1201259503683388963;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.084013700485229492) ) ) {
                    sum += (double)0.03853177958475066667;
                  } else {
                    sum += (double)0.02023634477791116937;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5399999916553497314) ) ) {
          sum += (double)0.130688095883132599;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.870000004768371582) ) ) {
            sum += (double)0.3484807211491215972;
          } else {
            sum += (double)0.1757574345841093899;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.376512527465820312) ) ) {
            sum += (double)0.4308914986016368909;
          } else {
            sum += (double)0.2206659771482044619;
          }
        } else {
          sum += (double)0.5306898988483556012;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4698535054922103882) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7597746551036834717) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.182188510894775391) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2946670055389404297) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0297999996691942215) ) ) {
              sum += (double)0.5665079571413860204;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.84961390495300293) ) ) {
                sum += (double)0.4770277215467979004;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2117165029048919678) ) ) {
                  sum += (double)0.2445449224482267314;
                } else {
                  sum += (double)0.3722507219033480697;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003499999875202775002) ) ) {
              sum += (double)0.6738428500663422582;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4195740073919296265) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5792.010009765625) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3352065086364746094) ) ) {
                    sum += (double)0.4737095620725783052;
                  } else {
                    sum += (double)0.5141370704429920613;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.009523868560791016) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3683640062808990479) ) ) {
                      sum += (double)0.5561614553708258413;
                    } else {
                      sum += (double)0.5977959679487179212;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2552237734198570251) ) ) {
                      sum += (double)0.5491580791153819474;
                    } else {
                      sum += (double)0.4752505418624646261;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1380342543125152588) ) ) {
                  sum += (double)0.5771331544081488296;
                } else {
                  sum += (double)0.6202269971945181259;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3467229902744293213) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.84718418121337891) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001999999949475750327) ) ) {
                sum += (double)0.5441834829405163276;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2528089955449104309) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.9368133544921875) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.98917770385742188) ) ) {
                      sum += (double)0.2432219212593296487;
                    } else {
                      sum += (double)0.1368373892671515824;
                    }
                  } else {
                    sum += (double)0.3699692942939572515;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3008600026369094849) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16390.32568359375) ) ) {
                      sum += (double)0.4858828536320076164;
                    } else {
                      sum += (double)0.3423255447606559088;
                    }
                  } else {
                    sum += (double)0.2574434352611950638;
                  }
                }
              }
            } else {
              sum += (double)0.1060287530768532632;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.70351552963256836) ) ) {
              sum += (double)0.5719026702126669415;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3859239816665649414) ) ) {
                sum += (double)0.4572386933655347985;
              } else {
                sum += (double)0.3222906676137016202;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.722097396850585938) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
            sum += (double)0.3960417561235566319;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.764249086380004883) ) ) {
              sum += (double)0.3855205544858172351;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4342.831787109375) ) ) {
                sum += (double)0.2769155819864736467;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1154000014066696167) ) ) {
                  sum += (double)0.03683668096526045849;
                } else {
                  sum += (double)0.1490765574512424585;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18550.0615234375) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.63336181640625) ) ) {
              sum += (double)0.3499034350709256391;
            } else {
              sum += (double)0.05417367820496532538;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.383478999137878418) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.18286848068237305) ) ) {
                sum += (double)0.009503312000000001605;
              } else {
                sum += (double)0.03085152353297035757;
              }
            } else {
              sum += (double)0.07597164627652863711;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3479607552289962769) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5857160091400146484) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02749999985098838806) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8015999794006347656) ) ) {
              sum += (double)0.6412511535692045905;
            } else {
              sum += (double)0.7328826552380952597;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3022.2926025390625) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5875.48828125) ) ) {
                sum += (double)0.6187513663106093409;
              } else {
                sum += (double)0.5290286807257901236;
              }
            } else {
              sum += (double)0.6524145096482465433;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7415895164012908936) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121499985456466675) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.910897254943847656) ) ) {
                sum += (double)0.7251796325909236618;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.36068117618560791) ) ) {
                  sum += (double)0.7874466997150995073;
                } else {
                  sum += (double)0.7523493785714284732;
                }
              }
            } else {
              sum += (double)0.6916586033884456475;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07485000044107437134) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8238435089588165283) ) ) {
                sum += (double)0.8471802333333333657;
              } else {
                sum += (double)0.9004843749999997815;
              }
            } else {
              sum += (double)0.8152554402985074944;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.292340755462646484) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.44355440139770508) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5449129939079284668) ) ) {
              sum += (double)0.563851058387369819;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6147773563861846924) ) ) {
                sum += (double)0.7298753813581573269;
              } else {
                sum += (double)0.6110840314698308129;
              }
            }
          } else {
            sum += (double)0.4683650806341161932;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.999556601047515869) ) ) {
            sum += (double)0.5421268474523388559;
          } else {
            sum += (double)0.3278766817888538188;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.405882358551025391) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.759782612323760986) ) ) {
        sum += (double)0.5618914346323201636;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1003.66339111328125) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953699976205825806) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1420037746429443359) ) ) {
              sum += (double)0.1417931849960910873;
            } else {
              sum += (double)0.2422579262447180637;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5125246047973632812) ) ) {
              sum += (double)0.4540015245967692903;
            } else {
              sum += (double)0.3093227021478157091;
            }
          }
        } else {
          sum += (double)0.08290079169251100832;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.70384645462036133) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.125330999493598938) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5621.76220703125) ) ) {
              sum += (double)0.06278832357474883885;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.62272739410400391) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.261111259460449219) ) ) {
                  sum += (double)0.01187764210526315832;
                } else {
                  sum += (double)0.005489266666666666773;
                }
              } else {
                sum += (double)0.03118775510204081433;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.41666793823242188) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07490000128746032715) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.68131875991821289) ) ) {
                  sum += (double)0.0280962000000000052;
                } else {
                  sum += (double)0.01026685000000000271;
                }
              } else {
                sum += (double)0.09959564435933988824;
              }
            } else {
              sum += (double)0.1340914846220859769;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3250000029802322388) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2164499983191490173) ) ) {
                sum += (double)0.01644877142857142927;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.25) ) ) {
                    sum += (double)0.00726200000000000196;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1908999979496002197) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004794072727272728068;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05845000036060810089) ) ) {
                    sum += (double)0.01270063529411764869;
                  } else {
                    sum += (double)0.004940857142857143537;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7702707648277282715) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)197.5512771606445312) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4585999995470046997) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5688103139400482178) ) ) {
                      sum += (double)0.06098440829460350515;
                    } else {
                      sum += (double)0.02550992686980609395;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4871069639921188354) ) ) {
                      sum += (double)0.01036402758620689687;
                    } else {
                      sum += (double)0.01801917647058823291;
                    }
                  }
                } else {
                  sum += (double)0.06086140444444445435;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1553499996662139893) ) ) {
                  sum += (double)0.01164499777265745259;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2742000073194503784) ) ) {
                    sum += (double)0.005200000000000000629;
                  } else {
                    sum += (double)0.004000000000000000083;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08356950059533119202) ) ) {
              sum += (double)0.08437704183006536351;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2128235027194023132) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.39042091369628906) ) ) {
                  sum += (double)0.01703483428571428773;
                } else {
                  sum += (double)0.008299294117647059224;
                }
              } else {
                sum += (double)0.04109530666666667137;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.64260244369506836) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5964152216911315918) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02224999945610761642) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.02048873901367188) ) ) {
                  sum += (double)0.2012767213009809819;
                } else {
                  sum += (double)0.3924405177165229963;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1314999982714653015) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.21875) ) ) {
                    sum += (double)0.1778648703612097093;
                  } else {
                    sum += (double)0.1026123927169603489;
                  }
                } else {
                  sum += (double)0.2305084549726588994;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.184615612030029297) ) ) {
                sum += (double)0.09693433395061729074;
              } else {
                sum += (double)0.008473522663802362728;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2197619974613189697) ) ) {
                sum += (double)0.03460595913621262315;
              } else {
                sum += (double)0.295632526356419123;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1948949992656707764) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8849999904632568359) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3977500051259994507) ) ) {
                    sum += (double)0.008763200000000000503;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6320999860763549805) ) ) {
                      sum += (double)0.04302766703296703049;
                    } else {
                      sum += (double)0.01193708333333333427;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.03638458251953125) ) ) {
                    sum += (double)0.09948248913237608959;
                  } else {
                    sum += (double)0.02374136843434343502;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6150684952735900879) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.66075229644775391) ) ) {
                    sum += (double)0.06503526474421346404;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.4392852783203125) ) ) {
                      sum += (double)0.2162853067636104909;
                    } else {
                      sum += (double)0.08900558294512879443;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3497669994831085205) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.45364093780517578) ) ) {
                      sum += (double)0.04014592698412698668;
                    } else {
                      sum += (double)0.01294910129773822922;
                    }
                  } else {
                    sum += (double)0.08552364866589935721;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.3094307659646227116;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6284088790416717529) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.6894841194152832) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2686810046434402466) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0171500006690621376) ) ) {
              sum += (double)0.5365143339247966381;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12839.53271484375) ) ) {
                sum += (double)0.4458388603706424647;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3050643354654312134) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2195315062999725342) ) ) {
                    sum += (double)0.1644425050779592667;
                  } else {
                    sum += (double)0.3008194702578824153;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4577737748622894287) ) ) {
                    sum += (double)0.4665269782240433205;
                  } else {
                    sum += (double)0.2552780815375303991;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3549064993858337402) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01705000083893537521) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3047579973936080933) ) ) {
                  sum += (double)0.6049518204971500168;
                } else {
                  sum += (double)0.5505801825977004738;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.01013278961181641) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3695.2999267578125) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1563500016927719116) ) ) {
                      sum += (double)0.4525020065966587901;
                    } else {
                      sum += (double)0.5150234965525407604;
                    }
                  } else {
                    sum += (double)0.5598225150427662555;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1383499950170516968) ) ) {
                    sum += (double)0.2851137217411295888;
                  } else {
                    sum += (double)0.4629017700777351974;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2855009734630584717) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0009000000136438757181) ) ) {
                    sum += (double)0.6853823115384614084;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05234999954700469971) ) ) {
                      sum += (double)0.5967501777526438289;
                    } else {
                      sum += (double)0.6543763622461170604;
                    }
                  }
                } else {
                  sum += (double)0.570056313294068695;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
                  sum += (double)0.5987743807479602998;
                } else {
                  sum += (double)0.4677111559704653088;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1920929998159408569) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1293999999761581421) ) ) {
              sum += (double)0.3138807669576089698;
            } else {
              sum += (double)0.1046681888262762788;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1410787776112556458) ) ) {
              sum += (double)0.2130989646395162473;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.13317298889160156) ) ) {
                sum += (double)0.4632049258545345993;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
                  sum += (double)0.3776570954821645842;
                } else {
                  sum += (double)0.2345879703386273829;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.4148097038269043) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.380549997091293335) ) ) {
              sum += (double)0.5508154213794524967;
            } else {
              sum += (double)0.3529337522643696823;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2557999938726425171) ) ) {
              sum += (double)0.06449028914579968408;
            } else {
              sum += (double)0.2462281904681680733;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.177647113800048828) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07725000008940696716) ) ) {
              sum += (double)0.1382600830918845336;
            } else {
              sum += (double)0.3773453877069332663;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1788500025868415833) ) ) {
              sum += (double)0.1581199759417547257;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1886499971151351929) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3159705102443695068) ) ) {
                  sum += (double)0.01393437647058823683;
                } else {
                  sum += (double)0.05762290600971207294;
                }
              } else {
                sum += (double)0.09399663190657359113;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7607523500919342041) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6155470013618469238) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.05545902252197266) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280472755432128906) ) ) {
                  sum += (double)0.6033687688480668943;
                } else {
                  sum += (double)0.5433282334812716829;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4607.9423828125) ) ) {
                  sum += (double)0.5911714443757997151;
                } else {
                  sum += (double)0.6880575766081871159;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280848264694213867) ) ) {
                sum += (double)0.6366613424763841733;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.429985165596008301) ) ) {
                  sum += (double)0.7430618080000001013;
                } else {
                  sum += (double)0.6777344684162309729;
                }
              }
            }
          } else {
            sum += (double)0.4059031848633486983;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7322590053081512451) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1101499982178211212) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8398000001907348633) ) ) {
                sum += (double)0.7431108964285713103;
              } else {
                sum += (double)0.7972021999999998609;
              }
            } else {
              sum += (double)0.7075697289805604751;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8142319917678833008) ) ) {
                sum += (double)0.8310558071428568727;
              } else {
                sum += (double)0.8753233809283310629;
              }
            } else {
              sum += (double)0.7685436082989868245;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6760014891624450684) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.5356067936168681376;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2562.16064453125) ) ) {
              sum += (double)0.4031477456650039981;
            } else {
              sum += (double)0.2329711551983162099;
            }
          }
        } else {
          sum += (double)0.6582918976758508345;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.972972869873046875) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8593499958515167236) ) ) {
          sum += (double)0.08465367373151980179;
        } else {
          sum += (double)0.1515746824024437611;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47832450270652771) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1931969523429870605) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2947739958763122559) ) ) {
              sum += (double)0.3045334435089646075;
            } else {
              sum += (double)0.4823974386735541131;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.383582830429077148) ) ) {
              sum += (double)0.1947859357751401121;
            } else {
              sum += (double)0.3187197336479929421;
            }
          }
        } else {
          sum += (double)0.5324498164812466738;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4468619972467422485) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12549018859863281) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1254660002887248993) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1000000014901161194) ) ) {
                sum += (double)0.007561000000000002615;
              } else {
                sum += (double)0.06440219255189255643;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.710317611694335938) ) ) {
                sum += (double)0.05635214475918734478;
              } else {
                sum += (double)0.171435996536398072;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8356499969959259033) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.22174072265625) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3730000108480453491) ) ) {
                      sum += (double)0.005139066666666666609;
                    } else {
                      sum += (double)0.009579857142857143432;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2189789563417434692) ) ) {
                      sum += (double)0.004718142222222224819;
                    } else {
                      sum += (double)0.004000000000000002685;
                    }
                  }
                } else {
                  sum += (double)0.00854165217391304743;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3100499957799911499) ) ) {
                  sum += (double)0.04235936503003360359;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0718655027449131012) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3690649718046188354) ) ) {
                      sum += (double)0.007225900000000000378;
                    } else {
                      sum += (double)0.004000000000000000951;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6613000035285949707) ) ) {
                      sum += (double)0.009940377777777779922;
                    } else {
                      sum += (double)0.018040160000000003;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.85454463958740234) ) ) {
                sum += (double)0.06816988131823813191;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2719516754150390625) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1438999995589256287) ) ) {
                    sum += (double)0.07446018803089149429;
                  } else {
                    sum += (double)0.02066197037037036804;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6457999944686889648) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7722391784191131592) ) ) {
                      sum += (double)0.01776228327080326894;
                    } else {
                      sum += (double)0.008153703306958815997;
                    }
                  } else {
                    sum += (double)0.03376696332504832559;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.1404036945054945029;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4285600036382675171) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9298.3466796875) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2464440762996673584) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16459.00341796875) ) ) {
                sum += (double)0.1291518565777192984;
              } else {
                sum += (double)0.0751158963524291845;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4696499854326248169) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15855.17236328125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2455404922366142273) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)120.9204177856445312) ) ) {
                      sum += (double)0.03319491090774367298;
                    } else {
                      sum += (double)0.008129888888888887888;
                    }
                  } else {
                    sum += (double)0.04526817480479152639;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1948499977588653564) ) ) {
                    sum += (double)0.04291907712629689647;
                  } else {
                    sum += (double)0.09178202440253138694;
                  }
                }
              } else {
                sum += (double)0.1142323317147346251;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7162883579730987549) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.52173995971679688) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1304500028491020203) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9099999964237213135) ) ) {
                      sum += (double)0.04307561996884578387;
                    } else {
                      sum += (double)0.1015138617970642032;
                    }
                  } else {
                    sum += (double)0.204436021127742118;
                  }
                } else {
                  sum += (double)0.2415177702125244907;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7016999721527099609) ) ) {
                  sum += (double)0.4266027828688465084;
                } else {
                  sum += (double)0.1785851951034456708;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.8507075309753418) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3275.56103515625) ) ) {
                  sum += (double)0.05183452493039402559;
                } else {
                  sum += (double)0.01130451200000000267;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8300000131130218506) ) ) {
                  sum += (double)0.1117497195575666152;
                } else {
                  sum += (double)0.0443749527162977872;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1182000003755092621) ) ) {
            sum += (double)0.1743398678084659148;
          } else {
            sum += (double)0.4000900109695762485;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4604820013046264648) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.92792224884033203) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3168849945068359375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.6074291991341992381;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13330.00634765625) ) ) {
                  sum += (double)0.4190565016293990586;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7506.543701171875) ) ) {
                    sum += (double)0.19351665377780225;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.219426393508911133) ) ) {
                      sum += (double)0.3011651279045474139;
                    } else {
                      sum += (double)0.4415895790210773164;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4338.4638671875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6198500096797943115) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.132749997079372406) ) ) {
                      sum += (double)0.4989516739769666587;
                    } else {
                      sum += (double)0.5262881147582794128;
                    }
                  } else {
                    sum += (double)0.4154670836844909787;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.640522956848144531) ) ) {
                    sum += (double)0.4331331752629096199;
                  } else {
                    sum += (double)0.2345245013839255821;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3701220005750656128) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6076000034809112549) ) ) {
                  sum += (double)0.5927531472212306252;
                } else {
                  sum += (double)0.4845620024177642593;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.09664154052734375) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6332499980926513672) ) ) {
                    sum += (double)0.6435845198148147928;
                  } else {
                    sum += (double)0.5967413797235023853;
                  }
                } else {
                  sum += (double)0.6804888254566209271;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.009523868560791016) ) ) {
                sum += (double)0.5846149705895075099;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3222.9814453125) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2935499995946884155) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.204212427139282227) ) ) {
                      sum += (double)0.5136581325575619861;
                    } else {
                      sum += (double)0.5802908209540946771;
                    }
                  } else {
                    sum += (double)0.4716599739879836495;
                  }
                } else {
                  sum += (double)0.3515965184514182607;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.366830974817276001) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1298500001430511475) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6823499798774719238) ) ) {
                sum += (double)0.4931844594481038513;
              } else {
                sum += (double)0.3877332372332508159;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16494.0283203125) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.89320659637451172) ) ) {
                  sum += (double)0.4567239402640488888;
                } else {
                  sum += (double)0.2703639147227281936;
                }
              } else {
                sum += (double)0.1309760490238987274;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.52592706680297852) ) ) {
              sum += (double)0.3396584966715607279;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4571999907493591309) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3836500048637390137) ) ) {
                  sum += (double)0.09415108428142170138;
                } else {
                  sum += (double)0.2000322501960228594;
                }
              } else {
                sum += (double)0.3225400910475723637;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.813309073448181152) ) ) {
          sum += (double)0.3055845826093284145;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3895944952964782715) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255471229553222656) ) ) {
              sum += (double)0.1373271722089080826;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4948.815673828125) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1082499995827674866) ) ) {
                  sum += (double)0.1155756930175374508;
                } else {
                  sum += (double)0.05079631447846393033;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.313299417495727539) ) ) {
                  sum += (double)0.02834016270797475381;
                } else {
                  sum += (double)0.007419552941176471225;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.151862621307373047) ) ) {
              sum += (double)0.2355572105805066874;
            } else {
              sum += (double)0.1121655824620114428;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5403254926204681396) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.68488168716430664) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.124415397644042969) ) ) {
                  sum += (double)0.6287265701775720528;
                } else {
                  sum += (double)0.5688497923939728196;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4998.501220703125) ) ) {
                  sum += (double)0.5986516887000757903;
                } else {
                  sum += (double)0.6928123133333332628;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1508.35369873046875) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.015925168991088867) ) ) {
                  sum += (double)0.6365553520859578152;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09205000102519989014) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3327.785400390625) ) ) {
                      sum += (double)0.7308128368421052956;
                    } else {
                      sum += (double)0.689675479191919294;
                    }
                  } else {
                    sum += (double)0.6626504438282023735;
                  }
                }
              } else {
                sum += (double)0.7540927514344263338;
              }
            }
          } else {
            sum += (double)0.4341013837340261805;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6791799962520599365) ) ) {
              sum += (double)0.7991875263157894871;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06719999760389328003) ) ) {
                sum += (double)0.7596385879659466323;
              } else {
                sum += (double)0.7337177209039130732;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0271500004455447197) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8998999893665313721) ) ) {
                sum += (double)0.8690758111888110538;
              } else {
                sum += (double)0.9029205411764705813;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1074000000953674316) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.400805234909057617) ) ) {
                  sum += (double)0.8097221709750564989;
                } else {
                  sum += (double)0.8470880533333334794;
                }
              } else {
                sum += (double)0.7887175464761687627;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6085674762725830078) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
            sum += (double)0.5233267571306837729;
          } else {
            sum += (double)0.2327127140499756497;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.85275346040725708) ) ) {
            sum += (double)0.6262467818710666378;
          } else {
            sum += (double)0.4688833604494851426;
          }
        }
      }
    }
  }
  return sum;
}
