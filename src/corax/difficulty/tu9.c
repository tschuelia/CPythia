
#include "prediction.h"

void predict_unit9(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.75486037469071476) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.57417582417583191) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6497217366336467403) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5482000000000001316) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8212.004448418350876) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4762500000000000067) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4123000000000000553) ) ) {
                    result[0] += 0.0027283036086283158;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.27991452991453158) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004014858037479441;
                    }
                  }
                } else {
                  result[0] += 0.004811506883196131;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12967.17676313729862) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1729500000000000204) ) ) {
                    result[0] += -0.0021817380680629107;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                      result[0] += 0.0023963108568774423;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126500000000001611) ) ) {
                    result[0] += -0.0057639912621399655;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5642304926403781673) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05255000000000000643) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.144153487166192917) ) ) {
                      result[0] += 0.00011432773111142031;
                    } else {
                      result[0] += 0.003950425608469904;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3042628804014196331) ) ) {
                      result[0] += 0.0019880488723728403;
                    } else {
                      result[0] += -0.0029198856702708576;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4254330624375546877) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.048809523809525857) ) ) {
                      result[0] += 0.002746173344792449;
                    } else {
                      result[0] += 0.007572824922905164;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.02658071352879077) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
                    result[0] += 0.004840801554393542;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.808257918552036436) ) ) {
                      result[0] += 0.001586293707872444;
                    } else {
                      result[0] += -0.0006039992312232605;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.52228163992870336) ) ) {
                    result[0] += -0.003956554814619006;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4341500000000000914) ) ) {
                      result[0] += 0.00216238990707729;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596939932693950182) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4602719213972262802) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4173837132183961796) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1994.138578142030383) ) ) {
                      result[0] += -0.0006651564535167376;
                    } else {
                      result[0] += 0.0002013208351379242;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1885.524186461903128) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004144641080964276;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2135526242593671353) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1827500000000000513) ) ) {
                      result[0] += -0.0008750631868914795;
                    } else {
                      result[0] += 0.0019506198293317983;
                    }
                  } else {
                    result[0] += 0.006109757961231942;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.00290697674418716) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.15450928381962914) ) ) {
                      result[0] += 0.0025799982992832757;
                    } else {
                      result[0] += -0.0008581071732067657;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2896.940642020843825) ) ) {
                      result[0] += 0.010049255035247055;
                    } else {
                      result[0] += 0.0025865538997078405;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308500000000000218) ) ) {
                    result[0] += -0.00267991566415042;
                  } else {
                    result[0] += 0.002132945786660045;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.440904500000000088) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2841076982928243955) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4549058249040809909) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4018505548079681078) ) ) {
                      result[0] += -0.0036025586884593412;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.007633305510825266;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.47150997150997398) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.00290697674418716) ) ) {
                      result[0] += 0.0008379568778419688;
                    } else {
                      result[0] += -0.0032232104342153982;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4103386442176324422) ) ) {
                      result[0] += 0.003528454105719739;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1774.246538787889904) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3152500000000000857) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4648510000000000697) ) ) {
                      result[0] += 0.006095378022286569;
                    } else {
                      result[0] += 0.0012224759411261132;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
                      result[0] += -0.0024955553867844964;
                    } else {
                      result[0] += 0.00047468165245124035;
                    }
                  }
                } else {
                  result[0] += -0.002061357919239633;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1116.565576061355387) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.540750000000000175) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.17517875383044057) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.2152144160583962) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00435153822996364;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)642.537947836085209) ) ) {
                      result[0] += -0.004738772987565123;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += 0.003881974828067633;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4666.632518606213125) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4698276866784543149) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.007350716964767868;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8150000000000000577) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6450000000000001288) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.004153685628017595;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.463850174216029032) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0020382245254380884;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.004806990733374117;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2703.500010395392565) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4105955000000000576) ) ) {
                result[0] += -0.0062403111940951515;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4951140000000000541) ) ) {
                  result[0] += 0.0004597118111272745;
                } else {
                  result[0] += -0.001685324041094821;
                }
              }
            } else {
              result[0] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2197.409051300025112) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.001499743463356672;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2712850000000000539) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37840909090909314) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.803600000000000203) ) ) {
                result[0] += -0.0061845354748749255;
              } else {
                result[0] += -0.001422289043170109;
              }
            } else {
              result[0] += -5.948619461754087e-05;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4173837132183961796) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5192.030210470990824) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607440000000000313) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2114255000000000162) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7092500000000001581) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03895000000000000545) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.001251347186058351;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1805574535561877969) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0010687443409918788;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7166500000000001203) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.002052211043433114;
                  }
                }
              } else {
                result[0] += -0.0010014753831778791;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3423668233450842813) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2924659694118884601) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.145515329548585759) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07015148939065542211) ) ) {
                      result[0] += 0.0006563836825425137;
                    } else {
                      result[0] += 0.0061805452918951625;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.06168384879725863) ) ) {
                      result[0] += -0.0018687053812062805;
                    } else {
                      result[0] += 0.002231297495785299;
                    }
                  }
                } else {
                  result[0] += 0.010230896626053884;
                }
              } else {
                result[0] += -0.0016186721779436995;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2344066382699040996) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)295.7846320346320681) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04618346993186531885) ) ) {
                    result[0] += -0.0044025087465624346;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2450000000000000233) ) ) {
                      result[0] += 1.549971079429901e-05;
                    } else {
                      result[0] += -0.0010579306497307875;
                    }
                  }
                } else {
                  result[0] += 0.0011865465862016065;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3397655000000000536) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2668555000000000788) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
                      result[0] += 0.004520043674209694;
                    } else {
                      result[0] += -0.0011994732709689094;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02895000000000000351) ) ) {
                      result[0] += 0.00047147688377647856;
                    } else {
                      result[0] += 0.006459023872662967;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7891.26025224217392) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05365000000000001018) ) ) {
                      result[0] += -0.004416024838941702;
                    } else {
                      result[0] += 0.0011640444831292841;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.1500000000000199) ) ) {
                      result[0] += 0.002019775324771105;
                    } else {
                      result[0] += -0.0005643682145887448;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596939932693950182) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1472221264172316191) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7444500000000001672) ) ) {
                    result[0] += 0.0036410450975186866;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.32834040296925338) ) ) {
                      result[0] += -0.003604394971555025;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4599500000000000255) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8817.104006290848702) ) ) {
                      result[0] += -0.0022716100247608985;
                    } else {
                      result[0] += -0.009117669544999214;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                result[0] += 0.0029135825305142086;
              }
            }
          }
        } else {
          result[0] += -0.0029041984449121546;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1582500000000000295) ) ) {
          result[0] += 0;
        } else {
          result[0] += 0.006514155181556396;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.52485445588894208) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6150000000000001021) ) ) {
          result[0] += -0.0005946311464892399;
        } else {
          result[0] += 0.0002946998907542151;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2086500000000000299) ) ) {
          result[0] += -0.0010125194706280712;
        } else {
          result[0] += -0.006223149389518857;
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5797500000000000986) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.540750000000000175) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9581.734211346893062) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9250000000000001554) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3002208421277365313) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1650000000000000355) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)159.4971590909091219) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.00021926921294944675;
                  }
                } else {
                  result[0] += 0.0032493432283241565;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3578754866530491907) ) ) {
                  result[0] += -0.0016079394589275362;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.36135000000000006) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
                      result[0] += 3.940299497699777e-06;
                    } else {
                      result[0] += -0.0007851296778585113;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.60681818181819125) ) ) {
                      result[0] += 0.0013626105586654223;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4843951266831568181) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2592.581278167002438) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
                      result[0] += -0.0009044824636454249;
                    } else {
                      result[0] += -0.004723269377126445;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075923801982495709) ) ) {
                    result[0] += 0.0003584495157435185;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
                      result[0] += -0.0019414133399450633;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4901500000000000301) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3940500000000000114) ) ) {
                    result[0] += -0.0012835414200759712;
                  } else {
                    result[0] += 0.005620169394372468;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
                    result[0] += -0.002472587646850881;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5250000000000001332) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1544380000000000197) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.115000000000000005) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.07500000000000002498) ) ) {
                      result[0] += -0.00010557723589750336;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1056.904411764706083) ) ) {
                      result[0] += 0.0019225117212754782;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += -0.0008391177648289063;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2964705000000000257) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1624179537353906966) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.002128780234069309;
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7680500000000001215) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6589500000000001467) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3284500000000000752) ) ) {
                    result[0] += 0.004958692157927653;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)20900.29691740099588) ) ) {
                      result[0] += 0.00024621371947841853;
                    } else {
                      result[0] += -0.0016924883831211206;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6941500000000001558) ) ) {
                    result[0] += 0.010143594092395477;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7221500000000000696) ) ) {
                      result[0] += -0.002450531940678127;
                    } else {
                      result[0] += 0.0052862770849697064;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38273.51477145576064) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.004368060784042508;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5435000000000000941) ) ) {
            result[0] += 0.0001140005048247378;
          } else {
            result[0] += 0.003753782710546795;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3449485957867410302) ) ) {
          result[0] += -0.004346640267548764;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.457966404524975057) ) ) {
            result[0] += 0.003888321917572317;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.362024000000000068) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.004026362994624503;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.52228163992870336) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596939932693950182) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1530.761118312260805) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.04124149659864074) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.144153487166192917) ) ) {
                      result[0] += 0.0005888523015402761;
                    } else {
                      result[0] += -0.0010652744543852351;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.243379790940767116) ) ) {
                      result[0] += 0.002732566532859225;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4018505548079681078) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3423668233450842813) ) ) {
                      result[0] += -0.00021192647345852624;
                    } else {
                      result[0] += 0.001717602407018555;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4348787844478528841) ) ) {
                      result[0] += -0.0031507156174276165;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1708.479834708773978) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)642.537947836085209) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1446500000000000286) ) ) {
                      result[0] += -0.00035863199514549513;
                    } else {
                      result[0] += 0.0029834071908365354;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2380.495614866096275) ) ) {
                      result[0] += -0.003914419381856246;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2668.597659326529538) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
                      result[0] += 0.000333633947241044;
                    } else {
                      result[0] += 0.00825170726941785;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.502450980392157298) ) ) {
                      result[0] += 0.0006276353515047234;
                    } else {
                      result[0] += -0.004130631722785001;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2833.358085742900585) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7350500000000000922) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0022048917007643134;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1658.751546212527273) ) ) {
                      result[0] += -0.0021355172583643104;
                    } else {
                      result[0] += -0.012877761419231132;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1372018916650266929) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08235000000000002041) ) ) {
                      result[0] += -0.0008156660125579899;
                    } else {
                      result[0] += 0.002334395517642556;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6858500000000001817) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.008661436454143363;
                    }
                  }
                }
              } else {
                result[0] += 0.0017263044724615006;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2168.319171519228803) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7150000000000000799) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1994245490579544811) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1366.16280735785358) ) ) {
                    result[0] += -0.004074943314509639;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3083306738637045519) ) ) {
                    result[0] += 0.0018695781247419537;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3450000000000000289) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0011818477553973764;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4901500000000000301) ) ) {
                  result[0] += -0.0015797620215705392;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4795045000000000557) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
                      result[0] += 0.0019237947075680121;
                    } else {
                      result[0] += 0.008481538708517505;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5376165000000000527) ) ) {
                      result[0] += -0.002084662282680996;
                    } else {
                      result[0] += 0.0012511500655725716;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3486.590803824997238) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6497500000000001608) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5973.486975242797598) ) ) {
                      result[0] += -0.004433476028458905;
                    } else {
                      result[0] += 0.0024743700177172305;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2019559617197731194) ) ) {
                      result[0] += 0.0006829930998484695;
                    } else {
                      result[0] += 0.007184958103745376;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3183000000000000829) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4283830000000000693) ) ) {
                      result[0] += -0.00017108435979057944;
                    } else {
                      result[0] += 0.0019086517094037455;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                      result[0] += -0.0038920819185724255;
                    } else {
                      result[0] += -5.991986099740718e-05;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
                      result[0] += 0.0021267599420773777;
                    } else {
                      result[0] += -0.0006191987868154529;
                    }
                  } else {
                    result[0] += 0.004362614753596156;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009850000000000001116) ) ) {
                      result[0] += -0.002599655978850657;
                    } else {
                      result[0] += 0.0013659164042669595;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.145515329548585759) ) ) {
                      result[0] += -0.005356361018129698;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)642.537947836085209) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2566500000000001003) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)321.774772462952626) ) ) {
                      result[0] += -0.0007407525800973886;
                    } else {
                      result[0] += -0.006778931263225685;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-156.7600528121663501) ) ) {
                      result[0] += 0.0018589944954837197;
                    } else {
                      result[0] += -0.0003883719844457924;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.442099999999999993) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38051350000000006) ) ) {
                      result[0] += 0.0008977993125115788;
                    } else {
                      result[0] += 0.006542558846516843;
                    }
                  } else {
                    result[0] += -0.0007943664325332785;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3922500000000000431) ) ) {
                    result[0] += -9.919767573658243e-06;
                  } else {
                    result[0] += 0.0007792999343514142;
                  }
                } else {
                  result[0] += -0.006974023535289024;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7328500000000001124) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.569111884291402359) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675530000000000519) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2338600000000000401) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.005299987461948588;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
                      result[0] += -0.0011098972914218674;
                    } else {
                      result[0] += 0.0008451022712116449;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.442099999999999993) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                      result[0] += 0.0029025403773306814;
                    } else {
                      result[0] += -0.0007760518805781936;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4625500000000000722) ) ) {
                      result[0] += -0.005120370894937031;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                result[0] += -0.0016283029465163248;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4172500000000000653) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.96040372670807628) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2839320000000000177) ) ) {
                  result[0] += -0.002402682277036102;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.90306122448980375) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.875000000000000111) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2350000000000000144) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -3.063159255939012e-05;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7118907180887991126) ) ) {
                      result[0] += 0.007056127418485279;
                    } else {
                      result[0] += 0.0007288824248745818;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.001998514824417564;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5677500000000000879) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9150000000000001465) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4636414834351271774) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4191117286610134829) ) ) {
                      result[0] += -0.0008904042149858607;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3850000000000000644) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0019640483771984295;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11018.535337379677) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.18253968253969077) ) ) {
                      result[0] += -0.0007187912162244649;
                    } else {
                      result[0] += -0.0041786581869919445;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6152500000000001856) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0004561702422744569;
                  }
                } else {
                  result[0] += 0.0034376921407838386;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001850000000000000299) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7371304289733293658) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.006352138481609072;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17639.05176736719659) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7320592709375011164) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.004639084267439285;
              }
            } else {
              result[0] += -0.00036647246603706106;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)507.68014339146265) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7291161822165118656) ) ) {
                result[0] += -0.003035470414908762;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2081000000000000349) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.15450928381962914) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
                      result[0] += 0.0031427187532446542;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2211.906081740259197) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0023768017522223395;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2690500000000000669) ) ) {
                    result[0] += 0.005340879534576654;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1934555000000000302) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
                  result[0] += -0.0007266023154092015;
                } else {
                  result[0] += -0.006721885576325199;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2330500000000000071) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.90306122448980375) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.0592625109745395) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-355.2188524626326966) ) ) {
                  result[0] += 0.002867459872097012;
                } else {
                  result[0] += -0.0014287521386364035;
                }
              } else {
                result[0] += 0.009548827815559659;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.246168224299066374) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-717.0164406190135651) ) ) {
                  result[0] += 0.006068867332267592;
                } else {
                  result[0] += 0.0004898395749601963;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4190.954657040626444) ) ) {
                  result[0] += 0.0008728428295969688;
                } else {
                  result[0] += -0.002612303445796508;
                }
              }
            }
          } else {
            result[0] += 0.007331681688670532;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3502855000000000829) ) ) {
            result[0] += -0.0014738388844234547;
          } else {
            result[0] += 0.0008104437855667204;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5148.965599026557356) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2777090000000000392) ) ) {
            result[0] += -0.0010477005067429735;
          } else {
            result[0] += 0.0007728303605451098;
          }
        } else {
          result[0] += -0.0035446541317128433;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)35.22489294336831023) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.219437893081761315) ) ) {
        result[0] += 0;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2333.321561901081623) ) ) {
          result[0] += -0.00011465295032824192;
        } else {
          result[0] += -0.004241753234434937;
        }
      }
    } else {
      result[0] += 0;
    }
  }
  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)809.688662557468092) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)786.2947641301196882) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2149.529036211334187) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.89818809318378356) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444509567657248139) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3117000000000000326) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.437797619047619602) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.005345768332080774;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)642.537947836085209) ) ) {
                    result[0] += -0.0013802370069561142;
                  } else {
                    result[0] += 0.0014673945246568944;
                  }
                }
              } else {
                result[0] += -0.0009891012706117926;
              }
            } else {
              result[0] += 0.008238293384576075;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0024875628089631578;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4407500000000000306) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3760500000000000509) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12333.58675317392408) ) ) {
                  result[0] += -0.00011449647143756814;
                } else {
                  result[0] += 0.0029993818331939663;
                }
              } else {
                result[0] += -0.002740739592002835;
              }
            } else {
              result[0] += 0.004141665095720969;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.376459500000000058) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6199606872203474728) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4351716793902547509) ) ) {
                  result[0] += -0.008489325596269278;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.520019664933700887) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.005683974262189198;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7957915931777371776) ) ) {
                  result[0] += 0.0026876789042565266;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
                    result[0] += -0.0033917999244567464;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2712850000000000539) ) ) {
                      result[0] += 0.0007392155588639586;
                    } else {
                      result[0] += -0.0008344213123876516;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)361.7598371524995287) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.77179878048780548) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8426833958685702175) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)144.5092417440413044) ) ) {
                      result[0] += -0.0017706275333588106;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0016026953104614958;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.13563218390804721) ) ) {
                    result[0] += -0.007892820110546327;
                  } else {
                    result[0] += -0.0005102302937868376;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5321155000000000745) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7174563514726279845) ) ) {
                      result[0] += -0.003402381034111307;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0015028041691103116;
                  }
                } else {
                  result[0] += 0.007250159322987592;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817765000000001407) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4463094520789036013) ) ) {
                    result[0] += 5.089170252089314e-05;
                  } else {
                    result[0] += 0.004346124772353621;
                  }
                } else {
                  result[0] += -0.0016480083760845943;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4487310000000000465) ) ) {
                  result[0] += -0.004994317760780739;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7291161822165118656) ) ) {
                    result[0] += 0.0015898606247350619;
                  } else {
                    result[0] += -0.0002182928714905906;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.890916808149406769) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9999263622974964294) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8623277660543351431) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.117150000000000018) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.003111030279543783;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01695000000000000326) ) ) {
                      result[0] += 0.0006203226006793038;
                    } else {
                      result[0] += 0.005140811136306552;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7224490000000001189) ) ) {
                    result[0] += -0.0016294311000895959;
                  } else {
                    result[0] += 0.00015922274514578163;
                  }
                }
              } else {
                result[0] += -0.0025197280729246357;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9892588490470258789) ) ) {
              result[0] += -0.003092526838037508;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
                result[0] += -0.0004561060307211035;
              } else {
                result[0] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)260.2258709753264725) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45141065830721239) ) ) {
                result[0] += -0.0013548127047969879;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)82.64618349518126195) ) ) {
                  result[0] += 0.0006433841760414666;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              result[0] += 0.003042242946348124;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
              result[0] += 0.0008023206662572013;
            } else {
              result[0] += 0.007277863852273142;
            }
          }
        }
      }
    } else {
      result[0] += 0.006246855280431901;
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)43305.24755796225509) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.901900000000000146) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6094905000000000461) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7731500000000001149) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09712242158187701924) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3002208421277365313) ) ) {
                    result[0] += -2.7125838072079798e-05;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.006192113724163802;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2082316587659429064) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1398177495611052923) ) ) {
                      result[0] += -0.0015004830030326357;
                    } else {
                      result[0] += 0.002596903069301398;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
                      result[0] += -0.0006138402115777692;
                    } else {
                      result[0] += 3.804681181530051e-06;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7821500000000000119) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2602911804898560555) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3462985000000000646) ) ) {
                      result[0] += -0.0013303756299046239;
                    } else {
                      result[0] += 0.0016015346941632312;
                    }
                  } else {
                    result[0] += -0.0062229161300865485;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2556.820004021212753) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1360340320715830165) ) ) {
                      result[0] += 0.001678640229674396;
                    } else {
                      result[0] += -0.0026048025378481044;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3107.181136317587516) ) ) {
                      result[0] += 0.0024546541219423817;
                    } else {
                      result[0] += -0.0002828634780999567;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.75486037469071476) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6199252650020550259) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.70944164869398918) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1546000000000000429) ) ) {
                      result[0] += -0.0011701830759381932;
                    } else {
                      result[0] += 0.00046707619204022587;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7803500000000002101) ) ) {
                      result[0] += 0.001844547833918021;
                    } else {
                      result[0] += -0.00047874592178998845;
                    }
                  }
                } else {
                  result[0] += -0.004985762827752968;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3787509271869893279) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6672.266741891098718) ) ) {
                    result[0] += -0.00010402456107873978;
                  } else {
                    result[0] += -0.006208529878073314;
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.978768481788676592) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05365000000000001018) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06065038394431352536) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2404.62816755580252) ) ) {
                      result[0] += 0.0011880191751618488;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.002364066193854875) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0018080482465162213;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2508523744426000568) ) ) {
                    result[0] += 0.0015338374631085607;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1279338682318470199) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0011133806242894658;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
                    result[0] += -0.0021435749022987016;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              result[0] += 0.00501046084466832;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.857800000000000118) ) ) {
            result[0] += -0.004687866376986637;
          } else {
            result[0] += -0.00014863161437477228;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.65524034672972675) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.30731523378582892) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06045000000000001067) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
                result[0] += 0.0037174286510046144;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.758730158730161364) ) ) {
                    result[0] += 0.0018793831736182705;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09453843892841291841) ) ) {
                      result[0] += -0.00034661485287351104;
                    } else {
                      result[0] += -0.003980141878617499;
                    }
                  }
                } else {
                  result[0] += 0.0019326376165255176;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7602760000000000629) ) ) {
                result[0] += -0.003785790584805134;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3791.556210767445464) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)12670.19278798460982) ) ) {
                result[0] += 0.006149625424585322;
              } else {
                result[0] += -4.0017448742812786e-05;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6254210000000001157) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                  result[0] += 0.001461792128352721;
                } else {
                  result[0] += -0.003725413979838457;
                }
              } else {
                result[0] += 0.002670304100640741;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)26013.27966640743398) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7550000000000001155) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1468760000000000343) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.002467560014299597;
                }
              } else {
                result[0] += -0.001705229264195316;
              }
            } else {
              result[0] += 0.0031811712517954382;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)16838.47520585079837) ) ) {
              result[0] += -0.005054224838893847;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5701660000000000617) ) ) {
                result[0] += -0.0006918775701882812;
              } else {
                result[0] += 0.0004869876481991762;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1568.251391465677443) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08409200000000001396) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.0011741740760685625;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07044200000000001849) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7966500000000000803) ) ) {
              result[0] += -0.0014160219707439721;
            } else {
              result[0] += 0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
          result[0] += 0;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1664534368267386599) ) ) {
            result[0] += 0.008295516884603059;
          } else {
            result[0] += 0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000000000001438) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006850000000000001053) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6526430887472424169) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4396243171653491655) ) ) {
            result[0] += 0.0065528901363947345;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
              result[0] += -0.0004830560804517096;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.144153487166192917) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0037147828916611263;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1746784584268683549) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2539.379249415995218) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.19793814432989798) ) ) {
                    result[0] += 0.0009647991571883873;
                  } else {
                    result[0] += 0.004805844583662942;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7581.571018954598003) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1090413665276023236) ) ) {
                      result[0] += 0.0033615369186966145;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0021656807596567964;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1468760000000000343) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0020713468684597455;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.382558990305469582) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.526055705300988441) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1682.526551393980526) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)739.2431776973787692) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0026041247919198476;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03089239001695652173) ) ) {
                      result[0] += -0.00020258707828990844;
                    } else {
                      result[0] += 0.0011353044036056122;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.414688759516345984) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8924000000000001931) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0029760332408917847;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
                      result[0] += 0.0005657113743981399;
                    } else {
                      result[0] += -0.0020736525439079283;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2503885000000000693) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8457500000000001128) ) ) {
                    result[0] += -0.002158183195972163;
                  } else {
                    result[0] += -0.007986789809306298;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                result[0] += 0.0027431938948340438;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.22777777777778141) ) ) {
                    result[0] += -9.05005548713734e-05;
                  } else {
                    result[0] += 0.0005858584624087889;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.314613457894214299) ) ) {
                    result[0] += -0.002262841893764363;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1222.028157201931208) ) ) {
                  result[0] += -0.003906380753896415;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2539.379249415995218) ) ) {
                    result[0] += -0.0014592355555874436;
                  } else {
                    result[0] += 0.0016848666028407024;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3146.277250048707629) ) ) {
                  result[0] += -0.0016992694587966296;
                } else {
                  result[0] += -0.0072145393263152325;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9325002873475637388) ) ) {
          result[0] += -0.003089993529139501;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
            result[0] += 0.0008100974082577251;
          } else {
            result[0] += -0.0013302160558985505;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5995.730546760533798) ) ) {
        result[0] += 0;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5565325000000000966) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
            result[0] += -0.004917586721896603;
          } else {
            result[0] += -0.0008185293003373788;
          }
        } else {
          result[0] += 0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240913000000000016) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.872261072261072634) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3749.11546473725457) ) ) {
          result[0] += -0.0044020220896783865;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.484296965040338367) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0028585233557066035;
            }
          } else {
            result[0] += 0.001350202391498861;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.43376557335367671) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3213000000000000855) ) ) {
            result[0] += -0.001020273360996065;
          } else {
            result[0] += 0.006270887620880592;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.16323529411765136) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1366.16280735785358) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1003.426071798457656) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4304500000000000548) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0025895515559889843;
                }
              } else {
                result[0] += 0.002496443466128268;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2470000000000000251) ) ) {
                result[0] += -0.004812549295012325;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10263157894737063) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5065000000000000613) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0047502532907482;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.518295403837575108) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4248.335231464433491) ) ) {
                  result[0] += -0.004755642066384542;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8090500000000001579) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0002788724308257318;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4033126559258033983) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5832000000000000517) ) ) {
                    result[0] += 0.0028494052976887887;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                      result[0] += -3.0293714887496967e-05;
                    } else {
                      result[0] += 0.0013320923275974117;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9050000000000001377) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1186.628837777138642) ) ) {
                      result[0] += -0.0006953979203497998;
                    } else {
                      result[0] += 0.0002292618283924734;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-42515.07229609502247) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0017370935186846225;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2900300291325960678) ) ) {
          result[0] += -0.0007489701747544514;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.442099999999999993) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
              result[0] += 0.001946985603898433;
            } else {
              result[0] += 0.006274083463929901;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07618126899281679743) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5626395000000000701) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-31827.96148275736414) ) ) {
              result[0] += 0.005041300471791598;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02459183207930617718) ) ) {
                  result[0] += -0.00164648470942538;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1037995575841958729) ) ) {
                      result[0] += 0.001428210360777212;
                    } else {
                      result[0] += -0.002321545244756638;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8728500000000001258) ) ) {
                      result[0] += 0.0011420629065436033;
                    } else {
                      result[0] += 0.004276723048039419;
                    }
                  }
                }
              } else {
                result[0] += -0.0020047335156888084;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.65524034672972675) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.60851063829787932) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
                      result[0] += -0.0016322513202766695;
                    } else {
                      result[0] += 0.00019577114947052387;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10171.3697502395753) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0031836843157741182;
                    }
                  }
                } else {
                  result[0] += -0.0034848298740193426;
                }
              } else {
                result[0] += 0.002284074142030116;
              }
            } else {
              result[0] += -0.0025899102102269547;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6535500000000000753) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1851412897798530577) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5065000000000000613) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.77179878048780548) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.003720888219418676;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18158.57126180104024) ) ) {
                  result[0] += -0.00041336616058623737;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.401298701298702376) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5776500000000001078) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0012371664080010596;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08235000000000002041) ) ) {
                      result[0] += 0.0020266163345004575;
                    } else {
                      result[0] += 0.007515204669725009;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4461.556953086569592) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3266.861991663331082) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5482000000000001316) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
                      result[0] += -0.0008517907388533502;
                    } else {
                      result[0] += 0.00034852770796247787;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.86758263639984179) ) ) {
                      result[0] += -0.005022016069944513;
                    } else {
                      result[0] += -0.0002524886917375487;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9983.220168266934706) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11367.30908202939645) ) ) {
                      result[0] += 0.0004997867389176703;
                    } else {
                      result[0] += -0.005458333747519527;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07895000000000000628) ) ) {
                      result[0] += 0.006411166568620197;
                    } else {
                      result[0] += 0.0002666133139049972;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-907.5257922099390271) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1229.430445872638074) ) ) {
                      result[0] += 0.0007004523366564116;
                    } else {
                      result[0] += 0.004019630538020832;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                      result[0] += 0.000675118857519067;
                    } else {
                      result[0] += -0.002828205965657927;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.179108910891089934) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6094905000000000461) ) ) {
                      result[0] += -0.005512515671219073;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)122.8416666666666828) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7607500000000001483) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4204754184957832375) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3398531389175412643) ) ) {
                      result[0] += 0.001895976423705333;
                    } else {
                      result[0] += 0.007946774727859922;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7310500000000000886) ) ) {
                  result[0] += -0.004253656271674149;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18644.6123996954484) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7444500000000001672) ) ) {
                  result[0] += -0.005364467204117915;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2040413945387017647) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3227809997884624194) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                      result[0] += 0.0009905025157129312;
                    } else {
                      result[0] += -0.0007670737727971975;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869734242044373551) ) ) {
                      result[0] += -0.0008784102655905362;
                    } else {
                      result[0] += -0.005289981473262426;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3411500000000000088) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2511183070799432038) ) ) {
                      result[0] += 0.0028787156722371904;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3398531389175412643) ) ) {
                      result[0] += -0.006541385171707298;
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
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5354000000000000981) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10983.85733458844334) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-72018.65726884668402) ) ) {
            result[0] += 0.0011329840317223108;
          } else {
            result[0] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4148169003269751576) ) ) {
            result[0] += -0.006869060596222404;
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.64312313803376853) ) ) {
            result[0] += -0.00233090620377803;
          } else {
            result[0] += 0.00022809991900436845;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.2641090678503506) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6680315000000001113) ) ) {
                result[0] += 0.004994569639002686;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += -0.0011192347332843087;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
              result[0] += 0.011782794994428109;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4191117286610134829) ) ) {
                result[0] += 0.004013084676140864;
              } else {
                result[0] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4880421551248437795) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4473314962819884832) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6221500000000000918) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3304355872301289465) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11367.30908202939645) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1915340000000000376) ) ) {
                      result[0] += -0.00010287053782867773;
                    } else {
                      result[0] += -0.0037698683652294435;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3576884733354243617) ) ) {
                      result[0] += 0.0012435455620058015;
                    } else {
                      result[0] += -0.000267741806588588;
                    }
                  } else {
                    result[0] += -0.0007028932183021114;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3578754866530491907) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3750000000000000555) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.005144137084351757;
                  }
                } else {
                  result[0] += -0.0010213837744131517;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.18541666666667567) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3268798599916286629) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1643.069582787823265) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4103386442176324422) ) ) {
                      result[0] += 0.0008627953088811547;
                    } else {
                      result[0] += -0.0018396127863301267;
                    }
                  } else {
                    result[0] += 0.005536829591143007;
                  }
                } else {
                  result[0] += 0.004575671185747512;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8212.004448418350876) ) ) {
                    result[0] += 0.01005600981920161;
                  } else {
                    result[0] += 0.0011881835789244247;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3176158234407915892) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596939932693950182) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.005479353912937644;
                    }
                  } else {
                    result[0] += -0.002196549282368495;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6497500000000001608) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3604310129059999368) ) ) {
                result[0] += -0.004388799716146698;
              } else {
                result[0] += 0.0004156892274512136;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7221500000000000696) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3029155602761551269) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2301.714118936117757) ) ) {
                      result[0] += 0.0034874483498641986;
                    } else {
                      result[0] += 0.0005631028590186149;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36696.22831575417513) ) ) {
                      result[0] += 0.003108259884382618;
                    } else {
                      result[0] += -0.00010944796186591455;
                    }
                  }
                } else {
                  result[0] += -0.0022823011543669537;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.08712121212122526) ) ) {
                      result[0] += -0.00216669888933113;
                    } else {
                      result[0] += 1.2781829043476451e-06;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003750000000000000295) ) ) {
                      result[0] += 0.0082682832846401;
                    } else {
                      result[0] += 0.0005091097469772098;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.93444444444445196) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7340.285232759907558) ) ) {
                      result[0] += -0.000388895296737627;
                    } else {
                      result[0] += 0.000781102370183361;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)31299.3757595375755) ) ) {
                      result[0] += -0.002381491664957105;
                    } else {
                      result[0] += 0.0007844460952902079;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869734242044373551) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2197.409051300025112) ) ) {
              result[0] += 0.0041545077872169375;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2128500000000000114) ) ) {
                result[0] += -0.0017315785290760945;
              } else {
                result[0] += 0.0017482416329286457;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3305835000000000856) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2668555000000000788) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.90096618357488367) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3492040711322696445) ) ) {
                    result[0] += -0.002833787756872988;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09065000000000002223) ) ) {
                  result[0] += 0.004228546032536944;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4881500000000000838) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.86754385964912473) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.58257918552036436) ) ) {
                    result[0] += -0.007599554731613428;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.30731523378582892) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004047780572896356;
                    }
                  }
                }
              } else {
                result[0] += 0.0006629215046092576;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1937.925932230502212) ) ) {
          result[0] += -0.0013575135101071762;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2792689664682383444) ) ) {
            result[0] += 0.0010131175533424047;
          } else {
            result[0] += 0.008078646159061807;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3239502683350661827) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553249611856754364) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2386968934588671598) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0458500000000000088) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.120050465838510867) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.006137626025660653;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1203499999999999986) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6111605972688834987) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09385000000000003062) ) ) {
                  result[0] += -0.00023005596290359644;
                } else {
                  result[0] += 0.0015838153847201847;
                }
              } else {
                result[0] += 0.004803803245831642;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3486.590803824997238) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.30909090909091042) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1079.931960267036857) ) ) {
                    result[0] += 0.0024916980475424024;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5642304926403781673) ) ) {
                      result[0] += 0.0008676832175911612;
                    } else {
                      result[0] += -0.0014637565531006494;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1967701477038585611) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0036939957811158142;
                  }
                }
              } else {
                result[0] += -0.004214697633918017;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
            result[0] += 9.7055885997217e-05;
          } else {
            result[0] += 0.004989114614792007;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.558350000000000124) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17051.15547769272598) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3183000000000000829) ) ) {
              result[0] += -0.006784557293526864;
            } else {
              result[0] += -0.0010074967022435136;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1530.761118312260805) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.419765446224257488) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.860555555555555962) ) ) {
                  result[0] += -0.0018817759650750442;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5001000000000001) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0023004418344525334;
                  }
                }
              } else {
                result[0] += -0.005189407532185243;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.107150000000000023) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.576686013579013057) ) ) {
                  result[0] += -0.0003413741976120259;
                } else {
                  result[0] += 0.0012405168471096993;
                }
              } else {
                result[0] += 0.0053509902027808415;
              }
            }
          }
        } else {
          result[0] += -0.006045359896816661;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.252450980392159963) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6327627825323679511) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.487050000000000094) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.860788113695091006) ) ) {
              result[0] += 0.0005449265528299356;
            } else {
              result[0] += 0.0069033998136765005;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1040.704691140170553) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5452.444267353072973) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0029742497894217085;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1137500000000000178) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9023689374824783727) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9150000000000001465) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6225430000000001796) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-717.0164406190135651) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
                      result[0] += -0.00034988361066555783;
                    } else {
                      result[0] += -0.0036643605599124053;
                    }
                  } else {
                    result[0] += -0.007049756502654259;
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.742610837438423932) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0261500000000000031) ) ) {
                    result[0] += 0.0011616674317127622;
                  } else {
                    result[0] += -0.000995449903172332;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
                    result[0] += 0.0063505732716771495;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.37349033816425159) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0018221861077537924;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3.295836866004294041) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.737273511647972946) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-569.3023343863511627) ) ) {
                    result[0] += 0.00165010251022239;
                  } else {
                    result[0] += -0.0017107465607812337;
                  }
                } else {
                  result[0] += -0.0051224945182359255;
                }
              } else {
                result[0] += 0.0013836278256467906;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.49507021931512174) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.395011276321747484) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                    result[0] += 0.0037909476315588636;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2802500000000000546) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0014788781952525104;
                    }
                  }
                } else {
                  result[0] += 0.005540576563380904;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.933699633699635712) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)690.7475206421901248) ) ) {
                      result[0] += -0.004091664603440589;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4268500000000000627) ) ) {
                      result[0] += 0.0019570449433104547;
                    } else {
                      result[0] += -0.001600579064390823;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3739500000000000601) ) ) {
                    result[0] += 0.006200843253123485;
                  } else {
                    result[0] += -0.0007280666548146437;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.18465909090909172) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9250000000000001554) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3810500000000000553) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5323.925722576165754) ) ) {
                  result[0] += -0.0015672380025731673;
                } else {
                  result[0] += -0.0055634690822956336;
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            result[0] += 0.0003445521032309925;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.44505130751407052) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
              result[0] += -0.0018399808792556212;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1222.028157201931208) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3749.11546473725457) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
                    result[0] += 0.00396477138937027;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.007583106302470749;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3177.479148390085811) ) ) {
                  result[0] += -0.004714995338577836;
                } else {
                  result[0] += 0.0012272164685333843;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                result[0] += 0.0026661074349508896;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1079.931960267036857) ) ) {
                      result[0] += -0.0005901277793166416;
                    } else {
                      result[0] += 0.0005917281130495489;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
                      result[0] += 0.00020822193921340545;
                    } else {
                      result[0] += -0.003203456501574422;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1582500000000000295) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3550000000000000377) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0010251916525559539;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5350000000000001421) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0025761316027465265;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.92861142217245352) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3991483633491397787) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.358141500000000057) ) ) {
                      result[0] += -0.0025246220140448905;
                    } else {
                      result[0] += -0.008466341729313;
                    }
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
                  result[0] += 0.003892532052522077;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.509500000000000175) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
                      result[0] += -0.0007261192585513139;
                    } else {
                      result[0] += 0.0031603708975471477;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                      result[0] += -0.005269791337895984;
                    } else {
                      result[0] += -0.00013499415525087906;
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
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3950000000000000733) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.004282678720911111;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07945677231391518047) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9495000000000001217) ) ) {
              result[0] += 0.004176386017487688;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9679500000000001991) ) ) {
                result[0] += -0.0014649879462882744;
              } else {
                result[0] += 0.002456825811366673;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04908122139453940935) ) ) {
              result[0] += -0.004111308840830226;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.382558990305469582) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.512751786874594107) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5626395000000000701) ) ) {
                    result[0] += 0.002426983006067491;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1885.524186461903128) ) ) {
                      result[0] += 0.0011344302077049215;
                    } else {
                      result[0] += -0.0006135792031861679;
                    }
                  } else {
                    result[0] += -0.001626129268720491;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1879.768845692260356) ) ) {
                  result[0] += 0.0037351141718486424;
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.155357142857144304) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.927352500000000135) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1618.91458251395693) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
                  result[0] += -0.0015286330922062458;
                } else {
                  result[0] += 0.0001910356140611378;
                }
              } else {
                result[0] += 0.0007696321534399386;
              }
            } else {
              result[0] += 0.003069812094962522;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003750000000000000295) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02622543668122271146) ) ) {
                result[0] += 0.0010050521524184372;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.74216524216524604) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01242517226504776494) ) ) {
                    result[0] += -0.0013607259758400083;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1172.762349355894003) ) ) {
                      result[0] += -0.0004993880283398406;
                    } else {
                      result[0] += 0.0015628637388332735;
                    }
                  }
                } else {
                  result[0] += -0.0018942507385529576;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.675249077694567879) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1795.96581361443873) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2833.358085742900585) ) ) {
                    result[0] += -0.004328945847875312;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2986.391455690082239) ) ) {
                  result[0] += -0.001594339154648071;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6829935000000001422) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0018589666277966735;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3989980000000000748) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999655000000000515) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4200500000000000345) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4769234976159801298) ) ) {
                result[0] += 0.00519030657256787;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7957915931777371776) ) ) {
                    result[0] += -0.0007830032339352159;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.0013246944864946037;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3688321311376249745) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4351.162893810690548) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0036277751985466264;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2043540000000000079) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0014241399789361776;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06845150950446143856) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0018714803291576085;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2386968934588671598) ) ) {
                      result[0] += -0.00024743128871324276;
                    } else {
                      result[0] += 0.0008700867589381484;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5296500000000000652) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4401670142345356918) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0004725969890668351;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.006908620919656113;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00575000000000000077) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5984500000000001485) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.004695582976173871;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4006.744949928525784) ) ) {
                result[0] += -0.0026203598977722086;
              } else {
                result[0] += 0.0015389165129621777;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.580400000000000138) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.004706976626045121;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.245079122973038) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.26872082166200784) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4629760000000000542) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.002252555623818137;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.67607313195548535) ) ) {
              result[0] += -0.003978539310460763;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
            result[0] += -0.007350030506310216;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.04124149659864074) ) ) {
              result[0] += -0.006092442788835544;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925320000000000253) ) ) {
                result[0] += 0.0011031839020868184;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5536370000000000458) ) ) {
                  result[0] += -0.003469422900712194;
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02465000000000000524) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3699670000000000458) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7068500000000000894) ) ) {
          result[0] += 0.0010752635725518394;
        } else {
          result[0] += -0.0014669757401155707;
        }
      } else {
        result[0] += 0.0032224259639956313;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4784.444799033853087) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5396.80911722399378) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5340269922761711197) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.592954307638647649) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.169986979704803115) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0005281023873976643;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1729500000000000204) ) ) {
                  result[0] += -0.00418701622053225;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4138499999999999956) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.001164465591357527;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2741.853991412898267) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.294700000000000073) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0052158717476336845;
                  }
                } else {
                  result[0] += 0.0007454919205828099;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600160000000000582) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
                    result[0] += 0.0006545380757209514;
                  } else {
                    result[0] += 0.00599938386666159;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1203499999999999986) ) ) {
                    result[0] += -0.001993882792219442;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3112500000000000822) ) ) {
                      result[0] += 0.002395382721480547;
                    } else {
                      result[0] += -0.0003081010744087442;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4505095000000000627) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                result[0] += -0.0022754192314037545;
              } else {
                result[0] += -0.008969118624909024;
              }
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2127.473441927146268) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1960.422395893427392) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2571.528544352357585) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4006080000000000751) ) ) {
                      result[0] += -0.000629485117861619;
                    } else {
                      result[0] += 0.001476749954182294;
                    }
                  } else {
                    result[0] += 0.004017252061142518;
                  }
                } else {
                  result[0] += -0.001954475967951908;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5120878152759216206) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6519500000000001405) ) ) {
                    result[0] += 0.001977629935850906;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2721073006283602491) ) ) {
                      result[0] += 0.000740986828941518;
                    } else {
                      result[0] += -0.0017949812384342413;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7320592709375011164) ) ) {
                    result[0] += -0.005851266366825153;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.194724803310769135) ) ) {
                      result[0] += 0.0001609611267959926;
                    } else {
                      result[0] += -0.0034146329725787492;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4768620372057117418) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2197.409051300025112) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.692450000000000121) ) ) {
                    result[0] += 0.00026459356697961265;
                  } else {
                    result[0] += -0.000659627718275621;
                  }
                } else {
                  result[0] += -0.003183430537502585;
                }
              } else {
                result[0] += -0.006528815071070578;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2225.774828494720623) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7375415000000001831) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.927625836485307165) ) ) {
                      result[0] += 0.0017633490329942204;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8753585000000000393) ) ) {
                      result[0] += -0.0013663371029991333;
                    } else {
                      result[0] += 0.0005100862428212343;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
                    result[0] += 0.002109695196782824;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5308159824506151203) ) ) {
                      result[0] += -0.0012345416332110964;
                    } else {
                      result[0] += -0.0059237260332423505;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4549058249040809909) ) ) {
                    result[0] += -0.003656974146757983;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.567091454272864226) ) ) {
                      result[0] += 0.00019896361818259135;
                    } else {
                      result[0] += 0.005609909979763075;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.569111884291402359) ) ) {
                    result[0] += 0.0035310941412194244;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
                      result[0] += -0.0018721509270005062;
                    } else {
                      result[0] += 0.002047935034402222;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5701660000000000617) ) ) {
                result[0] += 0.005495752286535005;
              } else {
                result[0] += 0.0005388159517589108;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.88883399209486491) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.407843474118376681) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.00620175821614373;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0953500000000000042) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9343500000000001249) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09244144239215144887) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4050000000000000822) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.003619636076014769;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2059541029866850392) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.004179323975016964;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5254000000000000892) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.001095948850981722;
                    }
                  }
                }
              } else {
                result[0] += 0.003056579160492562;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2428.189675971083943) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4589380000000000126) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2158399509024095386) ) ) {
                      result[0] += -0.0033273469543336565;
                    } else {
                      result[0] += 0.0007025660490607236;
                    }
                  } else {
                    result[0] += 0.006543602194977346;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.76388888888889284) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
                      result[0] += -0.006876233006311218;
                    } else {
                      result[0] += -0.0013126306304744185;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2668.597659326529538) ) ) {
                  result[0] += 0.008886994430046861;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4348787844478528841) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.701050000000000062) ) ) {
                      result[0] += 0.004764059790114435;
                    } else {
                      result[0] += 0.0009243573806350434;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.638401428543058258) ) ) {
                      result[0] += -0.0017669591088820562;
                    } else {
                      result[0] += 0.002359692223008555;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9305500000000000993) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7668550000000001754) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
                  result[0] += -0.0051006675788153755;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04908122139453940935) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07449922958397615) ) ) {
                      result[0] += 0.005087010407263088;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3106.972830756585154) ) ) {
                      result[0] += -0.00013227403985328985;
                    } else {
                      result[0] += 0.0011827772232817148;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6768.866270911575157) ) ) {
                  result[0] += 0.004590870117942308;
                } else {
                  result[0] += 6.760261691811214e-05;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1688500000000000278) ) ) {
                result[0] += -0.005955811476068641;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7581.571018954598003) ) ) {
                  result[0] += -0.0026433817458540636;
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
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3833.159599586038439) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5890.241073706772113) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01815000000000000294) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009350000000000002406) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1784550515539286286) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.115000000000000005) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0021887168917993464;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0024046342622414613;
                }
              }
            } else {
              result[0] += -0.0024619706122717094;
            }
          } else {
            result[0] += -0.0037119718196282616;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22862.06187916693671) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[0] += -0.0025273306903079427;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                result[0] += -0.00024317085097733443;
              } else {
                result[0] += 0.00013400795308950525;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)12670.19278798460982) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3213000000000000855) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8021437310018827427) ) ) {
                  result[0] += 0.0026593241257662267;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11144.16520893778397) ) ) {
                    result[0] += -0.00011441530743147925;
                  } else {
                    result[0] += 0.0014394145776336353;
                  }
                } else {
                  result[0] += -0.0017809683093335583;
                }
              }
            } else {
              result[0] += 0.004181402051872449;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.692450000000000121) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0233500000000000027) ) ) {
            result[0] += 0.0028597852424556594;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)99.74719574087761487) ) ) {
              result[0] += 0.0022025670775592428;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3107.181136317587516) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.00581395348837255) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5308159824506151203) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.005461050635774957;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6391.930040077767444) ) ) {
                      result[0] += 0.0014626639606784557;
                    } else {
                      result[0] += -0.002173705840644307;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.536038961038963535) ) ) {
                    result[0] += -0.006128451235803615;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1928899549823784032) ) ) {
                      result[0] += 0.003191060647615867;
                    } else {
                      result[0] += -0.0010381244854146406;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4843951266831568181) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00482915936126379;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.407843474118376681) ) ) {
                      result[0] += -0.001495609006204627;
                    } else {
                      result[0] += -4.1775326355902256e-05;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)148.927747252747281) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1395500000000000351) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.003387880752726382;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1667500000000000371) ) ) {
                      result[0] += 0.0002782227421379034;
                    } else {
                      result[0] += -0.0007861675184527521;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4033126559258033983) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3787240042526709427) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3634578871420977575) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596939932693950182) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.04880952380953119) ) ) {
                      result[0] += -0.0003535990851131212;
                    } else {
                      result[0] += 0.0020346969165271965;
                    }
                  } else {
                    result[0] += 0.005595728011304125;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1243193429785608706) ) ) {
                      result[0] += 0.0024353767937246784;
                    } else {
                      result[0] += -0.004029234135830667;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05935000000000000692) ) ) {
                      result[0] += 0.0014606883532846913;
                    } else {
                      result[0] += -0.00011233540259421689;
                    }
                  }
                }
              } else {
                result[0] += 0.004193033615513226;
              }
            } else {
              result[0] += -0.00425518556844411;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.1721611721611751) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.011056403257962087;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2042500000000000426) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4566350000000000686) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8250000000000000666) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4666.632518606213125) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.62019230769231015) ) ) {
                result[0] += -0.0013254400455183744;
              } else {
                result[0] += 0;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4290.319098872139875) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3726408267520956996) ) ) {
                  result[0] += 0.000810125356813184;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += -0.00014978946626719177;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2164415000000000366) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6087500000000001243) ) ) {
                result[0] += 0.0025174535228452413;
              } else {
                result[0] += 0.009273727668809907;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.28245614035088096) ) ) {
                  result[0] += 0.0018775688697892728;
                } else {
                  result[0] += -0.004708776350960651;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.71832579185520729) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.442099999999999993) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121500000000000136) ) ) {
                      result[0] += -0.0001237931153882457;
                    } else {
                      result[0] += 0.008920408737718754;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.363139534883722526) ) ) {
                      result[0] += 0.001159128131199973;
                    } else {
                      result[0] += -0.002173399782053444;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.09333333333334792) ) ) {
                      result[0] += 0.0013725575368768806;
                    } else {
                      result[0] += 0.007703778915037029;
                    }
                  } else {
                    result[0] += 0.0073893568820908835;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05365000000000001018) ) ) {
              result[0] += -0.006861491468993729;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1395500000000000351) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0011339778245808498;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7942500000000002336) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6107500000000001261) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6014500000000001512) ) ) {
                  result[0] += 0.004502739521977439;
                } else {
                  result[0] += -0.0004510926490405541;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.83824525745257539) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0049697017010352324;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.265006002400961727) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
                  result[0] += 0.00139419580452048;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0.005253755702322695;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3922500000000000431) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4049500000000000877) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2596500000000001029) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.006691774565052763;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3042628804014196331) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6722500000000001252) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0004918025859442298;
                }
              } else {
                result[0] += 0.007609137606160342;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.52228163992870336) ) ) {
                result[0] += -0.008472145424216796;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.78759398496241317) ) ) {
                  result[0] += 0.0011362278368208729;
                } else {
                  result[0] += -0.00442654822851428;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5522500000000001297) ) ) {
                  result[0] += 0.003990331294388875;
                } else {
                  result[0] += -0.00012201804913540284;
                }
              } else {
                result[0] += -0.001692394300390271;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)939.1508267619991557) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.004860459795164071;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653589743589744199) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2508523744426000568) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3191980000000000373) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.005385568517038175;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.18303571428572241) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.433327285921625727) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0313500000000000098) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.130274200633482079) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.849423500000000109) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07945677231391518047) ) ) {
                      result[0] += 0.00151758296720999;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.985999416642361126) ) ) {
                      result[0] += 0.0015657371046895884;
                    } else {
                      result[0] += -0.0015266770483166126;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000000000000697) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
                      result[0] += -0.0018057010410902899;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.572427572427572473) ) ) {
                  result[0] += 0.002569961243340082;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1829182123299770424) ) ) {
                    result[0] += 0.0004007748666489307;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05015000000000000707) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8116500000000000936) ) ) {
                    result[0] += 0.0017694924708524093;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.0041916759995223206;
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7340.285232759907558) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01651861945051705596) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.004381945348608916;
              }
            } else {
              result[0] += 0.0006323940781652504;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.49507021931512174) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.147407407407407653) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5594259411545304816) ) ) {
                result[0] += -1.952828639063168e-06;
              } else {
                result[0] += -0.0033600088505583744;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444509567657248139) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0030987709289632265;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2127.473441927146268) ) ) {
              result[0] += -0.000678464516811546;
            } else {
              result[0] += -0.0058082207678601585;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2777090000000000392) ) ) {
            result[0] += 0.002514473407906996;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-156.7600528121663501) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.624858597285068651) ) ) {
                  result[0] += 0.003995145606114986;
                } else {
                  result[0] += -0.00019282924475650377;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1337.280669109357859) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817765000000001407) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1879.768845692260356) ) ) {
                      result[0] += 0.00013852085262042166;
                    } else {
                      result[0] += 0.00310748851909861;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.849423500000000109) ) ) {
                      result[0] += -0.0010043473702245453;
                    } else {
                      result[0] += 0.00033868249382128213;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)166.9041125316803402) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1879500000000000337) ) ) {
                      result[0] += -0.0051461738770639965;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8969687899648990381) ) ) {
                result[0] += 0.0005411470514156895;
              } else {
                result[0] += -0.004394306126173097;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5291855000000000864) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01255000000000000213) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4250000000000000444) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2250000000000000333) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1595.83134361526254) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0003843275501659253;
                    }
                  } else {
                    result[0] += 0.001325224610957569;
                  }
                } else {
                  result[0] += -0.0016715944493826329;
                }
              } else {
                result[0] += 0.00527352239876139;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2332.481509447223289) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0028115969040811476;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1079.931960267036857) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5340269922761711197) ) ) {
                result[0] += 0.0032508317218185325;
              } else {
                result[0] += -0.0020623746266861804;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.154452422829296665) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2668.597659326529538) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2257766530001369121) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.005979614726856534;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.00792126514550586;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4262175000000000824) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3325620000000000798) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999655000000000515) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355947963695212921) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.00418631468169599;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.81296296296296422) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1186.628837777138642) ) ) {
                      result[0] += 0.004497413385856961;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.81858974358974734) ) ) {
                      result[0] += -0.003392969622156306;
                    } else {
                      result[0] += 7.229496281011914e-05;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5751000000000000556) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.811253561253562516) ) ) {
                    result[0] += 0.00028558761795632415;
                  } else {
                    result[0] += -0.003118940240365655;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1851412897798530577) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.008450028795101325;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6010500000000000842) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.004475845864224014;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4762500000000000067) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0030083715367800546;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.363139534883722526) ) ) {
                    result[0] += -0.004121502246475121;
                  } else {
                    result[0] += 0.00032341382772232177;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4043265000000000886) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6659500000000001529) ) ) {
                    result[0] += -0.0074264800297255;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2624768466104180908) ) ) {
                      result[0] += -0.004287105859663723;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.327327084680026026) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2081.229889241327783) ) ) {
                    result[0] += 0.009411353272954405;
                  } else {
                    result[0] += 0.0024685920110516704;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2855158726759733923) ) ) {
                result[0] += -0.004134420689654257;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2598000000000000309) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1688500000000000278) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308500000000000218) ) ) {
                      result[0] += 0.0008759992957476335;
                    } else {
                      result[0] += -0.0021635599681489003;
                    }
                  } else {
                    result[0] += 0.0052900278021746384;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2149.529036211334187) ) ) {
                    result[0] += -0.003069888045675027;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.106374722838138425) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7875500000000000833) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.0592625109745395) ) ) {
                result[0] += -0.003208273178460831;
              } else {
                result[0] += 0.0038596018817539327;
              }
            } else {
              result[0] += -0.004871385769185596;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
              result[0] += -0.007210943601521854;
            } else {
              result[0] += -0.0014548940884541663;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1622.076218527950459) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6941500000000001558) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.643991500000000161) ) ) {
                result[0] += 0.0036852817100510625;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6909735000000001293) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0009586709991305778;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2367240667710305002) ) ) {
                result[0] += 0.00017781470399265184;
              } else {
                result[0] += -0.003191587382772245;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6526275000000001381) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.00576386981493968;
            }
          }
        }
      }
    }
  }
}

