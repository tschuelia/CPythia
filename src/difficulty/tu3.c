#include "prediction.h"
double predict_margin_unit3(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.972972869873046875) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47832450270652771) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4899999946355819702) ) ) {
          sum += (double)0.09747465217391301784;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.63730049133300781) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2037499994039535522) ) ) {
              sum += (double)0.1576478281249999447;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9499999880790710449) ) ) {
                sum += (double)0.1931176052631578821;
              } else {
                sum += (double)0.276881676470588256;
              }
            }
          } else {
            sum += (double)0.3538843823529411181;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2775000035762786865) ) ) {
          sum += (double)0.3278096875000000576;
        } else {
          sum += (double)0.5498470208333332554;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2546924948692321777) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36350345611572266) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8849999904632568359) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1079379990696907043) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08244450017809867859) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.46404838562011719) ) ) {
                  sum += (double)0.008982653846153846808;
                } else {
                  sum += (double)0.003521880952380952983;
                }
              } else {
                sum += (double)0.01816861607142856647;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2950000017881393433) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2046346291899681091) ) ) {
                  sum += (double)0.07902547058823528037;
                } else {
                  sum += (double)0.1577818899999999802;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.56526756286621094) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1628499999642372131) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
                      sum += (double)0.01320461999999999851;
                    } else {
                      sum += (double)0.04460460526315789681;
                    }
                  } else {
                    sum += (double)0.09958298214285712935;
                  }
                } else {
                  sum += (double)0.1235365576923076747;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01779999956488609314) ) ) {
              sum += (double)0.2489162115384615237;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.820055007934570312) ) ) {
                sum += (double)0.1522584843750000305;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8597.0810546875) ) ) {
                  sum += (double)0.09870751785714285131;
                } else {
                  sum += (double)0.04609501249999999051;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.870000004768371582) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1843499988317489624) ) ) {
                sum += (double)0.02098747368421052459;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.73214340209960938) ) ) {
                  sum += (double)0.009467575000000000643;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                      sum += (double)0.002605925781250001579;
                    } else {
                      sum += (double)0.004853743243243243896;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1353119.9375) ) ) {
                      sum += (double)0.002500000000000000052;
                    } else {
                      sum += (double)0.01101991666666666918;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001399999950081110001) ) ) {
                sum += (double)0.0507774868421052572;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.313050001859664917) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9583.6923828125) ) ) {
                    sum += (double)0.01764330000000000412;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.70394706726074219) ) ) {
                      sum += (double)0.007343289473684210152;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5549047887325286865) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2982500046491622925) ) ) {
                      sum += (double)0.01402517941176469746;
                    } else {
                      sum += (double)0.0256887222222222239;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7722391784191131592) ) ) {
                      sum += (double)0.0587403809523809467;
                    } else {
                      sum += (double)0.01658326923076923129;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6182352900505065918) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-27786.7861328125) ) ) {
                sum += (double)0.03209726562499999603;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3641115128993988037) ) ) {
                  sum += (double)0.0616686666666666633;
                } else {
                  sum += (double)0.1274159749999999591;
                }
              }
            } else {
              sum += (double)0.01720023958333333561;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4927611500024795532) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9600000083446502686) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09605000168085098267) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.0389862060546875) ) ) {
                  sum += (double)0.1833511041666666674;
                } else {
                  sum += (double)0.04968309482758621193;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2274000048637390137) ) ) {
                  sum += (double)0.2483075384615384684;
                } else {
                  sum += (double)0.08978458928571428355;
                }
              }
            } else {
              sum += (double)0.2254665833333333314;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06845000013709068298) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8490743041038513184) ) ) {
                sum += (double)0.02526063636363636011;
              } else {
                sum += (double)0.0060782249999999996;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184924960136413574) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.013739019632339478) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5200000107288360596) ) ) {
                    sum += (double)0.03653738235294116954;
                  } else {
                    sum += (double)0.1378479074074073774;
                  }
                } else {
                  sum += (double)0.02846711538461538238;
                }
              } else {
                sum += (double)0.1973254523809523653;
              }
            }
          }
        } else {
          sum += (double)0.2852717954545454515;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7597746551036834717) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3353035002946853638) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.19350481033325195) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01665000058710575104) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
                sum += (double)0.5081835119047619642;
              } else {
                sum += (double)0.4190365517241380067;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2301549986004829407) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.17179584503173828) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.58232450485229492) ) ) {
                    sum += (double)0.2235679166666666995;
                  } else {
                    sum += (double)0.3491225166666666047;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1979009956121444702) ) ) {
                    sum += (double)0.1180222166666666656;
                  } else {
                    sum += (double)0.2033803749999999744;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.417925357818603516) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.298264980316162109) ) ) {
                    sum += (double)0.3628466785714286047;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.366690158843994141) ) ) {
                      sum += (double)0.4038001923076923183;
                    } else {
                      sum += (double)0.426840750000000102;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.67136144638061523) ) ) {
                    sum += (double)0.2558580921052631685;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.85156774520874023) ) ) {
                      sum += (double)0.39010112096774191;
                    } else {
                      sum += (double)0.2947092380952381352;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07805000059306621552) ) ) {
              sum += (double)0.2904511093749999606;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2223000004887580872) ) ) {
                sum += (double)0.08314555681818182331;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-31125.298828125) ) ) {
                  sum += (double)0.2572284868421051973;
                } else {
                  sum += (double)0.1543450999999999851;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005500000224856194109) ) ) {
            sum += (double)0.6321591190476190114;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4377619326114654541) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2442.576416015625) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1233576387166976929) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.76598834991455078) ) ) {
                    sum += (double)0.3463359605263158225;
                  } else {
                    sum += (double)0.4721322794117647215;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6283999979496002197) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.47428226470947266) ) ) {
                      sum += (double)0.45208107894736832;
                    } else {
                      sum += (double)0.4025060750000000742;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.67277908325195312) ) ) {
                      sum += (double)0.5116981190476190822;
                    } else {
                      sum += (double)0.4258203571428570977;
                    }
                  }
                }
              } else {
                sum += (double)0.5375774907407405712;
              }
            } else {
              sum += (double)0.3294458906249999597;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.991371631622314453) ) ) {
            sum += (double)0.3981028181818181966;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.876943737268447876) ) ) {
              sum += (double)0.1009506071428571544;
            } else {
              sum += (double)0.2515108000000000343;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05635000020265579224) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1974.7989501953125) ) ) {
              sum += (double)0.3245339605263158345;
            } else {
              sum += (double)0.09364366666666666672;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.005795717239379883) ) ) {
              sum += (double)0.1229649166666666876;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20638.2451171875) ) ) {
                sum += (double)0.1048726617647058879;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.10675048828125) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1423000022768974304) ) ) {
                    sum += (double)0.02747080555555555734;
                  } else {
                    sum += (double)0.07444848333333334289;
                  }
                } else {
                  sum += (double)0.01690742857142856978;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6643044948577880859) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7531519830226898193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.20970344543457031) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4858189970254898071) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1559194326400756836) ) ) {
                  sum += (double)0.5789576999999999085;
                } else {
                  sum += (double)0.5279519375000001347;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4960495084524154663) ) ) {
                  sum += (double)0.4015569687500000207;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3567.67431640625) ) ) {
                    sum += (double)0.4788019375000001077;
                  } else {
                    sum += (double)0.5598518295454545379;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5860525071620941162) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4691.0888671875) ) ) {
                  sum += (double)0.5537740277777777331;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.617925882339477539) ) ) {
                    sum += (double)0.5816467499999998791;
                  } else {
                    sum += (double)0.6381062717391304817;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.142740987241268158) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1873.74005126953125) ) ) {
                    sum += (double)0.7265650526315788893;
                  } else {
                    sum += (double)0.6738010937500000797;
                  }
                } else {
                  sum += (double)0.621776680555555461;
                }
              }
            }
          } else {
            sum += (double)0.3524811818181818324;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.170329689979553223) ) ) {
            sum += (double)0.4235870760869564489;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2552.708984375) ) ) {
              sum += (double)0.3154884899999999548;
            } else {
              sum += (double)0.1990117058823529239;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.041607141494750977) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06974999979138374329) ) ) {
              sum += (double)0.7297688749999998725;
            } else {
              sum += (double)0.6670710104166667209;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1061500012874603271) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8963870704174041748) ) ) {
                sum += (double)0.8641091718750000261;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06487137079238891602) ) ) {
                  sum += (double)0.7833027941176470277;
                } else {
                  sum += (double)0.8339564473684211166;
                }
              }
            } else {
              sum += (double)0.7302416029411764598;
            }
          }
        } else {
          sum += (double)0.5408779047619047819;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.253819003701210022) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.236111164093017578) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999970197677612) ) ) {
            sum += (double)0.09652198611111111048;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.028528451919555664) ) ) {
              sum += (double)0.03723294444444444351;
            } else {
              sum += (double)0.009863805555555556215;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4740.71484375) ) ) {
            sum += (double)0.1326243749999999888;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.300892829895019531) ) ) {
              sum += (double)0.1689068666666666552;
            } else {
              sum += (double)0.2438869117647059215;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09103149920701980591) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8189000189304351807) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.39273643493652344) ) ) {
                  sum += (double)0.008443764705882353741;
                } else {
                  sum += (double)0.002500000000000001787;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0484500005841255188) ) ) {
                  sum += (double)0.01528083333333333377;
                } else {
                  sum += (double)0.002693083333333333353;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13746.19677734375) ) ) {
                sum += (double)0.009248041666666668298;
              } else {
                sum += (double)0.01996776190476190829;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)84.38311386108398438) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.59285736083984375) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5411282181739807129) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3495189845561981201) ) ) {
                    sum += (double)0.01159917499999999976;
                  } else {
                    sum += (double)0.05048883823529411174;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1724710017442703247) ) ) {
                    sum += (double)0.01791453846153846091;
                  } else {
                    sum += (double)0.005946526315789473285;
                  }
                }
              } else {
                sum += (double)0.06092313888888888779;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.14473724365234375) ) ) {
                sum += (double)0.02115821428571428714;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5359730124473571777) ) ) {
                  sum += (double)0.006964562500000000267;
                } else {
                  sum += (double)0.002979089285714285867;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008849999867379665375) ) ) {
            sum += (double)0.1384592857142857292;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1821440011262893677) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4420000016689300537) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5811405777931213379) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)94.86558914184570312) ) ) {
                      sum += (double)0.01567520161290321748;
                    } else {
                      sum += (double)0.02673948437500000067;
                    }
                  } else {
                    sum += (double)0.007086500000000001652;
                  }
                } else {
                  sum += (double)0.05358642424242424096;
                }
              } else {
                sum += (double)0.07285285714285714975;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.56773757934570312) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6630390286445617676) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2237531617283821106) ) ) {
                    sum += (double)0.0260150312500000043;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2134735062718391418) ) ) {
                      sum += (double)0.06015000000000000208;
                    } else {
                      sum += (double)0.09907169999999998478;
                    }
                  }
                } else {
                  sum += (double)0.0174853387096774171;
                }
              } else {
                sum += (double)0.1141196481481481367;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1405058130621910095) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8625500202178955078) ) ) {
            sum += (double)0.4018164124999999975;
          } else {
            sum += (double)0.4773945333333333152;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-822.209228515625) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.548947334289550781) ) ) {
              sum += (double)0.3548674482758620852;
            } else {
              sum += (double)0.220290941176470606;
            }
          } else {
            sum += (double)0.1399656125000000029;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075429320335388184) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.625) ) ) {
                sum += (double)0.2223108593750000028;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1381999999284744263) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.126373291015625) ) ) {
                    sum += (double)0.05956837962962962391;
                  } else {
                    sum += (double)0.1130735694444444384;
                  }
                } else {
                  sum += (double)0.1964715789473684138;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6584.034423828125) ) ) {
                sum += (double)0.146975683333333329;
              } else {
                sum += (double)0.3602641666666666076;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3908079862594604492) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4856500029563903809) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1794499978423118591) ) ) {
                  sum += (double)0.03969918269230768987;
                } else {
                  sum += (double)0.004068580645161290303;
                }
              } else {
                sum += (double)0.1206578214285714268;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.69534111022949219) ) ) {
                sum += (double)0.0674611203703703588;
              } else {
                sum += (double)0.1765284852941176319;
              }
            }
          }
        } else {
          sum += (double)0.4252163157894736645;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9531540870666503906) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.61034488677978516) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2444199994206428528) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01865000044927000999) ) ) {
              sum += (double)0.4382214999999999305;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12994.455078125) ) ) {
                sum += (double)0.3317515588235294688;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.836490631103515625) ) ) {
                  sum += (double)0.2788178369565216808;
                } else {
                  sum += (double)0.1557739999999999958;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0008499999821651726961) ) ) {
              sum += (double)0.5874296153846153556;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.31999969482421875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7030499875545501709) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4607000052928924561) ) ) {
                      sum += (double)0.3546699695121952045;
                    } else {
                      sum += (double)0.415545278571428589;
                    }
                  } else {
                    sum += (double)0.2971061923076922517;
                  }
                } else {
                  sum += (double)0.4519052000000000069;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1644000038504600525) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.63529443740844727) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.242081642150878906) ) ) {
                      sum += (double)0.4884373965517241345;
                    } else {
                      sum += (double)0.443190930555555529;
                    }
                  } else {
                    sum += (double)0.5326111111111111462;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.636281967163085938) ) ) {
                    sum += (double)0.4524570882352940693;
                  } else {
                    sum += (double)0.4141806304347826484;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.335476994514465332) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84093379974365234) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2493999972939491272) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2252730056643486023) ) ) {
                  sum += (double)0.3305233541666666164;
                } else {
                  sum += (double)0.250090730769230829;
                }
              } else {
                sum += (double)0.1917380384615384736;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4628499895334243774) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2735920101404190063) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-34899.625) ) ) {
                    sum += (double)0.1080830526315789131;
                  } else {
                    sum += (double)0.2123614310344827116;
                  }
                } else {
                  sum += (double)0.07801921875000002171;
                }
              } else {
                sum += (double)0.2421740000000000004;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.16979999840259552) ) ) {
              sum += (double)0.4290009047619047777;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3677815049886703491) ) ) {
                sum += (double)0.2102310588235294098;
              } else {
                sum += (double)0.3657668611111111745;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.782791495323181152) ) ) {
          sum += (double)0.2224937692307692449;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.271773815155029297) ) ) {
            sum += (double)0.1579508083333333313;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.405139923095703125) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                sum += (double)0.1539391764705882737;
              } else {
                sum += (double)0.04015307142857141992;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15797.10009765625) ) ) {
                sum += (double)0.06093358333333332572;
              } else {
                sum += (double)0.01358920967741935465;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6849614977836608887) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.25759792327880859) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5700338184833526611) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5441325008869171143) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.95192337036132812) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.579661369323730469) ) ) {
                  sum += (double)0.4936393611111110635;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09249945357441902161) ) ) {
                    sum += (double)0.5017453499999999789;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4841285049915313721) ) ) {
                      sum += (double)0.5965535681818180391;
                    } else {
                      sum += (double)0.5424626630434782326;
                    }
                  }
                }
              } else {
                sum += (double)0.6240482187499999389;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.120183311402797699) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.37812900543212891) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02460000012069940567) ) ) {
                    sum += (double)0.745827767857142776;
                  } else {
                    sum += (double)0.6867504807692307311;
                  }
                } else {
                  sum += (double)0.6451806333333333088;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.658749997615814209) ) ) {
                  sum += (double)0.6536943043478260496;
                } else {
                  sum += (double)0.5667088913043477616;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2888.6907958984375) ) ) {
              sum += (double)0.5395470875000000222;
            } else {
              sum += (double)0.387515735714285714;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5498940050601959229) ) ) {
            sum += (double)0.2502893478260870275;
          } else {
            sum += (double)0.418718826086956486;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2951499968767166138) ) ) {
          sum += (double)0.606824781249999945;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03894999995827674866) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.786785513162612915) ) ) {
              sum += (double)0.7993623461538460484;
            } else {
              sum += (double)0.8562987857142856374;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
              sum += (double)0.6790056527777776907;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7843000292778015137) ) ) {
                sum += (double)0.743282460526315969;
              } else {
                sum += (double)0.799014169999999968;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.580495357513427734) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1704934984445571899) ) ) {
        sum += (double)0.05489557291666666977;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-970.381988525390625) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5131235122680664062) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3425499945878982544) ) ) {
              sum += (double)0.1859631562499999557;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2933235019445419312) ) ) {
                sum += (double)0.2804558173076923122;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3693094998598098755) ) ) {
                  sum += (double)0.4566272166666666688;
                } else {
                  sum += (double)0.2693709545454545107;
                }
              }
            }
          } else {
            sum += (double)0.4935558472222221771;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.176328539848327637) ) ) {
            sum += (double)0.2756230000000000069;
          } else {
            sum += (double)0.09400798809523806809;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4249999970197677612) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.21538448333740234) ) ) {
            sum += (double)0.01174661206896552082;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0608299989253282547) ) ) {
                sum += (double)0.002500000000000001353;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08604050055146217346) ) ) {
                  sum += (double)0.004136642857142856962;
                } else {
                  sum += (double)0.002500000000000000486;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2238999977707862854) ) ) {
                sum += (double)0.007397055555555556022;
              } else {
                sum += (double)0.002500000000000000052;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.70384645462036133) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.77272796630859375) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06264999881386756897) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.23809528350830078) ) ) {
                  sum += (double)0.02152038095238095056;
                } else {
                  sum += (double)0.0114992058823529409;
                }
              } else {
                sum += (double)0.06886984782608696065;
              }
            } else {
              sum += (double)0.1077088289473683985;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3535045087337493896) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7174240350723266602) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3520500063896179199) ) ) {
                  sum += (double)0.1067167692307692123;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1178370006382465363) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14226.07568359375) ) ) {
                      sum += (double)0.007426052083333334851;
                    } else {
                      sum += (double)0.01702034374999999988;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1155500002205371857) ) ) {
                      sum += (double)0.04482836458333333551;
                    } else {
                      sum += (double)0.0174706666666666656;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3264500051736831665) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
                    sum += (double)0.002500000000000000486;
                  } else {
                    sum += (double)0.003219192307692307891;
                  }
                } else {
                  sum += (double)0.008215821428571429969;
                }
              }
            } else {
              sum += (double)0.06173757812499999775;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6789383888244628906) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5022.721923828125) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1689469963312149048) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2824000120162963867) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.48831081390380859) ) ) {
                    sum += (double)0.06996873275862069974;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1326835006475448608) ) ) {
                      sum += (double)0.01232932692307692375;
                    } else {
                      sum += (double)0.05091927884615384675;
                    }
                  }
                } else {
                  sum += (double)0.1049820263157894701;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6303000152111053467) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3436499983072280884) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.280020490288734436) ) ) {
                      sum += (double)0.04871944021739128827;
                    } else {
                      sum += (double)0.1067042500000000005;
                    }
                  } else {
                    sum += (double)0.1539252142857142902;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14706.56494140625) ) ) {
                    sum += (double)0.08301369354838709913;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7816.7783203125) ) ) {
                      sum += (double)0.2740861250000000138;
                    } else {
                      sum += (double)0.1099328970588235171;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.01458358764648438) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9149999916553497314) ) ) {
                  sum += (double)0.07425959677419356753;
                } else {
                  sum += (double)0.2296987600000000018;
                }
              } else {
                sum += (double)0.3256016124999999706;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.822329401969909668) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2666459977626800537) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11870.4931640625) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-27182.6552734375) ) ) {
                    sum += (double)0.0125334000000000001;
                  } else {
                    sum += (double)0.03662212499999999149;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.229867003858089447) ) ) {
                    sum += (double)0.004371615384615384382;
                  } else {
                    sum += (double)0.01039211538461538679;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.90476179122924805) ) ) {
                  sum += (double)0.01680717391304347927;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.66477203369140625) ) ) {
                    sum += (double)0.08300738095238095748;
                  } else {
                    sum += (double)0.01621988333333333407;
                  }
                }
              }
            } else {
              sum += (double)0.1372150333333332917;
            }
          }
        } else {
          sum += (double)0.3230594833333333415;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5474660098552703857) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596890121698379517) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007699999958276748657) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.80337858200073242) ) ) {
                sum += (double)0.3987640000000000073;
              } else {
                sum += (double)0.5039160648148148791;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2338574975728988647) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.589755773544311523) ) ) {
                  sum += (double)0.3588901388888888766;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                    sum += (double)0.1633254642857143168;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4357010573148727417) ) ) {
                      sum += (double)0.329444303571428565;
                    } else {
                      sum += (double)0.2200640624999999906;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.91176509857177734) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.402413845062255859) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4839999973773956299) ) ) {
                      sum += (double)0.3845827727272727592;
                    } else {
                      sum += (double)0.4666497968750000225;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4331.488525390625) ) ) {
                      sum += (double)0.3678926400000000485;
                    } else {
                      sum += (double)0.2903043315217391784;
                    }
                  }
                } else {
                  sum += (double)0.4566512083333333916;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02630000002682209015) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.83486461639404297) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.13312578946352005) ) ) {
                  sum += (double)0.58035469444444443;
                } else {
                  sum += (double)0.4818477380952380651;
                }
              } else {
                sum += (double)0.6725311093750000468;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5001.06103515625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
                  sum += (double)0.5095487499999999947;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.450732499361038208) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1976310387253761292) ) ) {
                      sum += (double)0.3615990588235294401;
                    } else {
                      sum += (double)0.4275371190476190408;
                    }
                  } else {
                    sum += (double)0.4759872499999999729;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.30376291275024414) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1693518310785293579) ) ) {
                    sum += (double)0.4617300249999999329;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4661104530096054077) ) ) {
                      sum += (double)0.5345996785714284272;
                    } else {
                      sum += (double)0.473017946428571423;
                    }
                  }
                } else {
                  sum += (double)0.569633972222222229;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3745680004358291626) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5132.362060546875) ) ) {
              sum += (double)0.2131702619047618763;
            } else {
              sum += (double)0.03677312037037036574;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1701499968767166138) ) ) {
              sum += (double)0.1618971521739130393;
            } else {
              sum += (double)0.3599642321428571101;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.123808443546295166) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3306660056114196777) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1196999996900558472) ) ) {
                sum += (double)0.3040884423076923304;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1950670033693313599) ) ) {
                  sum += (double)0.04918386111111110875;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19886.4365234375) ) ) {
                    sum += (double)0.2913561547619047953;
                  } else {
                    sum += (double)0.2153887499999999899;
                  }
                }
              }
            } else {
              sum += (double)0.08338399193548387545;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.0242156982421875) ) ) {
              sum += (double)0.3878171931818181761;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3650897890329360962) ) ) {
                sum += (double)0.3183013260869565486;
              } else {
                sum += (double)0.2072335694444444321;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1833999976515769958) ) ) {
            sum += (double)0.1377763624999999714;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8828.36181640625) ) ) {
              sum += (double)0.008999088235294119831;
            } else {
              sum += (double)0.01548160714285714244;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.0984763503074646) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7224465012550354004) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7739.230712890625) ) ) {
            sum += (double)0.5124420000000000641;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.892453193664550781) ) ) {
              sum += (double)0.5825339210526315759;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6752659976482391357) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08109999820590019226) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.578578591346740723) ) ) {
                    sum += (double)0.7056131400000000831;
                  } else {
                    sum += (double)0.6638336458333333745;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1499499976634979248) ) ) {
                    sum += (double)0.5683300312499999229;
                  } else {
                    sum += (double)0.6425150178571428228;
                  }
                }
              } else {
                sum += (double)0.7266999062499999162;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1074000000953674316) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7774834632873535156) ) ) {
              sum += (double)0.852858000000000005;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06487137079238891602) ) ) {
                sum += (double)0.7372035357142856515;
              } else {
                sum += (double)0.8264465909090908946;
              }
            }
          } else {
            sum += (double)0.7179215086206895968;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2945.2763671875) ) ) {
          sum += (double)0.4737583194444444645;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.98280489444732666) ) ) {
            sum += (double)0.4243468333333333398;
          } else {
            sum += (double)0.1702671428571428669;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3235220015048980713) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07252199947834014893) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8731999993324279785) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.42391300201416016) ) ) {
                sum += (double)0.005123300000000001637;
              } else {
                sum += (double)0.002500000000000001787;
              }
            } else {
              sum += (double)0.008472000000000000364;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2258687540888786316) ) ) {
              sum += (double)0.01916725000000000373;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1050985008478164673) ) ) {
                sum += (double)0.01296123076923077003;
              } else {
                sum += (double)0.002500000000000000052;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08268201351165771484) ) ) {
            sum += (double)0.1297042916666666656;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14516.0908203125) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-119456.51953125) ) ) {
                sum += (double)0.02584714285714285326;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7066999971866607666) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.94614028930664062) ) ) {
                    sum += (double)0.01143793749999999845;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2049999982118606567) ) ) {
                      sum += (double)0.006980000000000000961;
                    } else {
                      sum += (double)0.003803823529411764874;
                    }
                  }
                } else {
                  sum += (double)0.01757510714285714232;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.15873003005981445) ) ) {
                sum += (double)0.08782492105263157989;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)121.0708503723144531) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7804144918918609619) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.550506591796875) ) ) {
                      sum += (double)0.03092818817204300019;
                    } else {
                      sum += (double)0.06163681410256407339;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4085.407470703125) ) ) {
                      sum += (double)0.006945666666666668564;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  }
                } else {
                  sum += (double)0.08808467187499997852;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006700000027194619179) ) ) {
            sum += (double)0.3637349285714285285;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1685380041599273682) ) ) {
              sum += (double)0.08620505434782609055;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.205263137817382812) ) ) {
                sum += (double)0.298446022727272664;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2632939964532852173) ) ) {
                  sum += (double)0.2106319375000000049;
                } else {
                  sum += (double)0.1086975892857142967;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4288852214813232422) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2721749991178512573) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.91921043395996094) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7755500078201293945) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6268999874591827393) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.16541290283203125) ) ) {
                      sum += (double)0.08142142647058821237;
                    } else {
                      sum += (double)0.1689952236842105215;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1493294984102249146) ) ) {
                      sum += (double)0.01677425000000000097;
                    } else {
                      sum += (double)0.05264392500000000114;
                    }
                  }
                } else {
                  sum += (double)0.1602054749999999861;
                }
              } else {
                sum += (double)0.0209644903846153835;
              }
            } else {
              sum += (double)0.1750989999999999769;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
              sum += (double)0.09548955263157894724;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2697000056505203247) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8805069029331207275) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2112314999103546143) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.15170669555664062) ) ) {
                      sum += (double)0.02289794318181817903;
                    } else {
                      sum += (double)0.01168614285714285675;
                    }
                  } else {
                    sum += (double)0.03421976562499999541;
                  }
                } else {
                  sum += (double)0.006221862068965518938;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6326920390129089355) ) ) {
                  sum += (double)0.089160062499999998;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.097320437431335449) ) ) {
                    sum += (double)0.03521797058823529503;
                  } else {
                    sum += (double)0.009697730769230769252;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.291855096817016602) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-822.209228515625) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1405058130621910095) ) ) {
            sum += (double)0.4561773416666666248;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
              sum += (double)0.2416971617647059034;
            } else {
              sum += (double)0.4237987499999999463;
            }
          }
        } else {
          sum += (double)0.2124018000000000017;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5799671411514282227) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
              sum += (double)0.1097795340909091116;
            } else {
              sum += (double)0.2753575909090908991;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.60189354419708252) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1239.68182373046875) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8249999880790710449) ) ) {
                  sum += (double)0.004802147058823529914;
                } else {
                  sum += (double)0.05375791666666666219;
                }
              } else {
                sum += (double)0.09350772499999998599;
              }
            } else {
              sum += (double)0.1467041153846153911;
            }
          }
        } else {
          sum += (double)0.3201213478260869216;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.7925872802734375) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2306737527251243591) ) ) {
                  sum += (double)0.4283585416666666479;
                } else {
                  sum += (double)0.3287742166666666743;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.689700007438659668) ) ) {
                  sum += (double)0.4983905333333333854;
                } else {
                  sum += (double)0.4427884423076923759;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412595003843307495) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12839.53271484375) ) ) {
                  sum += (double)0.326511403846153847;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1736999973654747009) ) ) {
                    sum += (double)0.1466835390625000068;
                  } else {
                    sum += (double)0.2522295200000000404;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1563500016927719116) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.605952262878417969) ) ) {
                    sum += (double)0.3745566379310344973;
                  } else {
                    sum += (double)0.2707573333333332943;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5323908329010009766) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2935499995946884155) ) ) {
                      sum += (double)0.4461765555555555762;
                    } else {
                      sum += (double)0.3720952124999999389;
                    }
                  } else {
                    sum += (double)0.3515660543478260625;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08029999956488609314) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3741570115089416504) ) ) {
                sum += (double)0.4672782236842105696;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.816810369491577148) ) ) {
                  sum += (double)0.4994355394736841314;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3994195014238357544) ) ) {
                    sum += (double)0.5921919218750000269;
                  } else {
                    sum += (double)0.5468736022727272994;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                sum += (double)0.490945984375000033;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.389341503381729126) ) ) {
                  sum += (double)0.4461493235294117787;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4218865036964416504) ) ) {
                    sum += (double)0.3110294062500000289;
                  } else {
                    sum += (double)0.3971321578947368258;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1004500016570091248) ) ) {
            sum += (double)0.3320470899999999892;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.05810928344726562) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19434.8349609375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.30338478088378906) ) ) {
                  sum += (double)0.3681359722222222186;
                } else {
                  sum += (double)0.2526615441176470744;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.96747398376464844) ) ) {
                  sum += (double)0.1051541818181818272;
                } else {
                  sum += (double)0.2307884300000000166;
                }
              }
            } else {
              sum += (double)0.1353328793103448224;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.335132837295532227) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1840.76361083984375) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3672800064086914062) ) ) {
              sum += (double)0.1476229250000000159;
            } else {
              sum += (double)0.3353414305555555974;
            }
          } else {
            sum += (double)0.125056059523809493;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25414.1845703125) ) ) {
            sum += (double)0.1571600892857142884;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3895944952964782715) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.815343856811523438) ) ) {
                sum += (double)0.04463558749999999714;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3069884926080703735) ) ) {
                  sum += (double)0.01239444736842105176;
                } else {
                  sum += (double)0.02771491666666666895;
                }
              }
            } else {
              sum += (double)0.09063672368421052394;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9435398280620574951) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.314393997192382812) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3567.67431640625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1590500026941299438) ) ) {
                  sum += (double)0.4459613333333333207;
                } else {
                  sum += (double)0.5130839705882352941;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.873384952545166016) ) ) {
                  sum += (double)0.5325461764705883283;
                } else {
                  sum += (double)0.6153992083333332808;
                }
              }
            } else {
              sum += (double)0.4058537416666666009;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09205000102519989014) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.120183311402797699) ) ) {
                sum += (double)0.6612170606060606692;
              } else {
                sum += (double)0.6151666770833333908;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.7865452766418457) ) ) {
                sum += (double)0.6010431428571427759;
              } else {
                sum += (double)0.521508650000000018;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.043953895568847656) ) ) {
              sum += (double)0.6564239027777777347;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.54474449157714844) ) ) {
                sum += (double)0.7363789772727271643;
              } else {
                sum += (double)0.6661278846153847466;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9177328944206237793) ) ) {
              sum += (double)0.8404871637931033979;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3231.5404052734375) ) ) {
                sum += (double)0.7428447250000000945;
              } else {
                sum += (double)0.7844923214285715041;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
          sum += (double)0.4379144193548387132;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.290990829467773438) ) ) {
            sum += (double)0.3315251896551724142;
          } else {
            sum += (double)0.1734945999999999988;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4003379940986633301) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.484705924987792969) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28214263916015625) ) ) {
          sum += (double)0.1530800147058823391;
        } else {
          sum += (double)0.3300903055555555188;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-932.292022705078125) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09679999947547912598) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.35869550704956055) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01295000035315752029) ) ) {
                      sum += (double)0.00323476666666666678;
                    } else {
                      sum += (double)0.0112466785714285724;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0290924999862909317) ) ) {
                      sum += (double)0.002528723140495869361;
                    } else {
                      sum += (double)0.004049869863013699778;
                    }
                  }
                } else {
                  sum += (double)0.01061373913043478327;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)39.28571510314941406) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07869999855756759644) ) ) {
                    sum += (double)0.006984395833333333775;
                  } else {
                    sum += (double)0.01985228124999999927;
                  }
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            } else {
              sum += (double)0.0246270294117647108;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.74000024795532227) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.20000076293945312) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.54004383087158203) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0749499984085559845) ) ) {
                    sum += (double)0.03868867857142856831;
                  } else {
                    sum += (double)0.08807426923076921987;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.28928565979003906) ) ) {
                    sum += (double)0.03399950000000000194;
                  } else {
                    sum += (double)0.009242183333333332459;
                  }
                }
              } else {
                sum += (double)0.1409685892857142631;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1724854931235313416) ) ) {
                sum += (double)0.05367872058823529996;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8385.6435546875) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3047000020742416382) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8941561281681060791) ) ) {
                      sum += (double)0.01087237946428571377;
                    } else {
                      sum += (double)0.002683314814814815024;
                    }
                  } else {
                    sum += (double)0.02035020000000000231;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4036.6932373046875) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2017499953508377075) ) ) {
                      sum += (double)0.04095442647058823715;
                    } else {
                      sum += (double)0.07206425000000001024;
                    }
                  } else {
                    sum += (double)0.006747000000000000393;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2311712205410003662) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2903.3070068359375) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)77.82407379150390625) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.635204315185546875) ) ) {
                  sum += (double)0.1115843541666666633;
                } else {
                  sum += (double)0.04516368999999999939;
                }
              } else {
                sum += (double)0.1838566562500000279;
              }
            } else {
              sum += (double)0.2531088541666666747;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.736466825008392334) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5120.15869140625) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4865500032901763916) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2717194855213165283) ) ) {
                      sum += (double)0.03262150649350648718;
                    } else {
                      sum += (double)0.08340976666666666262;
                    }
                  } else {
                    sum += (double)0.1185742647058823374;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4610817432403564453) ) ) {
                    sum += (double)0.1551386071428571267;
                  } else {
                    sum += (double)0.06837469230769231687;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3352.2667236328125) ) ) {
                  sum += (double)0.2459842666666666733;
                } else {
                  sum += (double)0.0726103749999999909;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6450000107288360596) ) ) {
                sum += (double)0.09754514583333330491;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2591499984264373779) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    sum += (double)0.003995520000000001536;
                  } else {
                    sum += (double)0.01903361607142857806;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.300863996148109436) ) ) {
                    sum += (double)0.01976900000000000185;
                  } else {
                    sum += (double)0.04528298333333333203;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.560000002384185791) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.93333339691162109) ) ) {
            sum += (double)0.1576181249999999978;
          } else {
            sum += (double)0.07964269642857142728;
          }
        } else {
          sum += (double)0.2075368240740740611;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2547999918460845947) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06114999949932098389) ) ) {
            sum += (double)0.4002411136363636657;
          } else {
            sum += (double)0.1310160666666666807;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.291855096817016602) ) ) {
            sum += (double)0.5307590729166665744;
          } else {
            sum += (double)0.337041171052631594;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9647493362426757812) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.89961814880371094) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009300000034272670746) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.940382003784179688) ) ) {
                sum += (double)0.436080624999999944;
              } else {
                sum += (double)0.5000396293103448464;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5823499858379364014) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.659859180450439453) ) ) {
                    sum += (double)0.3629699736842105229;
                  } else {
                    sum += (double)0.2313212812499999826;
                  }
                } else {
                  sum += (double)0.1592386600000000041;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4185.778564453125) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4372419863939285278) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.05790901184082031) ) ) {
                      sum += (double)0.3672157413793103453;
                    } else {
                      sum += (double)0.4300993152173912537;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6533887088298797607) ) ) {
                      sum += (double)0.326472759259259282;
                    } else {
                      sum += (double)0.4000736666666666608;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.570413589477539062) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0732500031590461731) ) ) {
                      sum += (double)0.2994815131578947853;
                    } else {
                      sum += (double)0.4386229166666666401;
                    }
                  } else {
                    sum += (double)0.2307337656250000035;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08165000006556510925) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.77804470062255859) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3088785260915756226) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01110000023618340492) ) ) {
                    sum += (double)0.569373812499999965;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05024999938905239105) ) ) {
                      sum += (double)0.4689730921052632229;
                    } else {
                      sum += (double)0.5298612343749999898;
                    }
                  }
                } else {
                  sum += (double)0.4408843684210526637;
                }
              } else {
                sum += (double)0.5701083951612901934;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1078718006610870361) ) ) {
                sum += (double)0.359290173076923125;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4032197296619415283) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3987.6702880859375) ) ) {
                    sum += (double)0.4464132586206896458;
                  } else {
                    sum += (double)0.5208161634615383617;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.613195657730102539) ) ) {
                    sum += (double)0.3990040892857143473;
                  } else {
                    sum += (double)0.4405809999999998894;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2219502776861190796) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16494.0283203125) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2757060080766677856) ) ) {
                sum += (double)0.3207956666666667012;
              } else {
                sum += (double)0.3800068214285715062;
              }
            } else {
              sum += (double)0.1814143815789473757;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21096.990234375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2274999991059303284) ) ) {
                sum += (double)0.05559582999999999886;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.05810928344726562) ) ) {
                  sum += (double)0.2416565714285714428;
                } else {
                  sum += (double)0.1604049852941176468;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3271740078926086426) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.230650000274181366) ) ) {
                  sum += (double)0.2643587187499999436;
                } else {
                  sum += (double)0.1395691250000000161;
                }
              } else {
                sum += (double)0.4202708269230769345;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.818350315093994141) ) ) {
          sum += (double)0.2086508625000000061;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.13316720724105835) ) ) {
            sum += (double)0.1454616805555555281;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3625984936952590942) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08884999901056289673) ) ) {
                sum += (double)0.06804770000000000263;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.152100004255771637) ) ) {
                  sum += (double)0.02749767857142857569;
                } else {
                  sum += (double)0.009218426470588236832;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.661092519760131836) ) ) {
                sum += (double)0.2089471666666666561;
              } else {
                sum += (double)0.05697983928571429685;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6155470013618469238) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.61250019073486328) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005000000004656612873) ) ) {
              sum += (double)0.6802549736842106176;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5455760061740875244) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.45707035064697266) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.333381175994873047) ) ) {
                    sum += (double)0.5316290000000000182;
                  } else {
                    sum += (double)0.4782672962962963292;
                  }
                } else {
                  sum += (double)0.5505802249999999232;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.617925882339477539) ) ) {
                  sum += (double)0.551061154761904759;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0610499996691942215) ) ) {
                    sum += (double)0.6744814000000000087;
                  } else {
                    sum += (double)0.6070707826086956249;
                  }
                }
              }
            }
          } else {
            sum += (double)0.358141519999999991;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7701259851455688477) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1617.84906005859375) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7694000005722045898) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.18185901641845703) ) ) {
                  sum += (double)0.6518187045454545414;
                } else {
                  sum += (double)0.7082199431818181345;
                }
              } else {
                sum += (double)0.5764662999999999871;
              }
            } else {
              sum += (double)0.7557236935483869766;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
              sum += (double)0.8747362812499999141;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8400294780731201172) ) ) {
                sum += (double)0.7518725370370371586;
              } else {
                sum += (double)0.8361544000000000754;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.071060001850128174) ) ) {
          sum += (double)0.4478125344827587617;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3939.188232421875) ) ) {
            sum += (double)0.3828153499999999432;
          } else {
            sum += (double)0.2025636136363636319;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.240384578704833984) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2433914989233016968) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.473544836044311523) ) ) {
              sum += (double)0.06828336249999998608;
            } else {
              sum += (double)0.01457607407407407636;
            }
          } else {
            sum += (double)0.1552409444444444453;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.05549716949462891) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2696.92529296875) ) ) {
              sum += (double)0.2564415833333333894;
            } else {
              sum += (double)0.06172326041666666846;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2932060062885284424) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9000000059604644775) ) ) {
                sum += (double)0.2870121250000000068;
              } else {
                sum += (double)0.2030546099999999687;
              }
            } else {
              sum += (double)0.3437692954545454871;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.18333339691162109) ) ) {
            sum += (double)0.06861136666666664552;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09673599898815155029) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5193.835693359375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.59523773193359375) ) ) {
                    sum += (double)0.009330916666666667914;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.16287803649902344) ) ) {
                      sum += (double)0.004992295454545455854;
                    } else {
                      sum += (double)0.002835535714285715783;
                    }
                  }
                } else {
                  sum += (double)0.01022232352941176634;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5269013643264770508) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.661249995231628418) ) ) {
                    sum += (double)0.03588739473684209036;
                  } else {
                    sum += (double)0.01148605357142857067;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1971.0234375) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.005215846153846154243;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
                sum += (double)0.0592696785714285565;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.14804601669311523) ) ) {
                  sum += (double)0.04329699999999998827;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7722391784191131592) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.82994556427001953) ) ) {
                      sum += (double)0.007744203703703703666;
                    } else {
                      sum += (double)0.02679615909090908576;
                    }
                  } else {
                    sum += (double)0.006067927419354838918;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3158126324415206909) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3019385039806365967) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02385000046342611313) ) ) {
                sum += (double)0.1446992395833333334;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1645424962043762207) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2412978112697601318) ) ) {
                    sum += (double)0.0347473281249999974;
                  } else {
                    sum += (double)0.01309286363636363859;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.62175369262695312) ) ) {
                    sum += (double)0.06132207857142857321;
                  } else {
                    sum += (double)0.1295160833333333372;
                  }
                }
              }
            } else {
              sum += (double)0.2561900108695652767;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033567547798156738) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2341499999165534973) ) ) {
                  sum += (double)0.1432465961538461341;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2123889997601509094) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4091500043869018555) ) ) {
                      sum += (double)0.02796112626262626383;
                    } else {
                      sum += (double)0.07921442187499999621;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2736910134553909302) ) ) {
                      sum += (double)0.1069959354838709298;
                    } else {
                      sum += (double)0.04709946666666665893;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2204500064253807068) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3949.856689453125) ) ) {
                    sum += (double)0.02095408928571428769;
                  } else {
                    sum += (double)0.005487657894736842727;
                  }
                } else {
                  sum += (double)0.003026320000000000312;
                }
              }
            } else {
              sum += (double)0.2020781499999999842;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3215894997119903564) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.5000702738095237354;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2362929955124855042) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.643025875091552734) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.301545947790145874) ) ) {
                    sum += (double)0.2159291388888889274;
                  } else {
                    sum += (double)0.3011734130434782775;
                  }
                } else {
                  sum += (double)0.1382455147058823663;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2707985043525695801) ) ) {
                    sum += (double)0.3185802249999999947;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3472861945629119873) ) ) {
                      sum += (double)0.4108992685185185456;
                    } else {
                      sum += (double)0.3688962343750000206;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.20258617401123047) ) ) {
                    sum += (double)0.1922287000000000023;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7142499983310699463) ) ) {
                      sum += (double)0.4050595300000000565;
                    } else {
                      sum += (double)0.2847228833333332876;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007599999895319342613) ) ) {
              sum += (double)0.5452763020833333307;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2887264639139175415) ) ) {
                  sum += (double)0.4245620806451612661;
                } else {
                  sum += (double)0.3103808823529412009;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2493.7919921875) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3233.91748046875) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4329109936952590942) ) ) {
                      sum += (double)0.4822741093749999819;
                    } else {
                      sum += (double)0.3773236249999999403;
                    }
                  } else {
                    sum += (double)0.3635139705882353134;
                  }
                } else {
                  sum += (double)0.5248670384615384821;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3349194973707199097) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3836500048637390137) ) ) {
              sum += (double)0.06360086111111111495;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.230650000274181366) ) ) {
                sum += (double)0.2484523611111111308;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19407.0859375) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.29031753540039062) ) ) {
                    sum += (double)0.265814958333333351;
                  } else {
                    sum += (double)0.1485737142857142812;
                  }
                } else {
                  sum += (double)0.08184926041666666652;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17446.0693359375) ) ) {
              sum += (double)0.2344727142857142843;
            } else {
              sum += (double)0.3804808749999999962;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.234565258026123047) ) ) {
          sum += (double)0.2816648611111111089;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21581.0751953125) ) ) {
            sum += (double)0.1967642692307692287;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.006363630294799805) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2565.63232421875) ) ) {
                sum += (double)0.1859877307692307802;
              } else {
                sum += (double)0.03751988636363635943;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5382.2822265625) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4413000047206878662) ) ) {
                  sum += (double)0.03658927272727272723;
                } else {
                  sum += (double)0.01754723333333333551;
                }
              } else {
                sum += (double)0.01179704687500000154;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.579411745071411133) ) ) {
        sum += (double)0.4464528499999999567;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6345984935760498047) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5854652523994445801) ) ) {
            sum += (double)0.2160690729166666879;
          } else {
            sum += (double)0.1038551184210526335;
          }
        } else {
          sum += (double)0.3374642738095238736;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7255375087261199951) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7349939048290252686) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.541973501443862915) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06955000013113021851) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                sum += (double)0.5433727685185183454;
              } else {
                sum += (double)0.6167921900000000734;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.209627151489257812) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925069957971572876) ) ) {
                  sum += (double)0.4776943333333333874;
                } else {
                  sum += (double)0.563609823529411802;
                }
              } else {
                sum += (double)0.4105947656250000244;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8047.837158203125) ) ) {
              sum += (double)0.5531679078947366879;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5856605172157287598) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02460000012069940567) ) ) {
                  sum += (double)0.6527907763157894117;
                } else {
                  sum += (double)0.588810963235294027;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8366500139236450195) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7545000016689300537) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.074468135833740234) ) ) {
                      sum += (double)0.6640213369565216572;
                    } else {
                      sum += (double)0.7172540568181818843;
                    }
                  } else {
                    sum += (double)0.6320148437500000549;
                  }
                } else {
                  sum += (double)0.7270057500000000061;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6084134876728057861) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2853.154296875) ) ) {
              sum += (double)0.4338502115384614277;
            } else {
              sum += (double)0.2651310000000000056;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2125.0350341796875) ) ) {
              sum += (double)0.5200028437500000544;
            } else {
              sum += (double)0.4288399342105263523;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03894999995827674866) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.139858603477478027) ) ) {
            sum += (double)0.8665044519230770126;
          } else {
            sum += (double)0.7913450294117645445;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7751415073871612549) ) ) {
            sum += (double)0.6652236718750000888;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3001.2060546875) ) ) {
              sum += (double)0.7311941666666667006;
            } else {
              sum += (double)0.7905141956521740676;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2976669967174530029) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
          sum += (double)0.1241639130434782218;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.05357122421264648) ) ) {
                sum += (double)0.005423309523809525558;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.182799994945526123) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2411.835205078125) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    sum += (double)0.003279541666666666282;
                  }
                } else {
                  sum += (double)0.004634291666666667635;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03499999921768903732) ) ) {
                sum += (double)0.0305864333333333363;
              } else {
                sum += (double)0.002499999999999999618;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8536999821662902832) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.43487167358398438) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.52499961853027344) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.19444465637207031) ) ) {
                    sum += (double)0.05933611363636364516;
                  } else {
                    sum += (double)0.01642656617647058476;
                  }
                } else {
                  sum += (double)0.0745372717391304257;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2124940007925033569) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3518999963998794556) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7911558747291564941) ) ) {
                      sum += (double)0.05345268421052630503;
                    } else {
                      sum += (double)0.003926178571428572649;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1475999951362609863) ) ) {
                      sum += (double)0.007383029255319149657;
                    } else {
                      sum += (double)0.01892324999999999563;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5204.59912109375) ) ) {
                    sum += (double)0.07137428571428570956;
                  } else {
                    sum += (double)0.02212268965517241726;
                  }
                }
              }
            } else {
              sum += (double)0.07268324999999999092;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.967741966247558594) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.248263835906982422) ) ) {
            sum += (double)0.04036131250000000309;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.104166507720947266) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7935500144958496094) ) ) {
                sum += (double)0.3018505543478260944;
              } else {
                sum += (double)0.1917432058823529406;
              }
            } else {
              sum += (double)0.1369409642857142839;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1766500025987625122) ) ) {
            sum += (double)0.14916454285714284;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5941435098648071289) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434595003724098206) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.22855949401855469) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.5917363166809082) ) ) {
                      sum += (double)0.07906748611111109881;
                    } else {
                      sum += (double)0.03590725000000000167;
                    }
                  } else {
                    sum += (double)0.1567091911764706136;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4216500073671340942) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.18185710906982422) ) ) {
                      sum += (double)0.04308518617021277197;
                    } else {
                      sum += (double)0.01167465909090908971;
                    }
                  } else {
                    sum += (double)0.06967703124999999331;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.26811599731445312) ) ) {
                  sum += (double)0.07412154761904762856;
                } else {
                  sum += (double)0.1905195468750000287;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7387340068817138672) ) ) {
                sum += (double)0.04042923750000000649;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1964970007538795471) ) ) {
                  sum += (double)0.007005961538461539032;
                } else {
                  sum += (double)0.02336298000000000194;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5687299966812133789) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.9375) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.355263233184814453) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4278434962034225464) ) ) {
              sum += (double)0.07625649999999997708;
            } else {
              sum += (double)0.250088546874999984;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7000000178813934326) ) ) {
              sum += (double)0.1940657352941176639;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3495350033044815063) ) ) {
                sum += (double)0.4689059000000000421;
              } else {
                sum += (double)0.2888930833333333004;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.103300001472234726) ) ) {
            sum += (double)0.2124983750000000171;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.563135683536529541) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6601.568603515625) ) ) {
                sum += (double)0.09288532812500001346;
              } else {
                sum += (double)0.1915309264705882253;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.08333206176757812) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.13596534729003906) ) ) {
                  sum += (double)0.06404501612903225338;
                } else {
                  sum += (double)0.008317718749999999592;
                }
              } else {
                sum += (double)0.1024783076923077019;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2909500002861022949) ) ) {
          sum += (double)0.3581608749999999897;
        } else {
          sum += (double)0.5000371911764706079;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9664483964443206787) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.66211271286010742) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3348155021667480469) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.52601617391304345;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412595003843307495) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5097493231296539307) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.152281522750854492) ) ) {
                    sum += (double)0.3008293653846153548;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2819685041904449463) ) ) {
                      sum += (double)0.1187414374999999911;
                    } else {
                      sum += (double)0.1979860937500000362;
                    }
                  }
                } else {
                  sum += (double)0.3373045625000000158;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4338.4638671875) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2698989957571029663) ) ) {
                    sum += (double)0.4294408099999998951;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.686781644821166992) ) ) {
                      sum += (double)0.4001360285714286036;
                    } else {
                      sum += (double)0.3474065909090908733;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2926619946956634521) ) ) {
                    sum += (double)0.2825070645161291139;
                  } else {
                    sum += (double)0.4038631842105263048;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001200000024255132303) ) ) {
              sum += (double)0.6012465535714285325;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2580661028623580933) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8409.23193359375) ) ) {
                  sum += (double)0.4119180961538461694;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4568840116262435913) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6990000009536743164) ) ) {
                      sum += (double)0.5341061250000000982;
                    } else {
                      sum += (double)0.4672136794871792898;
                    }
                  } else {
                    sum += (double)0.5497855249999999971;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4204999953508377075) ) ) {
                  sum += (double)0.47220669736842108;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4147095084190368652) ) ) {
                    sum += (double)0.4192263916666666979;
                  } else {
                    sum += (double)0.3467822500000000696;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3349944949150085449) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.57576227188110352) ) ) {
              sum += (double)0.09159932142857142578;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7018999755382537842) ) ) {
                  sum += (double)0.3161040312500000282;
                } else {
                  sum += (double)0.1911784431818181751;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25223.1259765625) ) ) {
                  sum += (double)0.1752481704545454655;
                } else {
                  sum += (double)0.08127659615384616454;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22919.048828125) ) ) {
              sum += (double)0.2045023055555555691;
            } else {
              sum += (double)0.3900972727272726814;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.638694882392883301) ) ) {
          sum += (double)0.2148048369565216664;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.100659728050231934) ) ) {
            sum += (double)0.1841116052631578681;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05815000087022781372) ) ) {
              sum += (double)0.1151051515151515214;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4707999974489212036) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2903524935245513916) ) ) {
                  sum += (double)0.00995852857142857234;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.7651824951171875) ) ) {
                    sum += (double)0.02900920000000000235;
                  } else {
                    sum += (double)0.06199344642857142207;
                  }
                }
              } else {
                sum += (double)0.0855687205882352947;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7049920260906219482) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.03631901741027832) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10416.89599609375) ) ) {
              sum += (double)0.3944632403846153879;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1895999982953071594) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.66713476181030273) ) ) {
                    sum += (double)0.5644564117647058454;
                  } else {
                    sum += (double)0.4566700833333333098;
                  }
                } else {
                  sum += (double)0.6064870729166667029;
                }
              } else {
                sum += (double)0.4544601805555554819;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5843000113964080811) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2929.0054931640625) ) ) {
                sum += (double)0.4818335833333333151;
              } else {
                sum += (double)0.5872851617647057987;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08715000003576278687) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6294755041599273682) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.321514368057250977) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009949999861419200897) ) ) {
                      sum += (double)0.6711805652173912229;
                    } else {
                      sum += (double)0.6363384531249999254;
                    }
                  } else {
                    sum += (double)0.6873698124999999548;
                  }
                } else {
                  sum += (double)0.7347358749999999272;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4556.180908203125) ) ) {
                  sum += (double)0.5553072941176470101;
                } else {
                  sum += (double)0.6624326470588236537;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.115192294120788574) ) ) {
            sum += (double)0.4319072941176470559;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3003.3062744140625) ) ) {
              sum += (double)0.3498289078947368069;
            } else {
              sum += (double)0.1163505714285714143;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1070499978959560394) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7874329984188079834) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0691033974289894104) ) ) {
              sum += (double)0.7551353026315789085;
            } else {
              sum += (double)0.7910437499999999345;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9177328944206237793) ) ) {
              sum += (double)0.8757184038461538478;
            } else {
              sum += (double)0.8102318888888888626;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7875095009803771973) ) ) {
            sum += (double)0.6635145714285715091;
          } else {
            sum += (double)0.7070734807692308221;
          }
        }
      }
    }
  }
  return sum;
}
