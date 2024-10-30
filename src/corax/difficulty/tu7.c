
#include "prediction.h"

void predict_unit7(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-42515.07229609502247) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.31844888366627622) ) ) {
          result[0] += -0.0019223531860893955;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1785800221964484735) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)229.6363636363636545) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.0641025641025834) ) ) {
                result[0] += 0.001267105812123731;
              } else {
                result[0] += 0.007354153996922763;
              }
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3115602405909643768) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.30500894454384309) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.003950586025261274;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)99.07708333333334849) ) ) {
                result[0] += 0.003519882695834276;
              } else {
                result[0] += -0.0005972058187086872;
              }
            }
          }
        }
      } else {
        result[0] += 0.0064863473057574245;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36860497623707644) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)26013.27966640743398) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.25728920409771661) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6850000000000001643) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.93933823529411864) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.485097903309652079) ) ) {
                    result[0] += -0.002688710360846001;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8775500000000001632) ) ) {
                      result[0] += 0.003735774859948731;
                    } else {
                      result[0] += -0.0010690856971861038;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5250000000000001332) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1088.019582622902362) ) ) {
                      result[0] += -8.778592136892065e-06;
                    } else {
                      result[0] += -0.0023117321455468735;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2593.773207383128465) ) ) {
                      result[0] += -0.000539252599809816;
                    } else {
                      result[0] += -0.003921430576863262;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03085000000000000242) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6680315000000001113) ) ) {
                      result[0] += 0.0038283815308293666;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05015000000000000707) ) ) {
                      result[0] += -0.00370123302132999;
                    } else {
                      result[0] += 0.0006980871581750796;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6199252650020550259) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3609444825669292922) ) ) {
                      result[0] += 0.00010102149961745396;
                    } else {
                      result[0] += 0.002102404679482788;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.240695900668028262) ) ) {
                      result[0] += 0.0017670841422185886;
                    } else {
                      result[0] += -0.0013436383030702515;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1412000000000000199) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3660021954817824219) ) ) {
                    result[0] += -0.002102087979479627;
                  } else {
                    result[0] += 0.004358608650151593;
                  }
                } else {
                  result[0] += 0.007705136573169383;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2419000000000000317) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9820.391414902553151) ) ) {
                    result[0] += -0.008043753585535099;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600160000000000582) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.004231083887999551;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.11363240676324482) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3216.282614078772895) ) ) {
                result[0] += -0.006582636275985975;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745450000000000501) ) ) {
                  result[0] += -0.0024285868388186803;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2333.321561901081623) ) ) {
                result[0] += 0.0049993615505310625;
              } else {
                result[0] += -0.0017493212632376288;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17051.15547769272598) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.005276847451516496;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08706594241544672597) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.52485445588894208) ) ) {
              result[0] += -0.0018708690143511213;
            } else {
              result[0] += 0;
            }
          } else {
            result[0] += -0.005193328870678633;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1974103251759973532) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4450000000000000622) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.001022584508619904;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.27272012578616867) ) ) {
                result[0] += 0.001799547754004818;
              } else {
                result[0] += 0.010761190992832594;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1582500000000000295) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.04232804232805165) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.90096618357488367) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3750000000000000555) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0013233537774972942;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1750000000000000167) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0004526180067035992;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6025274074316725459) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08784999999999999754) ) ) {
                      result[0] += -0.003150052074916942;
                    } else {
                      result[0] += -0.006575256467487835;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3213000000000000855) ) ) {
                      result[0] += -0.0031051938417931283;
                    } else {
                      result[0] += 0.0006931569440975661;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6722500000000001252) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3254789019904610892) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3450000000000000289) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.010451171912818455;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.117150000000000018) ) ) {
                      result[0] += -0.0010961430600523565;
                    } else {
                      result[0] += 0.003232591504844377;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2399659671015315077) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1592430000000000234) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0028165610783703176;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1729500000000000204) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                  result[0] += -0.00014330865460474002;
                } else {
                  result[0] += 0.007133799410968627;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6080000000000000959) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4901430000000000509) ) ) {
                      result[0] += -0.0001888069240826331;
                    } else {
                      result[0] += -0.003474145453836235;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.509500000000000175) ) ) {
                      result[0] += 0.003955444847744244;
                    } else {
                      result[0] += -0.0004319751764005229;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11018.535337379677) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4706500000000000683) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004790513235300297;
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
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
      result[0] += 0.0008073847287960067;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7328500000000001124) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4473314962819884832) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5250000000000001332) ) ) {
            result[0] += -0.000769698383383183;
          } else {
            result[0] += -0.006308726726031318;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1349500000000000421) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.004173556601868862;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2128500000000000114) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2330500000000000071) ) ) {
                result[0] += 0.0025582820971523164;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08905000000000001803) ) ) {
                  result[0] += -0.00039444315585640115;
                } else {
                  result[0] += 0.0003187504540231667;
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7250000000000000888) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0018200541620669419;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1110651606754299442) ) ) {
          result[0] += -0.0005123942672078326;
        } else {
          result[0] += 0.0013609983188990213;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2801060000000000771) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2777090000000000392) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.746250000000000191) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361985000000000334) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3660021954817824219) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2114255000000000162) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
                      result[0] += 0.0008234370367463619;
                    } else {
                      result[0] += -0.0004053049191200892;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4662.809440025213917) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.007280307733710455;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4659489670146004237) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                      result[0] += -0.0008306132451457688;
                    } else {
                      result[0] += -0.003189639852920819;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
                      result[0] += 0.0007695737746837412;
                    } else {
                      result[0] += -0.0006590328025209164;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3700350016849980883) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0048580015552540014;
                  }
                } else {
                  result[0] += 0.0012974888326632566;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
                result[0] += 0.007143040723189961;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.44505130751407052) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.933699633699635712) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4472500000000000364) ) ) {
                  result[0] += -0.0014657273861460385;
                } else {
                  result[0] += -0.010687640644013953;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45993589743590135) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.007618909213415312;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2602911804898560555) ) ) {
                  result[0] += 0.001474514915714715;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4958483270806217091) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.21666666666667567) ) ) {
                      result[0] += -0.004429439792179275;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.94680249009621065) ) ) {
                      result[0] += 0.001636462651053903;
                    } else {
                      result[0] += -0.0011455102748896913;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += 0.0037636344335215273;
        }
      } else {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8350000000000000755) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6150000000000001021) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000000000001173) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
                result[0] += 0.0011734631128832113;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09126037187329660849) ) ) {
                  result[0] += -0.0005154675315806263;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2250000000000000333) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.08500000000000000611) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8015000000000001013) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0008204202019317916;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1000142058976443288) ) ) {
                    result[0] += 0.0011191974442739724;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6189.910138631900736) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0001363553540226842;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.2970588235294187) ) ) {
                  result[0] += -0.0020691434017111017;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
              result[0] += -0.0006335401500121774;
            } else {
              result[0] += 0.0038995257788754195;
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)31299.3757595375755) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.28245614035088096) ) ) {
              result[0] += 0.0002987810643369247;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08505000000000001448) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01255000000000000213) ) ) {
                  result[0] += -0.0008230841195744842;
                } else {
                  result[0] += -0.006059556157100028;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1748500000000000332) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.002783065878407058;
                }
              }
            }
          } else {
            result[0] += 0.0006292743874678295;
          }
        }
      }
    } else {
      result[0] += -0.004024076925262163;
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01395000000000000059) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.159464746154530435) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5201090000000001545) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.02658071352879077) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
              result[0] += 0.0033742465437699167;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2178.807099952505723) ) ) {
                  result[0] += 0.0002782422718083759;
                } else {
                  result[0] += -0.004480007366804833;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1618.91458251395693) ) ) {
                  result[0] += 0.0011615063083482112;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
              result[0] += 0.004328104692321155;
            } else {
              result[0] += 2.489712482874365e-06;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006850000000000001053) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2180905966455483069) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.852450000000000041) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.87456103385307138) ) ) {
                  result[0] += 0.0016560041063617553;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.572427572427572473) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.07059800664451998) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0021071330401191846;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003750000000000000295) ) ) {
                      result[0] += 0.0022215409499230458;
                    } else {
                      result[0] += -0.00044316188901548283;
                    }
                  }
                } else {
                  result[0] += -0.0014722213487360684;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)12.82999835704816327) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0021501177818608534;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.43089430894309011) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.49507021931512174) ) ) {
                result[0] += -0.0003180042723075584;
              } else {
                result[0] += -0.004037814810997607;
              }
            } else {
              result[0] += 0.00012960860064343158;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2865.318948452297718) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.496478873239436957) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06065038394431352536) ) ) {
              result[0] += -0.0012941625988430964;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3325620000000000798) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.600595238095238848) ) ) {
                  result[0] += 0.0008319909611255342;
                } else {
                  result[0] += 0.005392498774763275;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4901430000000000509) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.36487820934827653) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4084000000000000408) ) ) {
                  result[0] += -0.0009300738677272781;
                } else {
                  result[0] += -0.005954041121688815;
                }
              } else {
                result[0] += 0.00012155246587234499;
              }
            } else {
              result[0] += 0.0008476270992566638;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.45498652291105657) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                  result[0] += -0.004223981913135715;
                } else {
                  result[0] += -0.010701747400366106;
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006850000000000001053) ) ) {
              result[0] += 0.0027444380985431733;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1448.773443424887091) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0041694313741299895;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2082316587659429064) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3599500000000000477) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0939432926751793268) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.036375661375661839) ) ) {
                  result[0] += 0.0004070432201421223;
                } else {
                  result[0] += -0.002208523171833703;
                }
              } else {
                result[0] += 0.002454873406652685;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3391.870434469365591) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.19793814432989798) ) ) {
                  result[0] += 0.003936199101902481;
                } else {
                  result[0] += 0.010941400615071154;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6257.283101614548286) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.00011790035865686707;
                  }
                } else {
                  result[0] += 0.006721595250162236;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925320000000000253) ) ) {
              result[0] += -0.0047681030891316475;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8457500000000001128) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
              result[0] += -0.005241079043838168;
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05921603206594685392) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.4495192307692335) ) ) {
                  result[0] += 0.0017314166389246393;
                } else {
                  result[0] += 0.00785116965253196;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8728500000000001258) ) ) {
                result[0] += -0.0037642690478781955;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05365000000000001018) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
                    result[0] += 0.0057027831747220765;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02255000000000000407) ) ) {
                      result[0] += -0.0006153639160045189;
                    } else {
                      result[0] += 0.0016260940754607594;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3791.556210767445464) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)142.2522321428571672) ) ) {
                      result[0] += 0.0019961108026111452;
                    } else {
                      result[0] += -0.003357215301268789;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.43665158371041102) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.008870250714306888;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.47809523809523924) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.81296296296296422) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3864255899139620865) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3577.178536742065262) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08905000000000001803) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1473.234435796525304) ) ) {
                      result[0] += 0.0018319793114053207;
                    } else {
                      result[0] += -0.0005562114985727932;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6680315000000001113) ) ) {
                      result[0] += 0.0029607332801704256;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.002092148616838589;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1854500000000000315) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1885.524186461903128) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1160.815387464434707) ) ) {
                      result[0] += -0.002051142115205426;
                    } else {
                      result[0] += 0.0002288732175040417;
                    }
                  } else {
                    result[0] += -0.0051729876977241514;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1960.422395893427392) ) ) {
                    result[0] += 0.0020207502453743653;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4527450000000000641) ) ) {
                result[0] += 0.007044904839879379;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5029.288454347889456) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3283310000000000395) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10534.50099646399576) ) ) {
                  result[0] += -0.006894403372231203;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3851.015235517284509) ) ) {
                  result[0] += 0.004530319246475013;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5882.835930520358488) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7875500000000000833) ) ) {
                      result[0] += -0.005569068976145565;
                    } else {
                      result[0] += 0.001620107676343416;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2552661953259802718) ) ) {
                      result[0] += -0.0027611922362837686;
                    } else {
                      result[0] += 0.0024573030093692854;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.487126000000000059) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1204359241998356339) ) ) {
                  result[0] += 0.00012839405142835478;
                } else {
                  result[0] += -0.004244462480438224;
                }
              } else {
                result[0] += -0.013757788341601058;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3029155602761551269) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2304500000000000159) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1909226976060683645) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09695000000000000839) ) ) {
                  result[0] += -0.004084256523249526;
                } else {
                  result[0] += 0.007767883257541175;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4849410000000000109) ) ) {
                  result[0] += 0.009804792174632525;
                } else {
                  result[0] += 0.0014942180656288102;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4426700000000000634) ) ) {
                result[0] += -0.0010793213668949372;
              } else {
                result[0] += 0.002965105669038566;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1720691644993862512) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
                  result[0] += 0.0008094853785903503;
                } else {
                  result[0] += -0.0011549181387971927;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.162040510127533288) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3864255899139620865) ) ) {
                    result[0] += 0.0023580832089962686;
                  } else {
                    result[0] += 0.008244636651330059;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5938500000000001) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4768620372057117418) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2227500000000000313) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3700350016849980883) ) ) {
                      result[0] += 0.005521046846282805;
                    } else {
                      result[0] += -0.002565774659446702;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3304355872301289465) ) ) {
                      result[0] += -0.003409175703019014;
                    } else {
                      result[0] += 0.001556394976735379;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5308159824506151203) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1663.13767962321208) ) ) {
                      result[0] += -0.0008622277762186772;
                    } else {
                      result[0] += 0.0027196732261684045;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1643.069582787823265) ) ) {
                      result[0] += 0.0015709843760820358;
                    } else {
                      result[0] += -0.0007976325883577634;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2280500000000000305) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.647150000000000003) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00678168774440772;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3224500000000000699) ) ) {
                      result[0] += -0.005838190629435776;
                    } else {
                      result[0] += 0.00027250974535534964;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
                      result[0] += -0.0017154842945300039;
                    } else {
                      result[0] += 0.0029294780866806268;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
                      result[0] += -0.0009116365648137647;
                    } else {
                      result[0] += -0.00631808742560361;
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
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6969500000000000695) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8066835000000001088) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1456989672773315592) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            result[0] += -0.0003738624913083522;
          } else {
            result[0] += -0.00557382349646284;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2745899061051987888) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1523500000000000132) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7650000000000001243) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06045000000000001067) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1155050000000000104) ) ) {
                    result[0] += 0.00015926792786026507;
                  } else {
                    result[0] += -0.0009444707757916021;
                  }
                } else {
                  result[0] += 0.001878462320143349;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
                    result[0] += 0.003696407375715748;
                  } else {
                    result[0] += 0.011104925276899867;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.907008495145631422) ) ) {
                    result[0] += 0.001031437223543943;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              result[0] += -0.001720469841857328;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)154.1011111111111234) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-67546.57382663110911) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5586000000000000965) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4762500000000000067) ) ) {
                    result[0] += 0.007808799034191446;
                  } else {
                    result[0] += 0.0006915561057347149;
                  }
                } else {
                  result[0] += -0.001024345849679286;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9173.564891287333012) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4231.908399006179934) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14660.96176939566249) ) ) {
                      result[0] += -0.0012972789972886284;
                    } else {
                      result[0] += 4.2865701178940475e-05;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.87142857142858077) ) ) {
                      result[0] += 0.0019328290376092647;
                    } else {
                      result[0] += -0.0006149119090469713;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6678500000000000547) ) ) {
                      result[0] += -0.0013015829550915303;
                    } else {
                      result[0] += -0.010092802452677442;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3309227930938458129) ) ) {
                      result[0] += 0.003590505385360033;
                    } else {
                      result[0] += -0.0006530527456386111;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.545000000000000151) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10534.50099646399576) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0005269402279720235;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.442099999999999993) ) ) {
                  result[0] += -0.0028546480138721035;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5732000000000001538) ) ) {
                    result[0] += 8.295498034155464e-05;
                  } else {
                    result[0] += -0.0021717482745857047;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1533.824223339392574) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.0009818618838644767;
          }
        } else {
          result[0] += 0.004730189702002539;
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)118.3581481481481603) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.895945945945947564) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3511342604241804444) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.63725490196079093) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1279338682318470199) ) ) {
                  result[0] += 0.0018415389422845503;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0.005520052085641051;
              }
            } else {
              result[0] += -0.0018946776012193007;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1940000000000000335) ) ) {
              result[0] += -0.003443299826220809;
            } else {
              result[0] += 5.100757456180947e-06;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.90625000000000711) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.702729044834310201) ) ) {
              result[0] += 0.0028115444185952887;
            } else {
              result[0] += 0.014234400793870717;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3029155602761551269) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                result[0] += 0.0009892946808374144;
              } else {
                result[0] += 0.009603534108067571;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3546921061251228635) ) ) {
                result[0] += -0.003680544450037691;
              } else {
                result[0] += 0.0023425792433074493;
              }
            }
          }
        }
      } else {
        result[0] += -0.002028160537594817;
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.244386202413397563) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.154452422829296665) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7450000000000001066) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2668555000000000788) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1211200960218856565) ) ) {
                  result[0] += 0.0030641838935508725;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.130274200633482079) ) ) {
                  result[0] += -0.0005316355217338743;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              result[0] += -0.0022259348726917706;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5666130000000001443) ) ) {
                  result[0] += 0.002397001322425888;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.06061224489796402) ) ) {
                      result[0] += -0.0012883644228624733;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0013084711672481876;
                  }
                }
              } else {
                result[0] += -0.0015308255721200844;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09069263565778681868) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8457500000000001128) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.005624838683982776;
                }
              } else {
                result[0] += 0.007948575628566861;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02815000000000000488) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.154992760675902036) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4770315000000000527) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2166315049226441858) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1829182123299770424) ) ) {
                    result[0] += -0.002641560447398317;
                  } else {
                    result[0] += -0.009010154346687808;
                  }
                } else {
                  result[0] += -0.00027508804570177433;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2332.481509447223289) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.77179878048780548) ) ) {
                    result[0] += -0.00018686277055917258;
                  } else {
                    result[0] += 0.001717885335437662;
                  }
                } else {
                  result[0] += -0.0013640387532153615;
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6350000000000001199) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.004953802042523871;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2025.244583427236194) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9566.137358918122118) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.07626592109350838) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0711364934725852438) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
                      result[0] += 0.002299641326423937;
                    } else {
                      result[0] += 0.007930098303998144;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2993500000000000605) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036930000000000462) ) ) {
                      result[0] += -0.00010365720390015844;
                    } else {
                      result[0] += -0.004252045638237476;
                    }
                  } else {
                    result[0] += 0.0024822934994591646;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7484500000000001707) ) ) {
                  result[0] += 0.003345114699102684;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4729.064601742868945) ) ) {
                      result[0] += 0.0028690802856659835;
                    } else {
                      result[0] += -0.0014645342332388425;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004898553661456024;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8237500000000000933) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03995000000000000634) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.006642589539841353;
                }
              } else {
                result[0] += 0;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)38933.33430093093193) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8891500000000001069) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3213010000000000588) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3912.581042876649917) ) ) {
                  result[0] += -0.0017992452155178567;
                } else {
                  result[0] += 0.0009290501744185397;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                  result[0] += -0.007926180545929654;
                } else {
                  result[0] += -0.0019995458315672436;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9544500000000001316) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06446597211275277572) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2250000000000000333) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.00474838561796444;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3571.445901236788359) ) ) {
                      result[0] += -0.0003321180831804877;
                    } else {
                      result[0] += -0.007900959958761078;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.285918000000000061) ) ) {
                      result[0] += -0.0025359394969140386;
                    } else {
                      result[0] += 0.0019634019566049286;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03089239001695652173) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.006490137272794506;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)112.2710577188622096) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.60851063829787932) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.94047619047619335) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06035185914383755373) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003250000000000000718) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.002120134548927547;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.460180995475113264) ) ) {
                      result[0] += 0.0018324113431740952;
                    } else {
                      result[0] += -6.762623348949868e-05;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.643991500000000161) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1066415978387809521) ) ) {
                      result[0] += 0.0025371410580749755;
                    } else {
                      result[0] += -0.003927894763428395;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.37349033816425159) ) ) {
                      result[0] += -0.004967961081422441;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000000000001173) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2598000000000000309) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03305000000000000299) ) ) {
                      result[0] += 0.0011203160746542046;
                    } else {
                      result[0] += 0.005823101174701682;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              result[0] += -0.0033091915656552995;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.43599383073067699) ) ) {
            result[0] += 0.00549353994772649;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9046500000000001762) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0008079744335981458;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2519.658559778325525) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.43959330143541209) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4203560000000000629) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7708000000000000407) ) ) {
              result[0] += -0.004765824706932148;
            } else {
              result[0] += 0;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1582500000000000295) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1279338682318470199) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.14908063427800311) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7533620000000000871) ) ) {
                    result[0] += 0.0006179440051117306;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7875500000000000833) ) ) {
                    result[0] += -0.0005914800467892856;
                  } else {
                    result[0] += -0.0052284786600806515;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1573.369039635713534) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.004948341468489426;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1473.234435796525304) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0035435365590706074;
              }
            }
          }
        } else {
          result[0] += 0.005234718404572059;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09244144239215144887) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.650443786982250138) ) ) {
              result[0] += -0.0016141644827669215;
            } else {
              result[0] += 0.0047541504559062775;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.18253968253969077) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5877760000000001872) ) ) {
                result[0] += 0.0018297102540828182;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += -0.005278357144064571;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8212.004448418350876) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7350500000000000922) ) ) {
                result[0] += 0;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7821500000000000119) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3083306738637045519) ) ) {
                    result[0] += -0.0074602524741922025;
                  } else {
                    result[0] += -0.0007514583831613505;
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.14277939042090537) ) ) {
                result[0] += 0.003577236509917855;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-27390.08921065179311) ) ) {
                  result[0] += 0.0006078182192053072;
                } else {
                  result[0] += -0.003140515748019442;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.74216524216524604) ) ) {
              result[0] += 0.0008342344240122418;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
                result[0] += -0.011121928528839507;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07449922958397615) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.005657549157175176;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9842100889221309101) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02295654067395430306) ) ) {
          result[0] += -0.0025038234763260386;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9381000000000000449) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.154992760675902036) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1456989672773315592) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07015148939065542211) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04328569322844116191) ) ) {
                    result[0] += 0.00047073999594176934;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05693937631927865894) ) ) {
                      result[0] += -2.9645995437061178e-05;
                    } else {
                      result[0] += -0.0028550978045736256;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7250000000000000888) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
                      result[0] += 0.00014747153314972647;
                    } else {
                      result[0] += -0.0005619803469335265;
                    }
                  } else {
                    result[0] += 0.004800503018370721;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11144.16520893778397) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2344066382699040996) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1950000000000000344) ) ) {
                      result[0] += -4.228132508309827e-05;
                    } else {
                      result[0] += -0.0034908049111238826;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.310715078210065665) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1682.526551393980526) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.221246000000000026) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.007758195172358929;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.77495421245422591) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6885500000000001064) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0037415487354156268;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.45584415584416149) ) ) {
                      result[0] += 0.0012371662048878062;
                    } else {
                      result[0] += -0.0005276643201216835;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)760.1404084372057923) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6850000000000001643) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
                      result[0] += -0.0008046822806697727;
                    } else {
                      result[0] += 0.0011491636989235873;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8426833958685702175) ) ) {
                      result[0] += 0.003921825263423783;
                    } else {
                      result[0] += -0.00023640583156697562;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1595.83134361526254) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0017895140047852042;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4844.968018580479111) ) ) {
                      result[0] += 0.00015934596663203882;
                    } else {
                      result[0] += -0.0007762310835863635;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 0.0022354356286874437;
          }
        }
      } else {
        result[0] += -0.0030773219776937624;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
        result[0] += 0;
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3686.786422307056) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
            result[0] += -0.006162020085253215;
          } else {
            result[0] += 0;
          }
        } else {
          result[0] += 0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)229.6363636363636545) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)29304.5719267044733) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45993589743590135) ) ) {
                  result[0] += 0.0009853722476791695;
                } else {
                  result[0] += 0.01142308391873302;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
                  result[0] += -0.0029699033704130916;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4481.016304914502143) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.004451919028112108;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.737273511647972946) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3211.649567834616846) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.16323529411765136) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.830018761726079468) ) ) {
                      result[0] += -0.00032591971601259837;
                    } else {
                      result[0] += 0.00039202576546262916;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
                      result[0] += -0.009494639021444783;
                    } else {
                      result[0] += -0.0004420817510881429;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653589743589744199) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
                      result[0] += 0.0005773151628005116;
                    } else {
                      result[0] += -0.0035391509393549424;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9392.751123286552684) ) ) {
                      result[0] += 0.004338564934385736;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3810500000000000553) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6435984235989665736) ) ) {
                    result[0] += 0.005705380312024144;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)237.3704492435913664) ) ) {
                      result[0] += 0.003464193990371797;
                    } else {
                      result[0] += -0.0015384400666492918;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1595.83134361526254) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4795045000000000557) ) ) {
                      result[0] += -0.0023779084138081147;
                    } else {
                      result[0] += -0.008896665192681239;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
                      result[0] += -0.002693544746133462;
                    } else {
                      result[0] += 0.0005902884978774401;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9305500000000000993) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9142500000000001181) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1390480000000000327) ) ) {
                  result[0] += -0.0027691666571168687;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1544380000000000197) ) ) {
                    result[0] += 0.007725775567321077;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5797500000000000986) ) ) {
                      result[0] += 0.0006078473369318941;
                    } else {
                      result[0] += -0.0006833726948868633;
                    }
                  }
                }
              } else {
                result[0] += 0.0046999355331683035;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.65838375108038605) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.006623782310433458;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01815000000000000294) ) ) {
            result[0] += 0;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1381000000000000283) ) ) {
              result[0] += 0.007411493816823605;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
                result[0] += -0.00024234844336885932;
              } else {
                result[0] += 0.0032037490001184635;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1110651606754299442) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.007633530610964726;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3864255899139620865) ) ) {
            result[0] += 0.003638310625947596;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09875000000000001832) ) ) {
              result[0] += -0.0028455787636708983;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.548804922219870317) ) ) {
                result[0] += 0.0001354108744577607;
              } else {
                result[0] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.285058977719528484) ) ) {
        result[0] += 0.0012139459439297314;
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2450.380029300642036) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.11363240676324482) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4351.162893810690548) ) ) {
              result[0] += -0.003755201608431068;
            } else {
              result[0] += 0;
            }
          } else {
            result[0] += 0.0034034249445694625;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2227500000000000313) ) ) {
            result[0] += -0.0064150371719907204;
          } else {
            result[0] += -0.001139569152487219;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2523846967694989285) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1036061969132185817) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.138110787595931539) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03931893328124715786) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9495000000000001217) ) ) {
              result[0] += 0.003981263793642088;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9050000000000001377) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)374.1500000000000341) ) ) {
                  result[0] += -0.0028396090592335637;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-776.627462522484393) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0019085469685456147;
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4082770000000000565) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.00901154189998486;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)96.63122171945703087) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07945677231391518047) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02295654067395430306) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9679500000000001991) ) ) {
                      result[0] += 0.0006184014847302864;
                    } else {
                      result[0] += -0.0014849139291182771;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000000000001173) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.005087143668391343;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5148.965599026557356) ) ) {
                    result[0] += 0.0019271666223156225;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2127.473441927146268) ) ) {
                      result[0] += -0.005562272746018338;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                result[0] += -0.00360257117596741;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.89015151515152979) ) ) {
                result[0] += 0.0014899897631452303;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05921603206594685392) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2050000000000000433) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0020670448539429538;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07370217330381030607) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000000000000697) ) ) {
                  result[0] += -0.002956482587604813;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4262175000000000824) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1066415978387809521) ) ) {
                      result[0] += 0.0057988957057836694;
                    } else {
                      result[0] += 0.0010096680412985243;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
                      result[0] += -0.0024123578454568434;
                    } else {
                      result[0] += 0.0018315185845493626;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.468432671081678187) ) ) {
                  result[0] += 0.0003492228381430986;
                } else {
                  result[0] += 0.0074320255636613946;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06663870972854980812) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1066415978387809521) ) ) {
                result[0] += 0.003131610865491483;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4283830000000000693) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.004539650793170319;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347230000000001704) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04908122139453940935) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.37186379928316171) ) ) {
              result[0] += 0.005514697587636701;
            } else {
              result[0] += -0.0010483126066896916;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05935000000000000692) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2712850000000000539) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
                  result[0] += -0.0007661558979676342;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
                    result[0] += -0.004514322783084208;
                  } else {
                    result[0] += -0.011162258024796217;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1238500000000000295) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.43665158371041102) ) ) {
                  result[0] += 0.002515784561129257;
                } else {
                  result[0] += -0.00017022796706053967;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228310000000000346) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3190058479532194) ) ) {
                    result[0] += -0.006447144482365303;
                  } else {
                    result[0] += -0.0012238663236157578;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3577.178536742065262) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1559.276745549883799) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05252794089299169661) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.886045828437135086) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0047506988261961595;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1516.142594860419422) ) ) {
                result[0] += 0.0019358635212683075;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1885.524186461903128) ) ) {
                  result[0] += -0.0025707851194923122;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.870650000000000035) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1612811956950306047) ) ) {
                result[0] += -0.0015776244460562585;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.600595238095238848) ) ) {
                  result[0] += -0.0007162199319132055;
                } else {
                  result[0] += 0.002465113577109677;
                }
              }
            } else {
              result[0] += -0.004344401915726134;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2240150000000000474) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5250000000000001332) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1298745000000000316) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.78183361629881531) ) ) {
                  result[0] += -0.0011558529540538801;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)159.4971590909091219) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -5.707590623421539e-05;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4606.135262423782478) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7350500000000000922) ) ) {
                    result[0] += 0.0027102542862096368;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              result[0] += -0.0015655254345931452;
            }
          } else {
            result[0] += 0.0036944633790355146;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770958479253431361) ) ) {
            result[0] += -0.003149749646791136;
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)159.4971590909091219) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6361.997541307308893) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.80196078431373152) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1910.675745379773161) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.695248500000000047) ) ) {
                  result[0] += 0.003955021772204618;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3064.401422747675497) ) ) {
                  result[0] += 0.0008356623936312842;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.758600000000000052) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.00378166535867285;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5376165000000000527) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38051350000000006) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1103500000000000175) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
                      result[0] += 0.005499177330557245;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.0006647841160465521;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05935000000000000692) ) ) {
                    result[0] += 0.009241744612314504;
                  } else {
                    result[0] += 0.0037944735586322525;
                  }
                }
              } else {
                result[0] += -0.0007849009248922993;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01875000000000000278) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1974103251759973532) ) ) {
                result[0] += -5.292045607030682e-05;
              } else {
                result[0] += -0.004679454004927588;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03635000000000000731) ) ) {
                result[0] += 0.004940809830686832;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3483525000000000649) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2982875000000000387) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.00528444443955675;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.09333333333334792) ) ) {
                    result[0] += 0.004520151895057825;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          }
        } else {
          result[0] += 0.007578134428482653;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5938500000000001) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12967.17676313729862) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08235000000000002041) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3742502868321948561) ) ) {
                result[0] += -0.0025227270887672286;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36696.22831575417513) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)26013.27966640743398) ) ) {
                  result[0] += -0.002440224636323317;
                } else {
                  result[0] += 3.327623378759012e-05;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6361.997541307308893) ) ) {
                  result[0] += -0.0010523546364807213;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.04232804232805165) ) ) {
                    result[0] += 0.0006078605476184223;
                  } else {
                    result[0] += 0.007460166437431047;
                  }
                }
              }
            }
          } else {
            result[0] += -0.005059836353243459;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.06066176470588758) ) ) {
              result[0] += -0.0018508262725164188;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8250000000000000666) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174478000000000022) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3412.950059462908939) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.00013420716067174442;
                  }
                } else {
                  result[0] += -0.001406495149722124;
                }
              } else {
                result[0] += 0.002032702026279018;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904340000000000588) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4444724744926561999) ) ) {
                  result[0] += 0.0021904476090810563;
                } else {
                  result[0] += -0.0005868414705423401;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5522500000000001297) ) ) {
                  result[0] += 0.010535938532213752;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1860.099431670796776) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.005894135230115926;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.440904500000000088) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4473314962819884832) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.005912358578030725;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3871448717291648411) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.835491146007350638) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675530000000000519) ) ) {
                      result[0] += 0.0005100904651992757;
                    } else {
                      result[0] += 0.00438839669490636;
                    }
                  }
                } else {
                  result[0] += -0.0011594616130158476;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5189379155588735859) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2487665370563404699) ) ) {
            result[0] += 0.002304134818372129;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
              result[0] += 0.000554764691161568;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.64312313803376853) ) ) {
                result[0] += -0.008043639043675093;
              } else {
                result[0] += -0.002138048673964463;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2391000000000000347) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.225650000000000045) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5528205492927561471) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2276496810577003649) ) ) {
                  result[0] += 0.005554421202038675;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)599.5344662300684604) ) ) {
                    result[0] += 0.0040371298141183235;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4302840000000000553) ) ) {
                      result[0] += 0.00044983017826978876;
                    } else {
                      result[0] += -0.002392935786284325;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3739500000000000601) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8817.104006290848702) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7525345622119816724) ) ) {
                      result[0] += 0.000989513768169758;
                    } else {
                      result[0] += -0.0004915582662925447;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2330500000000000071) ) ) {
                      result[0] += 0.005910504640086833;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.221246000000000026) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1254.980453496960536) ) ) {
                      result[0] += 0.004673541182694187;
                    } else {
                      result[0] += -0.0005704356087114721;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2964705000000000257) ) ) {
                      result[0] += -0.003736152551738699;
                    } else {
                      result[0] += -0.001149390547528631;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.006076914292051355;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
                result[0] += 0.003985873070491894;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.442099999999999993) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2741000000000000658) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8662560233874664339) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.005663829699902382;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07230000000000001703) ) ) {
                      result[0] += 0.0019940155754430812;
                    } else {
                      result[0] += -0.00025892136291136644;
                    }
                  }
                } else {
                  result[0] += -0.0051352648844428875;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3205004002465369761) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1946668479876043911) ) ) {
                  result[0] += 0.0026952995235542286;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3760500000000000509) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.59687500000000426) ) ) {
                      result[0] += -0.003955476608935816;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.45022222222222652) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3502855000000000829) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.004659969001497776;
                    }
                  } else {
                    result[0] += 0.010273658839909116;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38273.51477145576064) ) ) {
                    result[0] += 0.0026101275223216016;
                  } else {
                    result[0] += -0.0010794632588676017;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8212.004448418350876) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0756500000000000089) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6081.744581517318693) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10362.98456196805637) ) ) {
                result[0] += 0.009541348305404082;
              } else {
                result[0] += 0.0030233327306772697;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14091.15150991420705) ) ) {
              result[0] += 0.0010023162943872824;
            } else {
              result[0] += -0.002030466060744105;
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3398531389175412643) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3224500000000000699) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9566.137358918122118) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4165800000000000058) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3191980000000000373) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607440000000000313) ) ) {
                      result[0] += 0.0004857157420323766;
                    } else {
                      result[0] += -0.0031645939712049084;
                    }
                  } else {
                    result[0] += 0.003574559145768033;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1052900224917293903) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.005278975728861827;
                  }
                }
              } else {
                result[0] += 0.003589316086459758;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.76341350601295943) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-42515.07229609502247) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.1500000000000199) ) ) {
                    result[0] += -0.008815308096381922;
                  } else {
                    result[0] += -0.00212204609409014;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6678500000000000547) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228310000000000346) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4148169003269751576) ) ) {
                    result[0] += 0.0007843205901001616;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.603350000000000164) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0026444765763037627;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21751.357454319721) ) ) {
                    result[0] += -0.0007148942445461821;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5481.444926233901242) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00973319394308749;
                    }
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20716.01340554505077) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
                    result[0] += -0.005329968373281451;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                result[0] += -0.0018620571942022006;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.407843474118376681) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3755158646863254179) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2391000000000000347) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.006592456789589845;
                    }
                  } else {
                    result[0] += -0.0016481313135495903;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3266000000000000569) ) ) {
                    result[0] += 0.00808274081060826;
                  } else {
                    result[0] += 0.0008091650916825073;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.0212765957446841) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.469444444444445) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1928899549823784032) ) ) {
                  result[0] += -0.0036905855825179945;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0017451777028501913;
                  }
                }
              } else {
                result[0] += -0.010033147972299627;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2202032112554981602) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4527450000000000641) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1658.751546212527273) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0018109567085753918;
                    }
                  } else {
                    result[0] += 0.004815471198260333;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.325799200799202104) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1909226976060683645) ) ) {
                      result[0] += -0.00026742931510199464;
                    } else {
                      result[0] += -0.0026973125770597553;
                    }
                  } else {
                    result[0] += -0.005903122192250483;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6200500000000001011) ) ) {
                  result[0] += -0.0004566423547655296;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4348787844478528841) ) ) {
                    result[0] += 0.0008931370159637464;
                  } else {
                    result[0] += 0.005940576668492819;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4126257761330971996) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3249.949450539746977) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3266.861991663331082) ) ) {
                  result[0] += 0.008667892944443232;
                } else {
                  result[0] += 0.00057185903356785;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2924659694118884601) ) ) {
                  result[0] += 0.002540921971404658;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              result[0] += -0.003361853341186567;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5258.869399769443589) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6339500000000001245) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                  result[0] += 3.879278724436021e-05;
                } else {
                  result[0] += -0.00577337558356701;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4542.943917304383831) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.315748500000000043) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.701050000000000062) ) ) {
                      result[0] += 0.0006134457715441821;
                    } else {
                      result[0] += -0.002610556456510199;
                    }
                  } else {
                    result[0] += 0.003185403643566589;
                  }
                } else {
                  result[0] += 0.004939556564585896;
                }
              }
            } else {
              result[0] += -0.004109790498229956;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5261960000000001081) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04395000000000000989) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02255000000000000407) ) ) {
                  result[0] += -0.003052849580731542;
                } else {
                  result[0] += 0.0013217617383004712;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.283247888168071893) ) ) {
                  result[0] += -0.010660902365609523;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3427.976752410164409) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3954325276832468261) ) ) {
                      result[0] += -0.00020634668054494266;
                    } else {
                      result[0] += -0.005745076980275339;
                    }
                  } else {
                    result[0] += -0.00907561347579977;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4666.632518606213125) ) ) {
                result[0] += 0.0013735029613142914;
              } else {
                result[0] += -0.0025444376807263703;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.978492136910269927) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.879297427786564834) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.0018835041431185702;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
              result[0] += -0.00429468633666216;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08395000000000001072) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
              result[0] += 0.00013801179562486786;
            } else {
              result[0] += 0.0065910123456152155;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6225430000000001796) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0021760243839994233;
              }
            } else {
              result[0] += 0.003914385003575058;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.548804922219870317) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4843951266831568181) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)760.1404084372057923) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.56607352231188468) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.088194444444444908) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3755158646863254179) ) ) {
                    result[0] += 0.0006381816602651274;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4084000000000000408) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.002499853322247253;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.473050000000000026) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)361.7598371524995287) ) ) {
                      result[0] += -0.0012013743498436882;
                    } else {
                      result[0] += 0.0013417432869696727;
                    }
                  } else {
                    result[0] += 0.0055421407604919915;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6589500000000001467) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)507.68014339146265) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
                      result[0] += -0.0013077886376076041;
                    } else {
                      result[0] += -0.009635874660747416;
                    }
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)829.040359399005979) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5466515000000001789) ) ) {
                  result[0] += 0.004918885621598109;
                } else {
                  result[0] += 0;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1934555000000000302) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.63721804511278535) ) ) {
                    result[0] += -0.004487055414660005;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000000000001173) ) ) {
                      result[0] += 0.0013901053498121326;
                    } else {
                      result[0] += -0.0004449139836199807;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2164415000000000366) ) ) {
                    result[0] += 0.0034629706472306624;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                      result[0] += -0.001489712445127544;
                    } else {
                      result[0] += 0.00018582249322642022;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.286607142857144837) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.437797619047619602) ) ) {
                result[0] += 0.0007294078958466947;
              } else {
                result[0] += -0.001677221127927938;
              }
            } else {
              result[0] += 0.007338123621449836;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.56607352231188468) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1604000000000000148) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1842.867320295106538) ) ) {
                result[0] += 0.0004230589371040775;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07230000000000001703) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03200000000000000761) ) ) {
                    result[0] += -0.0007288151990667594;
                  } else {
                    result[0] += -0.007143219025426611;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.225650000000000045) ) ) {
                result[0] += 0.004069003262035064;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6080000000000000959) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.362024000000000068) ) ) {
                    result[0] += -0.002318531670612708;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.921363443236741575) ) ) {
                      result[0] += 0.0021579943095440344;
                    } else {
                      result[0] += -0.0006268343662759253;
                    }
                  }
                } else {
                  result[0] += 0.0029430879269959883;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.650443786982250138) ) ) {
              result[0] += -3.950980425202106e-05;
            } else {
              result[0] += -0.006664297201758852;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2227500000000000313) ) ) {
        result[0] += 0.005091075584625205;
      } else {
        result[0] += -0.001194426910508155;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3115602405909643768) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.252450980392159963) ) ) {
        result[0] += -0.006430905101646099;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1795.96581361443873) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3423668233450842813) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5550000000000001599) ) ) {
              result[0] += -0.0011328670283749895;
            } else {
              result[0] += 0.004481571513000901;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1275.919050802347783) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.245079122973038) ) ) {
                result[0] += 0.002735713675786653;
              } else {
                result[0] += -0.002313127520774682;
              }
            } else {
              result[0] += -0.005740989800838911;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01125000000000000132) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.50675675675677212) ) ) {
                result[0] += -0.001817601002543937;
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2350000000000000144) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)113.0060386473430043) ) ) {
                    result[0] += -0.0006219685660867101;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.0017184711606323636;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11018.535337379677) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45141065830721239) ) ) {
                  result[0] += 0.00017066160069371432;
                } else {
                  result[0] += -0.0032459657424217304;
                }
              } else {
                result[0] += -0.008015282849217936;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745450000000000501) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03305000000000000299) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7450000000000001066) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3550000000000000377) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.08500000000000000611) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0005046511444389018;
                    }
                  } else {
                    result[0] += -0.0009686017832164039;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2082316587659429064) ) ) {
                    result[0] += 0.010177044036820225;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7451.581543301115744) ) ) {
                      result[0] += 0.002314781899734852;
                    } else {
                      result[0] += -0.002223975411223794;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4505095000000000627) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5885500000000001286) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5702500000000001457) ) ) {
                      result[0] += -0.00020506274238642672;
                    } else {
                      result[0] += 0.007095231413471803;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320780000000000176) ) ) {
                      result[0] += -0.00037077078300577695;
                    } else {
                      result[0] += -0.004214444199636224;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6722500000000001252) ) ) {
                    result[0] += -9.00970152842157e-05;
                  } else {
                    result[0] += 0.00435671737901875;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6871.194738991899612) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)10171.3697502395753) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.4495192307692335) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5741900000000000892) ) ) {
                      result[0] += -0.002486427309929896;
                    } else {
                      result[0] += 0.0025940971645610033;
                    }
                  } else {
                    result[0] += 0.004525753525309958;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
                    result[0] += -0.007213001047242515;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.78183361629881531) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0032030688680393864;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3064.437254561459213) ) ) {
                  result[0] += -7.34999314308741e-05;
                } else {
                  result[0] += -0.007977593594627966;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4420656524973072266) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.65838375108038605) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            result[0] += 0.0002465147615163886;
          } else {
            result[0] += 0.009759296266187035;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)167.5392857142857395) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.04232804232805165) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1768500000000000349) ) ) {
                  result[0] += 0.00258419908785344;
                } else {
                  result[0] += -0.0012810302664747783;
                }
              } else {
                result[0] += -0.004188979820254459;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3859225000000000572) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.59032258064516796) ) ) {
                  result[0] += 0.002433195754279576;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1344370000000000287) ) ) {
                    result[0] += 0.0013881256931122447;
                  } else {
                    result[0] += -0.003280911378126691;
                  }
                }
              } else {
                result[0] += 0.007694683549898961;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6107500000000001261) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1544380000000000197) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0034911671337483673;
              }
            } else {
              result[0] += 0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2304500000000000159) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3658645000000000369) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.006442720490494933;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1811500000000000055) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1121500000000000136) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930090000000000194) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3962.214750511102011) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3689500000000000557) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0020484790206934194;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7350000000000000977) ) ) {
                      result[0] += -9.408290777507691e-05;
                    } else {
                      result[0] += 0.005058895698801962;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8817.104006290848702) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5845015000000001182) ) ) {
                      result[0] += -0.0028209449052082596;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 8.598065915086602e-05;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3571.445901236788359) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5261.246056081498864) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5430163914776303669) ) ) {
                      result[0] += 0.0027421160601562105;
                    } else {
                      result[0] += -0.0001366365656549886;
                    }
                  } else {
                    result[0] += 0.005205410814372848;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2964705000000000257) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.004928027422288476;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)983.5309309347018143) ) ) {
                  result[0] += -0.0012104936735164325;
                } else {
                  result[0] += 0.0010445176628639434;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3742.494223235453774) ) ) {
                  result[0] += -0.00807090647941873;
                } else {
                  result[0] += 0;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8127734335609356764) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5308159824506151203) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3268798599916286629) ) ) {
                result[0] += 0.004634139821118268;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.487126000000000059) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.43376557335367671) ) ) {
                    result[0] += -0.005430732113672447;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1937.925932230502212) ) ) {
                      result[0] += 0.002771588304946729;
                    } else {
                      result[0] += -0.0018392431563531118;
                    }
                  }
                } else {
                  result[0] += 0.0029244078933446395;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20302.8995617723449) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.437450000000000061) ) ) {
                  result[0] += -0.0011499167799295291;
                } else {
                  result[0] += 0.0024652078628908986;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.14962251201098553) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)715.4826587170257426) ) ) {
                      result[0] += 0.007627377654737308;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.011013958837808457;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9678488682944218491) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4049500000000000877) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5029.288454347889456) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607440000000000313) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3922500000000000431) ) ) {
                      result[0] += -0.0014409615072315657;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.0037869231018385764;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3018.749278514522757) ) ) {
                    result[0] += 0.0021434805870932283;
                  } else {
                    result[0] += -0.0012601127820777755;
                  }
                }
              } else {
                result[0] += 0.001320094500027983;
              }
            } else {
              result[0] += 0.0019412975083259692;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2113.689413772091484) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.83824525745257539) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.982131478334749675) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09453843892841291841) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1061.95970582644145) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0033315061957917415;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.624858597285068651) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4122825000000000517) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9379530110910064833) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0041996640031959475;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925320000000000253) ) ) {
                  result[0] += 0.003800643244083009;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9023689374824783727) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6334290000000001308) ) ) {
                      result[0] += -0.002318229151978153;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1.3862943611200651) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0030674771133390724;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1516.142594860419422) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1983.263552118278994) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.002439246740014185;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0796521464731583112) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7999015000000001541) ) ) {
                    result[0] += -0.002354073371743511;
                  } else {
                    result[0] += 9.649908014090037e-05;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1663.13767962321208) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0016772654436839232;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1750.811071603854316) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4856.133881915514394) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.56607352231188468) ) ) {
                result[0] += 0.0004340585715618956;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7246031178489703573) ) ) {
                  result[0] += -0.010342357758946085;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
                result[0] += 0.0037249917527883538;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.344900589101620803) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711180124223603105) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1311.833829054160333) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003164000393890906;
                    }
                  } else {
                    result[0] += -0.008370554962591623;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
                      result[0] += -0.003396417117003403;
                    } else {
                      result[0] += 0.0004752599927515085;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4843951266831568181) ) ) {
                      result[0] += -0.005007736321176525;
                    } else {
                      result[0] += 0.0029436232897067515;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1928899549823784032) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3282773505116238777) ) ) {
                result[0] += 0.00029398783376652425;
              } else {
                result[0] += -0.0023418570197178182;
              }
            } else {
              result[0] += 0.0049707248447197665;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3239502683350661827) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.940712851405623773) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.0034577443858995684;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3540665000000000617) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.294700000000000073) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3833.159599586038439) ) ) {
                    result[0] += 0.003283555968023465;
                  } else {
                    result[0] += -0.00048199198241545186;
                  }
                } else {
                  result[0] += -0.0031787815409123313;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.19793814432989798) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0063637585132052385;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.758730158730161364) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
                  result[0] += -0.002685403613270086;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2902500000000000635) ) ) {
                    result[0] += 0.0022752161589303464;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5049000000000000155) ) ) {
                      result[0] += -0.00215747469931638;
                    } else {
                      result[0] += 0.0005618693825476391;
                    }
                  }
                }
              } else {
                result[0] += -0.005971998395558008;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.293597746500404877) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1770958479253431361) ) ) {
              result[0] += 0.0013836203608697164;
            } else {
              result[0] += -0.0024297388462272375;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9965277359150260805) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.144153487166192917) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.36135000000000006) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
                    result[0] += 0.00016411222744022657;
                  } else {
                    result[0] += 0.003025388457570467;
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0.0073493047749152;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.875961538461539568) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0006409977749401636;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37474632166413357) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1036061969132185817) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.606377583365031558) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
              result[0] += -0.0008215771361670206;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05255000000000000643) ) ) {
                result[0] += 0.0023878632016784995;
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
              result[0] += -0.006603823407346063;
            } else {
              result[0] += 0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9450000000000000622) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3859225000000000572) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3083306738637045519) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0640500000000000097) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1172.762349355894003) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7372500000000000719) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0018173646763678135;
                    }
                  } else {
                    result[0] += 0.0010531687577533125;
                  }
                } else {
                  result[0] += 0.005687277898084455;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4709808304613328223) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03485000000000000597) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
                      result[0] += -1.7630605863616267e-05;
                    } else {
                      result[0] += -0.0033843562231749445;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)623.1461654618134389) ) ) {
                      result[0] += 0.004650379136570849;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            } else {
              result[0] += -0.004911588095675524;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.12532467532468061) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1201.367728319936987) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)939.1508267619991557) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4133440879166302429) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5159500000000001307) ) ) {
                      result[0] += -0.005626164148905821;
                    } else {
                      result[0] += 0.0005439638269611564;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675530000000000519) ) ) {
                      result[0] += 0.0016892004371193228;
                    } else {
                      result[0] += 0.009117526398175322;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.56214887640449618) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
                      result[0] += 0.0032357065701779926;
                    } else {
                      result[0] += 0.009275261831359998;
                    }
                  } else {
                    result[0] += 0.0007221219982672374;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5500179611347216779) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3079795000000000171) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6152500000000001856) ) ) {
                      result[0] += 0.002235975026459835;
                    } else {
                      result[0] += -0.006606444920621279;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
                      result[0] += 0.002990640241124023;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
                    result[0] += 0.0005997295487864213;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                      result[0] += -0.0017432341412845441;
                    } else {
                      result[0] += -0.008425494992903007;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2962.976412357489153) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                  result[0] += 0.006300049786952721;
                } else {
                  result[0] += -4.873978865422658e-05;
                }
              } else {
                result[0] += 0.007786615905331007;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8769200928108228377) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.0006453043902868089;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2182000000000000328) ) ) {
              result[0] += -0.0002547668036705286;
            } else {
              result[0] += -0.004899216482627412;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.498956746384165761) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.7610275038920733) ) ) {
              result[0] += 0.001940906247684363;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1846000000000000141) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.90306122448980375) ) ) {
                  result[0] += 0.002778886809112905;
                } else {
                  result[0] += -0.0005521123828768163;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1708000000000000351) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.60851063829787932) ) ) {
                      result[0] += -0.0009893651057847625;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0003679992900905531;
                  }
                } else {
                  result[0] += -0.0026932987079252807;
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14402.23152588333323) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.003963184760685389;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2197.409051300025112) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6497500000000001608) ) ) {
        result[0] += 0;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.106606960732522002) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.008516298756915473;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.871900055938841234) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6296205000000001384) ) ) {
          result[0] += 0;
        } else {
          result[0] += 0.0029021476923620382;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-952.9475905187154012) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9139.728134485791088) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9566.137358918122118) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7285500000000001419) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2882292173067574903) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.94680249009621065) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1967701477038585611) ) ) {
                      result[0] += -0.0018024986730957862;
                    } else {
                      result[0] += -0.009804175415103455;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-40295.74630962839001) ) ) {
                      result[0] += -0.002073038314112586;
                    } else {
                      result[0] += 0.00025128681407075344;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5877760000000001872) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4762500000000000067) ) ) {
                      result[0] += 0.0003870800532061748;
                    } else {
                      result[0] += -0.0006339861888221789;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6254210000000001157) ) ) {
                      result[0] += 0.0042161048670540414;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9790.82043369202438) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)7451.581543301115744) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.78345184227537601) ) ) {
                      result[0] += 0.0022805309865550397;
                    } else {
                      result[0] += -0.006762632838958647;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0796521464731583112) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.006096027583427918;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13395.22104316800687) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2059541029866850392) ) ) {
                      result[0] += 0.001185370736817185;
                    } else {
                      result[0] += -0.0006416772708495174;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11745.44574006947005) ) ) {
                      result[0] += -0.005291621965688409;
                    } else {
                      result[0] += 0.0004789767112944254;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                  result[0] += 0.00019591762231450281;
                } else {
                  result[0] += -0.00219390614828109;
                }
              } else {
                result[0] += -0.00842788019386973;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4472500000000000364) ) ) {
              result[0] += 0.004095798622900329;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.080932372247844) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2964705000000000257) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
                    result[0] += 0.006559791357906024;
                  } else {
                    result[0] += 0.00012163275913111672;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4126257761330971996) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.13486978090120516) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.310715078210065665) ) ) {
                      result[0] += 9.885187116011875e-05;
                    } else {
                      result[0] += 0.0030459107716804597;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.74189814814816657) ) ) {
                      result[0] += -0.0011436190789893964;
                    } else {
                      result[0] += 0.000562509433683075;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2574234279727875552) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.83824525745257539) ) ) {
                      result[0] += -0.0014114135404069128;
                    } else {
                      result[0] += -0.007450249668529777;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5095115945175783256) ) ) {
                      result[0] += 0.0010566951963644476;
                    } else {
                      result[0] += -0.0028357064562866026;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += -0.0031305881441038453;
        }
      }
    }
  }
}

