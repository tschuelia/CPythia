#include "prediction.h"
double predict_margin_unit5(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.608771800994873047) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6500000059604644775) ) ) {
        sum += (double)0.134950131944444468;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5087229907512664795) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.193059921264648438) ) ) {
              sum += (double)0.3079076250000000181;
            } else {
              sum += (double)0.1623533888888889221;
            }
          } else {
            sum += (double)0.3897578700000000618;
          }
        } else {
          sum += (double)0.4853041634615384847;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7849999964237213135) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1218929998576641083) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3449999988079071045) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59821414947509766) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02929999958723783493) ) ) {
                    sum += (double)0.005452625000000000874;
                  } else {
                    sum += (double)0.02233867307692307888;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2232000008225440979) ) ) {
                    sum += (double)0.01487757692307692392;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5193.835693359375) ) ) {
                      sum += (double)0.003218687817258880386;
                    } else {
                      sum += (double)0.01111673333333333506;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3518999963998794556) ) ) {
                  sum += (double)0.04286497368421052223;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)50.89894866943359375) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5579499900341033936) ) ) {
                      sum += (double)0.01247841666666666717;
                    } else {
                      sum += (double)0.004941421052631580178;
                    }
                  } else {
                    sum += (double)0.01975494318181818254;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5716056525707244873) ) ) {
                sum += (double)0.02432227083333333637;
              } else {
                sum += (double)0.06687744117647059783;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.23484897613525391) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06210000067949295044) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.29370498657226562) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5500000119209289551) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.28571462631225586) ) ) {
                      sum += (double)0.02537655555555555498;
                    } else {
                      sum += (double)0.01458464705882353031;
                    }
                  } else {
                    sum += (double)0.04429139473684211292;
                  }
                } else {
                  sum += (double)0.1004067727272727334;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4751999974250793457) ) ) {
                  sum += (double)0.181258734375000008;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3000000119209289551) ) ) {
                    sum += (double)0.1270795178571428319;
                  } else {
                    sum += (double)0.06672467241379309577;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4050000011920928955) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5302.632080078125) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)72.78787803649902344) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710185036063194275) ) ) {
                      sum += (double)0.0280417187499999998;
                    } else {
                      sum += (double)0.04977086538461538562;
                    }
                  } else {
                    sum += (double)0.01000385000000000163;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5652977228164672852) ) ) {
                    sum += (double)0.01294327272727272687;
                  } else {
                    sum += (double)0.004281393939393939897;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2243135049939155579) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1579499989748001099) ) ) {
                    sum += (double)0.01168102083333333492;
                  } else {
                    sum += (double)0.04098274999999999141;
                  }
                } else {
                  sum += (double)0.1095640131578947268;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.801829338073730469) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.36817407608032227) ) ) {
              sum += (double)0.1141966470588235277;
            } else {
              sum += (double)0.3155969666666667561;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.431597292423248291) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3569900393486022949) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.88831901550292969) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                      sum += (double)0.09249582575757576974;
                    } else {
                      sum += (double)0.03506450000000000539;
                    }
                  } else {
                    sum += (double)0.1264066304347826186;
                  }
                } else {
                  sum += (double)0.1931072205882352621;
                }
              } else {
                sum += (double)0.2625479666666666878;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4614499956369400024) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2708500027656555176) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3138725012540817261) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2814500033855438232) ) ) {
                      sum += (double)0.006736475000000001316;
                    } else {
                      sum += (double)0.01513250000000000185;
                    }
                  } else {
                    sum += (double)0.02655215384615385033;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7992.01806640625) ) ) {
                    sum += (double)0.05020354761904761987;
                  } else {
                    sum += (double)0.02546962499999999574;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000119209289551) ) ) {
                  sum += (double)0.1092184558823529467;
                } else {
                  sum += (double)0.03410600000000000437;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1119.5023193359375) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.629999995231628418) ) ) {
            sum += (double)0.1497606323529411809;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4929.848876953125) ) ) {
              sum += (double)0.2881487023809524151;
            } else {
              sum += (double)0.4144277083333333112;
            }
          }
        } else {
          sum += (double)0.1032207272727272557;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4572215080261230469) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596890121698379517) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004950000206008553505) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1612415015697479248) ) ) {
                sum += (double)0.4647779264705882429;
              } else {
                sum += (double)0.5241413303571428317;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412595003843307495) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13330.00634765625) ) ) {
                  sum += (double)0.3231911470588236246;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7459.79833984375) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1420499980449676514) ) ) {
                      sum += (double)0.1290406428571428676;
                    } else {
                      sum += (double)0.1838683333333333003;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.70793628692626953) ) ) {
                      sum += (double)0.220541173076923086;
                    } else {
                      sum += (double)0.316861050000000033;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.038355827331542969) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4633.580322265625) ) ) {
                    sum += (double)0.3871503152173914053;
                  } else {
                    sum += (double)0.4554495476190476011;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5221.338134765625) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6933000087738037109) ) ) {
                      sum += (double)0.3763578611111110805;
                    } else {
                      sum += (double)0.4371461842105263118;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.04100513458251953) ) ) {
                      sum += (double)0.3578717307692307892;
                    } else {
                      sum += (double)0.2477665833333332901;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01829999964684247971) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
                sum += (double)0.6255855576923076145;
              } else {
                sum += (double)0.5347369250000000296;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2480.1729736328125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4083775132894515991) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.230444788932800293) ) ) {
                    sum += (double)0.4430676578947368438;
                  } else {
                    sum += (double)0.4948443913043477083;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1728999987244606018) ) ) {
                    sum += (double)0.4538528374999999393;
                  } else {
                    sum += (double)0.3934375937500000364;
                  }
                }
              } else {
                sum += (double)0.5287253026315790194;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1901315152645111084) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17917.6630859375) ) ) {
              sum += (double)0.3629784722222222371;
            } else {
              sum += (double)0.2096366964285714396;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4687999933958053589) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.34411334991455078) ) ) {
                sum += (double)0.254928669642857153;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2314499989151954651) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.11635208129882812) ) ) {
                    sum += (double)0.1420199305555555624;
                  } else {
                    sum += (double)0.04608653750000000354;
                  }
                } else {
                  sum += (double)0.1542455441176471265;
                }
              }
            } else {
              sum += (double)0.3133481666666667054;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.893928408622741699) ) ) {
          sum += (double)0.2135807037037036893;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25040.73828125) ) ) {
            sum += (double)0.1867790000000000006;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.21085357666015625) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596575111150741577) ) ) {
                sum += (double)0.04364225862068964873;
              } else {
                sum += (double)0.1162550178571428589;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2005000039935112) ) ) {
                sum += (double)0.06855372916666667427;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3354485034942626953) ) ) {
                  sum += (double)0.01233917391304348125;
                } else {
                  sum += (double)0.03257292857142857212;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6726120114326477051) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7531519830226898193) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5351475179195404053) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06955000013113021851) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01535000046715140343) ) ) {
                sum += (double)0.5040169605263158381;
              } else {
                sum += (double)0.5955853333333333;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1476500034332275391) ) ) {
                sum += (double)0.389678315789473706;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.430997848510742188) ) ) {
                  sum += (double)0.5372628690476191071;
                } else {
                  sum += (double)0.4353077083333333763;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2774420976638793945) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005999999819323420525) ) ) {
                  sum += (double)0.6666456578947369538;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.52657794952392578) ) ) {
                    sum += (double)0.5736911931818181598;
                  } else {
                    sum += (double)0.6327198684210525448;
                  }
                }
              } else {
                sum += (double)0.7169107115384616424;
              }
            } else {
              sum += (double)0.5238010462962963132;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.4155816916666666416;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
              sum += (double)0.4310202380952380952;
            } else {
              sum += (double)0.2206789666666666427;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5660499930381774902) ) ) {
            sum += (double)0.5854118823529412818;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05344999954104423523) ) ) {
              sum += (double)0.7288897794117645823;
            } else {
              sum += (double)0.6792954565217391716;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03655000030994415283) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8183034956455230713) ) ) {
              sum += (double)0.846910446428571495;
            } else {
              sum += (double)0.8801708666666667735;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7032000124454498291) ) ) {
              sum += (double)0.7055343333333333744;
            } else {
              sum += (double)0.7935318452380952792;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.972222328186035156) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            sum += (double)0.01039677272727272846;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.623076915740966797) ) ) {
              sum += (double)0.1684654285714285715;
            } else {
              sum += (double)0.05819341666666667107;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1829499974846839905) ) ) {
              sum += (double)0.02787802631578947116;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1402444988489151001) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.97321510314941406) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2222.6668701171875) ) ) {
                    sum += (double)0.005049107142857142509;
                  } else {
                    sum += (double)0.01142020833333333429;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)507.416656494140625) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003782480000000000391;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02564999926835298538) ) ) {
                      sum += (double)0.002500000000000000486;
                    } else {
                      sum += (double)0.007391177419354839559;
                    }
                  }
                }
              } else {
                sum += (double)0.01484044827586207191;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7697499990463256836) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.46666717529296875) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.76461029052734375) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1010999977588653564) ) ) {
                    sum += (double)0.009329096153846154829;
                  } else {
                    sum += (double)0.05684407692307691384;
                  }
                } else {
                  sum += (double)0.05800983333333333686;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)170.8208160400390625) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2927500009536743164) ) ) {
                    sum += (double)0.004082706896551724536;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.79227066040039062) ) ) {
                      sum += (double)0.02024437209302324889;
                    } else {
                      sum += (double)0.008888136904761905627;
                    }
                  }
                } else {
                  sum += (double)0.02837377631578946388;
                }
              }
            } else {
              sum += (double)0.08076642857142855847;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01879999972879886627) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6617626845836639404) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2713389992713928223) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008299999870359897614) ) ) {
                sum += (double)0.2583759396551724152;
              } else {
                sum += (double)0.1225007058823529421;
              }
            } else {
              sum += (double)0.4046593906249999484;
            }
          } else {
            sum += (double)0.02535300000000000054;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.099671125411987305) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
              sum += (double)0.09450171666666666581;
            } else {
              sum += (double)0.2852878823529411689;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6086320579051971436) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2209069952368736267) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.9918980598449707) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                    sum += (double)0.09919719736842103064;
                  } else {
                    sum += (double)0.1774288437500000093;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4955710768699645996) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6957499980926513672) ) ) {
                      sum += (double)0.02835139329268291167;
                    } else {
                      sum += (double)0.07945332894736840956;
                    }
                  } else {
                    sum += (double)0.1106315999999999966;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.51027965545654297) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.331578731536865234) ) ) {
                    sum += (double)0.1379418750000000193;
                  } else {
                    sum += (double)0.06127656730769229926;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9005.986328125) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3453429192304611206) ) ) {
                      sum += (double)0.1354635416666666592;
                    } else {
                      sum += (double)0.06890385937500000113;
                    }
                  } else {
                    sum += (double)0.2502867187499999702;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3787894994020462036) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1573999971151351929) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4959.22802734375) ) ) {
                    sum += (double)0.01764530555555555991;
                  } else {
                    sum += (double)0.004394238095238095151;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034847021102905273) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1938650012016296387) ) ) {
                      sum += (double)0.03120003125000000641;
                    } else {
                      sum += (double)0.09475756818181818586;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4018500000238418579) ) ) {
                      sum += (double)0.01250907142857143016;
                    } else {
                      sum += (double)0.02435305555555555487;
                    }
                  }
                }
              } else {
                sum += (double)0.09980855769230768948;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5985960066318511963) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.376512527465820312) ) ) {
          sum += (double)0.3472448899999999727;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.88297843933105469) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.75) ) ) {
              sum += (double)0.1886932187500000024;
            } else {
              sum += (double)0.06790226315789474332;
            }
          } else {
            sum += (double)0.2735667656249999857;
          }
        }
      } else {
        sum += (double)0.4474722053571428826;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.89888715744018555) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596890121698379517) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007699999958276748657) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4979999959468841553) ) ) {
                  sum += (double)0.5481458382352941694;
                } else {
                  sum += (double)0.498854547619047628;
                }
              } else {
                sum += (double)0.4156161250000000584;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412595003843307495) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3903499990701675415) ) ) {
                    sum += (double)0.258286671052631589;
                  } else {
                    sum += (double)0.3322770500000000182;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10844.9130859375) ) ) {
                    sum += (double)0.2339977499999999766;
                  } else {
                    sum += (double)0.1565528194444444354;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7048499882221221924) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.142307758331298828) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.533085107803344727) ) ) {
                      sum += (double)0.354850283333333405;
                    } else {
                      sum += (double)0.4331401621621621123;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5830.102294921875) ) ) {
                      sum += (double)0.3874262799999999562;
                    } else {
                      sum += (double)0.2955906875000000045;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.895533561706542969) ) ) {
                    sum += (double)0.2432631176470588241;
                  } else {
                    sum += (double)0.3452604249999999819;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07950000092387199402) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.73177719116210938) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01059999968856573105) ) ) {
                  sum += (double)0.5758218958333333193;
                } else {
                  sum += (double)0.4797232916666665514;
                }
              } else {
                sum += (double)0.5949204999999999632;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4029840081930160522) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1794000044465065002) ) ) {
                  sum += (double)0.5160518499999999786;
                } else {
                  sum += (double)0.4374077142857143441;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2552237734198570251) ) ) {
                  sum += (double)0.4480141842105263561;
                } else {
                  sum += (double)0.3542681785714285603;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.334381103515625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04315000027418136597) ) ) {
                sum += (double)0.3448162750000000609;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19271.650390625) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.29031753540039062) ) ) {
                    sum += (double)0.3120796750000000008;
                  } else {
                    sum += (double)0.1799996704545454296;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12024.7197265625) ) ) {
                    sum += (double)0.09207107954545454276;
                  } else {
                    sum += (double)0.2055425800000000025;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.76590919494628906) ) ) {
                sum += (double)0.3118701916666666851;
              } else {
                sum += (double)0.4246491029411765261;
              }
            }
          } else {
            sum += (double)0.09399634000000001155;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.378157496452331543) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33309.6494140625) ) ) {
            sum += (double)0.1460242999999999958;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4313.30517578125) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.329501152038574219) ) ) {
                sum += (double)0.09089390277777778526;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4193499982357025146) ) ) {
                  sum += (double)0.05839496666666666586;
                } else {
                  sum += (double)0.02053086842105263099;
                }
              }
            } else {
              sum += (double)0.02147640909090909114;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.668108701705932617) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1868.17352294921875) ) ) {
              sum += (double)0.3661332500000000212;
            } else {
              sum += (double)0.1217417499999999819;
            }
          } else {
            sum += (double)0.05540056666666666463;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5359705090522766113) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.209627151489257812) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.95555591583251953) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4585798084735870361) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09479834139347076416) ) ) {
                    sum += (double)0.4987929705882353515;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.488600507378578186) ) ) {
                      sum += (double)0.5260729285714285108;
                    } else {
                      sum += (double)0.5860879821428570668;
                    }
                  }
                } else {
                  sum += (double)0.4489088906250000566;
                }
              } else {
                sum += (double)0.6138569027777778242;
              }
            } else {
              sum += (double)0.3705663593749999318;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7678.364013671875) ) ) {
              sum += (double)0.5352037980769230874;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1143882349133491516) ) ) {
                sum += (double)0.6752979482758619811;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.72348475456237793) ) ) {
                  sum += (double)0.5890077159090908454;
                } else {
                  sum += (double)0.6296394711538462197;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03385000117123126984) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7240049839019775391) ) ) {
              sum += (double)0.7211679411764704284;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.786785513162612915) ) ) {
                sum += (double)0.8225036499999999196;
              } else {
                sum += (double)0.8690187916666667345;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7049920260906219482) ) ) {
              sum += (double)0.6670458599999998794;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.625849992036819458) ) ) {
                sum += (double)0.6893000263157895713;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09455000236630439758) ) ) {
                  sum += (double)0.8017611718749999561;
                } else {
                  sum += (double)0.7353755657894737174;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.48879849910736084) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5791780054569244385) ) ) {
              sum += (double)0.3264159999999999839;
            } else {
              sum += (double)0.4416645147058824161;
            }
          } else {
            sum += (double)0.1622415795454545673;
          }
        } else {
          sum += (double)0.5267594861111111193;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3839095085859298706) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.435000002384185791) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.464285612106323242) ) ) {
          sum += (double)0.123798967391304332;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.19934558868408203) ) ) {
            sum += (double)0.07839176249999998958;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09099549800157546997) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8189000189304351807) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.48397445678710938) ) ) {
                    sum += (double)0.004589192307692308015;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1766000017523765564) ) ) {
                      sum += (double)0.002500000000000001787;
                    } else {
                      sum += (double)0.003061233333333333601;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.116298329085111618) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.007900821428571428925;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5010244697332382202) ) ) {
                  sum += (double)0.02376078947368421776;
                } else {
                  sum += (double)0.005216750000000000033;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0002500000118743628263) ) ) {
                sum += (double)0.0530971428571428497;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)270.5681076049804688) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7680511474609375) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4923824816942214966) ) ) {
                      sum += (double)0.01523654220779219019;
                    } else {
                      sum += (double)0.05183446428571426845;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2499999925494194031) ) ) {
                      sum += (double)0.003667709677419355753;
                    } else {
                      sum += (double)0.01296076470588235219;
                    }
                  }
                } else {
                  sum += (double)0.0485693472222221978;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.242023766040802002) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2689980119466781616) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7849999964237213135) ) ) {
              sum += (double)0.06278968382352939637;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1455999985337257385) ) ) {
                sum += (double)0.1999867499999999632;
              } else {
                sum += (double)0.04829713461538460983;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2949.89013671875) ) ) {
              sum += (double)0.2164379624999999974;
            } else {
              sum += (double)0.4302493240740740688;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7387340068817138672) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
              sum += (double)0.2139974285714285884;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2217829972505569458) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0286000007763504982) ) ) {
                  sum += (double)0.1195848289473683962;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1912999972701072693) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3045258969068527222) ) ) {
                      sum += (double)0.01453771428571428749;
                    } else {
                      sum += (double)0.04251821951219512258;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5065572857856750488) ) ) {
                      sum += (double)0.05380777941176469875;
                    } else {
                      sum += (double)0.1476072499999999954;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09715000167489051819) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3372848182916641235) ) ) {
                    sum += (double)0.09892347368421051945;
                  } else {
                    sum += (double)0.0322034375000000081;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10536.060546875) ) ) {
                    sum += (double)0.09228012499999999063;
                  } else {
                    sum += (double)0.2978981333333333703;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.857072055339813232) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3497669994831085205) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.64594554901123047) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3233.025390625) ) ) {
                    sum += (double)0.06975596428571427532;
                  } else {
                    sum += (double)0.01485083333333333568;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.72368431091308594) ) ) {
                    sum += (double)0.004236199999999999861;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.11378097534179688) ) ) {
                      sum += (double)0.02196667391304347669;
                    } else {
                      sum += (double)0.009627119047619047548;
                    }
                  }
                }
              } else {
                sum += (double)0.06722566666666666968;
              }
            } else {
              sum += (double)0.1055997857142857155;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03309999965131282806) ) ) {
              sum += (double)0.4113244326923076177;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3067707866430282593) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2045539990067481995) ) ) {
                  sum += (double)0.1758403684210526341;
                } else {
                  sum += (double)0.2414409999999999612;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2156000062823295593) ) ) {
                  sum += (double)0.3052265172413792804;
                } else {
                  sum += (double)0.2243892624999999919;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.047448158264160156) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340396493673324585) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02675000019371509552) ) ) {
                  sum += (double)0.4696216562499999081;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1403999999165534973) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.27787470817565918) ) ) {
                      sum += (double)0.3883219695121951087;
                    } else {
                      sum += (double)0.3111492333333333304;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4251472800970077515) ) ) {
                      sum += (double)0.4404336607142857463;
                    } else {
                      sum += (double)0.3732273913043477331;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08200000226497650146) ) ) {
                  sum += (double)0.5146342031249999671;
                } else {
                  sum += (double)0.4652345952380951832;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9705.29541015625) ) ) {
                sum += (double)0.3938178749999999839;
              } else {
                sum += (double)0.2105511875000000144;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1600320041179656982) ) ) {
            sum += (double)0.08588769318181815882;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.33225154876708984) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3166804909706115723) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2085499987006187439) ) ) {
                  sum += (double)0.2643886428571428082;
                } else {
                  sum += (double)0.166966819999999988;
                }
              } else {
                sum += (double)0.3216095441176470282;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2714000046253204346) ) ) {
                sum += (double)0.06543982894736842526;
              } else {
                sum += (double)0.2034557500000000185;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
          sum += (double)0.1823485909090908907;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.710588455200195312) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3261809945106506348) ) ) {
              sum += (double)0.08377726562499998586;
            } else {
              sum += (double)0.1616798452380952544;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1588000059127807617) ) ) {
              sum += (double)0.03213078333333333619;
            } else {
              sum += (double)0.008962480000000001834;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6084312200546264648) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6215465068817138672) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.12297296524047852) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
            sum += (double)0.3292094687500000116;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468925237655639648) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00734999985434114933) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.37777233123779297) ) ) {
                  sum += (double)0.5749424673913042794;
                } else {
                  sum += (double)0.6509552624999999093;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.54652214050292969) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1086366027593612671) ) ) {
                    sum += (double)0.4302399464285714403;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6907500028610229492) ) ) {
                      sum += (double)0.4754076380597015428;
                    } else {
                      sum += (double)0.5198024642857144162;
                    }
                  }
                } else {
                  sum += (double)0.5748147613636364062;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08674521744251251221) ) ) {
                sum += (double)0.6955195657894737149;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2413.950927734375) ) ) {
                  sum += (double)0.5887187894736841676;
                } else {
                  sum += (double)0.653023416666666634;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.381399989128112793) ) ) {
            sum += (double)0.2370841964285714532;
          } else {
            sum += (double)0.3624680535714285279;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7494904994964599609) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.387547850608825684) ) ) {
            sum += (double)0.7099450378787880434;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.991754651069641113) ) ) {
              sum += (double)0.6240507499999999874;
            } else {
              sum += (double)0.6858490138888889698;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.23895031213760376) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8238435089588165283) ) ) {
              sum += (double)0.8056625374999999423;
            } else {
              sum += (double)0.8788724545454545956;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7976059913635253906) ) ) {
              sum += (double)0.7288261999999999796;
            } else {
              sum += (double)0.7824967031250000815;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5527740120887756348) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.76419442892074585) ) ) {
          sum += (double)0.4058082794117646719;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.0113525390625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.92392826080322266) ) ) {
              sum += (double)0.3663079655172413185;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.46347808837890625) ) ) {
                sum += (double)0.02498449999999999976;
              } else {
                sum += (double)0.2302026250000000218;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4576395004987716675) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1382.6014404296875) ) ) {
                sum += (double)0.1138027500000000081;
              } else {
                sum += (double)0.04604111764705881571;
              }
            } else {
              sum += (double)0.1790419078947368681;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3400.0914306640625) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.029400944709777832) ) ) {
            sum += (double)0.6071460882352940347;
          } else {
            sum += (double)0.4530423333333333802;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.576312541961669922) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6145164966583251953) ) ) {
              sum += (double)0.4099267916666666234;
            } else {
              sum += (double)0.4702969545454545042;
            }
          } else {
            sum += (double)0.1624015299999999884;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473649978637695312) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6650000214576721191) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09405500069260597229) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.899000018835067749) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2025000005960464478) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.49107122421264648) ) ) {
                  sum += (double)0.005372923076923077218;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1380593329668045044) ) ) {
                    sum += (double)0.003542961538461538665;
                  } else {
                    sum += (double)0.002500000000000001353;
                  }
                }
              } else {
                sum += (double)0.006104294117647059321;
              }
            } else {
              sum += (double)0.01104780952380952398;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1658165007829666138) ) ) {
              sum += (double)0.02286029545454545259;
            } else {
              sum += (double)0.008810473684210527734;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07454922795295715332) ) ) {
            sum += (double)0.1116509249999999981;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6542088985443115234) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5999596118927001953) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1088645011186599731) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005149999866262078285) ) ) {
                    sum += (double)0.03785786111111110602;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07204350084066390991) ) ) {
                      sum += (double)0.006481426470588236115;
                    } else {
                      sum += (double)0.01433329838709677603;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1022500023245811462) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1900000050663948059) ) ) {
                      sum += (double)0.04352528124999999887;
                    } else {
                      sum += (double)0.009684333333333334723;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.48611164093017578) ) ) {
                      sum += (double)0.09033471874999998708;
                    } else {
                      sum += (double)0.03433422794117647198;
                    }
                  }
                }
              } else {
                sum += (double)0.09749994736842104714;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3599999994039535522) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3151500076055526733) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)63.58333206176757812) ) ) {
                    sum += (double)0.005177882352941177123;
                  } else {
                    sum += (double)0.002676767857142857594;
                  }
                } else {
                  sum += (double)0.01442796153846154054;
                }
              } else {
                sum += (double)0.02079655769230769752;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02309999987483024597) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9247.21337890625) ) ) {
            sum += (double)0.1421811000000000047;
          } else {
            sum += (double)0.2853173624999999491;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.651904106140136719) ) ) {
            sum += (double)0.1981462386363636585;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.83382797241210938) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1948219984769821167) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10714.779296875) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4790375381708145142) ) ) {
                      sum += (double)0.01807575000000000154;
                    } else {
                      sum += (double)0.04465031250000000423;
                    }
                  } else {
                    sum += (double)0.01089296739130434823;
                  }
                } else {
                  sum += (double)0.04746398749999999889;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.207699999213218689) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06024999916553497314) ) ) {
                    sum += (double)0.07433171428571427874;
                  } else {
                    sum += (double)0.02026427777777778036;
                  }
                } else {
                  sum += (double)0.1140319464285714374;
                }
              }
            } else {
              sum += (double)0.1103498333333333137;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.395299196243286133) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7720080912113189697) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8499999940395355225) ) ) {
            sum += (double)0.2738032613636363632;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4062689989805221558) ) ) {
              sum += (double)0.4221719166666667022;
            } else {
              sum += (double)0.5028842499999999216;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.987058460712432861) ) ) {
            sum += (double)0.1196615526315789324;
          } else {
            sum += (double)0.3621454642857142581;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6000744998455047607) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.99374961853027344) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8639717996120452881) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08475000038743019104) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1112.396484375) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03500000014901161194) ) ) {
                    sum += (double)0.1453648676470588041;
                  } else {
                    sum += (double)0.04500593055555554556;
                  }
                } else {
                  sum += (double)0.02348465217391304538;
                }
              } else {
                sum += (double)0.1804208823529411809;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3558440059423446655) ) ) {
                sum += (double)0.004871950000000000759;
              } else {
                sum += (double)0.05997203846153846551;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3200000077486038208) ) ) {
              sum += (double)0.04560668518518517373;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9298.3466796875) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)157.8981857299804688) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2617499977350234985) ) ) {
                    sum += (double)0.02518518421052631795;
                  } else {
                    sum += (double)0.07059196153846154786;
                  }
                } else {
                  sum += (double)0.1866844615384615491;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2693874835968017578) ) ) {
                  sum += (double)0.1724840400000000329;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7950000166893005371) ) ) {
                    sum += (double)0.1952291874999999566;
                  } else {
                    sum += (double)0.3458849722222221978;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.3990287361111111153;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8318758606910705566) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.6894841194152832) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3351185023784637451) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.5353364750000000338;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6979500055313110352) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.371356010437011719) ) ) {
                    sum += (double)0.3377123571428571891;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4752000123262405396) ) ) {
                      sum += (double)0.2688573026315789205;
                    } else {
                      sum += (double)0.1863312803030302833;
                    }
                  }
                } else {
                  sum += (double)0.3552661944444444608;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.743021249771118164) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.720649242401123047) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3979000002145767212) ) ) {
                      sum += (double)0.3568837166666666838;
                    } else {
                      sum += (double)0.3967122916666666055;
                    }
                  } else {
                    sum += (double)0.4310882249999999916;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.168400004506111145) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0497500002384185791) ) ) {
                      sum += (double)0.3710867941176470564;
                    } else {
                      sum += (double)0.2043036710526315858;
                    }
                  } else {
                    sum += (double)0.3958112916666666758;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1537000015377998352) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
                sum += (double)0.5799080735294117606;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3646669983863830566) ) ) {
                  sum += (double)0.4440721309523809612;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7122000157833099365) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.130223989486694336) ) ) {
                      sum += (double)0.4803635441176470344;
                    } else {
                      sum += (double)0.5555979916666665686;
                    }
                  } else {
                    sum += (double)0.4688346015625000085;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6737999916076660156) ) ) {
                sum += (double)0.4408189166666666159;
              } else {
                sum += (double)0.3811421029411765082;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4042499959468841553) ) ) {
              sum += (double)0.08250861111111112978;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.3567047119140625) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7301000058650970459) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6419499814510345459) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.81478309631347656) ) ) {
                      sum += (double)0.2171386250000000018;
                    } else {
                      sum += (double)0.1531929886363636584;
                    }
                  } else {
                    sum += (double)0.2574200520833333505;
                  }
                } else {
                  sum += (double)0.1069291406250000021;
                }
              } else {
                sum += (double)0.2834916599999999787;
              }
            }
          } else {
            sum += (double)0.3386254573170731086;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05635000020265579224) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2407.467529296875) ) ) {
            sum += (double)0.2988850000000000118;
          } else {
            sum += (double)0.1217430441176470673;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
            sum += (double)0.2061120277777777898;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.999197721481323242) ) ) {
              sum += (double)0.1802375999999999978;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3895944952964782715) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4809499979019165039) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1409000009298324585) ) ) {
                    sum += (double)0.03504780952380952969;
                  } else {
                    sum += (double)0.009137705882352941886;
                  }
                } else {
                  sum += (double)0.05705927631578947001;
                }
              } else {
                sum += (double)0.09866610416666665717;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4676279276609420776) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.209627151489257812) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5120110213756561279) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.219377517700195312) ) ) {
                sum += (double)0.4969495967741935916;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4859344959259033203) ) ) {
                  sum += (double)0.5792189666666665016;
                } else {
                  sum += (double)0.5422524285714284131;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02534999977797269821) ) ) {
                sum += (double)0.6673148529411766505;
              } else {
                sum += (double)0.5924428828125000157;
              }
            }
          } else {
            sum += (double)0.452301576086956536;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7415895164012908936) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.258649945259094238) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.394736826419830322) ) ) {
                sum += (double)0.6875461818181818341;
              } else {
                sum += (double)0.7448484342105262668;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1306999996304512024) ) ) {
                sum += (double)0.6477330865384615111;
              } else {
                sum += (double)0.7110499125000000475;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06940000131726264954) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7973224818706512451) ) ) {
                sum += (double)0.8285837391304345934;
              } else {
                sum += (double)0.8771595326086955025;
              }
            } else {
              sum += (double)0.7890540666666667757;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7563615143299102783) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5485669970512390137) ) ) {
              sum += (double)0.3804177499999999434;
            } else {
              sum += (double)0.610566359375000034;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.98280489444732666) ) ) {
              sum += (double)0.4432812000000000419;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
                sum += (double)0.4133543289473684545;
              } else {
                sum += (double)0.1829208552631578777;
              }
            }
          }
        } else {
          sum += (double)0.6252575666666667642;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4594839960336685181) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.964285612106323242) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2573520094156265259) ) ) {
          sum += (double)0.1170509609375000037;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2684219181537628174) ) ) {
            sum += (double)0.3617555000000000631;
          } else {
            sum += (double)0.1582314722222222525;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4249999970197677612) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9038000106811523438) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.83928489685058594) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1299494951963424683) ) ) {
                sum += (double)0.09298851249999998125;
              } else {
                sum += (double)0.03143768333333333415;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0722170025110244751) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1850999966263771057) ) ) {
                  sum += (double)0.02520707142857142938;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1959500014781951904) ) ) {
                      sum += (double)0.003587620481927706641;
                    } else {
                      sum += (double)0.006464654761904763472;
                    }
                  } else {
                    sum += (double)0.01179048437500000018;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7702707648277282715) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1283999979496002197) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.469300001859664917) ) ) {
                      sum += (double)0.03043605921052629573;
                    } else {
                      sum += (double)0.01190361746987951379;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.0625) ) ) {
                      sum += (double)0.07683950000000000502;
                    } else {
                      sum += (double)0.02938349404761904371;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.017657160758972168) ) ) {
                    sum += (double)0.008564064814814816018;
                  } else {
                    sum += (double)0.002500000000000000486;
                  }
                }
              }
            }
          } else {
            sum += (double)0.09438069117647059081;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.560457706451416016) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6347853541374206543) ) ) {
              sum += (double)0.274593694444444425;
            } else {
              sum += (double)0.05456386666666666191;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6086320579051971436) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2149680033326148987) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1812050044536590576) ) ) {
                  sum += (double)0.07161739130434781331;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.03386735916137695) ) ) {
                    sum += (double)0.06415693749999999695;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.53809547424316406) ) ) {
                      sum += (double)0.02126250490196078188;
                    } else {
                      sum += (double)0.04605566176470587275;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09700000286102294922) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.5004730224609375) ) ) {
                    sum += (double)0.05809918749999999632;
                  } else {
                    sum += (double)0.1134796447368420919;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9026.51318359375) ) ) {
                    sum += (double)0.09184955000000000203;
                  } else {
                    sum += (double)0.2670326666666666404;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4014499932527542114) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7399341762065887451) ) ) {
                  sum += (double)0.0371104351851851838;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1791500002145767212) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9000000059604644775) ) ) {
                      sum += (double)0.04946196666666664854;
                    } else {
                      sum += (double)0.01250971666666667037;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12602.29833984375) ) ) {
                      sum += (double)0.01779318181818181563;
                    } else {
                      sum += (double)0.00782140277777777955;
                    }
                  }
                }
              } else {
                sum += (double)0.07516176785714283326;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.861176490783691406) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5662579834461212158) ) ) {
          sum += (double)0.3621598020833333709;
        } else {
          sum += (double)0.573462328125000087;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3232499957084655762) ) ) {
          sum += (double)0.3015392672413793052;
        } else {
          sum += (double)0.1560877499999999973;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9664483964443206787) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3348155021667480469) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03225000016391277313) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001499999962106812745) ) ) {
              sum += (double)0.5061718499999999787;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7610000073909759521) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01630000025033950806) ) ) {
                  sum += (double)0.3138589531249999509;
                } else {
                  sum += (double)0.3987384999999998847;
                }
              } else {
                sum += (double)0.4482228166666666902;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.73345851898193359) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2572209984064102173) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1956804990768432617) ) ) {
                  sum += (double)0.330907607142857163;
                } else {
                  sum += (double)0.1987283369565217284;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.640492916107177734) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.720649242401123047) ) ) {
                    sum += (double)0.3672603369565217157;
                  } else {
                    sum += (double)0.4498400921052632118;
                  }
                } else {
                  sum += (double)0.3240235666666666514;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2282579988241195679) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3113500028848648071) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.70962333679199219) ) ) {
                    sum += (double)0.1301276406250000128;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.8064422607421875) ) ) {
                      sum += (double)0.2643014473684210941;
                    } else {
                      sum += (double)0.1628392000000000173;
                    }
                  }
                } else {
                  sum += (double)0.07258406818181818709;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4545499980449676514) ) ) {
                  sum += (double)0.1178238593750000063;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2747170031070709229) ) ) {
                    sum += (double)0.3332085104166667144;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.58992099761962891) ) ) {
                      sum += (double)0.2596053199999999728;
                    } else {
                      sum += (double)0.1737037692307692172;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1734500005841255188) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4500815421342849731) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.773041486740112305) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2545058876276016235) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4026200026273727417) ) ) {
                      sum += (double)0.5094472890624999195;
                    } else {
                      sum += (double)0.5423116964285713548;
                    }
                  } else {
                    sum += (double)0.4590677058823529055;
                  }
                } else {
                  sum += (double)0.5684498749999999934;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1255999989807605743) ) ) {
                  sum += (double)0.3950988088235294349;
                } else {
                  sum += (double)0.5198748653846153589;
                }
              }
            } else {
              sum += (double)0.3801868421052631564;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.7682499885559082) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2357614338397979736) ) ) {
                sum += (double)0.4574424910714284809;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3885059952735900879) ) ) {
                  sum += (double)0.4360158749999999417;
                } else {
                  sum += (double)0.3419611874999999301;
                }
              }
            } else {
              sum += (double)0.2760078593749999976;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.371650934219360352) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2628.7816162109375) ) ) {
            sum += (double)0.3135959782608695456;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.795577049255371094) ) ) {
              sum += (double)0.211654014705882354;
            } else {
              sum += (double)0.05061821052631578638;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.274611353874206543) ) ) {
            sum += (double)0.1340606770833333572;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5441.749755859375) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.9605865478515625) ) ) {
                sum += (double)0.0791899464285714394;
              } else {
                sum += (double)0.04487365789473683753;
              }
            } else {
              sum += (double)0.01665689130434782825;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6653079986572265625) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7531519830226898193) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.751275539398193359) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5121190249919891357) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.61558079719543457) ) ) {
                sum += (double)0.4940862099999999701;
              } else {
                sum += (double)0.5610567019230769947;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.134611368179321289) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5911765098571777344) ) ) {
                  sum += (double)0.5505664605263157485;
                } else {
                  sum += (double)0.609242200000000067;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8262999951839447021) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.779850006103515625) ) ) {
                    sum += (double)0.6535012380952380795;
                  } else {
                    sum += (double)0.7020014021739130472;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.582614511251449585) ) ) {
                    sum += (double)0.5772426875000000734;
                  } else {
                    sum += (double)0.6490694000000000186;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16897.10205078125) ) ) {
              sum += (double)0.3771941875000000555;
            } else {
              sum += (double)0.490308130434782552;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.443038152173912958;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2552.708984375) ) ) {
              sum += (double)0.3709880096153845841;
            } else {
              sum += (double)0.1946334166666666698;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1456499993801116943) ) ) {
          sum += (double)0.5177446904761905389;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6992909908294677734) ) ) {
              sum += (double)0.7155394259259258982;
            } else {
              sum += (double)0.6655950865384615556;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1021500006318092346) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.832332998514175415) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7897324860095977783) ) ) {
                  sum += (double)0.8299331764705881742;
                } else {
                  sum += (double)0.7765330333333333446;
                }
              } else {
                sum += (double)0.8586153499999999994;
              }
            } else {
              sum += (double)0.7382617647058823396;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840035051107406616) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.75) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.405882358551025391) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2199999988079071045) ) ) {
              sum += (double)0.1026432968749999841;
            } else {
              sum += (double)0.2071883269230769542;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1428069993853569031) ) ) {
              sum += (double)0.01671312499999999882;
            } else {
              sum += (double)0.07746342105263158417;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.35879325866699219) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7788424789905548096) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2448.0860595703125) ) ) {
                sum += (double)0.1715675625000000204;
              } else {
                sum += (double)0.2274847222222222409;
              }
            } else {
              sum += (double)0.05285498333333333437;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.265611499547958374) ) ) {
              sum += (double)0.225995895833333349;
            } else {
              sum += (double)0.3889006590909090955;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4650000035762786865) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37857151031494141) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1146005019545555115) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1449999958276748657) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.03726673126220703) ) ) {
                  sum += (double)0.003764708333333333448;
                } else {
                  sum += (double)0.01540574999999999931;
                }
              } else {
                sum += (double)0.04686622727272727468;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.185000002384185791) ) ) {
                sum += (double)0.1585548586956521677;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.08431100845336914) ) ) {
                  sum += (double)0.03087794999999999429;
                } else {
                  sum += (double)0.06707898333333331409;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1843499988317489624) ) ) {
                sum += (double)0.01953785000000000244;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.97321510314941406) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.10869598388671875) ) ) {
                    sum += (double)0.002500000000000000486;
                  } else {
                    sum += (double)0.01469176190476190712;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8187500238418579102) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.003768666666666666692;
                    }
                  } else {
                    sum += (double)0.007257285714285715249;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93333339691162109) ) ) {
                sum += (double)0.06499839473684210223;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3079000115394592285) ) ) {
                  sum += (double)0.004447642857142858341;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12556.41748046875) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09735000133514404297) ) ) {
                      sum += (double)0.005758682692307693154;
                    } else {
                      sum += (double)0.02286274137931033207;
                    }
                  } else {
                    sum += (double)0.05109523437499999959;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2259725034236907959) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1687056124210357666) ) ) {
              sum += (double)0.1048648124999999875;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6996805667877197266) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1925999969244003296) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.159747004508972168) ) ) {
                      sum += (double)0.01691689215686274436;
                    } else {
                      sum += (double)0.03977079729729729451;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.24067497253417969) ) ) {
                      sum += (double)0.0928616759259259239;
                    } else {
                      sum += (double)0.02829205000000000261;
                    }
                  }
                } else {
                  sum += (double)0.1154350468749999886;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13203.373046875) ) ) {
                  sum += (double)0.01729273214285714441;
                } else {
                  sum += (double)0.005531815789473685033;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.00053134560585022) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7278.848876953125) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7616499960422515869) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5004999935626983643) ) ) {
                    sum += (double)0.07718516000000001653;
                  } else {
                    sum += (double)0.03957942105263156929;
                  }
                } else {
                  sum += (double)0.1275535000000000141;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.04166603088378906) ) ) {
                  sum += (double)0.08936926086956520354;
                } else {
                  sum += (double)0.2666780113636363914;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3436.1851806640625) ) ) {
                sum += (double)0.03231898214285714582;
              } else {
                sum += (double)0.01726223529411764768;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.6894841194152832) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9540440738201141357) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2767300009727478027) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01339999958872795105) ) ) {
              sum += (double)0.4438402763157894837;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412595003843307495) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11889.39697265625) ) ) {
                  sum += (double)0.30708113461538461;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2075499966740608215) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7459.79833984375) ) ) {
                      sum += (double)0.1872771323529411891;
                    } else {
                      sum += (double)0.312264986842105241;
                    }
                  } else {
                    sum += (double)0.1459947631578947247;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5164.7373046875) ) ) {
                  sum += (double)0.3959382142857142406;
                } else {
                  sum += (double)0.2873278214285714394;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.62528324127197266) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3627.9508056640625) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.228212118148803711) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.01247406005859375) ) ) {
                    sum += (double)0.376297944444444421;
                  } else {
                    sum += (double)0.4546416029411764481;
                  }
                } else {
                  sum += (double)0.3452114074074074113;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.604779362678527832) ) ) {
                  sum += (double)0.3670573684210525767;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3191744983196258545) ) ) {
                    sum += (double)0.4988570454545454558;
                  } else {
                    sum += (double)0.4195607222222221822;
                  }
                }
              }
            } else {
              sum += (double)0.5031335096153846109;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5381.6572265625) ) ) {
            sum += (double)0.2275620666666666458;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.313299417495727539) ) ) {
              sum += (double)0.1223270833333333224;
            } else {
              sum += (double)0.02268175000000000052;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3608281761407852173) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3340644985437393188) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16627.3291015625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.64675283432006836) ) ) {
                sum += (double)0.2902081833333333138;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6832000017166137695) ) ) {
                  sum += (double)0.2365005263157894944;
                } else {
                  sum += (double)0.1479090333333333285;
                }
              }
            } else {
              sum += (double)0.140577777777777746;
            }
          } else {
            sum += (double)0.3656067656250000519;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4013499915599822998) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2373000010848045349) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3108825087547302246) ) ) {
                sum += (double)0.1316643970588235457;
              } else {
                sum += (double)0.036980190476190479;
              }
            } else {
              sum += (double)0.01409206818181818303;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20532.6123046875) ) ) {
              sum += (double)0.2038723809523809993;
            } else {
              sum += (double)0.1049904166666666694;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.419721648097038269) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5856605172157287598) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
          sum += (double)0.2728805892857142923;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07990000024437904358) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2476528063416481018) ) ) {
                  sum += (double)0.5142446370967741487;
                } else {
                  sum += (double)0.4618405681818181785;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03460000082850456238) ) ) {
                  sum += (double)0.5970507222222222188;
                } else {
                  sum += (double)0.5376567200000001989;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4480735063552856445) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.85421562194824219) ) ) {
                  sum += (double)0.4688288684210526469;
                } else {
                  sum += (double)0.3867190526315789079;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1435957327485084534) ) ) {
                  sum += (double)0.4477845441176470653;
                } else {
                  sum += (double)0.5404912500000000897;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08641625940799713135) ) ) {
              sum += (double)0.6663526718750000244;
            } else {
              sum += (double)0.568883861111111111;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.392998456954956055) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07293378934264183044) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.61852264404296875) ) ) {
              sum += (double)0.8828275735294118798;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0455377139151096344) ) ) {
                sum += (double)0.7671659117647058324;
              } else {
                sum += (double)0.8030124299999999993;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09207046404480934143) ) ) {
              sum += (double)0.661462117647058756;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.117613792419433594) ) ) {
                sum += (double)0.7215472500000000844;
              } else {
                sum += (double)0.7855211874999999955;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.43877506256103516) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.61491107940673828) ) ) {
              sum += (double)0.6164116666666666911;
            } else {
              sum += (double)0.7115046851851850596;
            }
          } else {
            sum += (double)0.5310051634615384764;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5475879907608032227) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7495625615119934082) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
            sum += (double)0.1756264833333333331;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3008000105619430542) ) ) {
              sum += (double)0.4996962249999999384;
            } else {
              sum += (double)0.331831894736842159;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.240928888320922852) ) ) {
            sum += (double)0.3834776842105263595;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1989.45965576171875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.216002464294433594) ) ) {
                sum += (double)0.3014209655172414015;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.41847801208496094) ) ) {
                  sum += (double)0.1322274761904761731;
                } else {
                  sum += (double)0.2639898750000000405;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.0501251220703125) ) ) {
                sum += (double)0.1089732115384615257;
              } else {
                sum += (double)0.0514085499999999973;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.455406785011291504) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
            sum += (double)0.3193994827586206786;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6919069886207580566) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9442522823810577393) ) ) {
                sum += (double)0.5560158260869565439;
              } else {
                sum += (double)0.44940195000000005;
              }
            } else {
              sum += (double)0.6510135333333333385;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.262626290321350098) ) ) {
            sum += (double)0.4012812500000000893;
          } else {
            sum += (double)0.1986966931818181792;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.258169889450073242) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1771675050258636475) ) ) {
        sum += (double)0.06066943478260868744;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1048.388763427734375) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1491.6959228515625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4529899954795837402) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.34222450852394104) ) ) {
                sum += (double)0.310595589999999977;
              } else {
                sum += (double)0.214839749999999996;
              }
            } else {
              sum += (double)0.3659621249999999715;
            }
          } else {
            sum += (double)0.4060387578124999841;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.176328539848327637) ) ) {
            sum += (double)0.3637865909090908789;
          } else {
            sum += (double)0.1496506521739130458;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4650000035762786865) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3714815080165863037) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.21538448333740234) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.164357014000415802) ) ) {
                sum += (double)0.002500000000000000052;
              } else {
                sum += (double)0.02472800000000000345;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)728.542327880859375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.5) ) ) {
                  sum += (double)0.003747111111111110782;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1349550560116767883) ) ) {
                    sum += (double)0.003732590909090908928;
                  } else {
                    sum += (double)0.002500000000000001787;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)472.455352783203125) ) ) {
                  sum += (double)0.01482859090909090932;
                } else {
                  sum += (double)0.002500000000000000052;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7702358067035675049) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2466.444091796875) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7031500041484832764) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3595499992370605469) ) ) {
                    sum += (double)0.06253876470588236314;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.149349994957447052) ) ) {
                      sum += (double)0.01376438823529411125;
                    } else {
                      sum += (double)0.03693835483870966385;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
                    sum += (double)0.0152495000000000009;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2449999973177909851) ) ) {
                      sum += (double)0.1001818823529411484;
                    } else {
                      sum += (double)0.03347957142857142798;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04020000062882900238) ) ) {
                  sum += (double)0.02625501612903225965;
                } else {
                  sum += (double)0.1443050416666666613;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3151500076055526733) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2049999982118606567) ) ) {
                  sum += (double)0.002499999999999999618;
                } else {
                  sum += (double)0.006315866666666667024;
                }
              } else {
                sum += (double)0.01017403333333333389;
              }
            }
          }
        } else {
          sum += (double)0.1241742499999999721;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.601218491792678833) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6850499808788299561) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9230.150390625) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03979999944567680359) ) ) {
                sum += (double)0.08008557000000000869;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2809499949216842651) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1846385002136230469) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3935753107070922852) ) ) {
                      sum += (double)0.01262938333333333413;
                    } else {
                      sum += (double)0.02151012500000000147;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                      sum += (double)0.04197319642857143956;
                    } else {
                      sum += (double)0.02307093055555555633;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20252.34765625) ) ) {
                    sum += (double)0.03566640000000000782;
                  } else {
                    sum += (double)0.06668794999999999584;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.98798084259033203) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.670041203498840332) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.98966169357299805) ) ) {
                      sum += (double)0.08342025000000000134;
                    } else {
                      sum += (double)0.04534828260869564615;
                    }
                  } else {
                    sum += (double)0.1679454642857142743;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3558440059423446655) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0775499977171421051) ) ) {
                      sum += (double)0.002499999999999999618;
                    } else {
                      sum += (double)0.01541222500000000162;
                    }
                  } else {
                    sum += (double)0.04814165740740739691;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7950000166893005371) ) ) {
                  sum += (double)0.1402753611111111076;
                } else {
                  sum += (double)0.2464021052631578945;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7224999964237213135) ) ) {
              sum += (double)0.2796654374999999471;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2907000035047531128) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)48.46271896362304688) ) ) {
                  sum += (double)0.08609498214285714324;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)95.07053375244140625) ) ) {
                    sum += (double)0.2202098624999999643;
                  } else {
                    sum += (double)0.1204371704545454391;
                  }
                }
              } else {
                sum += (double)0.03905172058823529191;
              }
            }
          }
        } else {
          sum += (double)0.2884353095238095244;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6300989389419555664) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.36018753051757812) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3375235050916671753) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005050000036135315895) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5669.7919921875) ) ) {
                sum += (double)0.4439865833333332956;
              } else {
                sum += (double)0.5040972500000000522;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2357529997825622559) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.258642673492431641) ) ) {
                  sum += (double)0.3356656145833332716;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6359000205993652344) ) ) {
                    sum += (double)0.1664693809523809243;
                  } else {
                    sum += (double)0.2499851111111111024;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2297.1180419921875) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4979499876499176025) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.738885998725891113) ) ) {
                      sum += (double)0.3719970178571428421;
                    } else {
                      sum += (double)0.3079380096153846447;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3910.9554443359375) ) ) {
                      sum += (double)0.3661534388888888492;
                    } else {
                      sum += (double)0.4338461458333333631;
                    }
                  }
                } else {
                  sum += (double)0.2717786309523809729;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1603500023484230042) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.738806009292602539) ) ) {
                sum += (double)0.4576816517857142386;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.999999873689375818e-05) ) ) {
                  sum += (double)0.6134715208333333392;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2874056398868560791) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.370241507887840271) ) ) {
                      sum += (double)0.4466386538461538658;
                    } else {
                      sum += (double)0.5148832148437499923;
                    }
                  } else {
                    sum += (double)0.5621068235294117699;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.719550013542175293) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2343887984752655029) ) ) {
                  sum += (double)0.4528033437499999758;
                } else {
                  sum += (double)0.3894633699999999754;
                }
              } else {
                sum += (double)0.3430994444444444569;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3357889950275421143) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1240499988198280334) ) ) {
              sum += (double)0.2582544782608695577;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.11092376708984375) ) ) {
                sum += (double)0.194391764705882375;
              } else {
                sum += (double)0.08167744791666664561;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2879499942064285278) ) ) {
              sum += (double)0.2394685625000000095;
            } else {
              sum += (double)0.361546171052631593;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.097320795059204102) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.0852203369140625) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3831795006990432739) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.18307590484619141) ) ) {
                sum += (double)0.3719825147058823389;
              } else {
                sum += (double)0.2133334259259259402;
              }
            } else {
              sum += (double)0.4203029999999999822;
            }
          } else {
            sum += (double)0.1153574903846153743;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4322064965963363647) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.17039787769317627) ) ) {
              sum += (double)0.2296770714285714388;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05865000002086162567) ) ) {
                sum += (double)0.1234373906250000041;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5089499950408935547) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3354485034942626953) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3936000019311904907) ) ) {
                      sum += (double)0.003632611111111112064;
                    } else {
                      sum += (double)0.0216803437500000043;
                    }
                  } else {
                    sum += (double)0.04796251190476189669;
                  }
                } else {
                  sum += (double)0.08790538461538462134;
                }
              }
            }
          } else {
            sum += (double)0.2729777763157894555;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6539085209369659424) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412058353424072266) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5120110213756561279) ) ) {
              sum += (double)0.5334008793103448554;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1254.77166748046875) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.636403560638427734) ) ) {
                  sum += (double)0.5473232058823529478;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8271500170230865479) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08305000141263008118) ) ) {
                      sum += (double)0.6853382321428570512;
                    } else {
                      sum += (double)0.6401820833333334848;
                    }
                  } else {
                    sum += (double)0.6093326875000000253;
                  }
                }
              } else {
                sum += (double)0.7148481833333331092;
              }
            }
          } else {
            sum += (double)0.4484049250000000097;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7397740185260772705) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
              sum += (double)0.6805852357142857523;
            } else {
              sum += (double)0.7481306363636364143;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5831313729286193848) ) ) {
              sum += (double)0.8887852282608695864;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.291600227355957031) ) ) {
                sum += (double)0.7417760227272727214;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05558137223124504089) ) ) {
                  sum += (double)0.7772013333333331886;
                } else {
                  sum += (double)0.8393905340909092461;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7563615143299102783) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.262150004506111145) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.019117653369903564) ) ) {
              sum += (double)0.4430443642857142539;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2481.459228515625) ) ) {
                sum += (double)0.4120115972222222478;
              } else {
                sum += (double)0.246320162499999995;
              }
            }
          } else {
            sum += (double)0.5351464310344826725;
          }
        } else {
          sum += (double)0.676487431818181939;
        }
      }
    }
  }
  return sum;
}
