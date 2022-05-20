#include "header.h"
double predict_margin_unit10(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4211225062608718872) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.46775054931640625) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2278250008821487427) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4202.166259765625) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.148477993905544281) ) ) {
            sum += (double)0.1469588382352941258;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05285000056028366089) ) ) {
              sum += (double)0.3421178289473683631;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6220.10498046875) ) ) {
                sum += (double)0.2096371666666666522;
              } else {
                sum += (double)0.2849144107142857485;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1112500019371509552) ) ) {
            sum += (double)0.008592857142857143402;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.68029022216796875) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1861950010061264038) ) ) {
                sum += (double)0.08509119047619047305;
              } else {
                sum += (double)0.2021533749999999963;
              }
            } else {
              sum += (double)0.06010442499999998217;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.969126582145690918) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3149250000715255737) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5477.961181640625) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.54814243316650391) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.33447265625) ) ) {
                  sum += (double)0.3622743333333333093;
                } else {
                  sum += (double)0.3885441944444444351;
                }
              } else {
                sum += (double)0.4483114166666666289;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.15288233757019043) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08434999734163284302) ) ) {
                  sum += (double)0.3321787903225806304;
                } else {
                  sum += (double)0.4108069264705881962;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0353999994695186615) ) ) {
                  sum += (double)0.281206858695652151;
                } else {
                  sum += (double)0.1902142500000000569;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.283285617828369141) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.237475074827671051) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01864999998360872269) ) ) {
                  sum += (double)0.5244364166666666272;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.50802183151245117) ) ) {
                    sum += (double)0.4951737870370371275;
                  } else {
                    sum += (double)0.3938646833333333541;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3965.044921875) ) ) {
                  sum += (double)0.457691970000000059;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5613000094890594482) ) ) {
                    sum += (double)0.3182523666666666751;
                  } else {
                    sum += (double)0.3664033833333333323;
                  }
                }
              }
            } else {
              sum += (double)0.2561244264705881957;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3233.5931396484375) ) ) {
            sum += (double)0.2862964296874999648;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1844.47796630859375) ) ) {
              sum += (double)0.1094428552631579038;
            } else {
              sum += (double)0.02977622656249999736;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2557695060968399048) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84589385986328125) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5328.509765625) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001350000020465813577) ) ) {
              sum += (double)0.3621564444444444475;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13728.29248046875) ) ) {
                sum += (double)0.2028573529411764609;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7151.16259765625) ) ) {
                  sum += (double)0.0625740576923076719;
                } else {
                  sum += (double)0.1614432941176470737;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2189040035009384155) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.55303001403808594) ) ) {
                sum += (double)0.07049040909090908968;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1652375012636184692) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.94939231872558594) ) ) {
                    sum += (double)0.01390538461538461633;
                  } else {
                    sum += (double)0.004268789473684211043;
                  }
                } else {
                  sum += (double)0.02533034374999999783;
                }
              }
            } else {
              sum += (double)0.08407998684210525597;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07178550213575363159) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1370999962091445923) ) ) {
              sum += (double)0.02950453571428571231;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1452.81488037109375) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.37163543701171875) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12573.53271484375) ) ) {
                    sum += (double)0.006941083333333333827;
                  } else {
                    sum += (double)0.002792483333333333276;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04316999949514865875) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8012000024318695068) ) ) {
                      sum += (double)0.002500000000000000919;
                    } else {
                      sum += (double)0.00271721875000000045;
                    }
                  } else {
                    sum += (double)0.003104874999999999562;
                  }
                }
              } else {
                sum += (double)0.007023314814814814698;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7045698165893554688) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.31403732299804688) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.16541290283203125) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.957305908203125) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.46890640258789062) ) ) {
                      sum += (double)0.1169047941176470651;
                    } else {
                      sum += (double)0.08420869565217391217;
                    }
                  } else {
                    sum += (double)0.02062222500000000097;
                  }
                } else {
                  sum += (double)0.144555815789473685;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4760999977588653564) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)527.197113037109375) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.51904773712158203) ) ) {
                      sum += (double)0.05475894117647057968;
                    } else {
                      sum += (double)0.0142551263440860148;
                    }
                  } else {
                    sum += (double)0.1179300357142857025;
                  }
                } else {
                  sum += (double)0.1149468823529411765;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0864499993622303009) ) ) {
                sum += (double)0.09541305357142851329;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3997999876737594604) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29773.0908203125) ) ) {
                    sum += (double)0.02875887499999999972;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8203586935997009277) ) ) {
                      sum += (double)0.02440724999999999839;
                    } else {
                      sum += (double)0.007971671875000000893;
                    }
                  }
                } else {
                  sum += (double)0.03751243750000000932;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7413459122180938721) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3285745084285736084) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05709999985992908478) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3446598649024963379) ) ) {
                sum += (double)0.06213988235294117674;
              } else {
                sum += (double)0.03453313333333333374;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.71027374267578125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17850.2783203125) ) ) {
                  sum += (double)0.3177173676470588237;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6937999725341796875) ) ) {
                    sum += (double)0.2703070588235294558;
                  } else {
                    sum += (double)0.1613529861111110963;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5071000158786773682) ) ) {
                  sum += (double)0.07534929761904762824;
                } else {
                  sum += (double)0.146251458333333334;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.36176490783691406) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08330000191926956177) ) ) {
                sum += (double)0.4470543750000000038;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.82107162475585938) ) ) {
                  sum += (double)0.3703878260869565286;
                } else {
                  sum += (double)0.228718500000000019;
                }
              }
            } else {
              sum += (double)0.1457253235294117544;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.109481930732727051) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9582206308841705322) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2822500020265579224) ) ) {
                sum += (double)0.0353646388888888899;
              } else {
                sum += (double)0.1416802031250000149;
              }
            } else {
              sum += (double)0.1663255312499999916;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3620100021362304688) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.14555072784423828) ) ) {
                sum += (double)0.008706307692307693746;
              } else {
                sum += (double)0.03196268055555554627;
              }
            } else {
              sum += (double)0.06200290789473685005;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4915205687284469604) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5349995195865631104) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1426.64923095703125) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2087.774658203125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3460.215087890625) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2339142411947250366) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7490499913692474365) ) ) {
                      sum += (double)0.5011692500000000106;
                    } else {
                      sum += (double)0.438186847222222231;
                    }
                  } else {
                    sum += (double)0.5651570781250000453;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2666.9168701171875) ) ) {
                    sum += (double)0.599431523809523803;
                  } else {
                    sum += (double)0.5269647250000000227;
                  }
                }
              } else {
                sum += (double)0.3937862500000000598;
              }
            } else {
              sum += (double)0.592277425000000024;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.427553892135620117) ) ) {
              sum += (double)0.5483931309523809583;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08599999919533729553) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7927999794483184814) ) ) {
                  sum += (double)0.6409811625000000346;
                } else {
                  sum += (double)0.6891979464285714618;
                }
              } else {
                sum += (double)0.5955660277777777845;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18587.134765625) ) ) {
            sum += (double)0.3193202500000000277;
          } else {
            sum += (double)0.3907965892857143131;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.653274655342102051) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6995500028133392334) ) ) {
            sum += (double)0.6914471818181818774;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7133949995040893555) ) ) {
              sum += (double)0.7362360937499998759;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.61852264404296875) ) ) {
                sum += (double)0.8714944880952382178;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06830576062202453613) ) ) {
                  sum += (double)0.7927826250000000741;
                } else {
                  sum += (double)0.8371604117647057919;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.67473125457763672) ) ) {
            sum += (double)0.7156214666666668167;
          } else {
            sum += (double)0.5226397361111110307;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5458705127239227295) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.15932178497314453) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1432.3592529296875) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.748840272426605225) ) ) {
              sum += (double)0.4325762037037036989;
            } else {
              sum += (double)0.3115788269230769236;
            }
          } else {
            sum += (double)0.2041238020833333333;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.69534111022949219) ) ) {
            sum += (double)0.03565139423076922609;
          } else {
            sum += (double)0.1781140138888888946;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7571980059146881104) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07615000009536743164) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6069994866847991943) ) ) {
              sum += (double)0.2178131499999999832;
            } else {
              sum += (double)0.3836690326086956149;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7466740608215332031) ) ) {
              sum += (double)0.6014390156250000175;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1086999997496604919) ) ) {
                sum += (double)0.4266752589285713881;
              } else {
                sum += (double)0.3336795729166667779;
              }
            }
          }
        } else {
          sum += (double)0.5906001874999999846;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.986842155456542969) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2471444979310035706) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4116.89501953125) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003999999957159161568) ) ) {
            sum += (double)0.3945199464285714108;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075000032782554626) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1713495030999183655) ) ) {
                sum += (double)0.1585897500000000016;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.316423892974853516) ) ) {
                  sum += (double)0.3439759125000000362;
                } else {
                  sum += (double)0.2241046964285714205;
                }
              }
            } else {
              sum += (double)0.1344859523809523727;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.46272730827331543) ) ) {
            sum += (double)0.1749114821428571498;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07815000042319297791) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.064327478408813477) ) ) {
                sum += (double)0.05378208928571428377;
              } else {
                sum += (double)0.01830753448275862158;
              }
            } else {
              sum += (double)0.1289285416666666739;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.969126582145690918) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00439999997615814209) ) ) {
            sum += (double)0.5303004166666666075;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3206399977207183838) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7760500013828277588) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2089.525634765625) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2946670055389404297) ) ) {
                      sum += (double)0.3753863125000000411;
                    } else {
                      sum += (double)0.4370853374999999486;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6127.13818359375) ) ) {
                      sum += (double)0.3731072343750000408;
                    } else {
                      sum += (double)0.2561143035714285587;
                    }
                  }
                } else {
                  sum += (double)0.2438017968750000042;
                }
              } else {
                sum += (double)0.1889905446428571945;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1937627494335174561) ) ) {
                sum += (double)0.4607898571428570844;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.83970832824707031) ) ) {
                  sum += (double)0.4001718214285714947;
                } else {
                  sum += (double)0.3451489117647059679;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3233.5931396484375) ) ) {
            sum += (double)0.19042874999999998;
          } else {
            sum += (double)0.05673172727272728089;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2557695060968399048) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.76286888122558594) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4495.08154296875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01260000001639127731) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1286644972860813141) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.14636611938476562) ) ) {
                  sum += (double)0.1847046333333333401;
                } else {
                  sum += (double)0.09913890909090906922;
                }
              } else {
                sum += (double)0.3869851111111111686;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1816340014338493347) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16690.6015625) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3602540343999862671) ) ) {
                    sum += (double)0.1852360714285714027;
                  } else {
                    sum += (double)0.06603744047619046487;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1474059969186782837) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.95985507965087891) ) ) {
                      sum += (double)0.03907410937499999903;
                    } else {
                      sum += (double)0.01607965873015872529;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5758999884128570557) ) ) {
                      sum += (double)0.02880238095238095083;
                    } else {
                      sum += (double)0.1166666346153846096;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12864.087890625) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2252662330865859985) ) ) {
                    sum += (double)0.2299324749999999695;
                  } else {
                    sum += (double)0.1468170000000000031;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6308.56689453125) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3338932543992996216) ) ) {
                      sum += (double)0.1074542045454545264;
                    } else {
                      sum += (double)0.03683226315789473598;
                    }
                  } else {
                    sum += (double)0.1685801637931035046;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1078360006213188171) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.375) ) ) {
                sum += (double)0.005826326086956521572;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05185000039637088776) ) ) {
                  sum += (double)0.002500000000000000052;
                } else {
                  sum += (double)0.003354593749999999937;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1929.4031982421875) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2678089290857315063) ) ) {
                  sum += (double)0.04035427941176469857;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05415000021457672119) ) ) {
                    sum += (double)0.01794157142857142825;
                  } else {
                    sum += (double)0.008721568965517241534;
                  }
                }
              } else {
                sum += (double)0.05650547499999999251;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4698499888181686401) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06717149913311004639) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04302049987018108368) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02944599930197000504) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1609999984502792358) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    sum += (double)0.003008535714285714459;
                  }
                } else {
                  sum += (double)0.004378394736842105422;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4141000062227249146) ) ) {
                  sum += (double)0.002500000000000000486;
                } else {
                  sum += (double)0.01177536111111111145;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1629931330680847168) ) ) {
                sum += (double)0.09973502941176470848;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.42118263244628906) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20261.94921875) ) ) {
                    sum += (double)0.07758901562500000737;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.33794879913330078) ) ) {
                      sum += (double)0.01538891666666666533;
                    } else {
                      sum += (double)0.03612376250000000344;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-159761.3828125) ) ) {
                    sum += (double)0.0426925454545454483;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1875) ) ) {
                      sum += (double)0.007394836363636364193;
                    } else {
                      sum += (double)0.01776283124999998922;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)0.0786110172413792968;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7258848249912261963) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.3970184326171875) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9338.61669921875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.38224649429321289) ) ) {
                sum += (double)0.4427533900000000244;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17850.2783203125) ) ) {
                  sum += (double)0.3670886309523809787;
                } else {
                  sum += (double)0.2141745131578947081;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07689999788999557495) ) ) {
                sum += (double)0.054520072916666662;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.33333301544189453) ) ) {
                  sum += (double)0.1602552333333333023;
                } else {
                  sum += (double)0.3462377023809524168;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16282.58642578125) ) ) {
              sum += (double)0.1414150937499999983;
            } else {
              sum += (double)0.05897473611111111319;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.109481930732727051) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2863499969244003296) ) ) {
              sum += (double)0.07748693749999999159;
            } else {
              sum += (double)0.1482444666666666577;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16981.623046875) ) ) {
              sum += (double)0.06987879999999999092;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3102.8846435546875) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4351000040769577026) ) ) {
                  sum += (double)0.03316551562499999578;
                } else {
                  sum += (double)0.01257526190476190506;
                }
              } else {
                sum += (double)0.00514736842105263312;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6062864959239959717) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.318910121917724609) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5266900062561035156) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1926.77142333984375) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3524.6837158203125) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1072998940944671631) ) ) {
                  sum += (double)0.4700128281250000595;
                } else {
                  sum += (double)0.5223297173913044045;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1140554361045360565) ) ) {
                  sum += (double)0.621063625000000008;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.755244731903076172) ) ) {
                    sum += (double)0.5442002222222223073;
                  } else {
                    sum += (double)0.492774363636363566;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1828623116016387939) ) ) {
                sum += (double)0.3789132812500000114;
              } else {
                sum += (double)0.4899987499999999829;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6906999945640563965) ) ) {
              sum += (double)0.5400348823529410591;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.578578591346740723) ) ) {
                sum += (double)0.6597729583333333814;
              } else {
                sum += (double)0.6339417000000000524;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.66363668441772461) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.203792966902256012) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4799859970808029175) ) ) {
                sum += (double)0.3774105462962963342;
              } else {
                sum += (double)0.4909615434782608756;
              }
            } else {
              sum += (double)0.5270252499999998896;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2165616452693939209) ) ) {
              sum += (double)0.3221883529411764813;
            } else {
              sum += (double)0.4172250208333332933;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1197637952864170074) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.745067715644836426) ) ) {
              sum += (double)0.755864763888888791;
            } else {
              sum += (double)0.7114463846153846749;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.00596141815185547) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2481791377067565918) ) ) {
                sum += (double)0.6607199868421053113;
              } else {
                sum += (double)0.6909703529411763689;
              }
            } else {
              sum += (double)0.6114823666666667767;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3278.4515380859375) ) ) {
            sum += (double)0.7244399807692307736;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.154501438140869141) ) ) {
              sum += (double)0.790230634615384675;
            } else {
              sum += (double)0.837375569999999958;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5487999916076660156) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.127567529678344727) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9602659344673156738) ) ) {
            sum += (double)0.4753063870967741411;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.76419442892074585) ) ) {
              sum += (double)0.3617185760869565114;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1384.33489990234375) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4320864975452423096) ) ) {
                  sum += (double)0.2162726071428571206;
                } else {
                  sum += (double)0.3477404038461538449;
                }
              } else {
                sum += (double)0.1166023375000000001;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4822500050067901611) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1876.2386474609375) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.283749997615814209) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9288308024406433105) ) ) {
                  sum += (double)0.2766689531250000056;
                } else {
                  sum += (double)0.1667293749999999852;
                }
              } else {
                sum += (double)0.1082027222222222279;
              }
            } else {
              sum += (double)0.04032619117647057855;
            }
          } else {
            sum += (double)0.3384692875000000489;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1951.922119140625) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.16964244842529297) ) ) {
            sum += (double)0.585741499999999804;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6991689801216125488) ) ) {
              sum += (double)0.377837825000000016;
            } else {
              sum += (double)0.486344544117646993;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.914313197135925293) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.85275346040725708) ) ) {
              sum += (double)0.4759732749999999735;
            } else {
              sum += (double)0.4132237500000000008;
            }
          } else {
            sum += (double)0.1165837124999999919;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.385401993989944458) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.90737581253051758) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1373855024576187134) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7168.48681640625) ) ) {
          sum += (double)0.1720354117647058811;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1219644993543624878) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1494.0802001953125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.977612018585205078) ) ) {
                sum += (double)0.01074767500000000167;
              } else {
                sum += (double)0.004524867647058824181;
              }
            } else {
              sum += (double)0.02736519230769230565;
            }
          } else {
            sum += (double)0.07113971428571427835;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9385171830654144287) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2985735088586807251) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4367.938232421875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002600000007078051567) ) ) {
                sum += (double)0.5001960543478262133;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.25617265701293945) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2322530001401901245) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.49739837646484375) ) ) {
                      sum += (double)0.3507254772727273484;
                    } else {
                      sum += (double)0.2189521824324324184;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4987500011920928955) ) ) {
                      sum += (double)0.3379537031250000045;
                    } else {
                      sum += (double)0.4062122890625000093;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13676.8369140625) ) ) {
                    sum += (double)0.2634321304347826409;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.02303028106689453) ) ) {
                      sum += (double)0.07306880434782607459;
                    } else {
                      sum += (double)0.1984063833333333249;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.488390207290649414) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2692855000495910645) ) ) {
                  sum += (double)0.2860863214285713774;
                } else {
                  sum += (double)0.4295758499999999813;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2596234977245330811) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3384573310613632202) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.74641227722167969) ) ) {
                      sum += (double)0.03089636538461538323;
                    } else {
                      sum += (double)0.1047999038461538412;
                    }
                  } else {
                    sum += (double)0.1752685238095237907;
                  }
                } else {
                  sum += (double)0.211031858333333322;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
              sum += (double)0.5335781249999999032;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2454.423583984375) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4245834648609161377) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.867156028747558594) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.678846120834350586) ) ) {
                      sum += (double)0.4339843749999999223;
                    } else {
                      sum += (double)0.3704088250000000526;
                    }
                  } else {
                    sum += (double)0.4615379351851852108;
                  }
                } else {
                  sum += (double)0.3349658642857142321;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03399999998509883881) ) ) {
                  sum += (double)0.2284489124999999898;
                } else {
                  sum += (double)0.3263150499999999954;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4706.062744140625) ) ) {
            sum += (double)0.1893315535714285569;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.455179929733276367) ) ) {
              sum += (double)0.1370342857142857196;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.533173859119415283) ) ) {
                sum += (double)0.0418517619047619055;
              } else {
                sum += (double)0.008460050000000000209;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2574760019779205322) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.4357147216796875) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21606.0595703125) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6443000137805938721) ) ) {
              sum += (double)0.1115168529411764697;
            } else {
              sum += (double)0.22316785294117647;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07366450130939483643) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4208500087261199951) ) ) {
                sum += (double)0.02588840384615384224;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.04092931747436523) ) ) {
                  sum += (double)0.007536187500000000351;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0409999992698431015) ) ) {
                    sum += (double)0.002500000000000000486;
                  } else {
                    sum += (double)0.002886166666666666655;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10291.52783203125) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.64675283432006836) ) ) {
                  sum += (double)0.138543652777777776;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7431499958038330078) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5453499853610992432) ) ) {
                      sum += (double)0.04947127439024390227;
                    } else {
                      sum += (double)0.1645800000000000041;
                    }
                  } else {
                    sum += (double)0.01902430952380952667;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.39285755157470703) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1948219984769821167) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.23318672180175781) ) ) {
                      sum += (double)0.06395599999999999896;
                    } else {
                      sum += (double)0.02247148611111111569;
                    }
                  } else {
                    sum += (double)0.09329540624999999032;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4881.6162109375) ) ) {
                    sum += (double)0.02806884090909090787;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.36666679382324219) ) ) {
                      sum += (double)0.003737827586206898117;
                    } else {
                      sum += (double)0.01691110714285714439;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4746000021696090698) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.19593849778175354) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.29761886596679688) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2075500041246414185) ) ) {
                  sum += (double)0.04577831249999999436;
                } else {
                  sum += (double)0.01039064583333333507;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07700950279831886292) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2056499943137168884) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8086999952793121338) ) ) {
                      sum += (double)0.002734789473684212571;
                    } else {
                      sum += (double)0.00510088888888888918;
                    }
                  } else {
                    sum += (double)0.006547760869565217266;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24586.830078125) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)378.0294189453125) ) ) {
                      sum += (double)0.02169911666666666031;
                    } else {
                      sum += (double)0.002499999999999999185;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.39393997192382812) ) ) {
                      sum += (double)0.01105317647058823641;
                    } else {
                      sum += (double)0.003265266666666667358;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5752909183502197266) ) ) {
                sum += (double)0.06810920833333332369;
              } else {
                sum += (double)0.009370189655172412105;
              }
            }
          } else {
            sum += (double)0.09822595833333332138;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2536866664886474609) ) ) {
          sum += (double)0.2516715874999999603;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3738.986328125) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.17857170104980469) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29169.5859375) ) ) {
                sum += (double)0.2679508437500000007;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.19856452941894531) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.202178955078125) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.097222298383712769) ) ) {
                      sum += (double)0.1509581630434782551;
                    } else {
                      sum += (double)0.05005921428571429022;
                    }
                  } else {
                    sum += (double)0.0451433500000000057;
                  }
                } else {
                  sum += (double)0.1881015588235294134;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)174.357635498046875) ) ) {
                sum += (double)0.03725224038461538018;
              } else {
                sum += (double)0.0852204473684210484;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3055260032415390015) ) ) {
              sum += (double)0.01942877272727272855;
            } else {
              sum += (double)0.003626750000000000199;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6061426103115081787) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5259389877319335938) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.578846096992492676) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.20640254020690918) ) ) {
                sum += (double)0.4662282700000000002;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8157999813556671143) ) ) {
                  sum += (double)0.5514188229166666622;
                } else {
                  sum += (double)0.600891402777777639;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05609999969601631165) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.465995490550994873) ) ) {
                  sum += (double)0.4555028500000000702;
                } else {
                  sum += (double)0.3572965000000000169;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07990000024437904358) ) ) {
                  sum += (double)0.564273374999999966;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7037499845027923584) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.70955848693847656) ) ) {
                      sum += (double)0.4766909027777778696;
                    } else {
                      sum += (double)0.5457352941176472072;
                    }
                  } else {
                    sum += (double)0.422220586538461562;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1232930794358253479) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005999999819323420525) ) ) {
                sum += (double)0.6869516500000000248;
              } else {
                sum += (double)0.6078639605263157497;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06020000018179416656) ) ) {
                sum += (double)0.5042788166666666294;
              } else {
                sum += (double)0.5604736666666665368;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9841.20166015625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.45280647277832031) ) ) {
              sum += (double)0.4999347261904761863;
            } else {
              sum += (double)0.2348680999999999686;
            }
          } else {
            sum += (double)0.2036656166666666601;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.695976495742797852) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1650.0863037109375) ) ) {
              sum += (double)0.6885529062499999853;
            } else {
              sum += (double)0.7650198552631579663;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.6636199951171875) ) ) {
              sum += (double)0.6752845652173912194;
            } else {
              sum += (double)0.6120213571428571031;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06500000134110450745) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6460205316543579102) ) ) {
              sum += (double)0.8749646166666665836;
            } else {
              sum += (double)0.8181065750000001691;
            }
          } else {
            sum += (double)0.7537213425925926025;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5498940050601959229) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.41014003753662109) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
            sum += (double)0.4405097211538461233;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4376914948225021362) ) ) {
              sum += (double)0.08851009523809524882;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-954.144622802734375) ) ) {
                sum += (double)0.2130875781250000378;
              } else {
                sum += (double)0.2653925000000000312;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.41847801208496094) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2465.476806640625) ) ) {
              sum += (double)0.02311205555555555582;
            } else {
              sum += (double)0.1305191323529411307;
            }
          } else {
            sum += (double)0.2045524482758620533;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1417.17144775390625) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.081818282604217529) ) ) {
            sum += (double)0.6125100185185184953;
          } else {
            sum += (double)0.3812177500000000774;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.437662363052368164) ) ) {
            sum += (double)0.435952666666666766;
          } else {
            sum += (double)0.1333627361111111298;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3882854878902435303) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.947972774505615234) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9590523242950439453) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2932339906692504883) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3523.82275390625) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1402514949440956116) ) ) {
              sum += (double)0.1453130967741935731;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01805000007152557373) ) ) {
                sum += (double)0.4369297142857143101;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.943303108215332031) ) ) {
                  sum += (double)0.3790544868421052982;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5963.7412109375) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2195909991860389709) ) ) {
                      sum += (double)0.2387812625000000355;
                    } else {
                      sum += (double)0.363116968749999991;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1260999962687492371) ) ) {
                      sum += (double)0.1390223281250000387;
                    } else {
                      sum += (double)0.2496218437500000165;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.464705944061279297) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1771080642938613892) ) ) {
                sum += (double)0.1945740735294117785;
              } else {
                sum += (double)0.341785035714285701;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6815000176429748535) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.036111116409301758) ) ) {
                  sum += (double)0.2191599000000000186;
                } else {
                  sum += (double)0.0808757205882352781;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8317500054836273193) ) ) {
                  sum += (double)0.06337575000000000847;
                } else {
                  sum += (double)0.007373166666666668492;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1427.47467041015625) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.287545919418334961) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3597664982080459595) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3485840111970901489) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.81559085845947266) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5955500006675720215) ) ) {
                      sum += (double)0.4340154848484848449;
                    } else {
                      sum += (double)0.3872200760869564662;
                    }
                  } else {
                    sum += (double)0.5044208392857142398;
                  }
                } else {
                  sum += (double)0.374031805555555652;
                }
              } else {
                sum += (double)0.4762339891304346873;
              }
            } else {
              sum += (double)0.3431536285714285595;
            }
          } else {
            sum += (double)0.2928026847826086798;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05714999884366989136) ) ) {
          sum += (double)0.1691297368421052771;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2454500049352645874) ) ) {
            sum += (double)0.02266570967741934894;
          } else {
            sum += (double)0.08186109821428570743;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1950545012950897217) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37796592712402344) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10291.52783203125) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2554500028491020203) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6114999949932098389) ) ) {
                sum += (double)0.2387782499999999974;
              } else {
                sum += (double)0.1396133333333333393;
              }
            } else {
              sum += (double)0.05063335294117647656;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1075564995408058167) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3222142010927200317) ) ) {
                sum += (double)0.002963400000000000149;
              } else {
                sum += (double)0.01998030357142857247;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02505000028759241104) ) ) {
                sum += (double)0.1254281666666666462;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3873.8570556640625) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.22727298736572266) ) ) {
                    sum += (double)0.05379432692307692387;
                  } else {
                    sum += (double)0.009365652173913042305;
                  }
                } else {
                  sum += (double)0.08454617647058823571;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07228600233793258667) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.03225315217391303696;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04302049987018108368) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5697234869003295898) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0214300006628036499) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    sum += (double)0.003170023809523809643;
                  }
                } else {
                  sum += (double)0.005009878787878788847;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)56.44202423095703125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06241149827837944031) ) ) {
                    sum += (double)0.01474032352941176578;
                  } else {
                    sum += (double)0.004752615384615385512;
                  }
                } else {
                  sum += (double)0.002768613636363636762;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-31921.4296875) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)132.9972915649414062) ) ) {
                sum += (double)0.1402502258064516061;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)350.640533447265625) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-104892.84765625) ) ) {
                    sum += (double)0.04554945454545455269;
                  } else {
                    sum += (double)0.02314978750000000127;
                  }
                } else {
                  sum += (double)0.002500000000000000486;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.70586967468261719) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6732499897480010986) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4562217891216278076) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1752500012516975403) ) ) {
                      sum += (double)0.01020737499999999943;
                    } else {
                      sum += (double)0.02221428124999999879;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3385499864816665649) ) ) {
                      sum += (double)0.01329297916666666822;
                    } else {
                      sum += (double)0.06384590909090910593;
                    }
                  }
                } else {
                  sum += (double)0.06460080263157894076;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1347865015268325806) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6894896924495697021) ) ) {
                    sum += (double)0.008107704545454544678;
                  } else {
                    sum += (double)0.02131882352941176506;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2534499913454055786) ) ) {
                    sum += (double)0.003522360000000000421;
                  } else {
                    sum += (double)0.005691562500000001308;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3996500074863433838) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6145854294300079346) ) ) {
            sum += (double)0.1408389444444444472;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05289999954402446747) ) ) {
              sum += (double)0.1486484285714285425;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
                sum += (double)0.0731808235294117565;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.33606529235839844) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3306.63720703125) ) ) {
                    sum += (double)0.06806802272727273395;
                  } else {
                    sum += (double)0.01128735185185185397;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.59801638126373291) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.52368354797363281) ) ) {
                      sum += (double)0.003004870967741935829;
                    } else {
                      sum += (double)0.01016369444444444568;
                    }
                  } else {
                    sum += (double)0.01580833333333333396;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.18651199340820312) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8245.83447265625) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2559999972581863403) ) ) {
                sum += (double)0.2434691249999999807;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.46337509155273438) ) ) {
                  sum += (double)0.3913762083333332531;
                } else {
                  sum += (double)0.3340141710526315921;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04875000007450580597) ) ) {
                sum += (double)0.08048770833333332431;
              } else {
                sum += (double)0.2196477875000000246;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4632.5703125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.31703853607177734) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2547229975461959839) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6570499837398529053) ) ) {
                    sum += (double)0.08778937500000000282;
                  } else {
                    sum += (double)0.1683447794117647056;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19650.3310546875) ) ) {
                    sum += (double)0.317411487499999978;
                  } else {
                    sum += (double)0.2166000199999999209;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09495000168681144714) ) ) {
                  sum += (double)0.03948342187499999378;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-39449.4765625) ) ) {
                    sum += (double)0.2027564868421052879;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.15974044799804688) ) ) {
                      sum += (double)0.06920793749999999689;
                    } else {
                      sum += (double)0.1685984558823529211;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.01504470689655172493;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6061426103115081787) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6196725070476531982) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.00933647155761719) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5455760061740875244) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.97954559326171875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07990000024437904358) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.491090536117553711) ) ) {
                  sum += (double)0.4159459642857142869;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6504499912261962891) ) ) {
                    sum += (double)0.5995430789473683575;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4563640058040618896) ) ) {
                      sum += (double)0.5030738857142856846;
                    } else {
                      sum += (double)0.565060660714285623;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4422334879636764526) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3198.997802734375) ) ) {
                    sum += (double)0.435322904761904661;
                  } else {
                    sum += (double)0.3604908749999999884;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3021.125) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1072998940944671631) ) ) {
                      sum += (double)0.4456798749999998921;
                    } else {
                      sum += (double)0.5015775892857143869;
                    }
                  } else {
                    sum += (double)0.5578064342105263362;
                  }
                }
              }
            } else {
              sum += (double)0.3231559852941177091;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04255000129342079163) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5806179940700531006) ) ) {
                sum += (double)0.6430251029411764296;
              } else {
                sum += (double)0.6841694423076922771;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4230.71630859375) ) ) {
                sum += (double)0.5485692884615385179;
              } else {
                sum += (double)0.6117187352941176881;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8312.727294921875) ) ) {
            sum += (double)0.2712895468749999539;
          } else {
            sum += (double)0.1517654444444444251;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.98828601837158203) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
              sum += (double)0.6724354137931034536;
            } else {
              sum += (double)0.7469989090909089358;
            }
          } else {
            sum += (double)0.5542416607142856;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8970215022563934326) ) ) {
              sum += (double)0.8730014519230769876;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09114031493663787842) ) ) {
                sum += (double)0.7748892083333333014;
              } else {
                sum += (double)0.8357139230769230487;
              }
            }
          } else {
            sum += (double)0.7092634605263159475;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925795048475265503) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1688.21429443359375) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.936072349548339844) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3335.319580078125) ) ) {
              sum += (double)0.4108249062500000104;
            } else {
              sum += (double)0.2700968888888888864;
            }
          } else {
            sum += (double)0.1538813833333333436;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.67165076732635498) ) ) {
            sum += (double)0.2098631071428571637;
          } else {
            sum += (double)0.02297256521739130669;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3698.1630859375) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)48.90386962890625) ) ) {
            sum += (double)0.5554970624999999718;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-105365.8046875) ) ) {
              sum += (double)0.4728475312500000083;
            } else {
              sum += (double)0.3085619218750000337;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.731029748916625977) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.98280489444732666) ) ) {
              sum += (double)0.4390000185185186088;
            } else {
              sum += (double)0.3221683947368421119;
            }
          } else {
            sum += (double)0.1455197142857142523;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3851220011711120605) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.986842155456542969) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9439698159694671631) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601370066404342651) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4106.4490966796875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.222287893295288086) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1738689988851547241) ) ) {
                sum += (double)0.2989192343749999536;
              } else {
                sum += (double)0.3800726499999999564;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7555.757568359375) ) ) {
                sum += (double)0.1921202352941176472;
              } else {
                sum += (double)0.2921948421052631417;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.265972375869750977) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.769320487976074219) ) ) {
                sum += (double)0.2778877083333333164;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8452000021934509277) ) ) {
                  sum += (double)0.1103261428571428587;
                } else {
                  sum += (double)0.199634673076923036;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.543902397155761719) ) ) {
                sum += (double)0.01633476315789474109;
              } else {
                sum += (double)0.09352880882352943015;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001750000054016709328) ) ) {
            sum += (double)0.5424307826086955941;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4607000052928924561) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.685483932495117188) ) ) {
                sum += (double)0.3436447968749999915;
              } else {
                sum += (double)0.1938296499999999922;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3408444970846176147) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.686781644821166992) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.61263751983642578) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1686599031090736389) ) ) {
                      sum += (double)0.2781997166666666521;
                    } else {
                      sum += (double)0.3978064734042554562;
                    }
                  } else {
                    sum += (double)0.509908312499999905;
                  }
                } else {
                  sum += (double)0.273899375000000056;
                }
              } else {
                sum += (double)0.4458430703124999783;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.417050838470458984) ) ) {
          sum += (double)0.2167245714285714053;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5128.52001953125) ) ) {
            sum += (double)0.1056846833333333624;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3271220028400421143) ) ) {
              sum += (double)0.01145654000000000117;
            } else {
              sum += (double)0.04771761111111111342;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.78939533233642578) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7780.98876953125) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2282579988241195679) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008900000015273690224) ) ) {
              sum += (double)0.3896363593749999632;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18792.2998046875) ) ) {
                sum += (double)0.2426651093749999655;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6734499931335449219) ) ) {
                  sum += (double)0.03395598275862069665;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1579460054636001587) ) ) {
                    sum += (double)0.07908956666666663859;
                  } else {
                    sum += (double)0.1981906477272727396;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.22855520248413086) ) ) {
              sum += (double)0.4564976607142856579;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3260450065135955811) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2734500020742416382) ) ) {
                  sum += (double)0.2050845921052631693;
                } else {
                  sum += (double)0.2814620666666666216;
                }
              } else {
                sum += (double)0.3327427159090909359;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.126681499183177948) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.60317420959472656) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2211.8759765625) ) ) {
                sum += (double)0.01248055357142857126;
              } else {
                sum += (double)0.002863954545454544965;
              }
            } else {
              sum += (double)0.03429568333333332664;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7919874191284179688) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3822999894618988037) ) ) {
                sum += (double)0.2613528749999999845;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6434500217437744141) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.09423494338989258) ) ) {
                    sum += (double)0.1293064625000000245;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4594085514545440674) ) ) {
                      sum += (double)0.03619130882352940282;
                    } else {
                      sum += (double)0.1113525666666666525;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2139030024409294128) ) ) {
                    sum += (double)0.0837282599999999988;
                  } else {
                    sum += (double)0.2437350499999999809;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.94886350631713867) ) ) {
                sum += (double)0.005632086956521739976;
              } else {
                sum += (double)0.04491694999999999716;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4698499888181686401) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2195205017924308777) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07196350023150444031) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.39655113220214844) ) ) {
                sum += (double)0.01511278947368421312;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1971499994397163391) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0461429990828037262) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.73333263397216797) ) ) {
                      sum += (double)0.002963399999999999715;
                    } else {
                      sum += (double)0.002500000000000000919;
                    }
                  } else {
                    sum += (double)0.006001380000000000603;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04762550070881843567) ) ) {
                    sum += (double)0.009865000000000000505;
                  } else {
                    sum += (double)0.003904607142857142825;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1818514987826347351) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.73052787780761719) ) ) {
                  sum += (double)0.147811789473684202;
                } else {
                  sum += (double)0.02873343333333333235;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10805.9150390625) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.16228008270263672) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2344499975442886353) ) ) {
                      sum += (double)0.03695906081081080929;
                    } else {
                      sum += (double)0.1137483552631579076;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-159761.3828125) ) ) {
                      sum += (double)0.05584612931034483446;
                    } else {
                      sum += (double)0.01239485958904108266;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.89761734008789062) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.76780128479003906) ) ) {
                      sum += (double)0.005291521739130436094;
                    } else {
                      sum += (double)0.02401880357142856942;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.446600005030632019) ) ) {
                      sum += (double)0.002500000000000000486;
                    } else {
                      sum += (double)0.009197906250000002087;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3899804651737213135) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09420000016689300537) ) ) {
                sum += (double)0.03720803947368420822;
              } else {
                sum += (double)0.171100175000000021;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02749999985098838806) ) ) {
                sum += (double)0.1002684166666666654;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.70238113403320312) ) ) {
                  sum += (double)0.07384793478260867627;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.10217857360839844) ) ) {
                    sum += (double)0.04737369999999999776;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17527.666015625) ) ) {
                      sum += (double)0.02914219166666666069;
                    } else {
                      sum += (double)0.007115500000000000297;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4429000020027160645) ) ) {
            sum += (double)0.0148421333333333353;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2480795010924339294) ) ) {
              sum += (double)0.1246524015151515424;
            } else {
              sum += (double)0.2719145714285713944;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.20932197570800781) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1011.346282958984375) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5259000062942504883) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4436479955911636353) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4297585040330886841) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07584999874234199524) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.09664154052734375) ) ) {
                      sum += (double)0.4963827826086956163;
                    } else {
                      sum += (double)0.586465321428571329;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7207500040531158447) ) ) {
                      sum += (double)0.4712952200000000147;
                    } else {
                      sum += (double)0.3580142812500000105;
                    }
                  }
                } else {
                  sum += (double)0.358181109374999973;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4761.35205078125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7533.8154296875) ) ) {
                    sum += (double)0.5146780277777777135;
                  } else {
                    sum += (double)0.4423114000000000767;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.81211185455322266) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4857574999332427979) ) ) {
                      sum += (double)0.5584822291666667882;
                    } else {
                      sum += (double)0.4776138173076923676;
                    }
                  } else {
                    sum += (double)0.6236521250000000016;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059000007808208466) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7452000081539154053) ) ) {
                  sum += (double)0.6060219791666666689;
                } else {
                  sum += (double)0.6865780925925927258;
                }
              } else {
                sum += (double)0.5731338175675675384;
              }
            }
          } else {
            sum += (double)0.3286105874999999399;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4586.513916015625) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.13851833343505859) ) ) {
              sum += (double)0.4443795499999999565;
            } else {
              sum += (double)0.2270773833333333269;
            }
          } else {
            sum += (double)0.05583003846153844485;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.752637147903442383) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7400960028171539307) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7922500073909759521) ) ) {
              sum += (double)0.6365151607142858214;
            } else {
              sum += (double)0.7554092631578946948;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01849999930709600449) ) ) {
              sum += (double)0.8842412647058822683;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.23895031213760376) ) ) {
                sum += (double)0.8221099347826086312;
              } else {
                sum += (double)0.7668682624999999531;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.59090900421142578) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5696000158786773682) ) ) {
              sum += (double)0.74624101388888886;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2258335724472999573) ) ) {
                sum += (double)0.6724344722222221904;
              } else {
                sum += (double)0.6313173055555556523;
              }
            }
          } else {
            sum += (double)0.516458172413793104;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5454215109348297119) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.181261062622070312) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1717.01214599609375) ) ) {
            sum += (double)0.3345300249999999531;
          } else {
            sum += (double)0.1577142159090909324;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.25753879547119141) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1133000031113624573) ) ) {
              sum += (double)0.1104048000000000113;
            } else {
              sum += (double)0.05138535416666666772;
            }
          } else {
            sum += (double)0.2860467500000000163;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1114999987185001373) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.973813891410827637) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04374999925494194031) ) ) {
              sum += (double)0.3623431346153846433;
            } else {
              sum += (double)0.4885895576923077188;
            }
          } else {
            sum += (double)0.3402732822580645244;
          }
        } else {
          sum += (double)0.2213305789473684337;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709775060415267944) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.3285369873046875) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270794957876205444) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4116.89501953125) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999970197677612) ) ) {
            sum += (double)0.350100008333333379;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3648999929428100586) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1203549988567829132) ) ) {
                sum += (double)0.05182084999999999469;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.721008777618408203) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08074999973177909851) ) ) {
                    sum += (double)0.33072952272727274;
                  } else {
                    sum += (double)0.2337438362068965381;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2659490704536437988) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.62175369262695312) ) ) {
                      sum += (double)0.08761052941176471209;
                    } else {
                      sum += (double)0.2065823088235294036;
                    }
                  } else {
                    sum += (double)0.2167675568181818002;
                  }
                }
              }
            } else {
              sum += (double)0.0455603229166666665;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.488390207290649414) ) ) {
            sum += (double)0.2602734444444444462;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.98217391967773438) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1944.25048828125) ) ) {
                sum += (double)0.04801755555555554944;
              } else {
                sum += (double)0.1316469843749999702;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1536365002393722534) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0960539989173412323) ) ) {
                  sum += (double)0.006437312500000002061;
                } else {
                  sum += (double)0.01437634210526315959;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2348.025634765625) ) ) {
                  sum += (double)0.08820199999999998874;
                } else {
                  sum += (double)0.01757930882352941315;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9910407364368438721) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.701851844787597656) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3123829960823059082) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2072.83349609375) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7142499983310699463) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07974999770522117615) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5746999979019165039) ) ) {
                      sum += (double)0.3702972499999999667;
                    } else {
                      sum += (double)0.4811662812499999387;
                    }
                  } else {
                    sum += (double)0.3393669687499999421;
                  }
                } else {
                  sum += (double)0.2916571428571428926;
                }
              } else {
                sum += (double)0.250814236111111144;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2402059957385063171) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.194331884384155273) ) ) {
                  sum += (double)0.4892703359374999672;
                } else {
                  sum += (double)0.3997116666666666318;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.986410379409790039) ) ) {
                  sum += (double)0.4081793695652173315;
                } else {
                  sum += (double)0.3197277272727273023;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9944.02734375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.85156774520874023) ) ) {
                sum += (double)0.4487845555555555754;
              } else {
                sum += (double)0.3269872708333333988;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1208999976515769958) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2871225029230117798) ) ) {
                  sum += (double)0.1791964107142856866;
                } else {
                  sum += (double)0.1006391964285714286;
                }
              } else {
                sum += (double)0.2760956428571428312;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.652918398380279541) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.21442103385925293) ) ) {
              sum += (double)0.03626365625000000509;
            } else {
              sum += (double)0.01337750000000000224;
            }
          } else {
            sum += (double)0.1220051666666666645;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07202149927616119385) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1919500008225440979) ) ) {
          sum += (double)0.02995378571428571404;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1559000015258789062) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04693849943578243256) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8012000024318695068) ) ) {
                sum += (double)0.002500000000000001353;
              } else {
                sum += (double)0.002789625000000000004;
              }
            } else {
              sum += (double)0.00400801562499999986;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2327499985694885254) ) ) {
              sum += (double)0.01063736666666666858;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)199.3842544555664062) ) ) {
                sum += (double)0.005620363636363636881;
              } else {
                sum += (double)0.002500000000000000052;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.2495574951171875) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26757.1796875) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.02875232696533203) ) ) {
              sum += (double)0.2859257656249999946;
            } else {
              sum += (double)0.1952340434782608991;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.10780143737792969) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
                sum += (double)0.2024889107142856803;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36350345611572266) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.09579658508300781) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.32065200805664062) ) ) {
                      sum += (double)0.08774200000000000055;
                    } else {
                      sum += (double)0.02489034375000000188;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2314575016498565674) ) ) {
                      sum += (double)0.1833175999999999972;
                    } else {
                      sum += (double)0.07538032692307691796;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434595003724098206) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8108.449462890625) ) ) {
                      sum += (double)0.03488256428571427648;
                    } else {
                      sum += (double)0.007884615384615385747;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.612562030553817749) ) ) {
                      sum += (double)0.1579731428571428675;
                    } else {
                      sum += (double)0.02220192708333333306;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2563490048050880432) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11184.64306640625) ) ) {
                  sum += (double)0.1588677333333333441;
                } else {
                  sum += (double)0.03154902380952379765;
                }
              } else {
                sum += (double)0.2933045795454545801;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2465620040893554688) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-32385.9033203125) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)132.9972915649414062) ) ) {
                sum += (double)0.1195820874999999894;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6402493715286254883) ) ) {
                  sum += (double)0.04270960714285713944;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)448.4499969482421875) ) ) {
                    sum += (double)0.01579888235294117302;
                  } else {
                    sum += (double)0.002500000000000000486;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1771000027656555176) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13957.17626953125) ) ) {
                  sum += (double)0.01179281250000000121;
                } else {
                  sum += (double)0.002757159999999999819;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.38333320617675781) ) ) {
                  sum += (double)0.05261259210526315205;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)94.58333206176757812) ) ) {
                    sum += (double)0.0274590588235294128;
                  } else {
                    sum += (double)0.008083620689655174676;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)73.6649169921875) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.18434906005859375) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3515499979257583618) ) ) {
                  sum += (double)0.04305307894736840751;
                } else {
                  sum += (double)0.1042426964285714241;
                }
              } else {
                sum += (double)0.1373654404761904535;
              }
            } else {
              sum += (double)0.03539584999999998566;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4643076509237289429) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.25) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.3125) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8157999813556671143) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1080410145223140717) ) ) {
                  sum += (double)0.419756041666666635;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.318896770477294922) ) ) {
                    sum += (double)0.4367265104166666578;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4756965041160583496) ) ) {
                      sum += (double)0.4847866080246913123;
                    } else {
                      sum += (double)0.5721654166666667596;
                    }
                  }
                }
              } else {
                sum += (double)0.5503340760869565029;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4165.4921875) ) ) {
                sum += (double)0.4767407211538461365;
              } else {
                sum += (double)0.2916442619047619478;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02460000012069940567) ) ) {
              sum += (double)0.6770350441176471445;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.703422665596008301) ) ) {
                sum += (double)0.6268096710526315229;
              } else {
                sum += (double)0.5120657499999999862;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4462479948997497559) ) ) {
            sum += (double)0.2252490333333333206;
          } else {
            sum += (double)0.3464782222222221875;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.76114368438720703) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.78798770904541016) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6995500028133392334) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2394.9312744140625) ) ) {
                  sum += (double)0.6692955499999999613;
                } else {
                  sum += (double)0.70722707142857133;
                }
              } else {
                sum += (double)0.7377540624999999741;
              }
            } else {
              sum += (double)0.7647276578947369563;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1788.03802490234375) ) ) {
              sum += (double)0.8015661562499998283;
            } else {
              sum += (double)0.8472565092592593272;
            }
          }
        } else {
          sum += (double)0.5661656764705882416;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5457390248775482178) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.2421875) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8602827489376068115) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.369145393371582031) ) ) {
              sum += (double)0.4809333235294117603;
            } else {
              sum += (double)0.3681139230769229775;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.222748637199401855) ) ) {
              sum += (double)0.3610233690476191137;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2471.7059326171875) ) ) {
                sum += (double)0.276302124999999954;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4290219992399215698) ) ) {
                  sum += (double)0.06906861538461539496;
                } else {
                  sum += (double)0.1575469090909090708;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1759499981999397278) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1962.20025634765625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)45.13120651245117188) ) ) {
                sum += (double)0.3394235833333333896;
              } else {
                sum += (double)0.2197418684210525885;
              }
            } else {
              sum += (double)0.08244471666666665366;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.406366497278213501) ) ) {
              sum += (double)0.1801632656249999853;
            } else {
              sum += (double)0.0671703148148148077;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3878999948501586914) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.8768768310546875) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6037090122699737549) ) ) {
              sum += (double)0.392991600000000052;
            } else {
              sum += (double)0.4804733260869565314;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2647.2047119140625) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.029400944709777832) ) ) {
                sum += (double)0.4980516666666667258;
              } else {
                sum += (double)0.3447525803571429015;
              }
            } else {
              sum += (double)0.1107966749999999834;
            }
          }
        } else {
          sum += (double)0.5527649659090908552;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3730200082063674927) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.461220264434814453) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2471444979310035706) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4202.166259765625) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003499999875202775002) ) ) {
            sum += (double)0.4040934999999999944;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6189.88818359375) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12839.53271484375) ) ) {
                sum += (double)0.2969445000000000001;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8573.837890625) ) ) {
                  sum += (double)0.1798134558823529239;
                } else {
                  sum += (double)0.1209396875000000038;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.57756185531616211) ) ) {
                sum += (double)0.2073957083333333451;
              } else {
                sum += (double)0.3225024749999999552;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.44529438018798828) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3511500060558319092) ) ) {
              sum += (double)0.06872164999999999524;
            } else {
              sum += (double)0.3002108750000000437;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.645833253860473633) ) ) {
              sum += (double)0.1059271666666666556;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1802460029721260071) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2277.8992919921875) ) ) {
                  sum += (double)0.01459536666666666829;
                } else {
                  sum += (double)0.008977538461538462147;
                }
              } else {
                sum += (double)0.05039174999999999904;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7430075705051422119) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
            sum += (double)0.5396538088235294239;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2499.01025390625) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3387420028448104858) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.113793134689331055) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4607000052928924561) ) ) {
                    sum += (double)0.3407372812500000236;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.30276450514793396) ) ) {
                      sum += (double)0.4448472840909091786;
                    } else {
                      sum += (double)0.4053207105263157972;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7024.548095703125) ) ) {
                    sum += (double)0.3752402386363636322;
                  } else {
                    sum += (double)0.2820186704545454282;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3053927570581436157) ) ) {
                  sum += (double)0.48374327631578945;
                } else {
                  sum += (double)0.4067500333333333717;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2983939945697784424) ) ) {
                sum += (double)0.2376461206896551825;
              } else {
                sum += (double)0.3441722840909091086;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5359.331298828125) ) ) {
            sum += (double)0.3203233571428571458;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09555000066757202148) ) ) {
              sum += (double)0.03424026000000000153;
            } else {
              sum += (double)0.09602816666666667833;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2587810009717941284) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07237700000405311584) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.96186447143554688) ) ) {
            sum += (double)0.09032610416666665698;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06672349944710731506) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04427749849855899811) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.01553550036624073982) ) ) {
                  sum += (double)0.002500000000000001353;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2851946651935577393) ) ) {
                    sum += (double)0.006772687500000000929;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6519214212894439697) ) ) {
                      sum += (double)0.003550192307692308889;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01530000008642673492) ) ) {
                  sum += (double)0.002499999999999999618;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)105.2166175842285156) ) ) {
                    sum += (double)0.0149188809523809543;
                  } else {
                    sum += (double)0.004095117647058824605;
                  }
                }
              }
            } else {
              sum += (double)0.01734081250000000032;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002999999924213625491) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.24073982238769531) ) ) {
              sum += (double)0.3439595434782608541;
            } else {
              sum += (double)0.04370491666666666969;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1818514987826347351) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23505.36328125) ) ) {
                sum += (double)0.2291445227272727314;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1474059969186782837) ) ) {
                  sum += (double)0.005875160000000000798;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5945.1162109375) ) ) {
                    sum += (double)0.1386360937499999946;
                  } else {
                    sum += (double)0.07173150000000000359;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1948219984769821167) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6862999796867370605) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.35635089874267578) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1587870046496391296) ) ) {
                      sum += (double)0.1000813043478260694;
                    } else {
                      sum += (double)0.02255841666666666759;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3980999886989593506) ) ) {
                      sum += (double)0.02195091924778761611;
                    } else {
                      sum += (double)0.06251969117647059038;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)84.40740585327148438) ) ) {
                    sum += (double)0.1276033928571428666;
                  } else {
                    sum += (double)0.01379595833333333542;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4409.20263671875) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.12142848968505859) ) ) {
                    sum += (double)0.2106778035714285957;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11949.03173828125) ) ) {
                      sum += (double)0.05011094047619046171;
                    } else {
                      sum += (double)0.1406393837209302389;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.27910041809082031) ) ) {
                    sum += (double)0.03182655263157894293;
                  } else {
                    sum += (double)0.005796727272727272839;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.04439830780029297) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9533.19677734375) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16459.994140625) ) ) {
              sum += (double)0.4035407500000000591;
            } else {
              sum += (double)0.2714994000000000018;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6313525736331939697) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2991515100002288818) ) ) {
                sum += (double)0.09867196666666665228;
              } else {
                sum += (double)0.3343948124999999716;
              }
            } else {
              sum += (double)0.01393419047619047502;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3280185163021087646) ) ) {
            sum += (double)0.1974380833333333196;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2938054949045181274) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.95000076293945312) ) ) {
                sum += (double)0.02400749999999999759;
              } else {
                sum += (double)0.1699664868421052744;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7171.659423828125) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9026442766189575195) ) ) {
                  sum += (double)0.05850309782608695969;
                } else {
                  sum += (double)0.0308549821428571458;
                }
              } else {
                sum += (double)0.02398702777777778072;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4077123850584030151) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6145009994506835938) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.66363668441772461) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5349995195865631104) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1938.53759765625) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3087.5921630859375) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.357011556625366211) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5004859864711761475) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4472520053386688232) ) ) {
                      sum += (double)0.4648888374999999296;
                    } else {
                      sum += (double)0.5455106413043477875;
                    }
                  } else {
                    sum += (double)0.4573625250000000197;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7037499845027923584) ) ) {
                    sum += (double)0.5165476470588235003;
                  } else {
                    sum += (double)0.3450255374999999236;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.32770252227783203) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2443.495849609375) ) ) {
                    sum += (double)0.4921099021739130386;
                  } else {
                    sum += (double)0.5692672352941176017;
                  }
                } else {
                  sum += (double)0.5903012750000000697;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4699269980192184448) ) ) {
                sum += (double)0.3508684736842105356;
              } else {
                sum += (double)0.4375111833333333311;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.617925882339477539) ) ) {
              sum += (double)0.532513499999999973;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05345000140368938446) ) ) {
                sum += (double)0.675340700000000016;
              } else {
                sum += (double)0.5812265138888886851;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14742.8818359375) ) ) {
            sum += (double)0.3629971805555555209;
          } else {
            sum += (double)0.2801623095238095495;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.767405033111572266) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7701259851455688477) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7385499775409698486) ) ) {
              sum += (double)0.6806866607142856296;
            } else {
              sum += (double)0.7679225208333333441;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03770000115036964417) ) ) {
              sum += (double)0.8840978600000002352;
            } else {
              sum += (double)0.7932248181818182253;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.55806446075439453) ) ) {
            sum += (double)0.7154076136363637373;
          } else {
            sum += (double)0.5240357794117647128;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5498940050601959229) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.48774957656860352) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7528514862060546875) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1142499968409538269) ) ) {
              sum += (double)0.3869971249999999974;
            } else {
              sum += (double)0.484737329545454565;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3201.2772216796875) ) ) {
              sum += (double)0.3760424099999999936;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.038661003112792969) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05894999951124191284) ) ) {
                  sum += (double)0.1817631785714285686;
                } else {
                  sum += (double)0.300549045454545416;
                }
              } else {
                sum += (double)0.08897064285714284537;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2565499991178512573) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08430000022053718567) ) ) {
              sum += (double)0.1803838571428571513;
            } else {
              sum += (double)0.04215529166666667077;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4446270018815994263) ) ) {
              sum += (double)0.297858392857142884;
            } else {
              sum += (double)0.1374646406249999953;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9599174857139587402) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4294999986886978149) ) ) {
            sum += (double)0.624871210526315779;
          } else {
            sum += (double)0.5023252166666666296;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1487499997019767761) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.973813891410827637) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4628.8193359375) ) ) {
                sum += (double)0.4184804605263158228;
              } else {
                sum += (double)0.4913994666666667288;
              }
            } else {
              sum += (double)0.3187301547619047493;
            }
          } else {
            sum += (double)0.2300275875000000192;
          }
        }
      }
    }
  }
  return sum;
}
