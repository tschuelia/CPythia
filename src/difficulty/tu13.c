#include "prediction.h"
double predict_margin_unit13(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.2469635009765625) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.253819003701210022) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
          sum += (double)0.006535166666666666554;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09757773205637931824) ) ) {
            sum += (double)0.2147099305555555671;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5750000029802322388) ) ) {
              sum += (double)0.06349030434782608479;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4447162598371505737) ) ) {
                sum += (double)0.1965314305555555807;
              } else {
                sum += (double)0.09503603571428571872;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5296977460384368896) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.089411735534667969) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.78571414947509766) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                sum += (double)0.2672845375000000301;
              } else {
                sum += (double)0.4353383437499999675;
              }
            } else {
              sum += (double)0.4599546607142857568;
            }
          } else {
            sum += (double)0.2289238500000000398;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.943595051765441895) ) ) {
            sum += (double)0.3313683289473684512;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1874.19549560546875) ) ) {
              sum += (double)0.1877966029411764493;
            } else {
              sum += (double)0.08350120192307691758;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.44345283508300781) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1146005019545555115) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04165000095963478088) ) ) {
                sum += (double)0.004009241935483871117;
              } else {
                sum += (double)0.02011480999999999686;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03810000047087669373) ) ) {
                sum += (double)0.04325753571428571365;
              } else {
                sum += (double)0.1378012400000000193;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.01099014282226562) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.67119598388671875) ) ) {
                  sum += (double)0.002938724999999999237;
                } else {
                  sum += (double)0.02662682500000000327;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8243999779224395752) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003650357142857143557;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05739999935030937195) ) ) {
                      sum += (double)0.007508888888888888731;
                    } else {
                      sum += (double)0.003134175000000000329;
                    }
                  }
                } else {
                  sum += (double)0.009176035714285714698;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14341.533203125) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)272.9852981567382812) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.84710884094238281) ) ) {
                    sum += (double)0.01160602941176470775;
                  } else {
                    sum += (double)0.004276659090909091382;
                  }
                } else {
                  sum += (double)0.02062006666666666571;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.80714225769042969) ) ) {
                  sum += (double)0.01761101388888888439;
                } else {
                  sum += (double)0.06169376470588233685;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14569.18603515625) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4528000056743621826) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.49846172332763672) ) ) {
                sum += (double)0.08270494117647060606;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-37293.8203125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)107.27825927734375) ) ) {
                    sum += (double)0.06661378749999997961;
                  } else {
                    sum += (double)0.02458709375000000391;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2424704954028129578) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7199999988079071045) ) ) {
                      sum += (double)0.01154331034482758422;
                    } else {
                      sum += (double)0.02135706756756756974;
                    }
                  } else {
                    sum += (double)0.04634360937500000416;
                  }
                }
              }
            } else {
              sum += (double)0.09317145000000001676;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.633331298828125) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033567547798156738) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1381999999284744263) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10395.21728515625) ) ) {
                      sum += (double)0.06995771666666666944;
                    } else {
                      sum += (double)0.02551454464285713916;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4607.02392578125) ) ) {
                      sum += (double)0.05466766071428570684;
                    } else {
                      sum += (double)0.1765877000000000419;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.74901151657104492) ) ) {
                    sum += (double)0.06927343999999999169;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.83134937286376953) ) ) {
                      sum += (double)0.2250202976190475712;
                    } else {
                      sum += (double)0.1056719999999999604;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3947.4403076171875) ) ) {
                  sum += (double)0.02848160714285714185;
                } else {
                  sum += (double)0.002753038461538461715;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8050500154495239258) ) ) {
                sum += (double)0.3104057343749999087;
              } else {
                sum += (double)0.1380075576923076863;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8250000178813934326) ) ) {
          sum += (double)0.1133203181818181748;
        } else {
          sum += (double)0.279758983870967759;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3742075115442276001) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.5241922300000000368;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2452994957566261292) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7309.91455078125) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13618.9873046875) ) ) {
                    sum += (double)0.3076505384615384475;
                  } else {
                    sum += (double)0.2133044285714285615;
                  }
                } else {
                  sum += (double)0.3186004000000000058;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.08029079437255859) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.007675886154174805) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2475.832763671875) ) ) {
                      sum += (double)0.4064000241935482038;
                    } else {
                      sum += (double)0.327580330357142846;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.147149994969367981) ) ) {
                      sum += (double)0.1751833421052631234;
                    } else {
                      sum += (double)0.3994754999999999834;
                    }
                  }
                } else {
                  sum += (double)0.4721776071428572807;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08009999990463256836) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.74205780029296875) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6202499866485595703) ) ) {
                  sum += (double)0.47485161956521732;
                } else {
                  sum += (double)0.5304695833333333832;
                }
              } else {
                sum += (double)0.5910262812499998963;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.125) ) ) {
                sum += (double)0.5219865000000000199;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2744224220514297485) ) ) {
                  sum += (double)0.3419807678571428755;
                } else {
                  sum += (double)0.4562117500000000825;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345710039138793945) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.8064422607421875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2423500046133995056) ) ) {
                sum += (double)0.3290439285714286122;
              } else {
                sum += (double)0.1737548928571428508;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1655005067586898804) ) ) {
                sum += (double)0.07579328124999999694;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2581000030040740967) ) ) {
                  sum += (double)0.1226611730769230912;
                } else {
                  sum += (double)0.2175012999999999808;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4007935225963592529) ) ) {
              sum += (double)0.3717140833333332783;
            } else {
              sum += (double)0.230612514705882371;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.681742429733276367) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4136005043983459473) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4342.831787109375) ) ) {
              sum += (double)0.2278713125000000339;
            } else {
              sum += (double)0.07930659166666666204;
            }
          } else {
            sum += (double)0.2864340781249999912;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.100659728050231934) ) ) {
            sum += (double)0.2353836666666666855;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25422.712890625) ) ) {
              sum += (double)0.1105290666666666616;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7372.614501953125) ) ) {
                sum += (double)0.03701406944444444319;
              } else {
                sum += (double)0.01781692708333333305;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7417580187320709229) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3030.8250732421875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.872205734252929688) ) ) {
                sum += (double)0.4677428088235294212;
              } else {
                sum += (double)0.5255694800000000333;
              }
            } else {
              sum += (double)0.5732635113636365132;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.439660549163818359) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1253499984741210938) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.43651580810546875) ) ) {
                  sum += (double)0.6068897857142856456;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6571570038795471191) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.37812900543212891) ) ) {
                      sum += (double)0.6991327803030302768;
                    } else {
                      sum += (double)0.6682948214285714394;
                    }
                  } else {
                    sum += (double)0.7241466833333333186;
                  }
                }
              } else {
                sum += (double)0.6039246911764706294;
              }
            } else {
              sum += (double)0.5532813088235295496;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09455000236630439758) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8360326886177062988) ) ) {
              sum += (double)0.8724955909090911232;
            } else {
              sum += (double)0.7990663749999998844;
            }
          } else {
            sum += (double)0.7508234531249999844;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08875000104308128357) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6086829900741577148) ) ) {
            sum += (double)0.2731729456521739263;
          } else {
            sum += (double)0.4423321071428571449;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4016.6845703125) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.57857131958007812) ) ) {
              sum += (double)0.6100775250000000094;
            } else {
              sum += (double)0.5326425416666665802;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7084914147853851318) ) ) {
              sum += (double)0.5071172631578947376;
            } else {
              sum += (double)0.3965175294117647686;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3236180096864700317) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.464285612106323242) ) ) {
          sum += (double)0.09764663235294114563;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1723939999938011169) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9137500226497650146) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.76785755157470703) ) ) {
                sum += (double)0.05809883333333332872;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3326000124216079712) ) ) {
                    sum += (double)0.008299194444444445845;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.04395580291748047) ) ) {
                      sum += (double)0.003525750000000000238;
                    } else {
                      sum += (double)0.002500000000000001787;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.13921546936035156) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.31853294372558594) ) ) {
                      sum += (double)0.01265110135135134872;
                    } else {
                      sum += (double)0.05225763636363636028;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3250000029802322388) ) ) {
                      sum += (double)0.008184843567251449611;
                    } else {
                      sum += (double)0.02191016666666666807;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.06488299999999998235;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2403090521693229675) ) ) {
              sum += (double)0.1015491333333333329;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3182500004768371582) ) ) {
                  sum += (double)0.003708000000000000358;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5405499935150146484) ) ) {
                    sum += (double)0.053802147058823524;
                  } else {
                    sum += (double)0.01146934090909090993;
                  }
                }
              } else {
                sum += (double)0.0654612222222222262;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006599999964237213135) ) ) {
          sum += (double)0.2592983124999999611;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.682360410690307617) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2093345001339912415) ) ) {
              sum += (double)0.1168231153846153864;
            } else {
              sum += (double)0.2433768846153846477;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6182352900505065918) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1646514981985092163) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)112.0787696838378906) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8350000083446502686) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1400664970278739929) ) ) {
                      sum += (double)0.0153112941176470601;
                    } else {
                      sum += (double)0.03575811538461539513;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6041999757289886475) ) ) {
                      sum += (double)0.07475352083333332287;
                    } else {
                      sum += (double)0.02560543333333333005;
                    }
                  }
                } else {
                  sum += (double)0.07909270833333333084;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.647857666015625) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2755499929189682007) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6845500171184539795) ) ) {
                      sum += (double)0.05619328571428571645;
                    } else {
                      sum += (double)0.1190277058823529521;
                    }
                  } else {
                    sum += (double)0.1402096904761904461;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14706.56494140625) ) ) {
                    sum += (double)0.07080903750000000496;
                  } else {
                    sum += (double)0.2441742638888888817;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                sum += (double)0.07471459090909089718;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11870.4931640625) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.55286788940429688) ) ) {
                    sum += (double)0.04602604166666666996;
                  } else {
                    sum += (double)0.01256948214285714092;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                    sum += (double)0.003667173913043479064;
                  } else {
                    sum += (double)0.0172261666666666674;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.476446002721786499) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5979119539260864258) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03640000149607658386) ) ) {
            sum += (double)0.3303044300000000377;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7579500079154968262) ) ) {
              sum += (double)0.1892378625000000203;
            } else {
              sum += (double)0.1232374423076923048;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2369.927490234375) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.476669430732727051) ) ) {
              sum += (double)0.07046340624999998525;
            } else {
              sum += (double)0.246205033333333323;
            }
          } else {
            sum += (double)0.02476832407407407455;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.53749990463256836) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1930999979376792908) ) ) {
            sum += (double)0.3168810978260869216;
          } else {
            sum += (double)0.4518471847826087129;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
            sum += (double)0.1004356388888889007;
          } else {
            sum += (double)0.3362550000000000261;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47614249587059021) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.76521873474121094) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3347185105085372925) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001499999962106812745) ) ) {
              sum += (double)0.5104054875000000324;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2395025044679641724) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.335714340209960938) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06359999999403953552) ) ) {
                    sum += (double)0.3689174531250000166;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.597350001335144043) ) ) {
                      sum += (double)0.3237801416666666876;
                    } else {
                      sum += (double)0.1669849705882353319;
                    }
                  }
                } else {
                  sum += (double)0.1300804800000000538;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.586111068725585938) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2464.857177734375) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4582999944686889648) ) ) {
                      sum += (double)0.3572310978260869185;
                    } else {
                      sum += (double)0.4284331170212766215;
                    }
                  } else {
                    sum += (double)0.3356689210526315192;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1628499999642372131) ) ) {
                    sum += (double)0.2661999000000000448;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2993715107440948486) ) ) {
                      sum += (double)0.344950032608695667;
                    } else {
                      sum += (double)0.409512237499999987;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08579999953508377075) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3741570115089416504) ) ) {
                sum += (double)0.4402666875000000313;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.485714435577392578) ) ) {
                  sum += (double)0.4720726153846154238;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.74205780029296875) ) ) {
                    sum += (double)0.540902598214285768;
                  } else {
                    sum += (double)0.5908807976190475486;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.324923276901245117) ) ) {
                sum += (double)0.489612458333333278;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.328800007700920105) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2500999942421913147) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.83215951919555664) ) ) {
                      sum += (double)0.3809299782608695506;
                    } else {
                      sum += (double)0.4397251833333333804;
                    }
                  } else {
                    sum += (double)0.4822675333333332759;
                  }
                } else {
                  sum += (double)0.3566805119047618544;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4525499939918518066) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2233371436595916748) ) ) {
              sum += (double)0.2883954137931035167;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12317.3447265625) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2089999988675117493) ) ) {
                  sum += (double)0.06045623076923078293;
                } else {
                  sum += (double)0.1509423200000000187;
                }
              } else {
                sum += (double)0.1980653166666666576;
              }
            }
          } else {
            sum += (double)0.3337329722222222017;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3010.311767578125) ) ) {
            sum += (double)0.2694166129032258272;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.638694882392883301) ) ) {
              sum += (double)0.2347396562500000117;
            } else {
              sum += (double)0.05109569565217390863;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.145312190055847168) ) ) {
            sum += (double)0.1652956406250000176;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.58789730072021484) ) ) {
              sum += (double)0.07661590384615385441;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3636499941349029541) ) ) {
                sum += (double)0.03823670000000000541;
              } else {
                sum += (double)0.0147227500000000032;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6696245074272155762) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6711274385452270508) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4707.387451171875) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.53772830963134766) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5646204948425292969) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09479834139347076416) ) ) {
                  sum += (double)0.4657828333333333126;
                } else {
                  sum += (double)0.5140650250000000643;
                }
              } else {
                sum += (double)0.6016709078947367617;
              }
            } else {
              sum += (double)0.4159073676470588232;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4994170069694519043) ) ) {
              sum += (double)0.5184416166666666603;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5616550147533416748) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7784499824047088623) ) ) {
                  sum += (double)0.6005192499999999489;
                } else {
                  sum += (double)0.6407809456521739166;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1180164702236652374) ) ) {
                  sum += (double)0.7065672016129033173;
                } else {
                  sum += (double)0.6590360185185184516;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.21841287612915039) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1788.6925048828125) ) ) {
              sum += (double)0.5128060178571428596;
            } else {
              sum += (double)0.370074375000000011;
            }
          } else {
            sum += (double)0.2911965384615384789;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5541938543319702148) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.111979126930236816) ) ) {
              sum += (double)0.7383047499999999541;
            } else {
              sum += (double)0.6568631500000000623;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03590000048279762268) ) ) {
              sum += (double)0.8529700151515149376;
            } else {
              sum += (double)0.7809499015151514234;
            }
          }
        } else {
          sum += (double)0.5880608289473684414;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709775060415267944) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.84375) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3800000101327896118) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.600000143051147461) ) ) {
            sum += (double)0.08892074999999997897;
          } else {
            sum += (double)0.01389402631578947646;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.97474765777587891) ) ) {
            sum += (double)0.07178541964285714561;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953699976205825806) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2635.854248046875) ) ) {
                sum += (double)0.2453015555555555782;
              } else {
                sum += (double)0.1664924318181817964;
              }
            } else {
              sum += (double)0.3422830543478260767;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.77473688125610352) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5547.379150390625) ) ) {
              sum += (double)0.1161000238095238057;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1075564995408058167) ) ) {
                sum += (double)0.005113891304347827071;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02465000003576278687) ) ) {
                  sum += (double)0.03392585526315788913;
                } else {
                  sum += (double)0.06530530882352941768;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.52115249633789062) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.3808135986328125) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3308.398193359375) ) ) {
                    sum += (double)0.01220273684210526448;
                  } else {
                    sum += (double)0.004270607142857142831;
                  }
                } else {
                  sum += (double)0.0326690384615384577;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1349999979138374329) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1587.16595458984375) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                      sum += (double)0.002552737037037038602;
                    } else {
                      sum += (double)0.003216268292682927799;
                    }
                  } else {
                    sum += (double)0.005113882352941177302;
                  }
                } else {
                  sum += (double)0.00962603571428571371;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2304888442158699036) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1484220027923583984) ) ) {
                  sum += (double)0.04217984722222222621;
                } else {
                  sum += (double)0.02109037499999999454;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.32456016540527344) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1550000011920928955) ) ) {
                    sum += (double)0.0392432794117646977;
                  } else {
                    sum += (double)0.009197766666666667632;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3106.670166015625) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3438000082969665527) ) ) {
                      sum += (double)0.0173113518518518486;
                    } else {
                      sum += (double)0.008019207547169813349;
                    }
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6850499808788299561) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5749999880790710449) ) ) {
              sum += (double)0.1464722499999999983;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6782357394695281982) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8202.5) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.64604568481445312) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.53809547424316406) ) ) {
                      sum += (double)0.04725442187500000779;
                    } else {
                      sum += (double)0.1354139861111111065;
                    }
                  } else {
                    sum += (double)0.01995063281250000764;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3379993289709091187) ) ) {
                    sum += (double)0.05534091176470587459;
                  } else {
                    sum += (double)0.2415126999999999968;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7649999856948852539) ) ) {
                  sum += (double)0.04763980000000000298;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.37024497985839844) ) ) {
                    sum += (double)0.009022525641025642279;
                  } else {
                    sum += (double)0.02430228225806451217;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2887104898691177368) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12029.6357421875) ) ) {
                sum += (double)0.02954353409090909252;
              } else {
                sum += (double)0.1311981176470588539;
              }
            } else {
              sum += (double)0.2437215178571428553;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6156424880027770996) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.160416603088378906) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-822.209228515625) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5296977460384368896) ) ) {
              sum += (double)0.3753964553571428886;
            } else {
              sum += (double)0.2155841190476190383;
            }
          } else {
            sum += (double)0.1493378750000000088;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.126373291015625) ) ) {
            sum += (double)0.06766148717948718139;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5838.772705078125) ) ) {
              sum += (double)0.1281533863636363513;
            } else {
              sum += (double)0.3195723472222222195;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.239953577518463135) ) ) {
          sum += (double)0.4871259545454545425;
        } else {
          sum += (double)0.3353745384615385294;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4511609971523284912) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8318758606910705566) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2417185008525848389) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02325000055134296417) ) ) {
            sum += (double)0.4001385833333334086;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46942424774169922) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                sum += (double)0.1620431041666666461;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2121720016002655029) ) ) {
                  sum += (double)0.3343646083333332575;
                } else {
                  sum += (double)0.2416555972222222126;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3113500028848648071) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.645100027322769165) ) ) {
                  sum += (double)0.1179841093749999931;
                } else {
                  sum += (double)0.2229104130434782505;
                }
              } else {
                sum += (double)0.04767652173913043689;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.84943199157714844) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1374177560210227966) ) ) {
                sum += (double)0.5579090441176469684;
              } else {
                sum += (double)0.5065055714285714439;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340364500880241394) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6017999947071075439) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4591999948024749756) ) ) {
                    sum += (double)0.3642297159090909786;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.757631301879882812) ) ) {
                      sum += (double)0.4464867343750000273;
                    } else {
                      sum += (double)0.4041959523809522947;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7024.548095703125) ) ) {
                    sum += (double)0.390427556818181809;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.4351963996887207) ) ) {
                      sum += (double)0.3805962656250000409;
                    } else {
                      sum += (double)0.2747200681818182111;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03225000016391277313) ) ) {
                    sum += (double)0.4709020749999999755;
                  } else {
                    sum += (double)0.5362758899999999773;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.719550013542175293) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4007.36962890625) ) ) {
                      sum += (double)0.4236429166666667023;
                    } else {
                      sum += (double)0.4729706985294117594;
                    }
                  } else {
                    sum += (double)0.3949213557692307641;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4626923799514770508) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2561500072479248047) ) ) {
                  sum += (double)0.1733766428571428264;
                } else {
                  sum += (double)0.2868622142857142898;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11874.66552734375) ) ) {
                  sum += (double)0.4290909204545454991;
                } else {
                  sum += (double)0.3521669687499999757;
                }
              }
            } else {
              sum += (double)0.1754735000000000045;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.965034961700439453) ) ) {
          sum += (double)0.285213851851851774;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.24297410249710083) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.83468437194824219) ) ) {
              sum += (double)0.2400111517857142773;
            } else {
              sum += (double)0.1129709473684210735;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5089499950408935547) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.103830337524414062) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.605588197708129883) ) ) {
                  sum += (double)0.02546744999999999912;
                } else {
                  sum += (double)0.08799427777777778237;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1041499972343444824) ) ) {
                  sum += (double)0.02625506249999999195;
                } else {
                  sum += (double)0.008822772727272727711;
                }
              }
            } else {
              sum += (double)0.1303712083333333216;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6589429974555969238) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7429124116897583008) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.53772830963134766) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.54652214050292969) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2462.08447265625) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4950319975614547729) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08640000224113464355) ) ) {
                      sum += (double)0.5085208571428571078;
                    } else {
                      sum += (double)0.5361922499999999259;
                    }
                  } else {
                    sum += (double)0.4705635217391304082;
                  }
                } else {
                  sum += (double)0.5502075161290321814;
                }
              } else {
                sum += (double)0.6130310217391304883;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1557.5447998046875) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07170993834733963013) ) ) {
                  sum += (double)0.6594538928571428427;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5529000163078308105) ) ) {
                    sum += (double)0.6418726249999999744;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09144999831914901733) ) ) {
                      sum += (double)0.6196395394736839979;
                    } else {
                      sum += (double)0.5759119999999998685;
                    }
                  }
                }
              } else {
                sum += (double)0.7002891447368421174;
              }
            }
          } else {
            sum += (double)0.364377569444444438;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
            sum += (double)0.4267148653846153383;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1962.20025634765625) ) ) {
              sum += (double)0.3475973599999999664;
            } else {
              sum += (double)0.154915355263157889;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5613919496536254883) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1050499975681304932) ) ) {
              sum += (double)0.7353771249999999648;
            } else {
              sum += (double)0.676406518518518407;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1575.6549072265625) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04965000040829181671) ) ) {
                sum += (double)0.8246480666666665682;
              } else {
                sum += (double)0.7662510394736842256;
              }
            } else {
              sum += (double)0.8611715476190477947;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.085762977600097656) ) ) {
            sum += (double)0.5047246346153845264;
          } else {
            sum += (double)0.6580726973684208891;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3837890028953552246) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.730263233184814453) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5300000011920928955) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
            sum += (double)0.1412776447368421229;
          } else {
            sum += (double)0.02878610714285714106;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.741173475980758667) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008099999744445085526) ) ) {
              sum += (double)0.3676899568965517617;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2016.8912353515625) ) ) {
                sum += (double)0.1783988900000000044;
              } else {
                sum += (double)0.2610274000000000205;
              }
            }
          } else {
            sum += (double)0.09629934999999997802;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1657500043511390686) ) ) {
                sum += (double)0.002500000000000001787;
              } else {
                sum += (double)0.005918153846153846424;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0006499999944935552776) ) ) {
                sum += (double)0.02383549999999999905;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.10529422760009766) ) ) {
                  sum += (double)0.01493886250000000214;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07865500077605247498) ) ) {
                      sum += (double)0.002970685714285715463;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7005.728271484375) ) ) {
                      sum += (double)0.004746733333333333534;
                    } else {
                      sum += (double)0.01763817857142857201;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.85454463958740234) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1783104985952377319) ) ) {
                sum += (double)0.1031505468750000126;
              } else {
                sum += (double)0.02359716666666666907;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7174240350723266602) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4407000094652175903) ) ) {
                  sum += (double)0.0668422968749999985;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)124.2431755065917969) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2725500017404556274) ) ) {
                      sum += (double)0.01008266203703703755;
                    } else {
                      sum += (double)0.0274190000000000024;
                    }
                  } else {
                    sum += (double)0.03693966176470588059;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1855000033974647522) ) ) {
                  sum += (double)0.007180729166666667725;
                } else {
                  sum += (double)0.002801724137931034444;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.81024646759033203) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.51027965545654297) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4315.2431640625) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1898979991674423218) ) ) {
                  sum += (double)0.1445424423076923093;
                } else {
                  sum += (double)0.09563123684210525499;
                }
              } else {
                sum += (double)0.03897793939393938423;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1481499969959259033) ) ) {
                sum += (double)0.2459179624999999203;
              } else {
                sum += (double)0.1290318749999999903;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.209712497889995575) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.19900226593017578) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000119209289551) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12767.576171875) ) ) {
                    sum += (double)0.05792029629629629611;
                  } else {
                    sum += (double)0.007329500000000000945;
                  }
                } else {
                  sum += (double)0.08272644736842105218;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6399999856948852539) ) ) {
                  sum += (double)0.03238940789473684218;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1862999945878982544) ) ) {
                    sum += (double)0.006200421052631579881;
                  } else {
                    sum += (double)0.01661664285714286107;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.625) ) ) {
                sum += (double)0.1756603625000000002;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.83968162536621094) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.66075229644775391) ) ) {
                    sum += (double)0.03517904166666666055;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)62.03333282470703125) ) ) {
                      sum += (double)0.08262638095238095115;
                    } else {
                      sum += (double)0.1501137968750000107;
                    }
                  }
                } else {
                  sum += (double)0.01874639189189189134;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.35432529449462891) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03755000047385692596) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002900000079534947872) ) ) {
              sum += (double)0.4967448124999999659;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5523000061511993408) ) ) {
                sum += (double)0.3182665100000000025;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.75) ) ) {
                  sum += (double)0.3988219880952380003;
                } else {
                  sum += (double)0.4785615000000000285;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2497028335928916931) ) ) {
                sum += (double)0.1759672500000000195;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2162764966487884521) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.33894920349121094) ) ) {
                    sum += (double)0.2859666931818181657;
                  } else {
                    sum += (double)0.3508931805555555727;
                  }
                } else {
                  sum += (double)0.2176462625000000206;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7082000076770782471) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5284966230392456055) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3376.291748046875) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2703317403793334961) ) ) {
                      sum += (double)0.3655190000000000383;
                    } else {
                      sum += (double)0.4509046730769231681;
                    }
                  } else {
                    sum += (double)0.4733927333333333709;
                  }
                } else {
                  sum += (double)0.3437887717391305276;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.192200005054473877) ) ) {
                  sum += (double)0.2248418035714285779;
                } else {
                  sum += (double)0.3577136666666665965;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3608281761407852173) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2680875062942504883) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.61480140686035156) ) ) {
                sum += (double)0.1492038437500000092;
              } else {
                sum += (double)0.2178914642857143202;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3335070013999938965) ) ) {
                sum += (double)0.2906280781250000778;
              } else {
                sum += (double)0.3853961323529411231;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7920019924640655518) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.27344322204589844) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2557999938726425171) ) ) {
                  sum += (double)0.1708384659090909363;
                } else {
                  sum += (double)0.1183548382352941075;
                }
              } else {
                sum += (double)0.05052493749999999867;
              }
            } else {
              sum += (double)0.2280904861111110737;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
          sum += (double)0.1697398214285714135;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.360257625579833984) ) ) {
            sum += (double)0.1647213157894736879;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.359807252883911133) ) ) {
              sum += (double)0.09403203124999999496;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4815.358154296875) ) ) {
                sum += (double)0.02673382432432432065;
              } else {
                sum += (double)0.008668250000000000607;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4755957424640655518) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5482229888439178467) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
          sum += (double)0.2281658666666666335;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999824678525329) ) ) {
              sum += (double)0.6083344318181816979;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5080394744873046875) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.24444437026977539) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.059701442718505859) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.419393002986907959) ) ) {
                      sum += (double)0.45906384722222221;
                    } else {
                      sum += (double)0.5118970472972973473;
                    }
                  } else {
                    sum += (double)0.437066291666666773;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.131376899778842926) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4583069980144500732) ) ) {
                      sum += (double)0.4471438666666666673;
                    } else {
                      sum += (double)0.5070608088235294408;
                    }
                  } else {
                    sum += (double)0.5618930071428570594;
                  }
                }
              } else {
                sum += (double)0.571844012500000054;
              }
            }
          } else {
            sum += (double)0.3628390217391304073;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567690074443817139) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.470833301544189453) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5396499931812286377) ) ) {
              sum += (double)0.5575112236842103552;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02634999994188547134) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5996280014514923096) ) ) {
                  sum += (double)0.6632263749999999236;
                } else {
                  sum += (double)0.7015675735294117921;
                }
              } else {
                sum += (double)0.6204623518518518344;
              }
            }
          } else {
            sum += (double)0.5255203181818181024;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7415895164012908936) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.40729141235351562) ) ) {
              sum += (double)0.677928736111111041;
            } else {
              sum += (double)0.7423482812500000749;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1546.40386962890625) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8322224915027618408) ) ) {
                sum += (double)0.7569060108695653266;
              } else {
                sum += (double)0.8098627999999999938;
              }
            } else {
              sum += (double)0.8667148068181816933;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6001150012016296387) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.46750688552856445) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6339874565601348877) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.680665493011474609) ) ) {
              sum += (double)0.4478531818181819002;
            } else {
              sum += (double)0.4928040312499999409;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
              sum += (double)0.412536105769230832;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.691678524017333984) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5139805078506469727) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4402929991483688354) ) ) {
                    sum += (double)0.1816604583333333023;
                  } else {
                    sum += (double)0.2809160666666666306;
                  }
                } else {
                  sum += (double)0.4149708571428571413;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1619.51165771484375) ) ) {
                  sum += (double)0.1373594285714286045;
                } else {
                  sum += (double)0.06417751388888888464;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10427.32373046875) ) ) {
            sum += (double)0.2892507999999999191;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2303999960422515869) ) ) {
              sum += (double)0.05821113043478259863;
            } else {
              sum += (double)0.1586804553571428411;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.818192660808563232) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.603754758834838867) ) ) {
            sum += (double)0.4175715312500000165;
          } else {
            sum += (double)0.5655872327586205506;
          }
        } else {
          sum += (double)0.3095111416666666004;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3853465020656585693) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.782407283782958984) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2453145012259483337) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1458329930901527405) ) ) {
            sum += (double)0.03532720535714285737;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1807245016098022461) ) ) {
              sum += (double)0.2510315555555555078;
            } else {
              sum += (double)0.104911489583333295;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4515499919652938843) ) ) {
            sum += (double)0.1065687321428571283;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
              sum += (double)0.2626506086956522101;
            } else {
              sum += (double)0.3954345400000000565;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5450000166893005371) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07672816887497901917) ) ) {
            sum += (double)0.1047587142857142745;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2849999964237213135) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09602699801325798035) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7785999774932861328) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                      sum += (double)0.002711192052980134024;
                    } else {
                      sum += (double)0.004555387500000000756;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04380000010132789612) ) ) {
                      sum += (double)0.009874249999999999347;
                    } else {
                      sum += (double)0.003165694444444444502;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1439500004053115845) ) ) {
                    sum += (double)0.009536148148148149498;
                  } else {
                    sum += (double)0.02147068333333333745;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03810000047087669373) ) ) {
                    sum += (double)0.01717343103448275982;
                  } else {
                    sum += (double)0.06576712499999999573;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.106519501656293869) ) ) {
                    sum += (double)0.02894811111111111196;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5356979668140411377) ) ) {
                      sum += (double)0.01364832352941176656;
                    } else {
                      sum += (double)0.002963230000000000725;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7160405516624450684) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3068297058343887329) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4050000011920928955) ) ) {
                    sum += (double)0.01083865384615384682;
                  } else {
                    sum += (double)0.02737609374999999678;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6381.00341796875) ) ) {
                    sum += (double)0.0740872314814814692;
                  } else {
                    sum += (double)0.03690426666666667133;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.55064582824707031) ) ) {
                  sum += (double)0.005873999999999999881;
                } else {
                  sum += (double)0.01292078125000000084;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6136949062347412109) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11090.091796875) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7489500045776367188) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4123500138521194458) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1442174986004829407) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5347500145435333252) ) ) {
                      sum += (double)0.01138696875000000039;
                    } else {
                      sum += (double)0.02635823437500000102;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5269000232219696045) ) ) {
                      sum += (double)0.03285060227272726396;
                    } else {
                      sum += (double)0.0644244705882352775;
                    }
                  }
                } else {
                  sum += (double)0.07243647916666666464;
                }
              } else {
                sum += (double)0.1208063000000000053;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7749999761581420898) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1879905015230178833) ) ) {
                  sum += (double)0.02277975000000000486;
                } else {
                  sum += (double)0.08643231578947367655;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.22738504409790039) ) ) {
                  sum += (double)0.09674313392857145089;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6905.39501953125) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                      sum += (double)0.06663997727272727434;
                    } else {
                      sum += (double)0.1898751406249999663;
                    }
                  } else {
                    sum += (double)0.2851482187500000154;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.685000002384185791) ) ) {
              sum += (double)0.07581446875000001639;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4182000011205673218) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.15571022033691406) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4283.271484375) ) ) {
                    sum += (double)0.01068877777777777795;
                  } else {
                    sum += (double)0.00357380000000000024;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)135.089019775390625) ) ) {
                    sum += (double)0.02712586666666666826;
                  } else {
                    sum += (double)0.005910426470588235788;
                  }
                }
              } else {
                sum += (double)0.05198723913043478556;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.33081388473510742) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2269129976630210876) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06839999929070472717) ) ) {
              sum += (double)0.3869783557692307863;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.595749974250793457) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5258301496505737305) ) ) {
                  sum += (double)0.3353671249999999882;
                } else {
                  sum += (double)0.2394350576923076901;
                }
              } else {
                sum += (double)0.123147416666666662;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008450000081211328506) ) ) {
              sum += (double)0.4836831666666667195;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2929475009441375732) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3523.82275390625) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4117095619440078735) ) ) {
                    sum += (double)0.3974256176470588597;
                  } else {
                    sum += (double)0.3543243888888888415;
                  }
                } else {
                  sum += (double)0.2791001785714285477;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3554500043392181396) ) ) {
                  sum += (double)0.3374465714285714291;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3491825014352798462) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5023500025272369385) ) ) {
                      sum += (double)0.4471904687500000142;
                    } else {
                      sum += (double)0.3826175270270270046;
                    }
                  } else {
                    sum += (double)0.4842828425925925773;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3333054929971694946) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14115.9111328125) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.29031753540039062) ) ) {
                  sum += (double)0.3065975238095238198;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.750946044921875) ) ) {
                    sum += (double)0.1768878636363636347;
                  } else {
                    sum += (double)0.2293430576923077002;
                  }
                }
              } else {
                sum += (double)0.128621299999999994;
              }
            } else {
              sum += (double)0.3634086625000000348;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2557999938726425171) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.88829803466796875) ) ) {
                sum += (double)0.17409299999999997;
              } else {
                sum += (double)0.04929308928571429771;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-46720.916015625) ) ) {
                sum += (double)0.2886477187500000041;
              } else {
                sum += (double)0.1528608189655172311;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.119572877883911133) ) ) {
          sum += (double)0.1356865200000000327;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17592.8583984375) ) ) {
            sum += (double)0.1173736406249999975;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.774017333984375) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.40606880187988281) ) ) {
                sum += (double)0.01961733333333333384;
              } else {
                sum += (double)0.006456595238095239574;
              }
            } else {
              sum += (double)0.04464858333333333179;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6143585145473480225) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
          sum += (double)0.16207615277777776;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4441130012273788452) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.284993171691894531) ) ) {
                sum += (double)0.448915701923076893;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.26520252227783203) ) ) {
                  sum += (double)0.5460201842105262271;
                } else {
                  sum += (double)0.4836495119047619085;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5362260043621063232) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1096890866756439209) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8976999819278717041) ) ) {
                    sum += (double)0.4728821093749999704;
                  } else {
                    sum += (double)0.5799731249999999783;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.260451912879943848) ) ) {
                    sum += (double)0.5235357999999999956;
                  } else {
                    sum += (double)0.6049671874999998922;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.609392166137695312) ) ) {
                  sum += (double)0.5536410357142856897;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.75858783721923828) ) ) {
                    sum += (double)0.6481872142857143526;
                  } else {
                    sum += (double)0.6858874218749999585;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1972865089774131775) ) ) {
              sum += (double)0.3268840192307692072;
            } else {
              sum += (double)0.4360581176470588183;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.752637147903442383) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7556720077991485596) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7320500016212463379) ) ) {
              sum += (double)0.689075166666666572;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8659999966621398926) ) ) {
                sum += (double)0.7569816388888888081;
              } else {
                sum += (double)0.7421992205882352867;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1575.6549072265625) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.805501461029052734) ) ) {
                sum += (double)0.7601986428571426702;
              } else {
                sum += (double)0.8290686093749999319;
              }
            } else {
              sum += (double)0.8636866810344826506;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7741999924182891846) ) ) {
            sum += (double)0.6888261666666665173;
          } else {
            sum += (double)0.5795807624999999019;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5475879907608032227) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2025500014424324036) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.539999961853027344) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2337.56396484375) ) ) {
              sum += (double)0.3909753269230770156;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.704117834568023682) ) ) {
                sum += (double)0.2877552205882352721;
              } else {
                sum += (double)0.1433110294117646843;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08430000022053718567) ) ) {
              sum += (double)0.1957629078947368262;
            } else {
              sum += (double)0.03467652999999999708;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.328250005841255188) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2677.4940185546875) ) ) {
              sum += (double)0.5093327857142857518;
            } else {
              sum += (double)0.2961386184210526573;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9085.239990234375) ) ) {
              sum += (double)0.347954107142857183;
            } else {
              sum += (double)0.2110859999999999959;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1621.4091796875) ) ) {
            sum += (double)0.3362952934782608705;
          } else {
            sum += (double)0.2409831093750000042;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062999188899993896) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5763500332832336426) ) ) {
              sum += (double)0.6338949285714284843;
            } else {
              sum += (double)0.5680536718749999991;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
              sum += (double)0.4718425441176470336;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
                sum += (double)0.4397168815789473939;
              } else {
                sum += (double)0.2311426346153846179;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.291855096817016602) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.985833108425140381) ) ) {
        sum += (double)0.5142935500000000992;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3119.6138916015625) ) ) {
            sum += (double)0.1749528750000000077;
          } else {
            sum += (double)0.09313918518518518597;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9320483803749084473) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.222527503967285156) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01625000033527612686) ) ) {
                sum += (double)0.3100793888888888628;
              } else {
                sum += (double)0.4361826000000000869;
              }
            } else {
              sum += (double)0.2559226333333333159;
            }
          } else {
            sum += (double)0.1470372413793103461;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464854836463928223) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2849999964237213135) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.114321000874042511) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08512999862432479858) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3637.754150390625) ) ) {
                  sum += (double)0.01118053571428571577;
                } else {
                  sum += (double)0.004279534482758621042;
                }
              } else {
                sum += (double)0.03845202777777777248;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3238740265369415283) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.96794891357421875) ) ) {
                  sum += (double)0.01798581250000000006;
                } else {
                  sum += (double)0.08814639473684207638;
                }
              } else {
                sum += (double)0.1142844078947368169;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1836999952793121338) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.96428489685058594) ) ) {
                sum += (double)0.04912880434782607858;
              } else {
                sum += (double)0.009755738636363637042;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1876370012760162354) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.54166603088378906) ) ) {
                      sum += (double)0.003794928571428571925;
                    } else {
                      sum += (double)0.002573419753086421315;
                    }
                  } else {
                    sum += (double)0.00660717857142857027;
                  }
                } else {
                  sum += (double)0.01022232352941176634;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3518999963998794556) ) ) {
                  sum += (double)0.02697187499999999932;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09590600058436393738) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)102.8631095886230469) ) ) {
                      sum += (double)0.008985568181818183106;
                    } else {
                      sum += (double)0.0039623333333333342;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1612665057182312012) ) ) {
                      sum += (double)0.02328399999999999914;
                    } else {
                      sum += (double)0.004996523809523809208;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4285718798637390137) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8251.01318359375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.85333347320556641) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1660744994878768921) ) ) {
                  sum += (double)0.0626919347826086909;
                } else {
                  sum += (double)0.1432979375;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05609999969601631165) ) ) {
                  sum += (double)0.08737545454545453394;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1430404931306838989) ) ) {
                    sum += (double)0.01224241304347826152;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.10548496246337891) ) ) {
                      sum += (double)0.05341866666666666985;
                    } else {
                      sum += (double)0.01967576315789473784;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.52173995971679688) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4721.57080078125) ) ) {
                    sum += (double)0.1077456547619047578;
                  } else {
                    sum += (double)0.03095259999999999678;
                  }
                } else {
                  sum += (double)0.1608734416666667;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7617000043392181396) ) ) {
                  sum += (double)0.3217533083333333765;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.19739151000976562) ) ) {
                    sum += (double)0.2239872499999999989;
                  } else {
                    sum += (double)0.1229432000000000025;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02575000002980232239) ) ) {
              sum += (double)0.1853876406249999609;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2421125024557113647) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4016499966382980347) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7399341762065887451) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13572.9541015625) ) ) {
                      sum += (double)0.01990845512820513252;
                    } else {
                      sum += (double)0.04854409259259259007;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2124499976634979248) ) ) {
                      sum += (double)0.005162250000000001039;
                    } else {
                      sum += (double)0.01144074193548387346;
                    }
                  }
                } else {
                  sum += (double)0.05475637499999999602;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.633331298828125) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075429320335388184) ) ) {
                    sum += (double)0.1014253870967741916;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1120.3271484375) ) ) {
                      sum += (double)0.02643709274193547371;
                    } else {
                      sum += (double)0.07245631578947367424;
                    }
                  }
                } else {
                  sum += (double)0.1434410277777777576;
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.3307794375000000509;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.000506043434143066) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.25617265701293945) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05304999835789203644) ) ) {
              sum += (double)0.4110831041666666574;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5456.853515625) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.55174398422241211) ) ) {
                  sum += (double)0.3522586166666666907;
                } else {
                  sum += (double)0.2064849732142857164;
                }
              } else {
                sum += (double)0.1541078020833333284;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3779789954423904419) ) ) {
                sum += (double)0.5286884750000001576;
              } else {
                sum += (double)0.5743910576923074718;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340364500880241394) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2339.043212890625) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3179270029067993164) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2998816221952438354) ) ) {
                      sum += (double)0.43725432558139532;
                    } else {
                      sum += (double)0.3897567193877551905;
                    }
                  } else {
                    sum += (double)0.3562326249999999694;
                  }
                } else {
                  sum += (double)0.310027041666666614;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07294999808073043823) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.41979999840259552) ) ) {
                    sum += (double)0.4708210982142856937;
                  } else {
                    sum += (double)0.545481765624999948;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.00507354736328125) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5547690391540527344) ) ) {
                      sum += (double)0.4721834893617021245;
                    } else {
                      sum += (double)0.3906282499999999547;
                    }
                  } else {
                    sum += (double)0.3483016578947368824;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3418017476797103882) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3039000034332275391) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3009070008993148804) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1711425036191940308) ) ) {
                  sum += (double)0.3547035833333333499;
                } else {
                  sum += (double)0.2763086057692307751;
                }
              } else {
                sum += (double)0.420958046296296351;
              }
            } else {
              sum += (double)0.1939040344827586415;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3722449988126754761) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.33650779724121094) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10148.6513671875) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.0718531608581543) ) ) {
                    sum += (double)0.3203430454545455053;
                  } else {
                    sum += (double)0.1861921718750000065;
                  }
                } else {
                  sum += (double)0.104071700000000017;
                }
              } else {
                sum += (double)0.09103476666666668327;
              }
            } else {
              sum += (double)0.325135847222222274;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1867.14727783203125) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600825071334838867) ) ) {
              sum += (double)0.2019392386363637049;
            } else {
              sum += (double)0.3019298906249999748;
            }
          } else {
            sum += (double)0.06904613888888887219;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1884500011801719666) ) ) {
            sum += (double)0.1214579074074074172;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4721999913454055786) ) ) {
              sum += (double)0.01663522413793103519;
            } else {
              sum += (double)0.0503732874999999955;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6038264930248260498) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.562405109405517578) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2893507033586502075) ) ) {
                  sum += (double)0.5124385500000000482;
                } else {
                  sum += (double)0.4643326718749999915;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4761.35205078125) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0984248630702495575) ) ) {
                    sum += (double)0.4958377833333333373;
                  } else {
                    sum += (double)0.5469967941176471227;
                  }
                } else {
                  sum += (double)0.5821547129629629502;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.444736957550048828) ) ) {
                sum += (double)0.5614348409090909042;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.57917070388793945) ) ) {
                  sum += (double)0.6511875384615385398;
                } else {
                  sum += (double)0.6013435681818181111;
                }
              }
            }
          } else {
            sum += (double)0.3609944999999999959;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7224465012550354004) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7741999924182891846) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.931028366088867188) ) ) {
                sum += (double)0.6767914736842105539;
              } else {
                sum += (double)0.7251602222222223171;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.703571438789367676) ) ) {
                sum += (double)0.6919232321428572252;
              } else {
                sum += (double)0.6108669852941176481;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07485000044107437134) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8438450098037719727) ) ) {
                sum += (double)0.8607920694444444187;
              } else {
                sum += (double)0.8083325599999997557;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7070000171661376953) ) ) {
                sum += (double)0.7224787678571428229;
              } else {
                sum += (double)0.7597189411764705413;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759060025215148926) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
            sum += (double)0.424075187500000006;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
              sum += (double)0.3884269117647058955;
            } else {
              sum += (double)0.2068951100000000209;
            }
          }
        } else {
          sum += (double)0.5210417647058822599;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5163805186748504639) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.947222232818603516) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4899999946355819702) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04999999888241291046) ) ) {
            sum += (double)0.004209444444444445342;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.10714340209960938) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1623535007238388062) ) ) {
                sum += (double)0.02823203333333333676;
              } else {
                sum += (double)0.07655270833333333025;
              }
            } else {
              sum += (double)0.1312037575757575569;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.800751924514770508) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33125019073486328) ) ) {
              sum += (double)0.23181458653846157;
            } else {
              sum += (double)0.3954258124999999735;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.306652069091796875) ) ) {
              sum += (double)0.05082934374999999172;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.369901999831199646) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02209999971091747284) ) ) {
                    sum += (double)0.2799739642857142496;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3177.5472412109375) ) ) {
                      sum += (double)0.2207426250000000534;
                    } else {
                      sum += (double)0.1419848035714285917;
                    }
                  }
                } else {
                  sum += (double)0.1081893636363636113;
                }
              } else {
                sum += (double)0.3146185624999999764;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.24364500492811203) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.61061382293701172) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.88039779663085938) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.375) ) ) {
                  sum += (double)0.09811008928571428311;
                } else {
                  sum += (double)0.03250281730769229854;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1459359973669052124) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07252199947834014893) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.4593353271484375) ) ) {
                      sum += (double)0.008053593749999999121;
                    } else {
                      sum += (double)0.00258445945945945995;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.16771602630615234) ) ) {
                      sum += (double)0.01680984210526315775;
                    } else {
                      sum += (double)0.05387428846153845263;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8391.73681640625) ) ) {
                    sum += (double)0.07124740476190476179;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.83541679382324219) ) ) {
                      sum += (double)0.04523394999999998806;
                    } else {
                      sum += (double)0.01085235714285714276;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07135000079870223999) ) ) {
                sum += (double)0.1780705714285713837;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.49124526977539062) ) ) {
                  sum += (double)0.01230226086956521733;
                } else {
                  sum += (double)0.0855626750000000047;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3250000029802322388) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8187500238418579102) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)675.318511962890625) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-52386.513671875) ) ) {
                      sum += (double)0.003721789473684210432;
                    } else {
                      sum += (double)0.002500000000000001353;
                    }
                  } else {
                    sum += (double)0.006366129629629629569;
                  }
                } else {
                  sum += (double)0.01164303846153846161;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6620510518550872803) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5462999939918518066) ) ) {
                    sum += (double)0.02970671666666667085;
                  } else {
                    sum += (double)0.007288818181818181897;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2345500066876411438) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.00761547058823529386;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4348500072956085205) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2362999990582466125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.6897430419921875) ) ) {
                    sum += (double)0.03983757954545454061;
                  } else {
                    sum += (double)0.02043640277777777556;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-30260.2978515625) ) ) {
                    sum += (double)0.01900499999999999759;
                  } else {
                    sum += (double)0.005339611111111110947;
                  }
                }
              } else {
                sum += (double)0.04960019230769230347;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.14985275268554688) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9574251174926757812) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
                sum += (double)0.03767848529411763764;
              } else {
                sum += (double)0.09612791071428572476;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3205.979248046875) ) ) {
                sum += (double)0.03035900000000000057;
              } else {
                sum += (double)0.01033040740740740794;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3200000077486038208) ) ) {
              sum += (double)0.01561047916666666487;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9815.28759765625) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7391499876976013184) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.78640937805175781) ) ) {
                    sum += (double)0.07109618750000000487;
                  } else {
                    sum += (double)0.04582394117647058118;
                  }
                } else {
                  sum += (double)0.1216992058823529455;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.94791603088378906) ) ) {
                  sum += (double)0.1680850652173912774;
                } else {
                  sum += (double)0.2586035312500000183;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6881895065307617188) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.726495742797851562) ) ) {
          sum += (double)0.4116338636363636172;
        } else {
          sum += (double)0.2661993173076923069;
        }
      } else {
        sum += (double)0.5107484444444444494;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4604820013046264648) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7597746551036834717) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
              sum += (double)0.5344457763157894892;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2227710038423538208) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2812091708183288574) ) ) {
                    sum += (double)0.2401627352941176352;
                  } else {
                    sum += (double)0.3443081145833333245;
                  }
                } else {
                  sum += (double)0.2096518900000000352;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.082350611686706543) ) ) {
                  sum += (double)0.3263341249999999749;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.283674955368041992) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4733500033617019653) ) ) {
                      sum += (double)0.3553664642857143341;
                    } else {
                      sum += (double)0.4302033081395349456;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.439553737640380859) ) ) {
                      sum += (double)0.3152893043478260382;
                    } else {
                      sum += (double)0.4007710725806451491;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3695319890975952148) ) ) {
                sum += (double)0.4566203906249999833;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.485714435577392578) ) ) {
                  sum += (double)0.4802219565217392128;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.395289003849029541) ) ) {
                    sum += (double)0.6044212894736842312;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1314535737037658691) ) ) {
                      sum += (double)0.5626269062500001139;
                    } else {
                      sum += (double)0.5238696309523809269;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4147095084190368652) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7259500026702880859) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3810160011053085327) ) ) {
                    sum += (double)0.4344294333333333369;
                  } else {
                    sum += (double)0.4994517499999999166;
                  }
                } else {
                  sum += (double)0.3785733461538460798;
                }
              } else {
                sum += (double)0.361825522727272697;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3306660056114196777) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4710000008344650269) ) ) {
              sum += (double)0.1224911562500000245;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506500184535980225) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20197.9580078125) ) ) {
                  sum += (double)0.2950480080645161429;
                } else {
                  sum += (double)0.1826033214285714135;
                }
              } else {
                sum += (double)0.1739490625000000013;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6337499916553497314) ) ) {
              sum += (double)0.3999797142857142718;
            } else {
              sum += (double)0.2322384807692307873;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.991371631622314453) ) ) {
            sum += (double)0.3911244736842104941;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.16985607147216797) ) ) {
              sum += (double)0.2205789166666666246;
            } else {
              sum += (double)0.1026743055555555673;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.896885991096496582) ) ) {
            sum += (double)0.2610476250000000054;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08080000057816505432) ) ) {
              sum += (double)0.1259457419354838847;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.671046018600463867) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3182799965143203735) ) ) {
                  sum += (double)0.01510765000000000198;
                } else {
                  sum += (double)0.03057158333333332909;
                }
              } else {
                sum += (double)0.07599074999999996805;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9435398280620574951) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5997059941291809082) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.98964595794677734) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006599999964237213135) ) ) {
              sum += (double)0.6520697867647060608;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2844583392143249512) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1072998940944671631) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.590509414672851562) ) ) {
                      sum += (double)0.5264460138888890084;
                    } else {
                      sum += (double)0.4791205833333333497;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.170114271342754364) ) ) {
                      sum += (double)0.5872659565217391853;
                    } else {
                      sum += (double)0.5224642058823530943;
                    }
                  }
                } else {
                  sum += (double)0.4501747624999999364;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2118.44439697265625) ) ) {
                  sum += (double)0.5589549699999999399;
                } else {
                  sum += (double)0.6281969499999998652;
                }
              }
            }
          } else {
            sum += (double)0.3547418913043478561;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.455137014389038086) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6130999922752380371) ) ) {
                  sum += (double)0.634047947368420961;
                } else {
                  sum += (double)0.6883312592592593093;
                }
              } else {
                sum += (double)0.7323525648148146994;
              }
            } else {
              sum += (double)0.5779096818181816975;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0385500006377696991) ) ) {
              sum += (double)0.8535941129032260655;
            } else {
              sum += (double)0.7640004214285714967;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5357654988765716553) ) ) {
          sum += (double)0.2392835374999999765;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
            sum += (double)0.4637255833333333022;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.880416691303253174) ) ) {
              sum += (double)0.4194062600000000862;
            } else {
              sum += (double)0.2131221718749999883;
            }
          }
        }
      }
    }
  }
  return sum;
}
