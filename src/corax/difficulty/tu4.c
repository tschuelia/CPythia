
#include "prediction.h"

void predict_unit4(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4550085000000000934) ) ) {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6850000000000001643) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930090000000000194) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.93082137161084688) ) ) {
            result[0] += -0.003887790321581936;
          } else {
            result[0] += -0.0018168414523392952;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
            result[0] += 0.002499686734226126;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08188154061328727085) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
                result[0] += -0.0011926244189114292;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.5392857142857395) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0034394653400456527;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7291161822165118656) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09695000000000000839) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.002549844483520439;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                      result[0] += 0.00290209680764898;
                    } else {
                      result[0] += -0.0009183384094866789;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770958479253431361) ) ) {
                    result[0] += -0.0015208407066040228;
                  } else {
                    result[0] += 0.002801933477798734;
                  }
                }
              } else {
                result[0] += -0.0023840105214045105;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.117150000000000018) ) ) {
          result[0] += -0.004262056650623425;
        } else {
          result[0] += -0.00016292042835098152;
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2523846967694989285) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7285500000000001419) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9290.770887201673759) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.88731060606061618) ) ) {
              result[0] += 0.007454512007875333;
            } else {
              result[0] += 0.019471369196934492;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2005135503574813904) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8135000000000001119) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1829182123299770424) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1110651606754299442) ) ) {
                  result[0] += 0.0007034297517675523;
                } else {
                  result[0] += 0.009359679802159657;
                }
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.138110787595931539) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05796652800734378858) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03931893328124715786) ) ) {
                    result[0] += 0.004996124548144355;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3791.556210767445464) ) ) {
                      result[0] += -0.0002494264376672131;
                    } else {
                      result[0] += -0.007416281032049699;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04395000000000000989) ) ) {
                    result[0] += 0.00883022625373282;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1090413665276023236) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04908122139453940935) ) ) {
                    result[0] += 0.000174327514728119;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8312500000000001554) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.006751317536432559;
                    }
                  }
                } else {
                  result[0] += 0.003728172305387267;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04505000000000000671) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3028.043267225880754) ) ) {
                  result[0] += -0.004185687383281676;
                } else {
                  result[0] += 0.0017399423934794547;
                }
              } else {
                result[0] += -0.009695079772852416;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1446500000000000286) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1472221264172316191) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38051350000000006) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3862.309036383199327) ) ) {
                      result[0] += 0.0012638504707116844;
                    } else {
                      result[0] += -0.002918599473154918;
                    }
                  } else {
                    result[0] += 0.0027636978414148764;
                  }
                } else {
                  result[0] += 0.006673845605734378;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3483525000000000649) ) ) {
                  result[0] += -0.0043521046838636435;
                } else {
                  result[0] += -0.00019171096154017937;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5938500000000001) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4369219652904519635) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.225650000000000045) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5229000000000001425) ) ) {
                result[0] += 0.012989776026400399;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2732877049818078219) ) ) {
                    result[0] += 0.0008919520344857942;
                  } else {
                    result[0] += 0.01025338426689387;
                  }
                }
              }
            } else {
              result[0] += -0.0004068345248654321;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
              result[0] += 0.008984896056690422;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05015000000000000707) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
                  result[0] += 0.00457863096005269;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.32484954126279364) ) ) {
                    result[0] += 0.0010880665961815945;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
                      result[0] += -0.0032032192141596134;
                    } else {
                      result[0] += -0.0091356917871014;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.86758263639984179) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4123000000000000553) ) ) {
                      result[0] += -0.0005548678058351898;
                    } else {
                      result[0] += 0.0014537690897547494;
                    }
                  } else {
                    result[0] += 0.011630984438302462;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7158.326501222521074) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5454500000000001014) ) ) {
                      result[0] += -0.0015251165845721554;
                    } else {
                      result[0] += -0.0061621240690598305;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.15097402597402976) ) ) {
                      result[0] += 0.005143897818546893;
                    } else {
                      result[0] += -0.00014351520511117277;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003250000000000000718) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.956944444444444819) ) ) {
              result[0] += -0.001098934322681778;
            } else {
              result[0] += -0.010392072412136605;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6107500000000001261) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4148169003269751576) ) ) {
                  result[0] += -0.001289814115486766;
                } else {
                  result[0] += -0.011455178886323145;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.05227272727272947) ) ) {
                  result[0] += 0.0017552031197675217;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4681341459817245365) ) ) {
                    result[0] += -0.006603921601803622;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33592821992194288) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3755158646863254179) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.746250000000000191) ) ) {
                      result[0] += 0.004089793345814358;
                    } else {
                      result[0] += -0.00018604233162991865;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                      result[0] += -0.0035407266814965195;
                    } else {
                      result[0] += 0.001583966023754313;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4006080000000000751) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228310000000000346) ) ) {
                      result[0] += -0.0021821875721577833;
                    } else {
                      result[0] += 0.0006760629626000677;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.007831336829618755;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
                  result[0] += 0.006035512768728474;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4173837132183961796) ) ) {
                    result[0] += -0.0028794279638624225;
                  } else {
                    result[0] += 0.0025510235113447442;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6950000000000000622) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
        result[0] += 0;
      } else {
        result[0] += -0.008786549894438531;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02622543668122271146) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3514705882352941457) ) ) {
              result[0] += 0.0013729005340584431;
            } else {
              result[0] += 0.006066973717526868;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.67204301075269157) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.890135144497803954) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2690500000000000669) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.775755173515387475) ) ) {
                    result[0] += 0.0074502858905288434;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
                      result[0] += -0.000801129744820829;
                    } else {
                      result[0] += 0.005124497730607343;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6835161312401194511) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.442099999999999993) ) ) {
                      result[0] += 0.004970729948116295;
                    } else {
                      result[0] += 0.0015315868554898323;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.196750000000000036) ) ) {
                      result[0] += -0.0036416022428633456;
                    } else {
                      result[0] += 4.4896173185550026e-05;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.512751786874594107) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04395000000000000989) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.003504749005219275;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2879000000000001003) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-569.3023343863511627) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.006646527607296211;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3922500000000000431) ) ) {
                      result[0] += 0.003280189305192338;
                    } else {
                      result[0] += -0.0004124628246393417;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.50897851045040099) ) ) {
                result[0] += -0.006012323898999764;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08262777143435907912) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)15083.44233543514747) ) ) {
                      result[0] += 0.005205433086717841;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                      result[0] += 8.860124948239177e-07;
                    } else {
                      result[0] += -0.004100714644077299;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06285000000000001696) ) ) {
                    result[0] += 0.006711174420308813;
                  } else {
                    result[0] += 0.001201195594076103;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.117150000000000018) ) ) {
            result[0] += 0.0011389561418843194;
          } else {
            result[0] += 0.007459466251957469;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4648510000000000697) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2660000000000000697) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3660021954817824219) ) ) {
              result[0] += 0.005240477780541849;
            } else {
              result[0] += -0.0015974774869797973;
            }
          } else {
            result[0] += 0.006851571950257558;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2802500000000000546) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36860497623707644) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)62.86752962768378694) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.011132169310762736;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16031.30829179268949) ) ) {
                result[0] += 0.0026851019612715503;
              } else {
                result[0] += -0.004445960937572367;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7517.831857566079634) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
                result[0] += 0.0064472549293006455;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6327627825323679511) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3851.015235517284509) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5402301307847082734) ) ) {
                      result[0] += 0.006873674165110722;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2128500000000000114) ) ) {
                      result[0] += 0.002841350542021948;
                    } else {
                      result[0] += -0.0017843004194188885;
                    }
                  }
                } else {
                  result[0] += -0.005904899049968804;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1201.367728319936987) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1221000000000000141) ) ) {
                  result[0] += -0.004787452539723733;
                } else {
                  result[0] += 0.0066397923135734505;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4415.807239953120188) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3107.181136317587516) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4018505548079681078) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.008561461150895507;
                    }
                  } else {
                    result[0] += -0.011077983709105572;
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.0650000000000000161) ) ) {
      result[0] += -0.005241812830022444;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8969687899648990381) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)456.1989629287657522) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.7697158305976026238) ) ) {
              result[0] += 0.002154221835483398;
            } else {
              result[0] += -0.0011496399903653837;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3897137548809674334) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3184.283198592457211) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.00305509442311484;
              }
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
            result[0] += 0.00947995648798488;
          } else {
            result[0] += 0.0013672753206533427;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9999263622974964294) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19099.32569550648986) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
              result[0] += -0.00454350522444135;
            } else {
              result[0] += 0;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3755158646863254179) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7424500000000001654) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.43376557335367671) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
                    result[0] += 0.004649959199946855;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
                      result[0] += -0.0016093902407715577;
                    } else {
                      result[0] += 0.0018162306441922942;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.86758263639984179) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2804.56287847494923) ) ) {
                      result[0] += 0.008576583206615607;
                    } else {
                      result[0] += 0.0025874234428600925;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1891267783217778775) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04272266684492439376) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                      result[0] += -0.005854452169630282;
                    } else {
                      result[0] += 0.0009537531072500879;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06446597211275277572) ) ) {
                      result[0] += 0.007426262326334991;
                    } else {
                      result[0] += 0.0020694973758689952;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.12532467532468061) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
                      result[0] += 0.0002099008662752045;
                    } else {
                      result[0] += -0.003537714999361684;
                    }
                  } else {
                    result[0] += 0.005989694460657631;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4190.954657040626444) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.144153487166192917) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0051541230276018046;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2779054249029654367) ) ) {
                      result[0] += 0.0011224124579666736;
                    } else {
                      result[0] += -0.0022652390331820297;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4706500000000000683) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.007691606846404569;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5776500000000001078) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4958483270806217091) ) ) {
                    result[0] += 0.006543907344823554;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
                      result[0] += 0.0036386087974129306;
                    } else {
                      result[0] += 0.00046011879025121443;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3462985000000000646) ) ) {
                    result[0] += -0.004408538427987143;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.481489856570616936) ) ) {
                      result[0] += -0.0007547748101634848;
                    } else {
                      result[0] += 0.0032611969667881275;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5376165000000000527) ) ) {
            result[0] += -0.008526629150553633;
          } else {
            result[0] += 0;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20302.8995617723449) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1909226976060683645) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03843854959155177525) ) ) {
            result[0] += 0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
              result[0] += 0.0008559400541889944;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5666130000000001443) ) ) {
                result[0] += 0.007554790868168014;
              } else {
                result[0] += 0.0020820608222594764;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3787509271869893279) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5340269922761711197) ) ) {
              result[0] += -0.003994011114764019;
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4084000000000000408) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.007602177980606323;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.395011276321747484) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3205004002465369761) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4995331520331520725) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4709808304613328223) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1221000000000000141) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3724040000000000683) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.004943819864051981;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7866.211076535222674) ) ) {
                      result[0] += -0.0022271378899790355;
                    } else {
                      result[0] += 0.0014598677503988027;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4900.274382293213421) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999655000000000515) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.009078301234020262;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2082316587659429064) ) ) {
                      result[0] += 0.0004411321082775833;
                    } else {
                      result[0] += -0.001802563486929714;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.70944164869398918) ) ) {
                  result[0] += 0.00890145439748951;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2704678552648275836) ) ) {
                    result[0] += 0.005344031478972488;
                  } else {
                    result[0] += -0.0013164439126713693;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2340754640673623765) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5988367574978012975) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2113.689413772091484) ) ) {
                    result[0] += 0.0014235830348259596;
                  } else {
                    result[0] += -0.003237999232411457;
                  }
                } else {
                  result[0] += 0.004065636212802967;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3067500000000000782) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1473.234435796525304) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1160.815387464434707) ) ) {
                      result[0] += -0.006089000668920583;
                    } else {
                      result[0] += -0.014162893112252396;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5500179611347216779) ) ) {
                      result[0] += -0.007708343897277334;
                    } else {
                      result[0] += 0.0009165677255470611;
                    }
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.569111884291402359) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999655000000000515) ) ) {
                  result[0] += 0.0020815707577270122;
                } else {
                  result[0] += 0.013572630111717457;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126500000000001611) ) ) {
                  result[0] += -0.004406711777098577;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.029850000000000005) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4236293998663874238) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.005561051140501304;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6199606872203474728) ) ) {
                      result[0] += 0.004740532557600316;
                    } else {
                      result[0] += -0.0029756889927550064;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3289.059317362541606) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2081000000000000349) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02395000000000000254) ) ) {
                    result[0] += 0.0016077552130851905;
                  } else {
                    result[0] += 0.010397001949460484;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.358141500000000057) ) ) {
                      result[0] += -0.00047850044835927676;
                    } else {
                      result[0] += -0.008008168004853456;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
                      result[0] += 0.005704024063618018;
                    } else {
                      result[0] += -0.004535646469679208;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6014500000000001512) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7650000000000001243) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3850000000000000644) ) ) {
                      result[0] += -0.002415932565015577;
                    } else {
                      result[0] += 0.0022633036308906864;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5141168753850328121) ) ) {
                      result[0] += -0.012090454408097338;
                    } else {
                      result[0] += -0.0035164824957588897;
                    }
                  }
                } else {
                  result[0] += 0.0044683630070643755;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            result[0] += -0.001655564976228631;
          } else {
            result[0] += -0.007867128148733388;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.35781818181818537) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15774.24072148520463) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2888715000000000588) ) ) {
            result[0] += -0.0030785279949002466;
          } else {
            result[0] += 0.0020108386330086304;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
            result[0] += -0.0014685007510715038;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.431226121273369345) ) ) {
              result[0] += -0.00681352769306958;
            } else {
              result[0] += -0.0019378489882375532;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.61204013377927069) ) ) {
          result[0] += 0.0043003884240449515;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11367.30908202939645) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.30306122448979878) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)16180.09325483776956) ) ) {
                      result[0] += -0.0009461727288842117;
                    } else {
                      result[0] += 0.003305287131997098;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7246031178489703573) ) ) {
                      result[0] += -0.0018322911424257066;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.98611111111112137) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2660001773777408984) ) ) {
                      result[0] += -0.0026523148994354656;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.002721346805997312;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.455850000000000033) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1090413665276023236) ) ) {
                    result[0] += -0.006162236622984489;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)31299.3757595375755) ) ) {
                      result[0] += -0.003312825415250326;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.32834040296925338) ) ) {
                    result[0] += 0.0033367942355797694;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4148169003269751576) ) ) {
                      result[0] += -0.0037093555906432;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3450000000000000289) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1390480000000000327) ) ) {
                    result[0] += -0.0013497033098881916;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.0028175691407635486;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3339271889634866652) ) ) {
                  result[0] += 0.006690873435825373;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1499.104419668594574) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7291161822165118656) ) ) {
                      result[0] += 0.008195080808595002;
                    } else {
                      result[0] += -0.0010764615963562297;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                      result[0] += -0.003067218715515387;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.76341350601295943) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.007217427147562176;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.2322677322677329) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7581.571018954598003) ) ) {
                  result[0] += 0.007377432806845583;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2690500000000000669) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4527450000000000641) ) ) {
                    result[0] += 0.009176056259011835;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.643991500000000161) ) ) {
                      result[0] += -0.001272661548728896;
                    } else {
                      result[0] += 0.0030112272415392227;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4681341459817245365) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2067000000000000226) ) ) {
                      result[0] += 0.00644443766526517;
                    } else {
                      result[0] += -0.0011378634958527784;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.487126000000000059) ) ) {
                      result[0] += -0.0053299347257847185;
                    } else {
                      result[0] += -0.0007993594843643412;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04272266684492439376) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3213010000000000588) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)26013.27966640743398) ) ) {
          result[0] += -0.004934384544411433;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
            result[0] += 0.0036620490000264213;
          } else {
            result[0] += -0.0015642677018948212;
          }
        }
      } else {
        result[0] += -0.009342577208600421;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.0650000000000000161) ) ) {
          result[0] += -0.0021924738494998384;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
            result[0] += 0.005106647334154388;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.520019664933700887) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2135526242593671353) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7875500000000000833) ) ) {
                    result[0] += -0.003138613671377812;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.002248666949216387;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6603400946501547519) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
                    result[0] += 0.005420411466245628;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.921363443236741575) ) ) {
                result[0] += -0.004786385564842759;
              } else {
                result[0] += 0.001340822938005294;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)187.8653910326616767) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
            result[0] += 0.00038800268093314367;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3833.159599586038439) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                result[0] += -0.001902603049961649;
              } else {
                result[0] += -0.010355672853938512;
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1650000000000000355) ) ) {
                  result[0] += -0.0004031891756420368;
                } else {
                  result[0] += -0.004298659162576191;
                }
              } else {
                result[0] += 0.00024238602089074986;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.34234234234234506) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.56214887640449618) ) ) {
                result[0] += 0.011645807894058462;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4880421551248437795) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3427.976752410164409) ) ) {
                      result[0] += -0.002838308289097387;
                    } else {
                      result[0] += -0.0005822646038370691;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1735709706884873416) ) ) {
                      result[0] += 0.005059245107578455;
                    } else {
                      result[0] += -0.0005001838735041916;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3739500000000000601) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
                      result[0] += -0.0014340611975051543;
                    } else {
                      result[0] += -0.007056007221589543;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06815000000000000224) ) ) {
                  result[0] += 0.008328182105368225;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2865.318948452297718) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.81858974358974734) ) ) {
                      result[0] += -0.002100152863741277;
                    } else {
                      result[0] += -0.000127913886969496;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5350000000000001421) ) ) {
                      result[0] += -0.0007285058509667826;
                    } else {
                      result[0] += 0.004078540223193182;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2503885000000000693) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8021437310018827427) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05408888269713012925) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3115602405909643768) ) ) {
                      result[0] += -0.0017049709092830613;
                    } else {
                      result[0] += -0.0007890279813624111;
                    }
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)16180.09325483776956) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0020294462904307665;
                  }
                } else {
                  result[0] += 0.002834642928471726;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1607000000000000095) ) ) {
                result[0] += -0.0060062259599116714;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3309227930938458129) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2772624818106737554) ) ) {
                    result[0] += -0.0022736886991165345;
                  } else {
                    result[0] += 9.607451452139333e-05;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5606243401883367339) ) ) {
                    result[0] += -0.003669139598529532;
                  } else {
                    result[0] += -0.0012950090164334381;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6650000000000001465) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.0067307736775516925;
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1642951312239392114) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8551000000000000822) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6391.930040077767444) ) ) {
              result[0] += -0.00027115417741758465;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.45022222222222652) ) ) {
                  result[0] += 0.004599191263563551;
                } else {
                  result[0] += 5.369946725254644e-05;
                }
              } else {
                result[0] += 0.009436752818948062;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5090.688026845967215) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6051360000000001182) ) ) {
                result[0] += 0.007246470683868714;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
                  result[0] += -0.00010818750886358037;
                } else {
                  result[0] += 0.0033909266961881473;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.860555555555555962) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5420.781404110555741) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05015000000000000707) ) ) {
                      result[0] += 0.0030157938223023327;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02622543668122271146) ) ) {
                      result[0] += 0.0027635388186723854;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += -1.0763724280231202e-05;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9381000000000000449) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
                    result[0] += -0.0061928097098873135;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2276.637434844240943) ) ) {
                      result[0] += -0.0027595606250056725;
                    } else {
                      result[0] += 0.0026088406881248907;
                    }
                  }
                } else {
                  result[0] += -0.00814535039484956;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817765000000001407) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.100981848184818812) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8021437310018827427) ) ) {
                    result[0] += 0.001136580747827027;
                  } else {
                    result[0] += -5.315159276056364e-05;
                  }
                } else {
                  result[0] += 0.006575232712572514;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9631328576282706111) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6701500000000001345) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3926465801380922271) ) ) {
                      result[0] += 0.004819388580016905;
                    } else {
                      result[0] += 0.0005120258037503017;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.432034895516332895) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.007088646234872542;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8426833958685702175) ) ) {
                    result[0] += -0.008553340673113093;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
                      result[0] += -0.003347741632136616;
                    } else {
                      result[0] += 0.0045168078209743435;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.940712851405623773) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08784999999999999754) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
                      result[0] += -0.0001923945890168848;
                    } else {
                      result[0] += 0.0042015443175609625;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7747129114313702214) ) ) {
                      result[0] += 0.002651605200553333;
                    } else {
                      result[0] += -0.00015757032973435264;
                    }
                  }
                } else {
                  result[0] += -0.002173328107093053;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4257500000000000173) ) ) {
                  result[0] += 0.008201455317083108;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
                    result[0] += -0.0018745815040441135;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2484845401189077485) ) ) {
                      result[0] += 0.00469179809428238;
                    } else {
                      result[0] += 0.0016837348166233229;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
              result[0] += -0.008602899329696389;
            } else {
              result[0] += 0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.71626984126984361) ) ) {
        result[0] += -0.006432862771662963;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1031000000000000111) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
            result[0] += -0.0016295477592661713;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)62.86752962768378694) ) ) {
              result[0] += 0.004204640065057143;
            } else {
              result[0] += 0.012081072077370946;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4966500000000000914) ) ) {
              result[0] += 0.009002010183649909;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.029850000000000005) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2287316404723389318) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.007381131745999223;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4311851251853566769) ) ) {
                    result[0] += 0.010765113893206705;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.18253968253969077) ) ) {
                      result[0] += 0.005607887566371903;
                    } else {
                      result[0] += -0.002985887007968822;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04310000000000000636) ) ) {
                    result[0] += 0.006430283919987045;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
                      result[0] += -0.007387414178590709;
                    } else {
                      result[0] += -5.035066943351216e-05;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2470603993683292143) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.76388888888889284) ) ) {
                result[0] += 0.005813303880708313;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.73128342245989408) ) ) {
                  result[0] += -0.001642819800394114;
                } else {
                  result[0] += -0.010855124021519405;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
                  result[0] += 0.006828663424974569;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3599500000000000477) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3431500000000000661) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.005056462159902706;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.08712121212122526) ) ) {
                      result[0] += 0.0039620436958302824;
                    } else {
                      result[0] += -0.002414972022954461;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2721073006283602491) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4138499999999999956) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7143.768529324467636) ) ) {
          result[0] += -0.00035669929475877786;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9163500000000001089) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8924000000000001931) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8825000000000001732) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.21825396825397192) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.30142642642643125) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05255000000000000643) ) ) {
                      result[0] += 0.0017106087154903239;
                    } else {
                      result[0] += 0.004234699743326885;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.44505130751407052) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0006246935995241203;
                    }
                  }
                } else {
                  result[0] += 0.004636117864117742;
                }
              } else {
                result[0] += -0.0023184138209600275;
              }
            } else {
              result[0] += 0.004571425305620989;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2997.79619999661054) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2592.581278167002438) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.83824525745257539) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000000000000487) ) ) {
                    result[0] += 0.0002980683925559584;
                  } else {
                    result[0] += -0.003448297446285617;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9455500000000001126) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.005586895817292011;
                  }
                }
              } else {
                result[0] += -0.005390953906482193;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.835491146007350638) ) ) {
                result[0] += 0.003015095150413402;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9632500000000000506) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4966.396268897347909) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.002268115372834463;
                  }
                } else {
                  result[0] += 0.001796913567637511;
                }
              }
            }
          }
        }
      } else {
        result[0] += -0.003918144877554788;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3411500000000000088) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.32484954126279364) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.675249077694567879) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1663.13767962321208) ) ) {
                      result[0] += -0.000564724054963952;
                    } else {
                      result[0] += 0.0010668053332441876;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1618.91458251395693) ) ) {
                      result[0] += 0.0035927075927209466;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1928899549823784032) ) ) {
                      result[0] += -0.0010350898354647227;
                    } else {
                      result[0] += 0.0015254332489347052;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6152500000000001856) ) ) {
                      result[0] += -0.00685641206053089;
                    } else {
                      result[0] += -0.00024295803960737363;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.532388663967611642) ) ) {
                  result[0] += 0.0008307958322317633;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
                    result[0] += -0.0006728824058758654;
                  } else {
                    result[0] += -0.009036910378811219;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2690.993343004484359) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5229000000000001425) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5321155000000000745) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.002108716571352093;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6614500000000002045) ) ) {
                    result[0] += -0.0010720799425326974;
                  } else {
                    result[0] += 4.036915936566498e-05;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
                    result[0] += 0.00406238656848375;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.0009257486345548628;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041500000000000065) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
                result[0] += 0.005701958398438631;
              } else {
                result[0] += 0.00011510737098227464;
              }
            } else {
              result[0] += -0.0009387687474629149;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.285058977719528484) ) ) {
            result[0] += 0.001837604607152558;
          } else {
            result[0] += -0.006433533168738863;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6795141123970477315) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4133440879166302429) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.0004471556597491051;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9301791105069795451) ) ) {
            result[0] += 0.006819034818305689;
          } else {
            result[0] += 0.0008122024309562965;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7371304289733293658) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1472221264172316191) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3897137548809674334) ) ) {
              result[0] += 0.006049516902414914;
            } else {
              result[0] += -0.00037541767411353194;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5797500000000000986) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.502450980392157298) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
                    result[0] += 0.0005867044876165336;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1387.069702312839809) ) ) {
                      result[0] += -0.00563217798504231;
                    } else {
                      result[0] += -0.0004805834098053952;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3176158234407915892) ) ) {
                      result[0] += -0.0020717218001890317;
                    } else {
                      result[0] += 0.0014522838971561729;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.45022222222222652) ) ) {
                      result[0] += 0.0007319790098983607;
                    } else {
                      result[0] += 0.00832356034450427;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4828000000000000624) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2444518245208232299) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2166315049226441858) ) ) {
                      result[0] += 0.001417833844544292;
                    } else {
                      result[0] += -0.0033323807102621558;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2660001773777408984) ) ) {
                      result[0] += 0.0020317023393186776;
                    } else {
                      result[0] += -0.0010269791066370522;
                    }
                  }
                } else {
                  result[0] += 0.004326922493707142;
                }
              }
            } else {
              result[0] += -0.0044436570151194345;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.244386202413397563) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1110651606754299442) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7750000000000001332) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1934555000000000302) ) ) {
                      result[0] += -0.0007246643848103432;
                    } else {
                      result[0] += -0.002702262521836915;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)99.07708333333334849) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.20714285714286262) ) ) {
                      result[0] += -0.0028327872330348976;
                    } else {
                      result[0] += -0.009831511402555169;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5950000000000000844) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1211200960218856565) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2118118797363109373) ) ) {
                      result[0] += -0.0015599163860728642;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1829182123299770424) ) ) {
                    result[0] += 0.00792584482370984;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
                      result[0] += -0.004565026865184762;
                    } else {
                      result[0] += 0.0019883593113173836;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1052900224917293903) ) ) {
                result[0] += 0.00360314197130599;
              } else {
                result[0] += -0.00047686241591633375;
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2312300000000000189) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
                  result[0] += -0.004804667123252507;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.70619946091644792) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.001196474615467855;
                  }
                }
              } else {
                result[0] += 0.0008466493680457586;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.27272012578616867) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2882292173067574903) ) ) {
                  result[0] += -0.01205106156198392;
                } else {
                  result[0] += -0.0034342369406610207;
                }
              } else {
                result[0] += 0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1934555000000000302) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2190499999999999947) ) ) {
              result[0] += -0.002605150547780834;
            } else {
              result[0] += 0;
            }
          } else {
            result[0] += 0.0008909288697839978;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7650000000000001243) ) ) {
            result[0] += -0.0004133029501805057;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.221246000000000026) ) ) {
              result[0] += -0.008708215343289452;
            } else {
              result[0] += -0.003322654451025167;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001050000000000000369) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4568.919520521660161) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
            result[0] += -0.00405901812876517;
          } else {
            result[0] += 0.004840531492799217;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
            result[0] += -0.002803200966714411;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3398531389175412643) ) ) {
              result[0] += -0.004192094116665122;
            } else {
              result[0] += -0.013242037728622223;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.71008403361344818) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4995331520331520725) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5867500000000001048) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5324000000000000954) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2063.329983498031197) ) ) {
                      result[0] += 0.009759174409360341;
                    } else {
                      result[0] += 0.00023547333513858424;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4681341459817245365) ) ) {
                      result[0] += 0.0029738734276498267;
                    } else {
                      result[0] += -0.0030772929757251783;
                    }
                  }
                } else {
                  result[0] += 0.010438553216537335;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6672.266741891098718) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4828000000000000624) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
                      result[0] += -0.0010444468310741978;
                    } else {
                      result[0] += 0.0017036118930899842;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2135526242593671353) ) ) {
                      result[0] += 0.006902259910067387;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.647150000000000003) ) ) {
                    result[0] += 0.009608518210439709;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0022670387749388894;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3089370407807915941) ) ) {
                      result[0] += 0.0003119897049229953;
                    } else {
                      result[0] += -0.004390223820271905;
                    }
                  } else {
                    result[0] += -0.009290426113279748;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14236111111111249) ) ) {
                      result[0] += 0.0021139933761603687;
                    } else {
                      result[0] += -0.0023321117654891573;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.006315142351507675;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5120878152759216206) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4461.556953086569592) ) ) {
                    result[0] += -0.00761933207067511;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1967701477038585611) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3513000000000000012) ) ) {
                      result[0] += 0.0077565684713544955;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.81296296296296422) ) ) {
                      result[0] += 0.0014394463241577074;
                    } else {
                      result[0] += -0.0006115614599858284;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.106606960732522002) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1851412897798530577) ) ) {
                  result[0] += 0.0030585968101621563;
                } else {
                  result[0] += 0.016647431311144625;
                }
              } else {
                result[0] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10755.47127666017332) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0779500000000000054) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7821500000000000119) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3986990764490913053) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.04232804232805165) ) ) {
                    result[0] += 0.0012221317269407706;
                  } else {
                    result[0] += 0.010902290942442773;
                  }
                } else {
                  result[0] += -0.0022834049181215217;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1423286664273381852) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07577460551863703098) ) ) {
                    result[0] += -0.0031087987070895864;
                  } else {
                    result[0] += 0.0034523062690019124;
                  }
                } else {
                  result[0] += -0.006931440911644086;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3325620000000000798) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3578754866530491907) ) ) {
                  result[0] += 0.00286745951314706;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.21666666666667567) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0031772568222304793;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.59166666666667567) ) ) {
                  result[0] += -0.00774779982475527;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.45361298224128177) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13395.22104316800687) ) ) {
                      result[0] += 0.005668552652460424;
                    } else {
                      result[0] += -0.0020099345406344076;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2833.358085742900585) ) ) {
                      result[0] += 8.442769016332137e-05;
                    } else {
                      result[0] += -0.003687514936905923;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.872261072261072634) ) ) {
              result[0] += 0.005298780589332221;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13827.99262003128206) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2086500000000000299) ) ) {
                      result[0] += 0.0037627093921777446;
                    } else {
                      result[0] += -0.00046996072292263187;
                    }
                  } else {
                    result[0] += 0.007261381336036464;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4444724744926561999) ) ) {
                    result[0] += -0.005525974639235485;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4426700000000000634) ) ) {
                      result[0] += -0.0010979105461586208;
                    } else {
                      result[0] += 0.000535488712976744;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05921603206594685392) ) ) {
                  result[0] += -0.008263806527975157;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11367.30908202939645) ) ) {
                    result[0] += -0.005777678342808598;
                  } else {
                    result[0] += 0.005370008016009353;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1850000000000000255) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.004150315559290451;
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)35.22489294336831023) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8127734335609356764) ) ) {
            result[0] += -0.005538769554749957;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9678488682944218491) ) ) {
              result[0] += 0.004531402824395447;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9163500000000001089) ) ) {
            result[0] += 0.007529478098043916;
          } else {
            result[0] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0261500000000000031) ) ) {
          result[0] += -0.008598640067609119;
        } else {
          result[0] += 0;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5436705000000000565) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6795141123970477315) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)623.1461654618134389) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1337.280669109357859) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.33990778688524692) ) ) {
                  result[0] += 0.010724367848034476;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6158757957356907342) ) ) {
                  result[0] += -0.0018427398506310983;
                } else {
                  result[0] += 0.001005672857928348;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5229000000000001425) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4311851251853566769) ) ) {
                  result[0] += 0.003744909112806676;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5033500000000000751) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6243108164664067372) ) ) {
                      result[0] += -0.0013853934163395344;
                    } else {
                      result[0] += 0.0001295307080089815;
                    }
                  } else {
                    result[0] += 0.002817543903419878;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3282773505116238777) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1682.526551393980526) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5350000000000001421) ) ) {
                      result[0] += -0.0010906900719697792;
                    } else {
                      result[0] += 0.005390058949661992;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6535500000000000753) ) ) {
                      result[0] += 0.0012096236976693218;
                    } else {
                      result[0] += -0.0010121950517148982;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2777090000000000392) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1996000000000000274) ) ) {
                      result[0] += -0.0015802965425680373;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
                      result[0] += -0.000556365999804257;
                    } else {
                      result[0] += -0.004631782889154786;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.29705882352941515) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
                result[0] += -0.005135566994686886;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0006349773481684626;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.498956746384165761) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9250000000000001554) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5556500000000000883) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7050000000000000711) ) ) {
                      result[0] += -0.00151664066989101;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.0037017412859278913;
                }
              } else {
                result[0] += 0.0029487037276158742;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6441500000000001114) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.009960427098742987;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5229000000000001425) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036930000000000462) ) ) {
          result[0] += 0.011015639080749894;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02715000000000000399) ) ) {
            result[0] += -0.0021496774702252455;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3309227930938458129) ) ) {
              result[0] += -0.00317625591834741;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1604000000000000148) ) ) {
                result[0] += 0.01465050694101271;
              } else {
                result[0] += 0.003554199956810293;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4880421551248437795) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3755158646863254179) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08115000000000001379) ) ) {
                  result[0] += 0.009414014486071135;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8006.423874351355153) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)99.07708333333334849) ) ) {
                    result[0] += -0.0068573080174473755;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2312300000000000189) ) ) {
                result[0] += -0.006406352773906577;
              } else {
                result[0] += -0.0017158778783606034;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4369219652904519635) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.43959330143541209) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.382558990305469582) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.004208932830403574;
                  }
                } else {
                  result[0] += 0.010446899139695836;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7866.211076535222674) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9989.107872504324405) ) ) {
                    result[0] += -0.004157168955605874;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3305835000000000856) ) ) {
                    result[0] += 0.00653953398521151;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2841076982928243955) ) ) {
                      result[0] += -0.0022797559231039146;
                    } else {
                      result[0] += 0.002870556944951746;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4828000000000000624) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7451.581543301115744) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
                      result[0] += 0.0005029821171008807;
                    } else {
                      result[0] += -0.003424103210682367;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)12336.40759658668867) ) ) {
                      result[0] += 0.002802022923614288;
                    } else {
                      result[0] += -0.0021635778645401863;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1967701477038585611) ) ) {
                    result[0] += 0.008774333709305592;
                  } else {
                    result[0] += 0.0006418263768158305;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)19887.81802584273828) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)142.2522321428571672) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
                      result[0] += 0.001097555615430424;
                    } else {
                      result[0] += -5.4026689050898866e-05;
                    }
                  } else {
                    result[0] += -0.004677006037918348;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2399659671015315077) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.87026925953627732) ) ) {
                      result[0] += 0.001813198821952637;
                    } else {
                      result[0] += 0.006169773065929243;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5599500000000001698) ) ) {
            result[0] += -0.0025699404352093587;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
              result[0] += 0.014194121332394212;
            } else {
              result[0] += 0.00405607792386962;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5221506565800743127) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2470603993683292143) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1664534368267386599) ) ) {
            result[0] += -0.004340494786644028;
          } else {
            result[0] += 0.0031134118242997985;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3492040711322696445) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
              result[0] += -0.0121469810025078;
            } else {
              result[0] += -0.004883807803761441;
            }
          } else {
            result[0] += -0.0010991009979654841;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04310000000000000636) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3829700104266255956) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.003552683097552234;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.094202898550724834) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.473050000000000026) ) ) {
                  result[0] += -0.007246574892763063;
                } else {
                  result[0] += -0.001213268944545625;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.567091454272864226) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5586000000000000965) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-200.3606350077996296) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.006398589498326597;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
                      result[0] += 0.0031362495540283443;
                    } else {
                      result[0] += -0.00024912096590707717;
                    }
                  }
                } else {
                  result[0] += 0.003777947186207571;
                }
              } else {
                result[0] += 0.004543238644697313;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)939.1508267619991557) ) ) {
                  result[0] += 0.0005362256289681839;
                } else {
                  result[0] += -0.0010463770584005568;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3064.401422747675497) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3859225000000000572) ) ) {
                    result[0] += 0.004080586548510063;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4388460000000000694) ) ) {
                      result[0] += -0.0003866641793210198;
                    } else {
                      result[0] += 0.001835984043487162;
                    }
                  }
                } else {
                  result[0] += 0.006754450081567601;
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.245079122973038) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6290.027305551750032) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.21064381391329512) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
                    result[0] += 0.007618271549274515;
                  } else {
                    result[0] += 0.0012606874483525137;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4231.908399006179934) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2135526242593671353) ) ) {
                      result[0] += 0.0031049084011432926;
                    } else {
                      result[0] += -0.0019467902462229993;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                      result[0] += 0.003998055861483726;
                    } else {
                      result[0] += -0.0006590117951753344;
                    }
                  }
                }
              } else {
                result[0] += -0.009467568383349393;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.437450000000000061) ) ) {
                    result[0] += 0.007539120021023263;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.004703363569223808;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)786.2947641301196882) ) ) {
                  result[0] += 0.001956556511769852;
                } else {
                  result[0] += 0.012373725379841313;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06045000000000001067) ) ) {
                result[0] += -0.00038030261331686513;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.890135144497803954) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)878.7882229141167727) ) ) {
                    result[0] += -0.008586173521748577;
                  } else {
                    result[0] += -0.0026081572876892074;
                  }
                } else {
                  result[0] += -0.0013492101324683269;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.921363443236741575) ) ) {
                result[0] += 0.0023559236144680474;
              } else {
                result[0] += -0.0022839800678402114;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2850000000000000866) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01395000000000000059) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1494105000000000294) ) ) {
          result[0] += -3.6357823957265655e-05;
        } else {
          result[0] += -0.005215447473803595;
        }
      } else {
        result[0] += 0.0010222971927142132;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9606451612903227355) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.002364066193854875) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1559.276745549883799) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2303.801636448604313) ) ) {
              result[0] += 0.0012278356536917028;
            } else {
              result[0] += 0;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1682.526551393980526) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1079.931960267036857) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.890135144497803954) ) ) {
                  result[0] += 0.004089451404793879;
                } else {
                  result[0] += 0.0013363306166806125;
                }
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0.00581542135885863;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01651861945051705596) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9745000000000000329) ) ) {
              result[0] += -0.0015740033037326129;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.88883399209486491) ) ) {
                result[0] += -0.0002492937696664269;
              } else {
                result[0] += 0.001982874568194814;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1559.276745549883799) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.0017175562076970552;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)118.0299834287672098) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1187500000000000083) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
                result[0] += 0.006742254006720604;
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5877760000000001872) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.471890500000000046) ) ) {
                      result[0] += -0.0005479568110402872;
                    } else {
                      result[0] += 0.003855328490402659;
                    }
                  } else {
                    result[0] += -0.003501584585660738;
                  }
                } else {
                  result[0] += 0.005311267202875896;
                }
              } else {
                result[0] += -0.005309693317647024;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6670401960206224778) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.008128398261492559;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7985500000000000931) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1643.069582787823265) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
                result[0] += -0.0025119063975014696;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.81858974358974734) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
                      result[0] += 0.0009144452692191528;
                    } else {
                      result[0] += -0.0019210519596662224;
                    }
                  } else {
                    result[0] += 0.004008447275150076;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1359000000000000485) ) ) {
                    result[0] += 0.00594109326780221;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3578754866530491907) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.145515329548585759) ) ) {
                    result[0] += -0.00025660571283619174;
                  } else {
                    result[0] += 0.006092226238532296;
                  }
                } else {
                  result[0] += -0.002759239064374858;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.975304878048781188) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
                    result[0] += 0.004167597236366026;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.007550992788749615;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1612811956950306047) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009850000000000001116) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.433327285921625727) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-985.1868867154022382) ) ) {
                      result[0] += 0.0009130676838322679;
                    } else {
                      result[0] += -0.002447019885993848;
                    }
                  } else {
                    result[0] += 0.003974582582536636;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8745500000000000496) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.007182972977149037;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04108592410728736238) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4487310000000000465) ) ) {
                    result[0] += -0.004140333017104395;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
                      result[0] += 0.002692381101314032;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1010493287512936184) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6334290000000001308) ) ) {
                      result[0] += 0.004824755663931314;
                    } else {
                      result[0] += 0.001222776230053084;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08388546939293617388) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.64483714483714571) ) ) {
                      result[0] += -2.4179912008192762e-05;
                    } else {
                      result[0] += 0.0022639549704538704;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2332.481509447223289) ) ) {
                      result[0] += -0.006679144837354039;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += -0.009193607184980749;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3344.138681686334621) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2523846967694989285) ) ) {
                    result[0] += 0.004610937509419663;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06065038394431352536) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.00014995397372130487;
                    }
                  }
                } else {
                  result[0] += -0.0022432947177450204;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7845560000000001422) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9584500000000001352) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06035185914383755373) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)753.4351851851853326) ) ) {
                result[0] += 0.006837830321022351;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.236694677871149395) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3472.845654216908315) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6069337742791702794) ) ) {
                    result[0] += -0.01344888115393911;
                  } else {
                    result[0] += -0.00012991876892261853;
                  }
                } else {
                  result[0] += 0.0004915207883238897;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09947290620547651063) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13660.08107385601579) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
                      result[0] += 0.004114967116652558;
                    } else {
                      result[0] += -0.0030459931343648113;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08706594241544672597) ) ) {
                      result[0] += -0.0022448511227555947;
                    } else {
                      result[0] += -0.007471706617447043;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8337.708244919273056) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
                      result[0] += -0.0005235732822627379;
                    } else {
                      result[0] += -0.004267251242828476;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2313484523829452688) ) ) {
                      result[0] += 0.0025916519838011945;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1137.968895395498521) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
                result[0] += 0.008004800931125405;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3266000000000000569) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
                    result[0] += 0.0057341615853260045;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.0013560284012199687;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1499.104419668594574) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.80196078431373152) ) ) {
                  result[0] += -0.0019339885647317344;
                } else {
                  result[0] += -0.008726725334690806;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5090.688026845967215) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121500000000000136) ) ) {
                      result[0] += 0.0028415719080284218;
                    } else {
                      result[0] += 0.00045555511670421016;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1025332214731468489) ) ) {
                      result[0] += 0.004202780564558088;
                    } else {
                      result[0] += -0.005116440737094755;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)163.9651741293532723) ) ) {
                    result[0] += -0.0050725621111577385;
                  } else {
                    result[0] += -0.00014660536873490492;
                  }
                }
              }
            }
          }
        } else {
          result[0] += -0.00557836970877257;
        }
      } else {
        result[0] += 0.007325017951848593;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1171905010334959446) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.19793814432989798) ) ) {
          result[0] += -0.008101867435948824;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5201090000000001545) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3540665000000000617) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
                  result[0] += -0.004708113516299823;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4606.135262423782478) ) ) {
                    result[0] += -0.001671865392196069;
                  } else {
                    result[0] += 7.921350187817749e-07;
                  }
                }
              } else {
                result[0] += -0.009510521096643144;
              }
            }
          } else {
            result[0] += 0.0026433628652636596;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001050000000000000369) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2384160000000000446) ) ) {
            result[0] += 0;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.310715078210065665) ) ) {
              result[0] += -0.0007494985634497934;
            } else {
              result[0] += -0.009474954755820556;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2128500000000000114) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4978420000000000623) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2882292173067574903) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8050000000000001599) ) ) {
                      result[0] += -0.0008952487135798967;
                    } else {
                      result[0] += 0.003938097807770889;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3571.445901236788359) ) ) {
                      result[0] += -0.006332142350306064;
                    } else {
                      result[0] += -0.0012771245190229905;
                    }
                  }
                } else {
                  result[0] += 0.0048161330605501085;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0261500000000000031) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.012687705151713939;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2005135503574813904) ) ) {
                result[0] += 0.007059036587516962;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1720691644993862512) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.34436758893280839) ) ) {
                    result[0] += -0.00017688493355348062;
                  } else {
                    result[0] += -0.008026213468401426;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5189379155588735859) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8350000000000000755) ) ) {
                      result[0] += -0.001067450166045322;
                    } else {
                      result[0] += 0.004981402518013666;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9554166948649117641) ) ) {
                      result[0] += -0.001070554604043711;
                    } else {
                      result[0] += 0.00347999442183956;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1937.925932230502212) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5924805000000000765) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4528391421342179979) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4311851251853566769) ) ) {
                    result[0] += 0.003096014188927494;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3304355872301289465) ) ) {
                      result[0] += -0.006096292982507057;
                    } else {
                      result[0] += 0.002307978006055102;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9250000000000001554) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2596500000000001029) ) ) {
                      result[0] += 0.0011090160168962596;
                    } else {
                      result[0] += -0.0018683423582205616;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2478.891438747010852) ) ) {
                      result[0] += -0.007153913407079642;
                    } else {
                      result[0] += -0.0020917240667807963;
                    }
                  }
                }
              } else {
                result[0] += 0.0012951228431537537;
              }
            } else {
              result[0] += -0.008544703027783382;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.404545454545455208) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8650000000000001021) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4222760000000000402) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.52175925925926236) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2219744259704764244) ) ) {
                result[0] += -0.005944976053881939;
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
                result[0] += 0.0023865812858171456;
              } else {
                result[0] += -0.0016536422106374043;
              }
            }
          } else {
            result[0] += -0.008093448235388517;
          }
        } else {
          result[0] += 0.0030254372564543397;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9965277359150260805) ) ) {
              result[0] += 0.006268159673918765;
            } else {
              result[0] += 0.0006850619781020476;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14660.96176939566249) ) ) {
                result[0] += -0.003238047587323862;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)20.45461734320752001) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
                    result[0] += -0.003949338794558834;
                  } else {
                    result[0] += 0.00020391510283002882;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6795141123970477315) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3439.063894173575591) ) ) {
                      result[0] += 9.481598339005491e-05;
                    } else {
                      result[0] += 0.0014262746691083824;
                    }
                  } else {
                    result[0] += 0.004644278952102018;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2865.318948452297718) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04000638251704572573) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5090.688026845967215) ) ) {
                    result[0] += 0.00201099261012287;
                  } else {
                    result[0] += -0.005873632279808496;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.362024000000000068) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3486.590803824997238) ) ) {
                      result[0] += 0.001674732097399699;
                    } else {
                      result[0] += -0.005547797080882876;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3249.949450539746977) ) ) {
                      result[0] += 0.001472704238302469;
                    } else {
                      result[0] += 0.0061225657830154025;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.67902930402930473) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1925500000000000267) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.293597746500404877) ) ) {
                      result[0] += -0.0027637019461539502;
                    } else {
                      result[0] += -0.006593817048383152;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1297121988736138765) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3391.870434469365591) ) ) {
                      result[0] += -0.004078545039393201;
                    } else {
                      result[0] += 0.0030985956963164494;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2105.992513001595853) ) ) {
                      result[0] += -0.0033374220026579277;
                    } else {
                      result[0] += 0.0045675976351562215;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8969687899648990381) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02837773553863971385) ) ) {
              result[0] += -0.0011115505057464822;
            } else {
              result[0] += 0.002244795723946056;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01125000000000000132) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
                result[0] += -0.007740310386130601;
              } else {
                result[0] += -0.0017069150399543409;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1604000000000000148) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2792689664682383444) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355947963695212921) ) ) {
            result[0] += 0.0058551029925395705;
          } else {
            result[0] += -0.0007410773217290641;
          }
        } else {
          result[0] += 0.009481395695408379;
        }
      } else {
        result[0] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
            result[0] += 0.0053993783752841334;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9632500000000000506) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1510.595905575025881) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2190499999999999947) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2081000000000000349) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
                      result[0] += 0.010040794435355405;
                    } else {
                      result[0] += 6.639965740498415e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03200000000000000761) ) ) {
                      result[0] += -0.0008781072175483873;
                    } else {
                      result[0] += 0.00041665701754191347;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.0641025641025834) ) ) {
                      result[0] += 0.0006651793260998331;
                    } else {
                      result[0] += -0.0024824159365880684;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9139.728134485791088) ) ) {
                      result[0] += -0.004759632962766402;
                    } else {
                      result[0] += -0.0011328492607175112;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05155000000000000554) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6750000000000001554) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.17517875383044057) ) ) {
                      result[0] += -0.002476957897210734;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.007825247892194234;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-952.9475905187154012) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4262175000000000824) ) ) {
                      result[0] += 0.0010396662142613837;
                    } else {
                      result[0] += -0.004980375661463999;
                    }
                  } else {
                    result[0] += 0.003155237842615853;
                  }
                }
              }
            } else {
              result[0] += -0.006367774322661021;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7750000000000001332) ) ) {
                  result[0] += -0.0007629009666641391;
                } else {
                  result[0] += -0.003060709645395295;
                }
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041500000000000065) ) ) {
                result[0] += -0.005248174507684645;
              } else {
                result[0] += -0.0018605893486834506;
              }
            }
          } else {
            result[0] += 0.0003870756553234556;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.92861142217245352) ) ) {
            result[0] += -0.002450812721192984;
          } else {
            result[0] += 0.004379283575620171;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1723.432309542571375) ) ) {
              result[0] += -0.006803915701264164;
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2660000000000000697) ) ) {
              result[0] += 0.0014390094735702423;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.003771221378096385;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2042500000000000426) ) ) {
        result[0] += 0.005786894645342743;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
          result[0] += -0.002394790818139475;
        } else {
          result[0] += 0.0034172310746356706;
        }
      }
    }
  }
}

