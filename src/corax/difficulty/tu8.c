
#include "prediction.h"

void predict_unit8(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5702500000000001457) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6850000000000001643) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5399840518659736466) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3535211598876289441) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.457966404524975057) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1298745000000000316) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.002028186912467889;
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            result[0] += 0.0011603295080840773;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2818837338874919385) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
              result[0] += -0.0010285757775725431;
            } else {
              result[0] += 0.001749867950063487;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1811500000000000055) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02715000000000000399) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.00714285714286333) ) ) {
                  result[0] += -0.0023602926591071677;
                } else {
                  result[0] += 0.005261864285204116;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                  result[0] += 0.0024928034151201718;
                } else {
                  result[0] += 0.01107294533269342;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.431226121273369345) ) ) {
                result[0] += -0.002847927598675556;
              } else {
                result[0] += 0.0027799962335049197;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3781980000000000897) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66217532467532791) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.221202854230377888) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02715000000000000399) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0026172268457441165;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4659489670146004237) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2508.19119374671709) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2404.62816755580252) ) ) {
                    result[0] += -0.014382998779146025;
                  } else {
                    result[0] += -0.0033433219853021474;
                  }
                } else {
                  result[0] += 0.001138143567757796;
                }
              } else {
                result[0] += 0.0035257232710276835;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.00714285714286333) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2986.391455690082239) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9013.430510330945253) ) ) {
                  result[0] += -0.0016433714347978284;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6358500000000001373) ) ) {
                    result[0] += 0.001054148193335835;
                  } else {
                    result[0] += 0.007364521366215331;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1201.367728319936987) ) ) {
                  result[0] += 0.001995570355047935;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.310715078210065665) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0059400968068821875;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3724040000000000683) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.94047619047619335) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1928899549823784032) ) ) {
                    result[0] += -0.006565980773833111;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3462985000000000646) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3283310000000000395) ) ) {
                      result[0] += -0.00010351593781161528;
                    } else {
                      result[0] += 0.0024157960082684463;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.857800000000000118) ) ) {
                      result[0] += -0.0005682524965615998;
                    } else {
                      result[0] += -0.0048188948547522896;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.76341350601295943) ) ) {
                  result[0] += 0.004071300429601222;
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1909226976060683645) ) ) {
            result[0] += -0.005174890464070247;
          } else {
            result[0] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2648210000000000286) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5568739105774286324) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.94804318488530015) ) ) {
              result[0] += -0.002778145898962512;
            } else {
              result[0] += 0;
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03385000000000000508) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3450000000000000289) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7371304289733293658) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.00030905853225384963;
                  }
                } else {
                  result[0] += -0.0029730835166768663;
                }
              } else {
                result[0] += 6.965208327971586e-05;
              }
            } else {
              result[0] += 0.0036575979202432348;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.921363443236741575) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6327627825323679511) ) ) {
                result[0] += 0.0007176895110707958;
              } else {
                result[0] += -0.0021058582792282355;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1708.479834708773978) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3057365000000000221) ) ) {
                  result[0] += -0.011160041557588067;
                } else {
                  result[0] += -0.003918275968871327;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3064.437254561459213) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0029323291605950607;
                }
              }
            }
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.65838375108038605) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5430163914776303669) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.005734053947392834;
            }
          } else {
            result[0] += -0.0023071199406638015;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3205004002465369761) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1002500000000000197) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78888888888889497) ) ) {
                result[0] += -0.006964002202363329;
              } else {
                result[0] += -0.001754089179237217;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3449485957867410302) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.315748500000000043) ) ) {
                result[0] += 0.006421917886660216;
              } else {
                result[0] += -7.777644461786516e-05;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.363139534883722526) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7444253094382086156) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
                    result[0] += 0.00043823194934637845;
                  } else {
                    result[0] += 0.004917428977524866;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2081000000000000349) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
                      result[0] += 0.00322600175193412;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.0038880319121171077;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.087782058337921853) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7118907180887991126) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.006652405758720868;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)237.3704492435913664) ) ) {
                      result[0] += -0.003230606863451572;
                    } else {
                      result[0] += 0.0026895356940210453;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33592821992194288) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)361.7598371524995287) ) ) {
                      result[0] += -0.0016376144596617838;
                    } else {
                      result[0] += 0.0033327908309712124;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.73508771929824768) ) ) {
                      result[0] += -0.0021152954369679485;
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
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4388460000000000694) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.86905594405594577) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.487050000000000094) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)690.7475206421901248) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6526430887472424169) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09875000000000001832) ) ) {
                result[0] += -0.004825176200438967;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08505000000000001448) ) ) {
                result[0] += 0.004226668421538741;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)26.28707706142381895) ) ) {
                  result[0] += -0.002183398805384477;
                } else {
                  result[0] += 0.0005836294389162937;
                }
              }
            }
          } else {
            result[0] += 0.004127264101691252;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596939932693950182) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869734242044373551) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.592954307638647649) ) ) {
                result[0] += 0.00046670256484145843;
              } else {
                result[0] += -0.003279093492557918;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4626188573480190525) ) ) {
                result[0] += 0.002115730658508276;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3616.651907341595233) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.006632701634179012;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1137.968895395498521) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4006.744949928525784) ) ) {
            result[0] += 0.010278697994404383;
          } else {
            result[0] += 0.001967654594195108;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4415.807239953120188) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4283830000000000693) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1688500000000000278) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5522500000000001297) ) ) {
                    result[0] += 0.003089081152555518;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1805574535561877969) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.005322129872505205;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2566500000000001003) ) ) {
                    result[0] += -0.008853948191364442;
                  } else {
                    result[0] += -0.001480720495891347;
                  }
                }
              } else {
                result[0] += 0.002241698571241688;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4844.968018580479111) ) ) {
                result[0] += 0.005894758936232024;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2128500000000000114) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05921603206594685392) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04108592410728736238) ) ) {
                      result[0] += 0.0015702874050155882;
                    } else {
                      result[0] += -0.0037881387330750012;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
                      result[0] += 0.0014030467834761147;
                    } else {
                      result[0] += 0.006432548450781664;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5184500000000001885) ) ) {
                    result[0] += 0.0038556018817644225;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1511569171003262213) ) ) {
                      result[0] += 0.001954296325835729;
                    } else {
                      result[0] += -0.0046405638047973706;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8015000000000001013) ) ) {
              result[0] += 0.006710302577406379;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1211200960218856565) ) ) {
                result[0] += 0.004122203731406324;
              } else {
                result[0] += -0.0017963705301311933;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4426700000000000634) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1854500000000000315) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.004992062656799975;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.62019230769231015) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.35781818181818537) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3940500000000000114) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.811253561253562516) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3431500000000000661) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2690500000000000669) ) ) {
                      result[0] += 0.0005814523053631146;
                    } else {
                      result[0] += -0.0023725358393702186;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.908568443051202213) ) ) {
                      result[0] += 0.00025074159857137895;
                    } else {
                      result[0] += 0.004104947740263904;
                    }
                  }
                } else {
                  result[0] += -0.0033720395911195538;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.044849653237345022) ) ) {
                  result[0] += 0.007597196932644861;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.431226121273369345) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4566350000000000686) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1055500000000000188) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3064.437254561459213) ) ) {
                      result[0] += -0.002798300759838065;
                    } else {
                      result[0] += 0.001966984165956262;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4626188573480190525) ) ) {
                      result[0] += 0.007445161171440611;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675530000000000519) ) ) {
                      result[0] += -0.0018586604806186391;
                    } else {
                      result[0] += 0.0002431125704898395;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)14358.85907140550808) ) ) {
                      result[0] += -0.0012260673557106664;
                    } else {
                      result[0] += 0.0031070921241803484;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4351.162893810690548) ) ) {
                      result[0] += -0.0021066262443827258;
                    } else {
                      result[0] += -0.008735591205755365;
                    }
                  } else {
                    result[0] += -0.0007484847973665501;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5606243401883367339) ) ) {
              result[0] += 0.006130068502384905;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18158.57126180104024) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.4247832738398927) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5291855000000000864) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.44068627450981523) ) ) {
                  result[0] += 0.0004187321123297414;
                } else {
                  result[0] += -0.0017600304586284229;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.69385026737968047) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.005549318422361912;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3020500000000000962) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.004701181920046166;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.14277939042090537) ) ) {
              result[0] += -0.0045336711063230185;
            } else {
              result[0] += -0.0007357608530962287;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3283310000000000395) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3057365000000000221) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12101.76805091953611) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01875000000000000278) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06035185914383755373) ) ) {
                result[0] += 0.00012768663916166764;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1298745000000000316) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4463094520789036013) ) ) {
                    result[0] += -0.0005999503142633788;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.004282347704271089;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03635000000000000731) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9150000000000001465) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.006040399138342823;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.96040372670807628) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4123000000000000553) ) ) {
                      result[0] += -1.2417824430489247e-07;
                    } else {
                      result[0] += 0.008426535384306518;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
                      result[0] += -0.0034966400603623025;
                    } else {
                      result[0] += 0.0008018031611538638;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1915340000000000376) ) ) {
                      result[0] += -0.0006204781789851899;
                    } else {
                      result[0] += 0.0016538273839255477;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2777090000000000392) ) ) {
                      result[0] += -0.002059461397256424;
                    } else {
                      result[0] += 0.0011118993310063475;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.61204013377927069) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6614500000000002045) ) ) {
                result[0] += 0.000810459553267566;
              } else {
                result[0] += 0.0071516564705017376;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.000293466524750252;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8150000000000000577) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6950000000000000622) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1254.980453496960536) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.29500000000000004) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
                    result[0] += 0.0012071896257032286;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1650000000000000355) ) ) {
                      result[0] += -0.0009731659383146729;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += -0.002276284295441679;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2166315049226441858) ) ) {
                    result[0] += 0.0035271683573516325;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4006.744949928525784) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
                      result[0] += -0.0010241335232680099;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
                      result[0] += -0.00037928075277938946;
                    } else {
                      result[0] += 0.0008070854834722233;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2923.99720646755668) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6200500000000001011) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.004065354928059611;
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000000000000487) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3177.479148390085811) ) ) {
                result[0] += 0.005437678699003406;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.252450980392159963) ) ) {
                  result[0] += 0.00040407688837542516;
                } else {
                  result[0] += -0.003135607810584689;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1861530472994430141) ) ) {
                result[0] += -0.00568564375861127;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5141168753850328121) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074926675286680289) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1839.943830114362981) ) ) {
                      result[0] += -0.003095218053068642;
                    } else {
                      result[0] += -4.2994370748108885e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4472500000000000364) ) ) {
                      result[0] += 0.0050448253099115384;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6795141123970477315) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3810500000000000553) ) ) {
                      result[0] += -0.009173216271737866;
                    } else {
                      result[0] += -0.002637146537826432;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4729.064601742868945) ) ) {
                      result[0] += -0.004329259337726838;
                    } else {
                      result[0] += 0.0008230174105186964;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930090000000000194) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6672.266741891098718) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4190.954657040626444) ) ) {
              result[0] += 0.005598133231704974;
            } else {
              result[0] += 0.0001039595895623249;
            }
          } else {
            result[0] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1720691644993862512) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08115000000000001379) ) ) {
              result[0] += -0.0052021857326898435;
            } else {
              result[0] += 8.516484309381422e-06;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2429488264872171899) ) ) {
              result[0] += 0.005549834992805512;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121500000000000136) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4853978233193322334) ) ) {
                  result[0] += 0.0039366174108432656;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3742502868321948561) ) ) {
                  result[0] += -0.006131745373364689;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2993500000000000605) ) ) {
                    result[0] += -0.0013054782324180563;
                  } else {
                    result[0] += 0.0012066757486312032;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4461.556953086569592) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553249611856754364) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.004241054433350351;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1774.246538787889904) ) ) {
            result[0] += 0.00453560953843267;
          } else {
            result[0] += -0.0010489896930201918;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3371000000000000663) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14236111111111249) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2602911804898560555) ) ) {
              result[0] += -0.0003398618002221349;
            } else {
              result[0] += -0.006049788871329771;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)12336.40759658668867) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.2322677322677329) ) ) {
                result[0] += -0.003123902623342543;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0.001305270535031521;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6181500000000000883) ) ) {
            result[0] += -0.0031132492141369484;
          } else {
            result[0] += 0.00527126529306717;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.0064516129032306) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.927352500000000135) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1499.104419668594574) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66217532467532791) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.87456103385307138) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6680315000000001113) ) ) {
                      result[0] += 0.00018451523395216575;
                    } else {
                      result[0] += -0.0008471042588767044;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041500000000000065) ) ) {
                      result[0] += -0.0009407195970606161;
                    } else {
                      result[0] += 0.004572326485755287;
                    }
                  }
                } else {
                  result[0] += -0.004421649374095716;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675530000000000519) ) ) {
                  result[0] += -0.0001380975424289554;
                } else {
                  result[0] += 0.007566272653355662;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1292500000000000315) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
                  result[0] += 0.0034325776363063505;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1860.099431670796776) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                      result[0] += -0.00016494036464814493;
                    } else {
                      result[0] += -0.007346236412115235;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2841076982928243955) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.003163945703348411;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2428.189675971083943) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.43089430894309011) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.009464563134608948;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3115602405909643768) ) ) {
                      result[0] += -0.0014192574683181767;
                    } else {
                      result[0] += 0.0014895215833078959;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.18465909090909172) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2444518245208232299) ) ) {
                      result[0] += -0.0018586398173693873;
                    } else {
                      result[0] += 4.534470829164915e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2332.481509447223289) ) ) {
                      result[0] += 0.004164717730960448;
                    } else {
                      result[0] += -0.00013781064478993126;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-717.0164406190135651) ) ) {
              result[0] += 0.0032175548898997265;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.317357322368964523) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14236111111111249) ) ) {
              result[0] += 0.006732317652623493;
            } else {
              result[0] += 0.0001119926570343982;
            }
          } else {
            result[0] += -0.00116461394640439;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.975304878048781188) ) ) {
          result[0] += 0.0011612733088092765;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2353.687490992878338) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6055500000000001437) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4302840000000000553) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.00741206200372265;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.591750841750842582) ) ) {
                result[0] += -0.0027090363511242067;
              } else {
                result[0] += 0.0052327968962020705;
              }
            }
          } else {
            result[0] += -0.007895049710507834;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45993589743590135) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2534372918956249165) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1435407080639670985) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09832488768552394287) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6094905000000000461) ) ) {
                result[0] += 0.004262324388049794;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += -0.0001344970242128457;
            }
          } else {
            result[0] += 0.0059909170101465825;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5324000000000000954) ) ) {
            result[0] += 0.0020589566404629563;
          } else {
            result[0] += -0.0018249847787376052;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.06066176470588758) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1559.276745549883799) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3724040000000000683) ) ) {
              result[0] += -0.004424097400580795;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3970620000000000815) ) ) {
                result[0] += 0.0051531330992712005;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5029.288454347889456) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8212.004448418350876) ) ) {
                      result[0] += -0.0017337471806768065;
                    } else {
                      result[0] += 0.004287293428293391;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7052500000000000435) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.009863771834020074;
                    }
                  }
                } else {
                  result[0] += 0.003049119714269184;
                }
              }
            }
          } else {
            result[0] += -0.00646963916507907;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3726408267520956996) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2523846967694989285) ) ) {
                result[0] += 0.0028101989594659835;
              } else {
                result[0] += 0.008413820220363183;
              }
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.18253968253969077) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0953500000000000042) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4061.155400297998767) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2962.976412357489153) ) ) {
                    result[0] += -0.0039026366658287087;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2833.358085742900585) ) ) {
                      result[0] += 0.0025618173532878817;
                    } else {
                      result[0] += -0.0033429158721768664;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01875000000000000278) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0030912262642804134;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.59010642135642144) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5221506565800743127) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2613055141501312573) ) ) {
                      result[0] += 0.002809863423848955;
                    } else {
                      result[0] += -0.001537335258396121;
                    }
                  } else {
                    result[0] += 0.0090451328385016;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
                    result[0] += -0.001590458882534317;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03580261074118568781) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.74189814814816657) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0031801703581722856;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9632500000000000506) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7534500000000000641) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7246500000000001274) ) ) {
                      result[0] += -1.263344011100051e-05;
                    } else {
                      result[0] += -0.003917118086564784;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6734055000000001012) ) ) {
                      result[0] += 0.0010364771780954018;
                    } else {
                      result[0] += -0.003040897586677429;
                    }
                  }
                } else {
                  result[0] += -0.0036915366688305873;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5.113654335801698814) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.147407407407407653) ) ) {
        result[0] += 0;
      } else {
        result[0] += -0.005706456316613585;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-626.6516628632514312) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.00000001800250948e-35) ) ) {
            result[0] += 0.004315708851365928;
          } else {
            result[0] += 0;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.535781628804885113) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.00000001800250948e-35) ) ) {
              result[0] += -0.0007153483199120401;
            } else {
              result[0] += 0.0018191754588081656;
            }
          } else {
            result[0] += -0.0043009398320933735;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.003319309367467012;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7.193095877481540334) ) ) {
      result[0] += 0.0026824618532634444;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.964433291539125603) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9301791105069795451) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9023689374824783727) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.118717000000000017) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.45584415584416149) ) ) {
                    result[0] += -0.0007291758994424039;
                  } else {
                    result[0] += -4.904981170337641e-05;
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += -0.002290137654572788;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03931893328124715786) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01027238991612000781) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0010798933836578825;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11745.44574006947005) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7750000000000001332) ) ) {
                      result[0] += -0.0004932433601370877;
                    } else {
                      result[0] += 0.0008606743479306322;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.036375661375661839) ) ) {
                      result[0] += 0.0017365316621169844;
                    } else {
                      result[0] += 0.006737645669838675;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3166171325058890207) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2021.296333301971345) ) ) {
                      result[0] += 0.0015459167034359118;
                    } else {
                      result[0] += 6.436429635567487e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1183000000000000163) ) ) {
                      result[0] += -0.0006115522008238773;
                    } else {
                      result[0] += 0.0002404744529447539;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5321155000000000745) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2485.764563093356628) ) ) {
                      result[0] += -0.004329277499024006;
                    } else {
                      result[0] += -0.0008901516373990604;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
                      result[0] += 0.0012846500122513265;
                    } else {
                      result[0] += -0.00034535602576099377;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
              result[0] += 0.005311897106257839;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
                result[0] += 0.0008232358777467013;
              } else {
                result[0] += 0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02255000000000000407) ) ) {
            result[0] += 0.0013191466036582768;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.737273511647972946) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12510.35759572274947) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9118821962252711133) ) ) {
                  result[0] += -0.006365231351207408;
                } else {
                  result[0] += -0.0014986070994954942;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5261.246056081498864) ) ) {
          result[0] += 0;
        } else {
          result[0] += 0.0037674097341840783;
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)67.25628626692457601) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
      result[0] += 0.0043510769862922325;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2166315049226441858) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7550000000000001155) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1891267783217778775) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.15097402597402976) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1514018167545138904) ) ) {
                  result[0] += 0.0012708363264285977;
                } else {
                  result[0] += -2.7324420930882843e-05;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15287.97369123098179) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8478500000000001036) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8063500000000000112) ) ) {
                      result[0] += -0.00035463607411839856;
                    } else {
                      result[0] += -0.0019125513518639136;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06045000000000001067) ) ) {
                result[0] += -0.000986087726324045;
              } else {
                result[0] += 0.0023743860321883722;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3190058479532194) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05015000000000000707) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04145000000000000767) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02895000000000000351) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0031092395824546494;
                    }
                  } else {
                    result[0] += -0.004954300573567723;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7966500000000000803) ) ) {
                    result[0] += 0.00628583946722705;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8407499999999999973) ) ) {
                      result[0] += 0.00033218053256726016;
                    } else {
                      result[0] += 0.0039403506666221754;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6178.216161766199548) ) ) {
                    result[0] += -0.00806327219620115;
                  } else {
                    result[0] += -0.0012082013969455837;
                  }
                } else {
                  result[0] += 0.0016383006389758578;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9989.107872504324405) ) ) {
                result[0] += 0.007468203032936071;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.62645348837209447) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8162500000000000311) ) ) {
                    result[0] += -0.001314090242641324;
                  } else {
                    result[0] += 0.0013266089841814524;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1829182123299770424) ) ) {
                    result[0] += 0.005674352781543349;
                  } else {
                    result[0] += 0.0007355324902355216;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4236293998663874238) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2227500000000000313) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3176158234407915892) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02255000000000000407) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930090000000000194) ) ) {
                      result[0] += 0.00040476055906415255;
                    } else {
                      result[0] += -0.0011834325811216596;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9750000000000000888) ) ) {
                      result[0] += -0.0006786849952667888;
                    } else {
                      result[0] += 0.0020830652872353334;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7250000000000000888) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1350000000000000366) ) ) {
                      result[0] += -0.0007881246768563001;
                    } else {
                      result[0] += 0.0009737747757730912;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5751000000000000556) ) ) {
                      result[0] += 0.010263584933311462;
                    } else {
                      result[0] += 0.003754346693351946;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3436155000000000181) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2574234279727875552) ) ) {
                      result[0] += -0.002359934067002133;
                    } else {
                      result[0] += 0.0005870964819943119;
                    }
                  } else {
                    result[0] += -0.006663180665695871;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3954325276832468261) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2487665370563404699) ) ) {
                      result[0] += 0.0007295941627222798;
                    } else {
                      result[0] += -0.0012665256379050438;
                    }
                  } else {
                    result[0] += 0.004097315696362616;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2330500000000000071) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1727500000000000424) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03085000000000000242) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0020712290162225974;
                    }
                  } else {
                    result[0] += 0.005016127928368383;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4844.968018580479111) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3781.451601085575476) ) ) {
                      result[0] += -0.001364867082772729;
                    } else {
                      result[0] += 0.003301049931525307;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.94680249009621065) ) ) {
                      result[0] += -0.007206506297345695;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3760500000000000509) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3473000000000000531) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5938500000000001) ) ) {
                      result[0] += 0.0003008899263752693;
                    } else {
                      result[0] += -0.0007151606034053404;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.71832579185520729) ) ) {
                      result[0] += 0.0006103897309014401;
                    } else {
                      result[0] += 0.004156991223234163;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3115602405909643768) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.93082137161084688) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0038022811265964493;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
                      result[0] += 0.0005723420376820681;
                    } else {
                      result[0] += -0.0009526692609513111;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08905000000000001803) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1078956535486476492) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
                      result[0] += -0.0003665067452309761;
                    } else {
                      result[0] += 0.0019457284190370918;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7607500000000001483) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0029911866032320757;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.244386202413397563) ) ) {
                      result[0] += -0.001788042314458716;
                    } else {
                      result[0] += -0.005735068991676057;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2855158726759733923) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.007337008332715997;
                  }
                } else {
                  result[0] += -0.0021072211458385563;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.294700000000000073) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.803600000000000203) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1682.526551393980526) ) ) {
                      result[0] += 0.001902891154737461;
                    } else {
                      result[0] += -0.0009066925618796152;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12738.66350199303088) ) ) {
                      result[0] += -0.0003283623835754731;
                    } else {
                      result[0] += 0.0039592421287809095;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1154034132138477414) ) ) {
                    result[0] += 0.0010289993142838412;
                  } else {
                    result[0] += 0.005964827691718195;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.405609901914840254) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.16323529411765136) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.44505130751407052) ) ) {
                      result[0] += -0.00032334824446148404;
                    } else {
                      result[0] += 0.0010543419721891472;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004491816330146746;
                    }
                  }
                } else {
                  result[0] += 0.0028053875413784715;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1960.422395893427392) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.901900000000000146) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05088446673430283007) ) ) {
              result[0] += -0.00042320035469596996;
            } else {
              result[0] += -0.006019947362260206;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1211200960218856565) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03442655001000935466) ) ) {
                result[0] += -0.0010370110765781312;
              } else {
                result[0] += 0.0028939552094730484;
              }
            } else {
              result[0] += -0.0017580208510635821;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.08712121212122526) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.265006002400961727) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1642951312239392114) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9163500000000001089) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8891500000000001069) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005250000000000000326) ) ) {
                      result[0] += -0.0024158646344950062;
                    } else {
                      result[0] += 0.0016398443631785765;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.71032126588348277) ) ) {
                      result[0] += 0.0009923344672923395;
                    } else {
                      result[0] += 0.005508039490360037;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.1721611721611751) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.758730158730161364) ) ) {
                      result[0] += 0.0024251858733813168;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02459183207930617718) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0034007655764603426;
                    }
                  }
                }
              } else {
                result[0] += -0.003022441302758424;
              }
            } else {
              result[0] += 0.00378575357416605;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03580261074118568781) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9495000000000001217) ) ) {
                result[0] += 0.004387017757061469;
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
                  result[0] += -0.0008865143628324226;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3749.11546473725457) ) ) {
                    result[0] += 0.0018424748619631983;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9679500000000001991) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1423286664273381852) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)29304.5719267044733) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02459183207930617718) ) ) {
                      result[0] += -0.003265820363690371;
                    } else {
                      result[0] += -0.00037186684579257123;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)229.6363636363636545) ) ) {
                      result[0] += 0.007131357995002472;
                    } else {
                      result[0] += -0.0001495254522954322;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8825000000000001732) ) ) {
                    result[0] += -0.005508414033837087;
                  } else {
                    result[0] += -0.00021952005122230996;
                  }
                }
              } else {
                result[0] += -0.005735832701844229;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2648210000000000286) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)223.8669250645995135) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-160227.8577119282854) ) ) {
          result[0] += 0.00224417113890765;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7650000000000001243) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-67546.57382663110911) ) ) {
              result[0] += 2.773422499440103e-05;
            } else {
              result[0] += 0;
            }
          } else {
            result[0] += -0.0013092452647418327;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08409200000000001396) ) ) {
          result[0] += 0;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3383000000000001006) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.002319446751213791;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4473314962819884832) ) ) {
        result[0] += -0.0036968700167438738;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1349500000000000421) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5436705000000000565) ) ) {
            result[0] += -0.0038458927771493766;
          } else {
            result[0] += 0;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446970000000000645) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.0002731019231585603;
            }
          } else {
            result[0] += -0.0003188634182612453;
          }
        }
      }
    }
  }
  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3177.479148390085811) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1313.95443299723388) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)75.20526315789474836) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.890135144497803954) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.0020221683153253847;
          }
        } else {
          result[0] += -0.00047177809798244806;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.14962251201098553) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3864500000000000712) ) ) {
            result[0] += -0.00928327951138536;
          } else {
            result[0] += -0.0026085347862593103;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2690500000000000669) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.0026708918920849917;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5936032516797165037) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5133.306374476119345) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.26872082166200784) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16683.00555405385603) ) ) {
              result[0] += -0.005743104839117568;
            } else {
              result[0] += -0.00028770419927475946;
            }
          } else {
            result[0] += 0;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18644.6123996954484) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19099.32569550648986) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10263157894737063) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.52228163992870336) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4928625677951861683) ) ) {
                    result[0] += -0.0015754758511919878;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.003914695882859416;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11018.535337379677) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289274051889615802) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4026600000000000734) ) ) {
                      result[0] += -0.0012131316015588874;
                    } else {
                      result[0] += -0.007235331258803001;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3535211598876289441) ) ) {
                      result[0] += 0.002119154158915553;
                    } else {
                      result[0] += -0.0014698458677020081;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)14358.85907140550808) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.44068627450981523) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.003425197227018635;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-23408.498900080147) ) ) {
                      result[0] += -0.0008545045729614383;
                    } else {
                      result[0] += 0.0013129536480702606;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.0037647101611787445;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15287.97369123098179) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6050000000000000933) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.001200141579120825;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.65524034672972675) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1404478012977176671) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.003522931936806848;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.64312313803376853) ) ) {
                      result[0] += -0.0039355102481844345;
                    } else {
                      result[0] += 0.0008045711549932779;
                    }
                  }
                } else {
                  result[0] += 0.008437118064974209;
                }
              }
            } else {
              result[0] += -0.0029878499746638465;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.04232804232805165) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441180000000000294) ) ) {
              result[0] += 0.0056779569654752575;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363200000000000633) ) ) {
                result[0] += -0.0016293275335355394;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4304500000000000548) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.002179509905633709;
                }
              }
            }
          } else {
            result[0] += 0.007462707913319935;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)14710.51606691821326) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9250000000000001554) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.002651351468707423;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1468760000000000343) ) ) {
              result[0] += -0.0005865473449395229;
            } else {
              result[0] += 0.0019262213735708165;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14660.96176939566249) ) ) {
      result[0] += 0.003153555563362074;
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5261960000000001081) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.0037805457849033417;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
              result[0] += 0.005453789252149431;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5001330000000000497) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.56607352231188468) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09385000000000003062) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.005053289067731105;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4729.064601742868945) ) ) {
                      result[0] += -0.0021072289588552786;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.246168224299066374) ) ) {
                    result[0] += -0.003939553383723185;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)49.6585239618122003) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2149.529036211334187) ) ) {
                    result[0] += -0.0011057050395530995;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1427.072464577498522) ) ) {
                      result[0] += 0.0031086741017082495;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += 0.005589547631998356;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8662560233874664339) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36860497623707644) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6051360000000001182) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04000638251704572573) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                      result[0] += 0.0011571839782809788;
                    } else {
                      result[0] += -0.002253906488897781;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1066415978387809521) ) ) {
                      result[0] += 0.0018801293887029565;
                    } else {
                      result[0] += 0.00024889912817877344;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02622543668122271146) ) ) {
                      result[0] += 0.0021839243896722184;
                    } else {
                      result[0] += -9.481028096875746e-05;
                    }
                  } else {
                    result[0] += -0.007424148213055115;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2312300000000000189) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.07500000000000002498) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1221000000000000141) ) ) {
                      result[0] += -0.0005875166824981938;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)115.9545454545454675) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.002772825354587241;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.471890500000000046) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
                      result[0] += -0.0012664577850756153;
                    } else {
                      result[0] += -0.0060298316064372965;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7957.086656945748473) ) ) {
                      result[0] += 0.0036803079136492733;
                    } else {
                      result[0] += -0.0011273792598043896;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2330500000000000071) ) ) {
                result[0] += -0.005462146310886833;
              } else {
                result[0] += -0.0007803176326260854;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.675249077694567879) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6871843434343435364) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9706500000000001238) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08685000000000001052) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3205004002465369761) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0024342154607723;
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.008322150093796219436) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0023563978286101064;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.742610837438423932) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9678488682944218491) ) ) {
                  result[0] += -0.004808469519952337;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6296205000000001384) ) ) {
                  result[0] += 0.0027171516150179763;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.094202898550724834) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.901900000000000146) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0011067299479841318;
                    }
                  } else {
                    result[0] += -0.0037033713572589;
                  }
                }
              }
            }
          } else {
            result[0] += 0.0042639870016609;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2902500000000000635) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6264500000000000624) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2503885000000000693) ) ) {
                      result[0] += -2.0331128927631845e-05;
                    } else {
                      result[0] += -0.0045835035887690865;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
                      result[0] += -0.0013643759063418962;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.401298701298702376) ) ) {
                  result[0] += -0.00042889937641208835;
                } else {
                  result[0] += 0.002889702165229343;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03200000000000000761) ) ) {
                result[0] += -0.0004065054372413047;
              } else {
                result[0] += -0.0071541675163969845;
              }
            }
          } else {
            result[0] += 0.0018492774915651058;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.15097402597402976) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-40295.74630962839001) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4599500000000000255) ) ) {
        result[0] += 0.006316659551080991;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.42792207792208359) ) ) {
          result[0] += -0.0011721611814796118;
        } else {
          result[0] += 0.0018379173999355403;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9581.734211346893062) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7158.326501222521074) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15774.24072148520463) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6574.126053108660017) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4290.319098872139875) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5988367574978012975) ) ) {
                      result[0] += -0.0039579185821911065;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20716.01340554505077) ) ) {
                      result[0] += 0.0027625341958895377;
                    } else {
                      result[0] += -0.00029580812207626847;
                    }
                  }
                } else {
                  result[0] += -0.004575747213327634;
                }
              } else {
                result[0] += -0.005767400416364697;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2696500000000000563) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3216.282614078772895) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8662560233874664339) ) ) {
                      result[0] += 0.0047987048084724504;
                    } else {
                      result[0] += 0.001703167814817649;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4222760000000000402) ) ) {
                      result[0] += -0.0007741039559247147;
                    } else {
                      result[0] += 0.0012019501326330255;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4304500000000000548) ) ) {
                      result[0] += 0.0016675582309617152;
                    } else {
                      result[0] += 4.080099369820332e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2690500000000000669) ) ) {
                      result[0] += -0.004464170875124112;
                    } else {
                      result[0] += -0.0006916494653412063;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4033126559258033983) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.145515329548585759) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4599500000000000255) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.004240743859213848;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7034000000000001362) ) ) {
                      result[0] += -0.00024708644955031374;
                    } else {
                      result[0] += -0.005459894926098472;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5988367574978012975) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3829700104266255956) ) ) {
                      result[0] += 0.0015673579949177802;
                    } else {
                      result[0] += 0.008933663645633758;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6603400946501547519) ) ) {
                      result[0] += -0.002886240048355189;
                    } else {
                      result[0] += 0.0011733251216045916;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.92861142217245352) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1944435586226250512) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.001463731759221629;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600160000000000582) ) ) {
                    result[0] += -0.003366883719413882;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4671500000000000652) ) ) {
                  result[0] += 0.004940522218959392;
                } else {
                  result[0] += -0.0016218901855917151;
                }
              }
            } else {
              result[0] += 0.007558339722413472;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2777090000000000392) ) ) {
            result[0] += -0.004524515177166489;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2855158726759733923) ) ) {
                result[0] += 0.0026736086255621547;
              } else {
                result[0] += -0.00034300344447716155;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.22431865828092867) ) ) {
                  result[0] += -0.0034445945888327443;
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.332274916211522164) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.07742257742258118) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
              result[0] += -9.521023469568067e-05;
            } else {
              result[0] += -0.0031870196454029773;
            }
          } else {
            result[0] += 0;
          }
        } else {
          result[0] += 0.00024854572842407136;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2399659671015315077) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1110651606754299442) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8090500000000001579) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
            result[0] += -0.0048338280187644;
          } else {
            result[0] += 0;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13199.90560314734284) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.87146226415094574) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.351912500000000017) ) ) {
                result[0] += 0.006716273655032401;
              } else {
                result[0] += 0.001855182080949005;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-57014.62379787250393) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)857399.5839665433159) ) ) {
                  result[0] += 0.00276227571133909;
                } else {
                  result[0] += -0.00018502611906846426;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1332400080645387008) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0041243589236441315;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)27645.97371012646545) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.535781628804885113) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2986.391455690082239) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0035119043081497147;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3970620000000000815) ) ) {
                      result[0] += -0.00041014469462630345;
                    } else {
                      result[0] += -0.0026993758090072444;
                    }
                  }
                } else {
                  result[0] += 0.003845704746205222;
                }
              } else {
                result[0] += 0.003498214429019235;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1667500000000000371) ) ) {
                result[0] += -0.005240496672972646;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8347.454337403256432) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0028722657718175727;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7450000000000001066) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1861530472994430141) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355947963695212921) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.05500000000000000722) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0008540340710481955;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)51.70714285714286262) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4093.415394671918875) ) ) {
                    result[0] += -0.00040329301380253793;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += -0.0015032990865298192;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6659500000000001529) ) ) {
              result[0] += 0.003768960525567685;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08505000000000001448) ) ) {
                result[0] += -0.0005754593133133186;
              } else {
                result[0] += 0.0009297737721514654;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03705000000000000654) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13476.57528643532896) ) ) {
              result[0] += 0.0033897476964142065;
            } else {
              result[0] += 0.011403659367377972;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9290.770887201673759) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2118118797363109373) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.64312313803376853) ) ) {
                  result[0] += -0.005573348923316176;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0.0013668185452088738;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
                result[0] += 0.0006626901991544906;
              } else {
                result[0] += 0.005379379605805101;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.35781818181818537) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4542.943917304383831) ) ) {
            result[0] += -0.0004443360200640518;
          } else {
            result[0] += 0;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770958479253431361) ) ) {
            result[0] += -0.0010652206379443685;
          } else {
            result[0] += -0.011099144704990275;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6290.027305551750032) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)19887.81802584273828) ) ) {
                result[0] += -0.000396349521315049;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0;
            }
          } else {
            result[0] += -0.0028972463851402942;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
            result[0] += 0.002870586263564884;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.00556225757799182;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08132629836300046822) ) ) {
                result[0] += 0.0022044094599740255;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.59032258064516796) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                      result[0] += -0.00012670168715519842;
                    } else {
                      result[0] += 0.005847314599488777;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8050000000000001599) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0010894878002556964;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6682000000000001272) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.33974358974359831) ) ) {
                      result[0] += 0.00011169433147716737;
                    } else {
                      result[0] += -0.0021754959681494148;
                    }
                  } else {
                    result[0] += 0.0008643759818809668;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4444724744926561999) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2050000000000000433) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05365000000000001018) ) ) {
          result[0] += -0.0011369984116753433;
        } else {
          result[0] += 0;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.482074000000000058) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19559.23761677038419) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.8806779661016968) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04505000000000000671) ) ) {
                    result[0] += 0.0014992538493239205;
                  } else {
                    result[0] += 0.007282801606379252;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
                  result[0] += 0.00364600884183818;
                } else {
                  result[0] += 0.011224740302884088;
                }
              }
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3176158234407915892) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.53228021978022078) ) ) {
              result[0] += 0.00030118896277362843;
            } else {
              result[0] += -0.002824077561551028;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4254330624375546877) ) ) {
              result[0] += 0.00209992825633046;
            } else {
              result[0] += 0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2342500000000000415) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.225650000000000045) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5261.246056081498864) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3284500000000000752) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.004450000000000001697) ) ) {
                result[0] += -0.004584405688115345;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.94680249009621065) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
                    result[0] += 0.005838519535295032;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7866.211076535222674) ) ) {
                      result[0] += -0.0017273808122835108;
                    } else {
                      result[0] += 0.0035319910260237144;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1349500000000000421) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8662560233874664339) ) ) {
                      result[0] += -0.003106062094250798;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8817.104006290848702) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00196476939774489;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2964813357014444151) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                  result[0] += -0.0034034949543676513;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.31844888366627622) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7957.086656945748473) ) ) {
                      result[0] += 0.007554920790693897;
                    } else {
                      result[0] += 0.0010989916148518041;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3028.043267225880754) ) ) {
                      result[0] += -0.0028070420293931585;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.895945945945947564) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6871.194738991899612) ) ) {
                    result[0] += 0.0025977568376712524;
                  } else {
                    result[0] += -0.0005758248760761536;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
                    result[0] += -0.007476516421032963;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5650000000000000577) ) ) {
                      result[0] += 0.00014193658144762028;
                    } else {
                      result[0] += -0.0021148738936862276;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.245079122973038) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4568.919520521660161) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4026600000000000734) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.62645348837209447) ) ) {
                    result[0] += -0.0030976826500370125;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.002887240139479721;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.44072681704260752) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4191117286610134829) ) ) {
                    result[0] += 0.0019617832553903217;
                  } else {
                    result[0] += 0.009948954112892547;
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925320000000000253) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678700000000000858) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5314418083097262047) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.591750841750842582) ) ) {
                      result[0] += 0.004507411182045534;
                    } else {
                      result[0] += -0.00017708951724699877;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32109164420485392) ) ) {
                      result[0] += -0.0015094462277672881;
                    } else {
                      result[0] += 5.821010125073633e-05;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
                      result[0] += 0.0015740043608604016;
                    } else {
                      result[0] += 0.00828336301467315;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
                      result[0] += -0.002613437197391308;
                    } else {
                      result[0] += 0.0010526651962229625;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
                  result[0] += 0.0018506704591089275;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.219437893081761315) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0035026633127196514;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7375415000000001831) ) ) {
                      result[0] += 0.0016347585030173264;
                    } else {
                      result[0] += -0.0008279038096191552;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += -0.004271110262486315;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.53684210526317599) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)46.91772959183673919) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4659489670146004237) ) ) {
              result[0] += -0.002751029602124496;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6111605972688834987) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4849410000000000109) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5594259411545304816) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
                      result[0] += 0.0015968464406590946;
                    } else {
                      result[0] += -0.001869160998466845;
                    }
                  } else {
                    result[0] += 0.005088173734797237;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5376165000000000527) ) ) {
                    result[0] += 0.01033898996115034;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5065000000000000613) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0018378897838668994;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4172500000000000653) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6835161312401194511) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5308159824506151203) ) ) {
                      result[0] += 0.0005356702938566814;
                    } else {
                      result[0] += 0.007372539862239577;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5001330000000000497) ) ) {
                      result[0] += -4.8730786126303115e-05;
                    } else {
                      result[0] += 0.001561528384371993;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.536038961038963535) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3701000000000000401) ) ) {
                      result[0] += 0.0027825029031483344;
                    } else {
                      result[0] += -0.0012859196967370432;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4648510000000000697) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.00871040071581037;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 0.005649720168537215;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)115.9545454545454675) ) ) {
            result[0] += -0.0024703565545444238;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)269.9002463054187615) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10534.50099646399576) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0016050056086526015;
              }
            } else {
              result[0] += -0.0015308654646008077;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6087500000000001243) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.49467557742445045) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
          result[0] += -0.0008136156324084231;
        } else {
          result[0] += -0.010109999611822112;
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3781.451601085575476) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2428.189675971083943) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.004251866306351768;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13660.08107385601579) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607440000000000313) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0023260333584072842;
            }
          } else {
            result[0] += 0.002563489698380593;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2257766530001369121) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2166315049226441858) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6080000000000000959) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)17604.53908125846283) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9250000000000001554) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1456989672773315592) ) ) {
                      result[0] += 0.0015983858991326684;
                    } else {
                      result[0] += -0.0010079755337198339;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                      result[0] += 0.0009499740915924597;
                    } else {
                      result[0] += 0.0032734454737227657;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08513526784538440195) ) ) {
                    result[0] += -0.006051520087730845;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06045000000000001067) ) ) {
                      result[0] += 0.0004058648323088331;
                    } else {
                      result[0] += -0.00023685904566944426;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.138110787595931539) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)122.8416666666666828) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)106.7332126398946883) ) ) {
                      result[0] += -2.2674888822612868e-05;
                    } else {
                      result[0] += 0.00295305588056158;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3137585000000000512) ) ) {
                      result[0] += 1.787157489926335e-05;
                    } else {
                      result[0] += -0.0026531439788378517;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04908122139453940935) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8849500000000000144) ) ) {
                      result[0] += 0.0026394959574911215;
                    } else {
                      result[0] += -0.0017397443446310076;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5775730000000001141) ) ) {
                      result[0] += -0.0027245481520343662;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            } else {
              result[0] += 0.004776900526125577;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003750000000000000295) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.114147004888090417) ) ) {
                result[0] += 0.0009386542772325433;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4357.007724276188128) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2087.634986269159981) ) ) {
                    result[0] += -0.0039918901128427695;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.009434950965047987;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4770315000000000527) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.76341350601295943) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.87026925953627732) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7052500000000000435) ) ) {
                      result[0] += -0.000985335389934056;
                    } else {
                      result[0] += 0.0007746454820675194;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.007818993786144701;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9392.751123286552684) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0034540218429172068;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4828000000000000624) ) ) {
                      result[0] += -0.0003845531529646719;
                    } else {
                      result[0] += 0.00459107295196819;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3282773505116238777) ) ) {
                      result[0] += 0.001101020783391551;
                    } else {
                      result[0] += -0.0009961559002702918;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1720691644993862512) ) ) {
                      result[0] += -0.008880852738950581;
                    } else {
                      result[0] += -0.0005665151435915079;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6589500000000001467) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6358500000000001373) ) ) {
                      result[0] += -0.0002550169329789679;
                    } else {
                      result[0] += 0.0031883077595974067;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1052900224917293903) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0014417813612559055;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += -0.004157912289668162;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.002049180327871269) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.978492136910269927) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596939932693950182) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0233500000000000027) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1499.104419668594574) ) ) {
                  result[0] += 0.006810852847955323;
                } else {
                  result[0] += 0.0018566613801335478;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1839.943830114362981) ) ) {
                result[0] += -0.0033592322130828224;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3871448717291648411) ) ) {
                  result[0] += 0.003197992282065165;
                } else {
                  result[0] += -0.0007563264455192688;
                }
              }
            }
          } else {
            result[0] += 0.008669941140026075;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.39356884057971797) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3042628804014196331) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2660001773777408984) ) ) {
                result[0] += -0.002212449790482638;
              } else {
                result[0] += -0.006303443335610866;
              }
            } else {
              result[0] += 0.0011460305264442239;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817765000000001407) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6339500000000001245) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.080932372247844) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.010253052577881257;
                    }
                  } else {
                    result[0] += -0.0009575303292045703;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.240695900668028262) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041500000000000065) ) ) {
                      result[0] += 0.004124394606819503;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5882.835930520358488) ) ) {
                      result[0] += 0.0005235047540194253;
                    } else {
                      result[0] += -0.001111036639928809;
                    }
                  }
                }
              } else {
                result[0] += 0.0053075307424980366;
              }
            } else {
              result[0] += -0.003930700031699764;
            }
          }
        }
      }
    }
  }
}

