#include "prediction.h"
double predict_margin_unit8(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.972972869873046875) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1771675050258636475) ) ) {
        sum += (double)0.03615606000000000375;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.32023906707763672) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2008.05438232421875) ) ) {
              sum += (double)0.2262671111111110855;
            } else {
              sum += (double)0.1151823055555555447;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
              sum += (double)0.1823398281249999642;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.61263751983642578) ) ) {
                sum += (double)0.2661604318181817752;
              } else {
                sum += (double)0.3544937499999999964;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2833500057458877563) ) ) {
            sum += (double)0.3339138833333333278;
          } else {
            sum += (double)0.5181097291666667548;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5738690197467803955) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08994349837303161621) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1666999980807304382) ) ) {
                sum += (double)0.01205166666666666539;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1019420921802520752) ) ) {
                  sum += (double)0.007534153846153846673;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8225499987602233887) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.002858281249999999711;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.434967041015625) ) ) {
                      sum += (double)0.006394181818181817953;
                    } else {
                      sum += (double)0.003179321428571430224;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.26666641235351562) ) ) {
                sum += (double)0.05739827083333332719;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1159740015864372253) ) ) {
                    sum += (double)0.009940714285714287099;
                  } else {
                    sum += (double)0.002500000000000000486;
                  }
                } else {
                  sum += (double)0.02156900000000000137;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09213399514555931091) ) ) {
              sum += (double)0.1686949736842105751;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2200039997696876526) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.74688053131103516) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6191464662551879883) ) ) {
                    sum += (double)0.1219631666666666781;
                  } else {
                    sum += (double)0.04311594444444443591;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4539000093936920166) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.768054276704788208) ) ) {
                      sum += (double)0.028822774532710288;
                    } else {
                      sum += (double)0.01029185211267605315;
                    }
                  } else {
                    sum += (double)0.06368809999999999749;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7502000033855438232) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1358999982476234436) ) ) {
                    sum += (double)0.1153819642857142613;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5750868022441864014) ) ) {
                      sum += (double)0.07442215625000001;
                    } else {
                      sum += (double)0.02374351973684210235;
                    }
                  }
                } else {
                  sum += (double)0.1507554999999999867;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03250000067055225372) ) ) {
            sum += (double)0.2680658365384615549;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.713367760181427002) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8175.115966796875) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.83168125152587891) ) ) {
                  sum += (double)0.07955634259259258823;
                } else {
                  sum += (double)0.027615640625;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1395500004291534424) ) ) {
                  sum += (double)0.1155352386363636408;
                } else {
                  sum += (double)0.2704435000000000588;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2916000038385391235) ) ) {
                sum += (double)0.01271772619047619422;
              } else {
                sum += (double)0.03211355000000000459;
              }
            }
          }
        }
      } else {
        sum += (double)0.2869868804347826541;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5139805078506469727) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.012146264314651489) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363225013017654419) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.24642181396484375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002949999994598329067) ) ) {
              sum += (double)0.5107708452380951281;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.174330495297908783) ) ) {
                sum += (double)0.2284437624999999805;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.499390125274658203) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.129842877388000488) ) ) {
                    sum += (double)0.3397024852941176176;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2719189971685409546) ) ) {
                      sum += (double)0.3679187720588235067;
                    } else {
                      sum += (double)0.4280396346153846898;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.234261512756347656) ) ) {
                    sum += (double)0.2340473076923076934;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075499966740608215) ) ) {
                      sum += (double)0.3719584565217390892;
                    } else {
                      sum += (double)0.3105502500000000277;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000549999989743810147) ) ) {
              sum += (double)0.4135653035714285664;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4016999900341033936) ) ) {
                sum += (double)0.09752950806451611554;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2537815049290657043) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.85131311416625977) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11435.45751953125) ) ) {
                      sum += (double)0.3389817115384615165;
                    } else {
                      sum += (double)0.187688433333333321;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.61480140686035156) ) ) {
                      sum += (double)0.1272808046874999988;
                    } else {
                      sum += (double)0.2272569736842104948;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17324.61328125) ) ) {
                    sum += (double)0.3376557241379310459;
                  } else {
                    sum += (double)0.2124325441176470597;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.73880624771118164) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5063654780387878418) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.76573371887207031) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3701220005750656128) ) ) {
                    sum += (double)0.4472733235294117371;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.705384731292724609) ) ) {
                      sum += (double)0.4756605775862069452;
                    } else {
                      sum += (double)0.5618471142857142109;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4790.991455078125) ) ) {
                    sum += (double)0.5743289305555554503;
                  } else {
                    sum += (double)0.6191803194444444047;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2484.737060546875) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1284499987959861755) ) ) {
                    sum += (double)0.375627078124999958;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.450732499361038208) ) ) {
                      sum += (double)0.4403454916666666441;
                    } else {
                      sum += (double)0.5194893690476189985;
                    }
                  }
                } else {
                  sum += (double)0.5622174285714285347;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.034899234771728516) ) ) {
                sum += (double)0.473057779411764745;
              } else {
                sum += (double)0.3622306538461537717;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22507.1455078125) ) ) {
              sum += (double)0.2476137403846153939;
            } else {
              sum += (double)0.4043595441176470184;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.896885991096496582) ) ) {
          sum += (double)0.306397064814814879;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904369920492172241) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2157704979181289673) ) ) {
              sum += (double)0.1014855312499999968;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.876748323440551758) ) ) {
                sum += (double)0.06314448958333333806;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17592.8583984375) ) ) {
                  sum += (double)0.05782214705882353367;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5047.049072265625) ) ) {
                    sum += (double)0.02767745652173912718;
                  } else {
                    sum += (double)0.008525647058823530161;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2812.8260498046875) ) ) {
              sum += (double)0.2247613250000000673;
            } else {
              sum += (double)0.07980326249999999955;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.044191658496856689) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7109369933605194092) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7665.83203125) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.714000016450881958) ) ) {
              sum += (double)0.4163836346153845791;
            } else {
              sum += (double)0.5799873611111110439;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.455137014389038086) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.56411981582641602) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2239.1119384765625) ) ) {
                  sum += (double)0.5916252812500000235;
                } else {
                  sum += (double)0.6621279558823529587;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01455000042915344238) ) ) {
                  sum += (double)0.645771236111111202;
                } else {
                  sum += (double)0.7208486153846151989;
                }
              }
            } else {
              sum += (double)0.591351524999999989;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5530.912109375) ) ) {
            sum += (double)0.6867827499999998864;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8140759766101837158) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.205824196338653564) ) ) {
                sum += (double)0.8231172499999998005;
              } else {
                sum += (double)0.7632752321428569742;
              }
            } else {
              sum += (double)0.8529285624999998205;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.292340755462646484) ) ) {
          sum += (double)0.5060716764705882609;
        } else {
          sum += (double)0.2954843359375000089;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.242690086364746094) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2468404993414878845) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.487012863159179688) ) ) {
          sum += (double)0.172511863636363616;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4549999982118606567) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7560500204563140869) ) ) {
              sum += (double)0.05666757142857142132;
            } else {
              sum += (double)0.008971785714285715127;
            }
          } else {
            sum += (double)0.1028611136363636186;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5296977460384368896) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9600000083446502686) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3974364995956420898) ) ) {
              sum += (double)0.3476219852941176414;
            } else {
              sum += (double)0.2056915500000000008;
            }
          } else {
            sum += (double)0.5012561249999999413;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.943595051765441895) ) ) {
            sum += (double)0.3402739062500000355;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9249216616153717041) ) ) {
              sum += (double)0.1706025595238095383;
            } else {
              sum += (double)0.07561730833333332735;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5723760128021240234) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.19934558868408203) ) ) {
            sum += (double)0.07384081944444444157;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165290027856826782) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7014.650146484375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.375) ) ) {
                    sum += (double)0.006837354166666667794;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8701000213623046875) ) ) {
                      sum += (double)0.002768908602150537811;
                    } else {
                      sum += (double)0.005531874999999999466;
                    }
                  }
                } else {
                  sum += (double)0.01086740476190476215;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07297449931502342224) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1414999961853027344) ) ) {
                      sum += (double)0.003304794117647058983;
                    } else {
                      sum += (double)0.005385272727272726392;
                    }
                  } else {
                    sum += (double)0.01157817187500000122;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1299999989569187164) ) ) {
                    sum += (double)0.04130694230769230146;
                  } else {
                    sum += (double)0.01001646428571428826;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1349999979138374329) ) ) {
                  sum += (double)0.09925179687499999237;
                } else {
                  sum += (double)0.02468152941176470633;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2971214950084686279) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5356979668140411377) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1662964969873428345) ) ) {
                      sum += (double)0.04599365384615384383;
                    } else {
                      sum += (double)0.0127939821428571434;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.98931694030761719) ) ) {
                      sum += (double)0.01010702500000000038;
                    } else {
                      sum += (double)0.002748970588235294561;
                    }
                  }
                } else {
                  sum += (double)0.04630201562499999118;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6713410913944244385) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2196839973330497742) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009550000075250864029) ) ) {
                sum += (double)0.1771190781249999957;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.47294712066650391) ) ) {
                  sum += (double)0.1348063823529412064;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1954500004649162292) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1741219982504844666) ) ) {
                      sum += (double)0.02011920258620688781;
                    } else {
                      sum += (double)0.06028888124999999543;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4274067133665084839) ) ) {
                      sum += (double)0.05614726973684210781;
                    } else {
                      sum += (double)0.1268246406250000125;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09155000001192092896) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.418182373046875) ) ) {
                  sum += (double)0.04370171666666666788;
                } else {
                  sum += (double)0.1665913529411764404;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9026.51318359375) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3484094440937042236) ) ) {
                    sum += (double)0.1352512833333333608;
                  } else {
                    sum += (double)0.0723711973684210419;
                  }
                } else {
                  sum += (double)0.290636066666666637;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3897004872560501099) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6927500069141387939) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4014499932527542114) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09930000081658363342) ) ) {
                    sum += (double)0.002973826923076922351;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.10282516479492188) ) ) {
                      sum += (double)0.03195536718749999311;
                    } else {
                      sum += (double)0.01099493750000000297;
                    }
                  }
                } else {
                  sum += (double)0.04877715909090909324;
                }
              } else {
                sum += (double)0.08483623333333335792;
              }
            } else {
              sum += (double)0.1071258804347826193;
            }
          }
        }
      } else {
        sum += (double)0.3829467361111111301;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347345173358917236) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8318139314651489258) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.5105291153846154284;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.268335491418838501) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11835.208984375) ) ) {
                  sum += (double)0.3330195967741935159;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6008000075817108154) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.519128561019897461) ) ) {
                      sum += (double)0.3459113750000000209;
                    } else {
                      sum += (double)0.2471239207317073305;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5851.96630859375) ) ) {
                      sum += (double)0.2393818676470588214;
                    } else {
                      sum += (double)0.1738511315789473821;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.345059394836425781) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09455000236630439758) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5261999964714050293) ) ) {
                      sum += (double)0.3497346718750000694;
                    } else {
                      sum += (double)0.4714979797297297326;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4109.2623291015625) ) ) {
                      sum += (double)0.3946371785714286595;
                    } else {
                      sum += (double)0.3024640882352940818;
                    }
                  }
                } else {
                  sum += (double)0.2900094130434782702;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3113500028848648071) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.84718418121337891) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.53716278076171875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7213999927043914795) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4671999961137771606) ) ) {
                      sum += (double)0.2177196904761904972;
                    } else {
                      sum += (double)0.2958468593749999931;
                    }
                  } else {
                    sum += (double)0.1810779868421052985;
                  }
                } else {
                  sum += (double)0.2913096911764705976;
                }
              } else {
                sum += (double)0.1592606428571428645;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25119.55078125) ) ) {
                sum += (double)0.241571633333333341;
              } else {
                sum += (double)0.04375765789473683859;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005999999848427250981) ) ) {
            sum += (double)0.6314661666666666617;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5390098392963409424) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1748000010848045349) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4210845082998275757) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3964640051126480103) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.729305744171142578) ) ) {
                      sum += (double)0.4931018124999999586;
                    } else {
                      sum += (double)0.5402477656249998761;
                    }
                  } else {
                    sum += (double)0.3993862249999999836;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.562405109405517578) ) ) {
                    sum += (double)0.4861974062500000748;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8106500208377838135) ) ) {
                      sum += (double)0.5875376785714284678;
                    } else {
                      sum += (double)0.5261124565217391025;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4051220118999481201) ) ) {
                  sum += (double)0.3971540249999999106;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.301449999213218689) ) ) {
                    sum += (double)0.490056249999999971;
                  } else {
                    sum += (double)0.4339822857142857093;
                  }
                }
              }
            } else {
              sum += (double)0.3634858229166666455;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3836105018854141235) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-23230.71875) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.40079498291015625) ) ) {
              sum += (double)0.2668307833333333212;
            } else {
              sum += (double)0.09929535000000000444;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.157967329025268555) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3231.014404296875) ) ) {
                sum += (double)0.230042058823529405;
              } else {
                sum += (double)0.04682665909090908546;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3108319938182830811) ) ) {
                sum += (double)0.02723157000000000008;
              } else {
                sum += (double)0.01103540624999999921;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1777.24884033203125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.235925912857055664) ) ) {
              sum += (double)0.3844640520833332853;
            } else {
              sum += (double)0.1948035344827586113;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1095.6666259765625) ) ) {
              sum += (double)0.1147860833333333302;
            } else {
              sum += (double)0.220632649999999958;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.081818282604217529) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6528095006942749023) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7275.853759765625) ) ) {
            sum += (double)0.516642899999999905;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.399865150451660156) ) ) {
              sum += (double)0.577773083333333215;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.2876582145690918) ) ) {
                sum += (double)0.6640836041666666745;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.92327976226806641) ) ) {
                  sum += (double)0.5874687794117646744;
                } else {
                  sum += (double)0.6540898823529411876;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6771034896373748779) ) ) {
              sum += (double)0.7462004642857144043;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06469999998807907104) ) ) {
                sum += (double)0.7050049843750000322;
              } else {
                sum += (double)0.6543068906250000261;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03770000115036964417) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05879907682538032532) ) ) {
                sum += (double)0.8764204285714285447;
              } else {
                sum += (double)0.8245354624999998716;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.626961052417755127) ) ) {
                sum += (double)0.7449293375000000106;
              } else {
                sum += (double)0.795468729166666666;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1444999948143959045) ) ) {
          sum += (double)0.2882435499999999595;
        } else {
          sum += (double)0.4086797499999998973;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.099671125411987305) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601370066404342651) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7504999935626983643) ) ) {
          sum += (double)0.1666514874999999729;
        } else {
          sum += (double)0.1036162899999999859;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1352313011884689331) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.875) ) ) {
            sum += (double)0.3514951153846154197;
          } else {
            sum += (double)0.4724460208333333688;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.877565383911132812) ) ) {
            sum += (double)0.3751992708333333759;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.891695171594619751) ) ) {
              sum += (double)0.2597116499999999606;
            } else {
              sum += (double)0.1469789999999999708;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5781860053539276123) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8984000086784362793) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09646349772810935974) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2299999967217445374) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0722170025110244751) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1050000004470348358) ) ) {
                      sum += (double)0.003027700495049502616;
                    } else {
                      sum += (double)0.007204566666666667105;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5699.468505859375) ) ) {
                      sum += (double)0.02084220833333333411;
                    } else {
                      sum += (double)0.00741006756756756868;
                    }
                  }
                } else {
                  sum += (double)0.03281936538461538433;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.44345283508300781) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03070000093430280685) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.06666660308837891) ) ) {
                      sum += (double)0.03243497916666667619;
                    } else {
                      sum += (double)0.00459017391304347884;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                      sum += (double)0.1313080555555555251;
                    } else {
                      sum += (double)0.03505154255319149065;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1050985008478164673) ) ) {
                    sum += (double)0.04270043333333332219;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8909524083137512207) ) ) {
                      sum += (double)0.02015919943820223409;
                    } else {
                      sum += (double)0.00534658695652174068;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.1227374000000000104;
            }
          } else {
            sum += (double)0.1405253499999999933;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004850000143051147461) ) ) {
            sum += (double)0.2544403624999999058;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434910014271736145) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.125) ) ) {
                sum += (double)0.172783785714285737;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1096915006637573242) ) ) {
                  sum += (double)0.09701218333333333499;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.52360057830810547) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2755499929189682007) ) ) {
                      sum += (double)0.04338974431818179434;
                    } else {
                      sum += (double)0.09649201470588235352;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.49122810363769531) ) ) {
                      sum += (double)0.02011130921052631249;
                    } else {
                      sum += (double)0.006135529411764706342;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.436163976788520813) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09700000286102294922) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2838274985551834106) ) ) {
                    sum += (double)0.150202625000000034;
                  } else {
                    sum += (double)0.09069298076923078267;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)85.686187744140625) ) ) {
                    sum += (double)0.2960929852941176499;
                  } else {
                    sum += (double)0.1459464347826086861;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
                  sum += (double)0.162115293478260869;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6815336346626281738) ) ) {
                    sum += (double)0.07269408333333333971;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                      sum += (double)0.01337444444444444401;
                    } else {
                      sum += (double)0.035659299999999991;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.3406156562500000651;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4595739990472793579) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.89961814880371094) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
              sum += (double)0.4388378214285714729;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.509975433349609375) ) ) {
                sum += (double)0.3134303124999999746;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.87546730041503906) ) ) {
                  sum += (double)0.1962782177419354623;
                } else {
                  sum += (double)0.2457740104166666884;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596890121698379517) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
                sum += (double)0.4884296413043478502;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.144230842590332031) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3942669332027435303) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0733999982476234436) ) ) {
                      sum += (double)0.3922667291666667722;
                    } else {
                      sum += (double)0.473425355263157932;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4670.66162109375) ) ) {
                      sum += (double)0.3931236833333333625;
                    } else {
                      sum += (double)0.3490940357142857664;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5090.98779296875) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2777435034513473511) ) ) {
                      sum += (double)0.4264545595238095621;
                    } else {
                      sum += (double)0.3663232685185184856;
                    }
                  } else {
                    sum += (double)0.2763425208333332717;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2415999993681907654) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00544999993871897459) ) ) {
                  sum += (double)0.5659860166666667025;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2401445209980010986) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08430000022053718567) ) ) {
                      sum += (double)0.486754855769230832;
                    } else {
                      sum += (double)0.4371752631578946779;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4860000014305114746) ) ) {
                      sum += (double)0.458099079545454535;
                    } else {
                      sum += (double)0.5600419999999999288;
                    }
                  }
                }
              } else {
                sum += (double)0.3798163303571428506;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05289999954402446747) ) ) {
            sum += (double)0.421061196428571427;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3467229902744293213) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1626778170466423035) ) ) {
                sum += (double)0.2806295499999999499;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.7700347900390625) ) ) {
                  sum += (double)0.08050715217391303524;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2687500119209289551) ) ) {
                    sum += (double)0.1022223611111111041;
                  } else {
                    sum += (double)0.2275233846153845996;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.56195259094238281) ) ) {
                sum += (double)0.4250836875000000847;
              } else {
                sum += (double)0.2287953690476190738;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6143000125885009766) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1962999999523162842) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04725000075995922089) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.396270394325256348) ) ) {
                sum += (double)0.1213559700000000213;
              } else {
                sum += (double)0.0772087142857142833;
              }
            } else {
              sum += (double)0.1822943571428571607;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3663499951362609863) ) ) {
              sum += (double)0.05262861607142858139;
            } else {
              sum += (double)0.01726344166666666721;
            }
          }
        } else {
          sum += (double)0.2545294999999999641;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6792999804019927979) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6571570038795471191) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.00396823883056641) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468925237655639648) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.54652214050292969) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1959781572222709656) ) ) {
                    sum += (double)0.5919680119047617817;
                  } else {
                    sum += (double)0.4719687115384614828;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1441270485520362854) ) ) {
                    sum += (double)0.424301308823529455;
                  } else {
                    sum += (double)0.5284123809523809667;
                  }
                }
              } else {
                sum += (double)0.6178403804347826211;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08734999969601631165) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1200214438140392303) ) ) {
                  sum += (double)0.6871768750000000203;
                } else {
                  sum += (double)0.6119326093749999362;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3571262061595916748) ) ) {
                  sum += (double)0.5605379210526315603;
                } else {
                  sum += (double)0.6176245921052633259;
                }
              }
            }
          } else {
            sum += (double)0.3648428035714285089;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7384830117225646973) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06974999979138374329) ) ) {
              sum += (double)0.7417243636363636261;
            } else {
              sum += (double)0.6836686100000000099;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03590000048279762268) ) ) {
              sum += (double)0.8572313484848486098;
            } else {
              sum += (double)0.7724705400000000388;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6661100089550018311) ) ) {
            sum += (double)0.3820962717391304109;
          } else {
            sum += (double)0.5879726093750000659;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.350865721702575684) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.218298196792602539) ) ) {
              sum += (double)0.4437304821428571522;
            } else {
              sum += (double)0.3935906710526316243;
            }
          } else {
            sum += (double)0.138555325000000007;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4569820016622543335) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2322959974408149719) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            sum += (double)0.009029159090909092897;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.1976654705882352758;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.620000004768371582) ) ) {
                sum += (double)0.03351300000000000112;
              } else {
                sum += (double)0.1319585673076923149;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.32023906707763672) ) ) {
            sum += (double)0.0911929351851851755;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8499999940395355225) ) ) {
              sum += (double)0.2421287053571428982;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.48015880584716797) ) ) {
                sum += (double)0.2905460500000000001;
              } else {
                sum += (double)0.4164549107142857531;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.02380943298339844) ) ) {
            sum += (double)0.08115029032258064268;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07185503095388412476) ) ) {
              sum += (double)0.05612525000000000153;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.21538448333740234) ) ) {
                  sum += (double)0.01417590789473684165;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2272.49603271484375) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.07173919677734375) ) ) {
                      sum += (double)0.006140176470588235708;
                    } else {
                      sum += (double)0.002588042207792209688;
                    }
                  } else {
                    sum += (double)0.00842479999999999965;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1365000009536743164) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.53365325927734375) ) ) {
                      sum += (double)0.05496824000000000154;
                    } else {
                      sum += (double)0.02303992105263157411;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08126100152730941772) ) ) {
                      sum += (double)0.0251112875000000027;
                    } else {
                      sum += (double)0.007937987804878051876;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-77387.9609375) ) ) {
                    sum += (double)0.01715698611111110897;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.382118716835975647) ) ) {
                      sum += (double)0.007675687499999999351;
                    } else {
                      sum += (double)0.004295709302325582089;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2253270000219345093) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.35844802856445312) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1873414963483810425) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.76805353164672852) ) ) {
                    sum += (double)0.06567070833333331359;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.149976000189781189) ) ) {
                      sum += (double)0.03468320833333332631;
                    } else {
                      sum += (double)0.009959611111111111789;
                    }
                  }
                } else {
                  sum += (double)0.09439655357142855141;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1836884990334510803) ) ) {
                  sum += (double)0.1606402109375000276;
                } else {
                  sum += (double)0.05582989583333333033;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1862999945878982544) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.19900226593017578) ) ) {
                  sum += (double)0.02296584090909090797;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4834999889135360718) ) ) {
                    sum += (double)0.0105141250000000009;
                  } else {
                    sum += (double)0.006802764705882352776;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3303465694189071655) ) ) {
                  sum += (double)0.05295371875000000339;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5749999880790710449) ) ) {
                    sum += (double)0.01565969047619047635;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8550000190734863281) ) ) {
                      sum += (double)0.03465516249999999604;
                    } else {
                      sum += (double)0.02358814285714285613;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.631920456886291504) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6825663149356842041) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05019999854266643524) ) ) {
                  sum += (double)0.05319389814814815681;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7450.84130859375) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2061147689819335938) ) ) {
                      sum += (double)0.1832570657894737054;
                    } else {
                      sum += (double)0.0815650562500000037;
                    }
                  } else {
                    sum += (double)0.2340506637931034084;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6900000274181365967) ) ) {
                  sum += (double)0.07743864062499999923;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3384380042552947998) ) ) {
                    sum += (double)0.01897693333333333107;
                  } else {
                    sum += (double)0.03753110937500000327;
                  }
                }
              }
            } else {
              sum += (double)0.2217983499999999775;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9531540870666503906) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.4301280263157894468;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5278.861572265625) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                  sum += (double)0.3195000978260869595;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.234042167663574219) ) ) {
                    sum += (double)0.192903374999999988;
                  } else {
                    sum += (double)0.273187446428571401;
                  }
                }
              } else {
                sum += (double)0.154388011904761896;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3335030078887939453) ) ) {
                sum += (double)0.5169491499999999684;
              } else {
                sum += (double)0.6038862777777778135;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.113793134689331055) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.907989025115966797) ) ) {
                    sum += (double)0.3421996718749999999;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3943165093660354614) ) ) {
                      sum += (double)0.42999618749999996;
                    } else {
                      sum += (double)0.3791938815789474004;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07644999772310256958) ) ) {
                    sum += (double)0.2529761184210526648;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2915229946374893188) ) ) {
                      sum += (double)0.321281151785714314;
                    } else {
                      sum += (double)0.4094098020833332741;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08579999953508377075) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.74916553497314453) ) ) {
                    sum += (double)0.4825576458333333818;
                  } else {
                    sum += (double)0.5432195000000000773;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                    sum += (double)0.4827399772727272165;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2849733829498291016) ) ) {
                      sum += (double)0.3677011442307692168;
                    } else {
                      sum += (double)0.4454811562500000655;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345710039138793945) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.75618267059326172) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17848.5673828125) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.37664699554443359) ) ) {
                  sum += (double)0.3250215249999999778;
                } else {
                  sum += (double)0.2164032321428571159;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.40974330902099609) ) ) {
                  sum += (double)0.1004340588235294041;
                } else {
                  sum += (double)0.2098409659090909041;
                }
              }
            } else {
              sum += (double)0.1057825967741935352;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3665769994258880615) ) ) {
              sum += (double)0.3705727499999999508;
            } else {
              sum += (double)0.2309460624999999934;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.596799999475479126) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01754999998956918716) ) ) {
            sum += (double)0.1952779583333333624;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25422.712890625) ) ) {
              sum += (double)0.136799962499999983;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.866363763809204102) ) ) {
                sum += (double)0.07832935714285714501;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.926470756530761719) ) ) {
                  sum += (double)0.03624733823529411453;
                } else {
                  sum += (double)0.01922127857142856555;
                }
              }
            }
          }
        } else {
          sum += (double)0.2205240108695652457;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4212084412574768066) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5362260043621063232) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.397484302520751953) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.939125537872314453) ) ) {
            sum += (double)0.5090918166666665856;
          } else {
            sum += (double)0.6376073666666666195;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2237.23822021484375) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2495551556348800659) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.49028491973876953) ) ) {
                sum += (double)0.5203924629629629317;
              } else {
                sum += (double)0.4139405500000000182;
              }
            } else {
              sum += (double)0.5970162500000000261;
            }
          } else {
            sum += (double)0.3046550468750000018;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7556720077991485596) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.874904632568359375) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.892453193664550781) ) ) {
              sum += (double)0.6221265535714285422;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5989305078983306885) ) ) {
                sum += (double)0.6512169843750000853;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.78472232818603516) ) ) {
                  sum += (double)0.7224406190476189149;
                } else {
                  sum += (double)0.7505168499999999021;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1295500025153160095) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07271568477153778076) ) ) {
                sum += (double)0.6436181785714286674;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.87740373611450195) ) ) {
                  sum += (double)0.6151720882352941233;
                } else {
                  sum += (double)0.5402870789473683821;
                }
              }
            } else {
              sum += (double)0.6674875714285714023;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
            sum += (double)0.8511809375000001232;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1021500006318092346) ) ) {
              sum += (double)0.7787208593749999075;
            } else {
              sum += (double)0.7436831785714285159;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7671484947204589844) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9600000083446502686) ) ) {
          sum += (double)0.1967053541666667071;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3201.2772216796875) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.32692289352416992) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2998999953269958496) ) ) {
                sum += (double)0.5488940499999999112;
              } else {
                sum += (double)0.4009224444444444702;
              }
            } else {
              sum += (double)0.3538892720588235341;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.170329689979553223) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5774924755096435547) ) ) {
                sum += (double)0.3832937375000000091;
              } else {
                sum += (double)0.4498601718749999923;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1313.27392578125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2187.7200927734375) ) ) {
                  sum += (double)0.235084769230769236;
                } else {
                  sum += (double)0.3246559861111111278;
                }
              } else {
                sum += (double)0.158195656249999983;
              }
            }
          }
        }
      } else {
        sum += (double)0.6521387058823530092;
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2531539946794509888) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09405500069260597229) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6321.466796875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.08333349227905273) ) ) {
                sum += (double)0.005271666666666666688;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.55128097534179688) ) ) {
                  sum += (double)0.003681473684210526988;
                } else {
                  sum += (double)0.002500000000000001787;
                }
              }
            } else {
              sum += (double)0.006842175000000001554;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.30000019073486328) ) ) {
              sum += (double)0.006070022727272727722;
            } else {
              sum += (double)0.01917457500000000273;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.04871845245361328) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07499999925494194031) ) ) {
              sum += (double)0.1042108593749999784;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000118743628263) ) ) {
                sum += (double)0.08888133333333332609;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1255569979548454285) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09353150054812431335) ) ) {
                    sum += (double)0.008923625000000001001;
                  } else {
                    sum += (double)0.01859635416666666555;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                    sum += (double)0.09068217105263158551;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1772530004382133484) ) ) {
                      sum += (double)0.01866474999999999732;
                    } else {
                      sum += (double)0.0777633499999999811;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.81047439575195312) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.20714378356933594) ) ) {
                sum += (double)0.006105583333333333522;
              } else {
                sum += (double)0.06141577272727270081;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                sum += (double)0.002809482758620690437;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1040449999272823334) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07383849844336509705) ) ) {
                    sum += (double)0.01407819444444444526;
                  } else {
                    sum += (double)0.03344654166666666262;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1559500023722648621) ) ) {
                    sum += (double)0.004713520000000001424;
                  } else {
                    sum += (double)0.01343951923076923058;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0170499999076128006) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.62401199340820312) ) ) {
            sum += (double)0.1031665952380952378;
          } else {
            sum += (double)0.2621784861111111642;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.73924732208251953) ) ) {
            sum += (double)0.1374359891304347825;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16826.037109375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.41869926452636719) ) ) {
                sum += (double)0.04630479999999999319;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)120.9204177856445312) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5134499967098236084) ) ) {
                    sum += (double)0.03358216666666666989;
                  } else {
                    sum += (double)0.01593855000000000272;
                  }
                } else {
                  sum += (double)0.007080699999999999668;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.53207588195800781) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2202610000967979431) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.58660793304443359) ) ) {
                    sum += (double)0.06099333750000000137;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.42781448364257812) ) ) {
                      sum += (double)0.01561406944444444604;
                    } else {
                      sum += (double)0.02930508035714286461;
                    }
                  }
                } else {
                  sum += (double)0.08737718749999999479;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7950000166893005371) ) ) {
                  sum += (double)0.06901828409090909888;
                } else {
                  sum += (double)0.1744753125000000071;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1321288123726844788) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
          sum += (double)0.187831447916666644;
        } else {
          sum += (double)0.4169297857142857944;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075429320335388184) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.160416603088378906) ) ) {
              sum += (double)0.2104807586206896841;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7950000166893005371) ) ) {
                sum += (double)0.06011058333333333531;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.16666650772094727) ) ) {
                  sum += (double)0.07703476666666667083;
                } else {
                  sum += (double)0.1911237211538461545;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2454499974846839905) ) ) {
                sum += (double)0.1710500833333332971;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.83333349227905273) ) ) {
                  sum += (double)0.0108863928571428601;
                } else {
                  sum += (double)0.07145114473684210932;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2452500015497207642) ) ) {
                sum += (double)0.01524114285714285762;
              } else {
                sum += (double)0.04100817045454546034;
              }
            }
          }
        } else {
          sum += (double)0.3097982187500000206;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8247759044170379639) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.92792224884033203) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001149999992776429281) ) ) {
              sum += (double)0.5094925892857142813;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2362929955124855042) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.04346036911010742) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.185559496283531189) ) ) {
                    sum += (double)0.2280721617647059052;
                  } else {
                    sum += (double)0.3369233828125000052;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.088732719421386719) ) ) {
                    sum += (double)0.2184156500000000167;
                  } else {
                    sum += (double)0.120360196428571431;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.742063522338867188) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2713164985179901123) ) ) {
                    sum += (double)0.3054416666666666669;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3009689897298812866) ) ) {
                      sum += (double)0.4411124431818181924;
                    } else {
                      sum += (double)0.3683494941860465666;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1658999994397163391) ) ) {
                    sum += (double)0.254461683333333355;
                  } else {
                    sum += (double)0.4028768599999998923;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000207126140594) ) ) {
              sum += (double)0.5746401857142856562;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2439.1243896484375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.992016792297363281) ) ) {
                  sum += (double)0.4772964191176470305;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3222.9814453125) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3942845016717910767) ) ) {
                      sum += (double)0.4895914583333332293;
                    } else {
                      sum += (double)0.4273148269230769292;
                    }
                  } else {
                    sum += (double)0.3221845526315789132;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2414814159274101257) ) ) {
                  sum += (double)0.4730955166666667155;
                } else {
                  sum += (double)0.5708695714285714207;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.12855434417724609) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3607199937105178833) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.262449994683265686) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2000964954495429993) ) ) {
                  sum += (double)0.3331227499999999675;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1684999987483024597) ) ) {
                    sum += (double)0.172844965909090903;
                  } else {
                    sum += (double)0.294912634615384639;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2230640053749084473) ) ) {
                  sum += (double)0.02953009615384614983;
                } else {
                  sum += (double)0.2278665500000000288;
                }
              }
            } else {
              sum += (double)0.3482090833333333357;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4883221089839935303) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.56018543243408203) ) ) {
                sum += (double)0.09137230769230769711;
              } else {
                sum += (double)0.2912180333333333482;
              }
            } else {
              sum += (double)0.06550530434782608769;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.059573173522949219) ) ) {
          sum += (double)0.3142810000000000326;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.089089453220367432) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.57272720336914062) ) ) {
              sum += (double)0.3550678499999999627;
            } else {
              sum += (double)0.1265851153846153931;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.205419301986694336) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5381.6572265625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.325499996542930603) ) ) {
                  sum += (double)0.1954768269230769129;
                } else {
                  sum += (double)0.05888132500000000519;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.799242496490478516) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.732053697109222412) ) ) {
                    sum += (double)0.07818354411764705247;
                  } else {
                    sum += (double)0.02145673437500000141;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.64808320999145508) ) ) {
                    sum += (double)0.01810550000000000007;
                  } else {
                    sum += (double)0.01024899999999999943;
                  }
                }
              }
            } else {
              sum += (double)0.2007873750000000179;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567690074443817139) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005899999989196658134) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2091.020263671875) ) ) {
              sum += (double)0.650268583333333261;
            } else {
              sum += (double)0.6892574895833333271;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.186949998140335083) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.36161994934082031) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4917249977588653564) ) ) {
                    sum += (double)0.4535525937500000104;
                  } else {
                    sum += (double)0.5380396442307691096;
                  }
                } else {
                  sum += (double)0.564912305555555605;
                }
              } else {
                sum += (double)0.467560055555555576;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1306499987840652466) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1999.39556884765625) ) ) {
                  sum += (double)0.5642496339285714146;
                } else {
                  sum += (double)0.6177307656249999557;
                }
              } else {
                sum += (double)0.6431781718750000376;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.111979126930236816) ) ) {
              sum += (double)0.7462247499999999922;
            } else {
              sum += (double)0.6761759270833332947;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1546.40386962890625) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06239672377705574036) ) ) {
                sum += (double)0.7457815666666666177;
              } else {
                sum += (double)0.7907495769230769023;
              }
            } else {
              sum += (double)0.8449182638888887986;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6748605072498321533) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2060500010848045349) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.138076305389404297) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1534499973058700562) ) ) {
                sum += (double)0.4105917826086956657;
              } else {
                sum += (double)0.4611404705882353738;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.56942903995513916) ) ) {
                sum += (double)0.3304965119047618693;
              } else {
                sum += (double)0.1961179814814814626;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5088259875774383545) ) ) {
              sum += (double)0.3811923846153846274;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6923504173755645752) ) ) {
                sum += (double)0.56768361249999999;
              } else {
                sum += (double)0.4639094642857141682;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.103732168674468994) ) ) {
            sum += (double)0.6805316562499998945;
          } else {
            sum += (double)0.5105691875000000213;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2568825036287307739) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1532909944653511047) ) ) {
            sum += (double)0.09603743421052632345;
          } else {
            sum += (double)0.1745065357142857043;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.4404754638671875) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1972.802001953125) ) ) {
              sum += (double)0.2519860714285714343;
            } else {
              sum += (double)0.1094775833333333226;
            }
          } else {
            sum += (double)0.3621722272727272429;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1354.554443359375) ) ) {
          sum += (double)0.4587003472222222489;
        } else {
          sum += (double)0.3531883947368421595;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1402444988489151001) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1458499953150749207) ) ) {
              sum += (double)0.02405745454545454853;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2222.6668701171875) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8504999876022338867) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003318928571428571197;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7897999882698059082) ) ) {
                      sum += (double)0.003432931818181819347;
                    } else {
                      sum += (double)0.00919834375000000079;
                    }
                  }
                } else {
                  sum += (double)0.009821479166666667593;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02875000052154064178) ) ) {
                  sum += (double)0.004186861111111111686;
                } else {
                  sum += (double)0.01532843333333333211;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06904999911785125732) ) ) {
              sum += (double)0.05492232692307692093;
            } else {
              sum += (double)0.003005527777777777972;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2659345567226409912) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1359499990940093994) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.09523773193359375) ) ) {
                sum += (double)0.04562797368421051686;
              } else {
                sum += (double)0.1564134999999999831;
              }
            } else {
              sum += (double)0.02613151851851851573;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.62983798980712891) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6175488829612731934) ) ) {
                sum += (double)0.115951684210526304;
              } else {
                sum += (double)0.03166676041666666164;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9555689990520477295) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09735000133514404297) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3930843323469161987) ) ) {
                    sum += (double)0.01238572656250000112;
                  } else {
                    sum += (double)0.003374124999999999954;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1554500013589859009) ) ) {
                    sum += (double)0.06115019117647058772;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1752174943685531616) ) ) {
                      sum += (double)0.01677467424242424024;
                    } else {
                      sum += (double)0.039842766666666668;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2474999949336051941) ) ) {
                  sum += (double)0.002500000000000000052;
                } else {
                  sum += (double)0.0058146500000000002;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000071246176958) ) ) {
            sum += (double)0.3063655666666667554;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9815.28759765625) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2454829961061477661) ) ) {
                sum += (double)0.1271557962962962807;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4562499970197677612) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2424704954028129578) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16197.50390625) ) ) {
                      sum += (double)0.01499563043478261207;
                    } else {
                      sum += (double)0.04482086363636363785;
                    }
                  } else {
                    sum += (double)0.0473899932432432433;
                  }
                } else {
                  sum += (double)0.1189240131578947479;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.376190185546875) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033567547798156738) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09610000252723693848) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.91374969482421875) ) ) {
                      sum += (double)0.04623746491228070132;
                    } else {
                      sum += (double)0.1077725499999999947;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5257564187049865723) ) ) {
                      sum += (double)0.1381108229166666812;
                    } else {
                      sum += (double)0.2680117352941175923;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1696000024676322937) ) ) {
                      sum += (double)0.01105132352941176621;
                    } else {
                      sum += (double)0.005464937500000001044;
                    }
                  } else {
                    sum += (double)0.03081240384615385047;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.222760222852230072) ) ) {
                  sum += (double)0.1727942625000000176;
                } else {
                  sum += (double)0.3057933809523809554;
                }
              }
            }
          }
        } else {
          sum += (double)0.3100737625000000164;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9199577271938323975) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3677815049886703491) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.35432529449462891) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2367089986801147461) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
                sum += (double)0.4226648333333333785;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.04346036911010742) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.44224119186401367) ) ) {
                    sum += (double)0.2202386166666666922;
                  } else {
                    sum += (double)0.3235681562500000163;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.273736804723739624) ) ) {
                    sum += (double)0.1050125795454545374;
                  } else {
                    sum += (double)0.2176098333333333079;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5255.547607421875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3348155021667480469) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2786410003900527954) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6006500124931335449) ) ) {
                      sum += (double)0.4451267638888888878;
                    } else {
                      sum += (double)0.396218541666666646;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8676.31982421875) ) ) {
                      sum += (double)0.3815714913793103458;
                    } else {
                      sum += (double)0.2770549464285713692;
                    }
                  }
                } else {
                  sum += (double)0.4661389134615384622;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.640522956848144531) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03535000048577785492) ) ) {
                    sum += (double)0.4392207159090908419;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.521466732025146484) ) ) {
                      sum += (double)0.4020853571428571471;
                    } else {
                      sum += (double)0.3168917625000000071;
                    }
                  }
                } else {
                  sum += (double)0.2185371293103448576;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09160000085830688477) ) ) {
              sum += (double)0.2760932749999999714;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.406800001859664917) ) ) {
                sum += (double)0.07308333928571429661;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2747170031070709229) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.89320659637451172) ) ) {
                    sum += (double)0.2336912999999999907;
                  } else {
                    sum += (double)0.1547374375000000191;
                  }
                } else {
                  sum += (double)0.1430243815789473683;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1734500005841255188) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0008500000112690031528) ) ) {
              sum += (double)0.5962112031249999777;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4103675037622451782) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.57613658905029297) ) ) {
                  sum += (double)0.4922478611111111846;
                } else {
                  sum += (double)0.4069339722222222733;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2369574233889579773) ) ) {
                  sum += (double)0.4631728181818181023;
                } else {
                  sum += (double)0.5798451125000000372;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12859.3671875) ) ) {
              sum += (double)0.4104074166666665802;
            } else {
              sum += (double)0.3344908365384615667;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.812406301498413086) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.166749998927116394) ) ) {
            sum += (double)0.1758083839285713712;
          } else {
            sum += (double)0.3030238382352941073;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21581.0751953125) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.68169116973876953) ) ) {
              sum += (double)0.2637143055555555837;
            } else {
              sum += (double)0.130811485294117652;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.277976691722869873) ) ) {
              sum += (double)0.1514434021739130554;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.006363630294799805) ) ) {
                sum += (double)0.1093623645833333297;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.503048837184906006) ) ) {
                  sum += (double)0.009180208333333333623;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7778.875732421875) ) ) {
                    sum += (double)0.01854300000000000392;
                  } else {
                    sum += (double)0.03026318055555556052;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9539542198181152344) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.53772830963134766) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.24555587768554688) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.562405109405517578) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5209000110626220703) ) ) {
                    sum += (double)0.5307409687499999862;
                  } else {
                    sum += (double)0.455485946428571431;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09421525150537490845) ) ) {
                    sum += (double)0.5171884886363635747;
                  } else {
                    sum += (double)0.5744703750000000886;
                  }
                }
              } else {
                sum += (double)0.6183229333333333244;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1763.752197265625) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.307249546051025391) ) ) {
                  sum += (double)0.5757366093750000413;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2521717175841331482) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7499000132083892822) ) ) {
                      sum += (double)0.7033670441176471666;
                    } else {
                      sum += (double)0.6373410588235294272;
                    }
                  } else {
                    sum += (double)0.5925156562500000224;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8300500214099884033) ) ) {
                  sum += (double)0.673038547619047578;
                } else {
                  sum += (double)0.7261883235294116501;
                }
              }
            }
          } else {
            sum += (double)0.3843355892857142075;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1070499978959560394) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1537.08721923828125) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8326499760150909424) ) ) {
                sum += (double)0.7717132656249998668;
              } else {
                sum += (double)0.8250701249999999876;
              }
            } else {
              sum += (double)0.8441064375000001396;
            }
          } else {
            sum += (double)0.7235061911764705256;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759060025215148926) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
            sum += (double)0.4298370288461539346;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3939.188232421875) ) ) {
              sum += (double)0.2932629565217391709;
            } else {
              sum += (double)0.1558668392857142926;
            }
          }
        } else {
          sum += (double)0.5287876000000000243;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2579720020294189453) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000214576721191) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09405500069260597229) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.90000152587890625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03331399895250797272) ) ) {
                  sum += (double)0.002910300000000000213;
                } else {
                  sum += (double)0.006935639999999999861;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                  sum += (double)0.002500000000000001787;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11370.224609375) ) ) {
                    sum += (double)0.004491653846153846608;
                  } else {
                    sum += (double)0.002500000000000000486;
                  }
                }
              }
            } else {
              sum += (double)0.01314639655172413803;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1662964969873428345) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4611999988555908203) ) ) {
                sum += (double)0.04025530357142855648;
              } else {
                sum += (double)0.01143029687500000079;
              }
            } else {
              sum += (double)0.002499999999999999618;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002499999936844687909) ) ) {
            sum += (double)0.09268889583333334015;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.67638874053955078) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1862149983644485474) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.60714292526245117) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.585714340209960938) ) ) {
                    sum += (double)0.01774950000000000139;
                  } else {
                    sum += (double)0.05252515624999999633;
                  }
                } else {
                  sum += (double)0.01292354999999999719;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3449999988079071045) ) ) {
                  sum += (double)0.06038266666666666782;
                } else {
                  sum += (double)0.1246875178571428405;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7422136962413787842) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4933216571807861328) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.254999995231628418) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07420049980282783508) ) ) {
                      sum += (double)0.006442160000000001462;
                    } else {
                      sum += (double)0.01478521153846153874;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3572894930839538574) ) ) {
                      sum += (double)0.01886766447368419877;
                    } else {
                      sum += (double)0.03681954687499999768;
                    }
                  }
                } else {
                  sum += (double)0.05786372368421052043;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.6875) ) ) {
                  sum += (double)0.01840832608695652101;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2364999949932098389) ) ) {
                      sum += (double)0.007035708333333332183;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  } else {
                    sum += (double)0.0124015000000000028;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008600000292062759399) ) ) {
          sum += (double)0.2457267840909090895;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6792999804019927979) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7599999904632568359) ) ) {
              sum += (double)0.1393973026315789565;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4093097150325775146) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3421322405338287354) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1764039993286132812) ) ) {
                    sum += (double)0.03164506249999999438;
                  } else {
                    sum += (double)0.08915139583333332729;
                  }
                } else {
                  sum += (double)0.129279000000000005;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3355499953031539917) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2153500020503997803) ) ) {
                    sum += (double)0.004680095238095238405;
                  } else {
                    sum += (double)0.02421405172413792703;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2274999991059303284) ) ) {
                    sum += (double)0.03637913750000000557;
                  } else {
                    sum += (double)0.06201283333333332953;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11716.95166015625) ) ) {
              sum += (double)0.08278494117647058892;
            } else {
              sum += (double)0.1770137222222222251;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5144754946231842041) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.13333320617675781) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.744692623615264893) ) ) {
              sum += (double)0.132154953125000002;
            } else {
              sum += (double)0.2559931346153846432;
            }
          } else {
            sum += (double)0.3622629765624999498;
          }
        } else {
          sum += (double)0.4866522903225807273;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7527857720851898193) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3250000029802322388) ) ) {
              sum += (double)0.03469627500000000558;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.29722213745117188) ) ) {
                sum += (double)0.07888285526315791385;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7335.450927734375) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6037499904632568359) ) ) {
                    sum += (double)0.0444260892857142875;
                  } else {
                    sum += (double)0.158114652777777781;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.819999992847442627) ) ) {
                    sum += (double)0.1800248333333333284;
                  } else {
                    sum += (double)0.2672752812499999964;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.019526481628417969) ) ) {
              sum += (double)0.06061395588235293092;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8899999856948852539) ) ) {
                sum += (double)0.007648766666666667602;
              } else {
                sum += (double)0.02959883823529411637;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2176.643310546875) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9600000083446502686) ) ) {
              sum += (double)0.1831717500000000221;
            } else {
              sum += (double)0.380535276315789428;
            }
          } else {
            sum += (double)0.08332929999999999504;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2444199994206428528) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004850000143051147461) ) ) {
              sum += (double)0.4761866562499998956;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5821264684200286865) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2055500000715255737) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07485000044107437134) ) ) {
                    sum += (double)0.3024121739130434805;
                  } else {
                    sum += (double)0.2315570833333333856;
                  }
                } else {
                  sum += (double)0.1180925694444444479;
                }
              } else {
                sum += (double)0.3310839411764705531;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0008499999821651726961) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.91381072998046875) ) ) {
                sum += (double)0.5286241842105262601;
              } else {
                sum += (double)0.6157441805555555758;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340364500880241394) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.063273906707763672) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.36097240447998047) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.89535856246948242) ) ) {
                      sum += (double)0.3933864766666666513;
                    } else {
                      sum += (double)0.3393346847826086421;
                    }
                  } else {
                    sum += (double)0.4630817065217390782;
                  }
                } else {
                  sum += (double)0.29887982894736842;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9652.21923828125) ) ) {
                  sum += (double)0.3791337999999999653;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7736499905586242676) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.373778998851776123) ) ) {
                      sum += (double)0.4284912019230768809;
                    } else {
                      sum += (double)0.4784746236263738295;
                    }
                  } else {
                    sum += (double)0.5421648888888888074;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04315000027418136597) ) ) {
              sum += (double)0.3040100294117646929;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2510669901967048645) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.51424694061279297) ) ) {
                  sum += (double)0.1006893214285714405;
                } else {
                  sum += (double)0.1941891184210526033;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.26632118225097656) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.13317298889160156) ) ) {
                    sum += (double)0.307632692307692357;
                  } else {
                    sum += (double)0.2496536346153845898;
                  }
                } else {
                  sum += (double)0.1593981153846153742;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3665769994258880615) ) ) {
              sum += (double)0.3953704659090909734;
            } else {
              sum += (double)0.232084184782608699;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3627160042524337769) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.149255037307739258) ) ) {
            sum += (double)0.1559028124999999876;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.634032487869262695) ) ) {
              sum += (double)0.1098333888888888832;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.168700002133846283) ) ) {
                sum += (double)0.08672099999999999254;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3992000073194503784) ) ) {
                  sum += (double)0.006692933333333333894;
                } else {
                  sum += (double)0.02653662500000000118;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.690362930297851562) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
              sum += (double)0.3800707968749999499;
            } else {
              sum += (double)0.1701203879310344558;
            }
          } else {
            sum += (double)0.1232882129629629675;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6984139978885650635) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9429409801959991455) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5351475179195404053) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18273.18359375) ) ) {
              sum += (double)0.3744763333333333555;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1895999982953071594) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.36161994934082031) ) ) {
                  sum += (double)0.4992783557692307417;
                } else {
                  sum += (double)0.6139217647058823335;
                }
              } else {
                sum += (double)0.4571204351851851921;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1061999984085559845) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.910897254943847656) ) ) {
                sum += (double)0.592386416666666582;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6571570038795471191) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01159999985247850418) ) ) {
                    sum += (double)0.6944762666666667306;
                  } else {
                    sum += (double)0.6412274874999999152;
                  }
                } else {
                  sum += (double)0.7513938035714284869;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8290.51611328125) ) ) {
                sum += (double)0.5199346428571427481;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.901477336883544922) ) ) {
                  sum += (double)0.5713887187499999687;
                } else {
                  sum += (double)0.6221702875000000299;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.074011802673339844) ) ) {
            sum += (double)0.4518243214285714293;
          } else {
            sum += (double)0.2767495185185185336;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
            sum += (double)0.8539922019230770101;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7967000007629394531) ) ) {
              sum += (double)0.7496354464285713837;
            } else {
              sum += (double)0.8070347738095238199;
            }
          }
        } else {
          sum += (double)0.7037965645161291528;
        }
      }
    }
  }
  return sum;
}
