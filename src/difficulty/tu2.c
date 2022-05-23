#include "prediction.h"
double predict_margin_unit2(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.457142829895019531) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5677529871463775635) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2549335062503814697) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
            sum += (double)0.07895877777777776663;
          } else {
            sum += (double)0.1650634558823529385;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3425499945878982544) ) ) {
            sum += (double)0.1742835555555556082;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1352313011884689331) ) ) {
              sum += (double)0.3598165238095237806;
            } else {
              sum += (double)0.2657235729166666505;
            }
          }
        }
      } else {
        sum += (double)0.4514175238095238241;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09103149920701980591) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.45217132568359375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11082.46044921875) ) ) {
                  sum += (double)0.01722837500000000063;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03331399895250797272) ) ) {
                    sum += (double)0.002500000000000000052;
                  } else {
                    sum += (double)0.008008750000000000244;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4876.006591796875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8596999943256378174) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.196600005030632019) ) ) {
                      sum += (double)0.002676931972789117504;
                    } else {
                      sum += (double)0.004197741935483871416;
                    }
                  } else {
                    sum += (double)0.00569885714285714353;
                  }
                } else {
                  sum += (double)0.009793305555555556832;
                }
              }
            } else {
              sum += (double)0.02419328703703703398;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8536999821662902832) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7702707648277282715) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5910044014453887939) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.09722185134887695) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1653215065598487854) ) ) {
                      sum += (double)0.02032528500000000196;
                    } else {
                      sum += (double)0.04951172413793102772;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3949999958276748657) ) ) {
                      sum += (double)0.009608030000000000043;
                    } else {
                      sum += (double)0.03033411764705881697;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6395245790481567383) ) ) {
                    sum += (double)0.08160977499999998164;
                  } else {
                    sum += (double)0.02467059375000000068;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.177854359149932861) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.90293693542480469) ) ) {
                    sum += (double)0.01766295833333332913;
                  } else {
                    sum += (double)0.005129527777777777992;
                  }
                } else {
                  sum += (double)0.003676319444444445597;
                }
              }
            } else {
              sum += (double)0.1029282187499999945;
            }
          }
        } else {
          sum += (double)0.1554425454545454166;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5473309755325317383) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009450000245124101639) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1846069991588592529) ) ) {
              sum += (double)0.2718288035714285789;
            } else {
              sum += (double)0.1564090714285713835;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6755499839782714844) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.198245525360107422) ) ) {
                sum += (double)0.1570140800000000281;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434910014271736145) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3528999984264373779) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1511000022292137146) ) ) {
                      sum += (double)0.004606857142857142574;
                    } else {
                      sum += (double)0.02136200000000000251;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1986989974975585938) ) ) {
                      sum += (double)0.03413730421686747563;
                    } else {
                      sum += (double)0.0749846071428571237;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5094500184059143066) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7700000107288360596) ) ) {
                      sum += (double)0.1179899705882352656;
                    } else {
                      sum += (double)0.05505109016393441856;
                    }
                  } else {
                    sum += (double)0.2038548166666666606;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2997500002384185791) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1228499971330165863) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.53680562973022461) ) ) {
                    sum += (double)0.08481128409090908649;
                  } else {
                    sum += (double)0.1471121124999999752;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11587.2421875) ) ) {
                    sum += (double)0.143108749999999979;
                  } else {
                    sum += (double)0.2553559166666666269;
                  }
                }
              } else {
                sum += (double)0.05046285937500000207;
              }
            }
          }
        } else {
          sum += (double)0.3329724531250000119;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9739091694355010986) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83318185806274414) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03309999965131282806) ) ) {
              sum += (double)0.4407432129629629824;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.185559496283531189) ) ) {
                  sum += (double)0.2344465000000000576;
                } else {
                  sum += (double)0.3188426666666667186;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2175995036959648132) ) ) {
                  sum += (double)0.1314269399999999921;
                } else {
                  sum += (double)0.2629289027777776955;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.361772000789642334) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.203125) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7100999951362609863) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5165499746799468994) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4332.30908203125) ) ) {
                      sum += (double)0.4036589821428570035;
                    } else {
                      sum += (double)0.3080740833333333595;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3882.0062255859375) ) ) {
                      sum += (double)0.4073279852941175672;
                    } else {
                      sum += (double)0.4755808879310344239;
                    }
                  }
                } else {
                  sum += (double)0.258993138888888863;
                }
              } else {
                sum += (double)0.4855602065217390906;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01974999997764825821) ) ) {
                sum += (double)0.5777815172413793832;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.042261838912963867) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.147989273071289062) ) ) {
                    sum += (double)0.4757290217391304532;
                  } else {
                    sum += (double)0.5622886093749999148;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.394444003701210022) ) ) {
                    sum += (double)0.4733284204545454288;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2379604950547218323) ) ) {
                      sum += (double)0.4388549027777777223;
                    } else {
                      sum += (double)0.3548759687499999926;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1240499988198280334) ) ) {
            sum += (double)0.3541471500000000217;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2401490062475204468) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3113500028848648071) ) ) {
                sum += (double)0.1715057600000000071;
              } else {
                sum += (double)0.0421145978260869594;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4366499930620193481) ) ) {
                sum += (double)0.1280208333333333337;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.76415443420410156) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.52592706680297852) ) ) {
                    sum += (double)0.2947879687500000179;
                  } else {
                    sum += (double)0.1765739117647059098;
                  }
                } else {
                  sum += (double)0.3528355340909091198;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3709160089492797852) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25422.712890625) ) ) {
            sum += (double)0.1443557375000000254;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.123601198196411133) ) ) {
              sum += (double)0.1159093333333333503;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2613.43408203125) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.78266429901123047) ) ) {
                  sum += (double)0.06075358695652174207;
                } else {
                  sum += (double)0.01569030555555555456;
                }
              } else {
                sum += (double)0.01260250000000000259;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.591643571853637695) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1961.10186767578125) ) ) {
              sum += (double)0.3369548815789473739;
            } else {
              sum += (double)0.1692277261904762131;
            }
          } else {
            sum += (double)0.07168985294117646845;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6194075047969818115) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45105838775634766) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.875076651573181152) ) ) {
                  sum += (double)0.5313183124999999452;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.23529386520385742) ) ) {
                    sum += (double)0.4405171153846154097;
                  } else {
                    sum += (double)0.5184116166666666858;
                  }
                }
              } else {
                sum += (double)0.5987284642857143568;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0254999995231628418) ) ) {
                sum += (double)0.6792771999999999144;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5845499932765960693) ) ) {
                  sum += (double)0.5363176805555556204;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08599999919533729553) ) ) {
                    sum += (double)0.6318536617647059206;
                  } else {
                    sum += (double)0.5741162727272727251;
                  }
                }
              }
            }
          } else {
            sum += (double)0.4086743099999999851;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7125905156135559082) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.81451606750488281) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.51964664459228516) ) ) {
                sum += (double)0.6676358709677421288;
              } else {
                sum += (double)0.7417679218750000691;
              }
            } else {
              sum += (double)0.6253872115384614405;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1855.27813720703125) ) ) {
                sum += (double)0.7809886774193547376;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1138.35577392578125) ) ) {
                  sum += (double)0.8674097105263157692;
                } else {
                  sum += (double)0.8028197236842105067;
                }
              }
            } else {
              sum += (double)0.6962716249999999496;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.971623599529266357) ) ) {
          sum += (double)0.4465319891304348476;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
            sum += (double)0.3683082395833333078;
          } else {
            sum += (double)0.1714645576923077008;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4626670032739639282) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.908870220184326172) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.805000007152557373) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1836035028100013733) ) ) {
            sum += (double)0.03224358749999998996;
          } else {
            sum += (double)0.1379410699999999712;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.32023906707763672) ) ) {
            sum += (double)0.1485531209677419251;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.431538581848144531) ) ) {
              sum += (double)0.3381477666666666271;
            } else {
              sum += (double)0.4017339843749999639;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4249999970197677612) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.74512958526611328) ) ) {
            sum += (double)0.07611521428571428605;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07185503095388412476) ) ) {
              sum += (double)0.06290147368421052099;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1427690014243125916) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2249999940395355225) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.13921546936035156) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4560.48388671875) ) ) {
                      sum += (double)0.03030625000000000333;
                    } else {
                      sum += (double)0.00865970930232558278;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02444999944418668747) ) ) {
                      sum += (double)0.0027722434782608712;
                    } else {
                      sum += (double)0.005314358108108104863;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.19999885559082031) ) ) {
                    sum += (double)0.008985933333333332926;
                  } else {
                    sum += (double)0.02989151851851852212;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.31818199157714844) ) ) {
                  sum += (double)0.05434334782608694209;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2810999900102615356) ) ) {
                    sum += (double)0.003180904761904761961;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.563349992036819458) ) ) {
                      sum += (double)0.03909981481481480947;
                    } else {
                      sum += (double)0.01529619117647058879;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002550000092014670372) ) ) {
            sum += (double)0.1701254642857142618;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2139765024185180664) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.967741966247558594) ) ) {
                sum += (double)0.1463673452380952478;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.396049991250038147) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6859801411628723145) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2774000018835067749) ) ) {
                      sum += (double)0.02716396969696968644;
                    } else {
                      sum += (double)0.04889033749999999873;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1775225028395652771) ) ) {
                      sum += (double)0.005327333333333333226;
                    } else {
                      sum += (double)0.01076805882352941356;
                    }
                  }
                } else {
                  sum += (double)0.05228330208333333701;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4293383657932281494) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.814999997615814209) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1546500027179718018) ) ) {
                    sum += (double)0.2349150357142857359;
                  } else {
                    sum += (double)0.1577705555555555805;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2846820950508117676) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05019999854266643524) ) ) {
                      sum += (double)0.0478079117647058835;
                    } else {
                      sum += (double)0.1004516521739130253;
                    }
                  } else {
                    sum += (double)0.1428589404761904658;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
                  sum += (double)0.1170476637931034125;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.373050004243850708) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3098855018615722656) ) ) {
                      sum += (double)0.01655559722222222502;
                    } else {
                      sum += (double)0.04662335344827585326;
                    }
                  } else {
                    sum += (double)0.07542596590909089738;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.579411745071411133) ) ) {
        sum += (double)0.4703472333333332811;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1119.5023193359375) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4069.2884521484375) ) ) {
            sum += (double)0.2494695000000000384;
          } else {
            sum += (double)0.4201091547619046906;
          }
        } else {
          sum += (double)0.06991163888888889122;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5474660098552703857) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9647493362426757812) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3407765030860900879) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46942424774169922) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001099999994039535522) ) ) {
              sum += (double)0.5101469047619047181;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.499390125274658203) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2713164985179901123) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.784518003463745117) ) ) {
                    sum += (double)0.3782355500000000315;
                  } else {
                    sum += (double)0.2908040416666666794;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3080070018768310547) ) ) {
                    sum += (double)0.4500045603448274978;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.16286778450012207) ) ) {
                      sum += (double)0.3452127976190476066;
                    } else {
                      sum += (double)0.4191369464285714663;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7165.74755859375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2032870054244995117) ) ) {
                      sum += (double)0.3471527968749999471;
                    } else {
                      sum += (double)0.2323431911764705926;
                    }
                  } else {
                    sum += (double)0.3903965384615384338;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2456189543008804321) ) ) {
                    sum += (double)0.2974530312499999996;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1796000003814697266) ) ) {
                      sum += (double)0.1622764891304347701;
                    } else {
                      sum += (double)0.2670587499999999559;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.63336181640625) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3435999900102615356) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.1095890998840332) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5266499817371368408) ) ) {
                    sum += (double)0.3759118833333333631;
                  } else {
                    sum += (double)0.2538804444444444641;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.49105644226074219) ) ) {
                    sum += (double)0.1432340394736842104;
                  } else {
                    sum += (double)0.310470916666666652;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2057614997029304504) ) ) {
                  sum += (double)0.03659353333333333763;
                } else {
                  sum += (double)0.2326723611111111145;
                }
              }
            } else {
              sum += (double)0.05592594642857142556;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.05962038040161133) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999824678525329) ) ) {
              sum += (double)0.6300024880952380668;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.253616824746131897) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1446.51361083984375) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.78005599975585938) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9544.1591796875) ) ) {
                      sum += (double)0.4169088928571428321;
                    } else {
                      sum += (double)0.4890432817796612208;
                    }
                  } else {
                    sum += (double)0.5591433888888888148;
                  }
                } else {
                  sum += (double)0.5866245374999998763;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.328250005841255188) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.201996803283691406) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                      sum += (double)0.47432495588235285;
                    } else {
                      sum += (double)0.395539361111111154;
                    }
                  } else {
                    sum += (double)0.5072227631578947182;
                  }
                } else {
                  sum += (double)0.3987954305555556078;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.526549994945526123) ) ) {
              sum += (double)0.2081869218750000139;
            } else {
              sum += (double)0.3411298499999999567;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.378157496452331543) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
            sum += (double)0.193611925000000018;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.373043537139892578) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3263.703857421875) ) ) {
                sum += (double)0.1159185241935483668;
              } else {
                sum += (double)0.02118700000000000097;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1409000009298324585) ) ) {
                sum += (double)0.0319635277777777782;
              } else {
                sum += (double)0.007277233333333333297;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.294871807098388672) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1690.56494140625) ) ) {
              sum += (double)0.4003107142857142975;
            } else {
              sum += (double)0.156070964285714292;
            }
          } else {
            sum += (double)0.102350333333333321;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.043504655361175537) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8047.837158203125) ) ) {
            sum += (double)0.5344946999999999893;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5811865031719207764) ) ) {
              sum += (double)0.5987724621212121567;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.06756734848022461) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6099999845027923584) ) ) {
                  sum += (double)0.5977391666666665992;
                } else {
                  sum += (double)0.6933648870967741296;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08359999954700469971) ) ) {
                  sum += (double)0.7369274659090908619;
                } else {
                  sum += (double)0.6886634027777778222;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1052500009536743164) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0385500006377696991) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9451737403869628906) ) ) {
                sum += (double)0.8557294342105261631;
              } else {
                sum += (double)0.8224578281249999012;
              }
            } else {
              sum += (double)0.7891360833333332936;
            }
          } else {
            sum += (double)0.7326332338709677927;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06179999746382236481) ) ) {
          sum += (double)0.2865020000000000899;
        } else {
          sum += (double)0.4649807499999999982;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3228154927492141724) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.730263233184814453) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
            sum += (double)0.1462083421052631504;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.5) ) ) {
              sum += (double)0.08894651666666665568;
            } else {
              sum += (double)0.01757131481481481738;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.05549716949462891) ) ) {
            sum += (double)0.1027809342105262952;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009399999864399433136) ) ) {
              sum += (double)0.3398400441176470665;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.25410500168800354) ) ) {
                sum += (double)0.2896759833333333867;
              } else {
                sum += (double)0.2143305000000000071;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.27391290664672852) ) ) {
              sum += (double)0.02308282500000000473;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1829499974846839905) ) ) {
                sum += (double)0.006026441176470589446;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8529999852180480957) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.20833206176757812) ) ) {
                    sum += (double)0.003680400000000000338;
                  } else {
                    sum += (double)0.002500000000000001787;
                  }
                } else {
                  sum += (double)0.004717166666666666383;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.45820522308349609) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.75468969345092773) ) ) {
                sum += (double)0.0298148300000000005;
              } else {
                sum += (double)0.07557665277777776691;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7680511474609375) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.51169586181640625) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.340647965669631958) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.109171498566865921) ) ) {
                      sum += (double)0.006789096774193549219;
                    } else {
                      sum += (double)0.01674162499999999956;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.01357338888888889004;
                    } else {
                      sum += (double)0.03349063888888889617;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.84761905670166016) ) ) {
                    sum += (double)0.09620666666666666256;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4597000032663345337) ) ) {
                      sum += (double)0.06808045000000000069;
                    } else {
                      sum += (double)0.01509142982456139134;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.254999995231628418) ) ) {
                  sum += (double)0.002500000000000000919;
                } else {
                  sum += (double)0.01140025000000000066;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005649999948218464851) ) ) {
            sum += (double)0.2204825208333333897;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6850499808788299561) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6086320579051971436) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2200369983911514282) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29269.9951171875) ) ) {
                    sum += (double)0.07428089772727271278;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.680000007152557373) ) ) {
                      sum += (double)0.01455495588235294208;
                    } else {
                      sum += (double)0.04174390579710143823;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9005.986328125) ) ) {
                    sum += (double)0.04591023611111110653;
                  } else {
                    sum += (double)0.2120727500000000321;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3503499925136566162) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4139000028371810913) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9200000166893005371) ) ) {
                      sum += (double)0.004386060606060606867;
                    } else {
                      sum += (double)0.01418028571428571472;
                    }
                  } else {
                    sum += (double)0.03102118055555555878;
                  }
                } else {
                  sum += (double)0.04065808620689654457;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19772.0146484375) ) ) {
                sum += (double)0.03630488095238094959;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1279999986290931702) ) ) {
                  sum += (double)0.1023159274193548157;
                } else {
                  sum += (double)0.2126760238095238287;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5530949532985687256) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4951.650146484375) ) ) {
          sum += (double)0.1492758804347825985;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9499999880790710449) ) ) {
            sum += (double)0.2782708888888889009;
          } else {
            sum += (double)0.5108185486111110896;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5177074968814849854) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08184999972581863403) ) ) {
            sum += (double)0.04306671999999999584;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.758333683013916016) ) ) {
              sum += (double)0.2580010131578946986;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4697.3935546875) ) ) {
                sum += (double)0.03437778571428571489;
              } else {
                sum += (double)0.1375390125000000019;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1251000016927719116) ) ) {
            sum += (double)0.3664671590909091003;
          } else {
            sum += (double)0.175639941176470582;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.95028257369995117) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.5315112109375000893;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2357899993658065796) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.07700920104980469) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1745999976992607117) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3027452975511550903) ) ) {
                      sum += (double)0.2140780294117647087;
                    } else {
                      sum += (double)0.1466808437500000117;
                    }
                  } else {
                    sum += (double)0.2578974782608695615;
                  }
                } else {
                  sum += (double)0.3149651666666666849;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.17366981506347656) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.04100513458251953) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2988047748804092407) ) ) {
                      sum += (double)0.4314932785714286068;
                    } else {
                      sum += (double)0.3612193515624999574;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5090.98779296875) ) ) {
                      sum += (double)0.3746462589285713407;
                    } else {
                      sum += (double)0.2433960285714286131;
                    }
                  }
                } else {
                  sum += (double)0.4461329499999999726;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07294999808073043823) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.94337606430053711) ) ) {
                sum += (double)0.4838522758620688036;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.92095565795898438) ) ) {
                  sum += (double)0.5503592187499999344;
                } else {
                  sum += (double)0.5945687499999999792;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.5233917236328125) ) ) {
                sum += (double)0.4980056304347826313;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6936999857425689697) ) ) {
                  sum += (double)0.4453061785714286236;
                } else {
                  sum += (double)0.3749895526315789041;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.335476994514465332) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.8064422607421875) ) ) {
              sum += (double)0.2625677421875000084;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7506500184535980225) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6369499862194061279) ) ) {
                  sum += (double)0.1465770703124999741;
                } else {
                  sum += (double)0.2583328333333333449;
                }
              } else {
                sum += (double)0.09420594117647057564;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4373503327369689941) ) ) {
              sum += (double)0.3873604204545454399;
            } else {
              sum += (double)0.2397107894736842382;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.378157496452331543) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05865000002086162567) ) ) {
            sum += (double)0.1453032499999999672;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5413999855518341064) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2422095015645027161) ) ) {
                sum += (double)0.03827385294117647413;
              } else {
                sum += (double)0.01162928846153846174;
              }
            } else {
              sum += (double)0.1083194666666666556;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.668108701705932617) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1868.17352294921875) ) ) {
              sum += (double)0.353566069444444353;
            } else {
              sum += (double)0.1547626465517241701;
            }
          } else {
            sum += (double)0.0426788125000000032;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7495210170745849609) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7296745777130126953) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                sum += (double)0.5330127300000000456;
              } else {
                sum += (double)0.6233419411764706819;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.58401346206665039) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4942409992218017578) ) ) {
                  sum += (double)0.5261931699999999879;
                } else {
                  sum += (double)0.4785015151515150666;
                }
              } else {
                sum += (double)0.4154000624999999447;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7734.72119140625) ) ) {
              sum += (double)0.5180008333333333548;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6194075047969818115) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280848264694213867) ) ) {
                  sum += (double)0.573458187499999883;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.898981332778930664) ) ) {
                    sum += (double)0.6936727833333333759;
                  } else {
                    sum += (double)0.6300145714285713128;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.40726470947265625) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.456896543502807617) ) ) {
                    sum += (double)0.6878256999999998733;
                  } else {
                    sum += (double)0.7583037894736840423;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1769876405596733093) ) ) {
                    sum += (double)0.6427393076923076931;
                  } else {
                    sum += (double)0.6989716136363636201;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.053047418594360352) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5166170001029968262) ) ) {
              sum += (double)0.2979238846153846043;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.879446506500244141) ) ) {
                sum += (double)0.4131404868421052479;
              } else {
                sum += (double)0.516855840909090869;
              }
            }
          } else {
            sum += (double)0.2496072875000000246;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03894999995827674866) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.135382294654846191) ) ) {
            sum += (double)0.8730400961538461457;
          } else {
            sum += (double)0.8122846538461538923;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7032000124454498291) ) ) {
            sum += (double)0.6910403552631578794;
          } else {
            sum += (double)0.7776840624999998841;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.262443304061889648) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1399450600147247314) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2368410006165504456) ) ) {
            sum += (double)0.1053932794117646982;
          } else {
            sum += (double)0.3447087931034483188;
          }
        } else {
          sum += (double)0.08308042187500000453;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5727815032005310059) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3589999973773956299) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4365565031766891479) ) ) {
              sum += (double)0.1816071406249999964;
            } else {
              sum += (double)0.3404003076923076687;
            }
          } else {
            sum += (double)0.4103183666666666563;
          }
        } else {
          sum += (double)0.5192650434782608571;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3414715081453323364) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.21538448333740234) ) ) {
              sum += (double)0.01499676724137931176;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)728.542327880859375) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.20833206176757812) ) ) {
                  sum += (double)0.00465883333333333427;
                } else {
                  sum += (double)0.002500000000000001787;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4708435982465744019) ) ) {
                  sum += (double)0.01887993749999999915;
                } else {
                  sum += (double)0.008848000000000001697;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1147500015795230865) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                sum += (double)0.1031352625000000051;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7409000098705291748) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06244999915361404419) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
                      sum += (double)0.01192475373134328255;
                    } else {
                      sum += (double)0.03150576249999999245;
                    }
                  } else {
                    sum += (double)0.04534109722222221667;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.01818180084228516) ) ) {
                    sum += (double)0.1284406250000000027;
                  } else {
                    sum += (double)0.03471747222222221901;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3187000006437301636) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6586.7607421875) ) ) {
                  sum += (double)0.002500000000000000052;
                } else {
                  sum += (double)0.004917499999999999996;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6239885389804840088) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2650000005960464478) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1188849993050098419) ) ) {
                      sum += (double)0.01287265789473684453;
                    } else {
                      sum += (double)0.004584533333333334036;
                    }
                  } else {
                    sum += (double)0.02119681818181818125;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7680511474609375) ) ) {
                    sum += (double)0.06108185416666666451;
                  } else {
                    sum += (double)0.01546625000000000083;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02364999987185001373) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3566415905952453613) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1531744971871376038) ) ) {
                sum += (double)0.1936515250000000188;
              } else {
                sum += (double)0.228972625000000013;
              }
            } else {
              sum += (double)0.06235391666666666166;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6879646778106689453) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2209069952368736267) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.5739750862121582) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2271817773580551147) ) ) {
                    sum += (double)0.06585438750000000008;
                  } else {
                    sum += (double)0.1489121973684210676;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4189000129699707031) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2097026854753494263) ) ) {
                      sum += (double)0.06272889999999999022;
                    } else {
                      sum += (double)0.02705465109890109118;
                    }
                  } else {
                    sum += (double)0.08980756578947368673;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5671499967575073242) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
                    sum += (double)0.09521730000000001859;
                  } else {
                    sum += (double)0.03925740000000000479;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8850000202655792236) ) ) {
                    sum += (double)0.2385000000000000175;
                  } else {
                    sum += (double)0.1258404444444444215;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)53.5161285400390625) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3127000033855438232) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.65022182464599609) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1195999979972839355) ) ) {
                      sum += (double)0.01071115789473684431;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  } else {
                    sum += (double)0.01945483333333334133;
                  }
                } else {
                  sum += (double)0.02818611363636363762;
                }
              } else {
                sum += (double)0.05343731666666665103;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5962949991226196289) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4046681821346282959) ) ) {
            sum += (double)0.2279847121212121019;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07310000061988830566) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1078.5985107421875) ) ) {
                sum += (double)0.07900086538461539853;
              } else {
                sum += (double)0.01567918750000000042;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8491871356964111328) ) ) {
                sum += (double)0.2781792333333333311;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.621025562286376953) ) ) {
                  sum += (double)0.03682087500000000291;
                } else {
                  sum += (double)0.1659055000000000113;
                }
              }
            }
          }
        } else {
          sum += (double)0.3069806250000000625;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.994304656982421875) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2946670055389404297) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01730000041425228119) ) ) {
              sum += (double)0.456418031249999967;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.349303245544433594) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5882.902099609375) ) ) {
                  sum += (double)0.3505664531250000104;
                } else {
                  sum += (double)0.428308267857142877;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5691.20263671875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441440001130104065) ) ) {
                    sum += (double)0.2863687500000000052;
                  } else {
                    sum += (double)0.4085149062499999761;
                  }
                } else {
                  sum += (double)0.2086925648148148238;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003550000139512121677) ) ) {
              sum += (double)0.5440787361111111275;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4041.099853515625) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.242307662963867188) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.6709437370300293) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5548.004150390625) ) ) {
                      sum += (double)0.3748237968750000038;
                    } else {
                      sum += (double)0.4503198382352941453;
                    }
                  } else {
                    sum += (double)0.469706616666666632;
                  }
                } else {
                  sum += (double)0.3465732499999999994;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2690.1253662109375) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3198.997802734375) ) ) {
                    sum += (double)0.4791641451612901892;
                  } else {
                    sum += (double)0.4232935299999999734;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08184999972581863403) ) ) {
                    sum += (double)0.5229001413043478097;
                  } else {
                    sum += (double)0.4773117361111111068;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3363225013017654419) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02084999997168779373) ) ) {
                sum += (double)0.3820710312499999706;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2380985021591186523) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5148389041423797607) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.220257982611656189) ) ) {
                      sum += (double)0.1988982613636363916;
                    } else {
                      sum += (double)0.06580145652173911841;
                    }
                  } else {
                    sum += (double)0.2779325576923076802;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17257.1611328125) ) ) {
                    sum += (double)0.3428967857142857789;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2886358648538589478) ) ) {
                      sum += (double)0.2902161346153845911;
                    } else {
                      sum += (double)0.1962525312500000008;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2603000029921531677) ) ) {
                sum += (double)0.06735060000000001046;
              } else {
                sum += (double)0.1811967999999999912;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24325.6376953125) ) ) {
              sum += (double)0.249933904761904746;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4153479933738708496) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2516522184014320374) ) ) {
                  sum += (double)0.4193524843749999453;
                } else {
                  sum += (double)0.5044811607142857257;
                }
              } else {
                sum += (double)0.30052159615384616;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.638694882392883301) ) ) {
          sum += (double)0.2884473970588235514;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08080000057816505432) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.775188267230987549) ) ) {
              sum += (double)0.2647323500000000052;
            } else {
              sum += (double)0.08749654807692305858;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17592.8583984375) ) ) {
              sum += (double)0.08773027777777778202;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1489500030875205994) ) ) {
                sum += (double)0.01055767647058823526;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1966999992728233337) ) ) {
                  sum += (double)0.08090084999999999638;
                } else {
                  sum += (double)0.02542760937500000012;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5615413188934326172) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.09328365325927734) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.539371490478515625) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1959781572222709656) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3041.1116943359375) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0984248630702495575) ) ) {
                    sum += (double)0.4848203552631579205;
                  } else {
                    sum += (double)0.5530047236842104974;
                  }
                } else {
                  sum += (double)0.6226858333333332718;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.018467187881469727) ) ) {
                  sum += (double)0.5288561785714285257;
                } else {
                  sum += (double)0.4527692749999999711;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2304.35107421875) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07852664217352867126) ) ) {
                  sum += (double)0.6497026500000000482;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1788018569350242615) ) ) {
                    sum += (double)0.5386869264705881344;
                  } else {
                    sum += (double)0.6076416875000000273;
                  }
                }
              } else {
                sum += (double)0.6717073819444442373;
              }
            }
          } else {
            sum += (double)0.3401890657894736658;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.640048980712890625) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2415.3333740234375) ) ) {
                sum += (double)0.6795138749999999339;
              } else {
                sum += (double)0.745110909090909046;
              }
            } else {
              sum += (double)0.5949636323529413628;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3278.4515380859375) ) ) {
              sum += (double)0.7500077142857142221;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01849999930709600449) ) ) {
                sum += (double)0.8682903437500002486;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1727.71044921875) ) ) {
                  sum += (double)0.7959226704545453446;
                } else {
                  sum += (double)0.8337323823529411149;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6700114905834197998) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.095419049263000488) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.592685997486114502) ) ) {
              sum += (double)0.4248202031250000177;
            } else {
              sum += (double)0.4640806071428572044;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.992208629846572876) ) ) {
              sum += (double)0.4307229078947368284;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2471.7059326171875) ) ) {
                sum += (double)0.3018748281249999943;
              } else {
                sum += (double)0.1608881833333333511;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.085762977600097656) ) ) {
            sum += (double)0.4343583666666666621;
          } else {
            sum += (double)0.6152475833333335142;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473649978637695312) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.947222232818603516) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.20833206176757812) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.310714483261108398) ) ) {
              sum += (double)0.07917153947368421596;
            } else {
              sum += (double)0.01407643382352941411;
            }
          } else {
            sum += (double)0.1488588676470588013;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03889999911189079285) ) ) {
            sum += (double)0.2313742500000000035;
          } else {
            sum += (double)0.09672092391304347447;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07210149988532066345) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1700000017881393433) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.42391300201416016) ) ) {
                  sum += (double)0.005345888888888889606;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05543799884617328644) ) ) {
                    sum += (double)0.002500000000000001353;
                  } else {
                    sum += (double)0.003542961538461538665;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05855749920010566711) ) ) {
                  sum += (double)0.00815659090909091021;
                } else {
                  sum += (double)0.003921899999999999865;
                }
              }
            } else {
              sum += (double)0.01511562499999999885;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.78529453277587891) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.32500028610229492) ) ) {
                sum += (double)0.01827172619047618893;
              } else {
                sum += (double)0.08285249999999998172;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0853369981050491333) ) ) {
                sum += (double)0.03951546052631578487;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)84.89898681640625) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2939.94921875) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1450000032782554626) ) ) {
                      sum += (double)0.03406278571428571211;
                    } else {
                      sum += (double)0.0132281250000000003;
                    }
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1208500005304813385) ) ) {
                    sum += (double)0.01089527500000000114;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4569872915744781494) ) ) {
                      sum += (double)0.004918153846153845536;
                    } else {
                      sum += (double)0.002724977272727272578;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6182352900505065918) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2199295014142990112) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4864984452724456787) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1873414963483810425) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2863192707300186157) ) ) {
                      sum += (double)0.0379943984374999863;
                    } else {
                      sum += (double)0.01603671153846153441;
                    }
                  } else {
                    sum += (double)0.06443653448275861451;
                  }
                } else {
                  sum += (double)0.101135031250000007;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5570999979972839355) ) ) {
                  sum += (double)0.1399464204545454449;
                } else {
                  sum += (double)0.064476607142857148;
                }
              }
            } else {
              sum += (double)0.1447171470588235476;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.685000002384185791) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.38808059692382812) ) ) {
                sum += (double)0.05157417500000001376;
              } else {
                sum += (double)0.01555273529411764846;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2908000051975250244) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.85985565185546875) ) ) {
                  sum += (double)0.004380952380952381209;
                } else {
                  sum += (double)0.009462583333333334998;
                }
              } else {
                sum += (double)0.01502771875000000201;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.395299196243286133) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-766.58837890625) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5420745015144348145) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3553670048713684082) ) ) {
              sum += (double)0.3860050624999999958;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4529899954795837402) ) ) {
                sum += (double)0.2483073906249999852;
              } else {
                sum += (double)0.3746319642857143251;
              }
            }
          } else {
            sum += (double)0.5511383166666666833;
          }
        } else {
          sum += (double)0.1676429411764706057;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5979785025119781494) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.185000002384185791) ) ) {
            sum += (double)0.007273928571428571813;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.41071510314941406) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8619630634784698486) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1199499964714050293) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.488399997353553772) ) ) {
                    sum += (double)0.04609574999999999784;
                  } else {
                    sum += (double)0.1460537613636363752;
                  }
                } else {
                  sum += (double)0.2245560370370370262;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.29106044769287109) ) ) {
                  sum += (double)0.01399697727272727205;
                } else {
                  sum += (double)0.06192122222222221778;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9038.6455078125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.316596493124961853) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000119209289551) ) ) {
                    sum += (double)0.09234398437499999335;
                  } else {
                    sum += (double)0.03215579999999999827;
                  }
                } else {
                  sum += (double)0.1570606428571428292;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.58333206176757812) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3912.6695556640625) ) ) {
                    sum += (double)0.07257890000000001562;
                  } else {
                    sum += (double)0.2604545238095238302;
                  }
                } else {
                  sum += (double)0.3548164326923076706;
                }
              }
            }
          }
        } else {
          sum += (double)0.3635677840909091185;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4447671771049499512) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3339300006628036499) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.509975433349609375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
              sum += (double)0.4851255326086956754;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2713164985179901123) ) ) {
                sum += (double)0.3467463035714286046;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3010239899158477783) ) ) {
                  sum += (double)0.441724176470588259;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3154934942722320557) ) ) {
                    sum += (double)0.3394515294117647075;
                  } else {
                    sum += (double)0.404227694444444452;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2311585023999214172) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02325000055134296417) ) ) {
                sum += (double)0.3911423333333334251;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2833499908447265625) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1265000030398368835) ) ) {
                    sum += (double)0.165624342105263167;
                  } else {
                    sum += (double)0.2445171363636363671;
                  }
                } else {
                  sum += (double)0.06063765624999999104;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2727655023336410522) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.458382129669189453) ) ) {
                  sum += (double)0.4820562368421053567;
                } else {
                  sum += (double)0.3750584285714285704;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.168400004506111145) ) ) {
                  sum += (double)0.1791853913043478241;
                } else {
                  sum += (double)0.3189278229166666034;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01974999997764825821) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
              sum += (double)0.6219619687499999827;
            } else {
              sum += (double)0.5390269166666666889;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7122000157833099365) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1734500005841255188) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.593365907669067383) ) ) {
                  sum += (double)0.4891134428571428661;
                } else {
                  sum += (double)0.5595882934782607787;
                }
              } else {
                sum += (double)0.4122742125000000146;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.36363649368286133) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4113744944334030151) ) ) {
                  sum += (double)0.3941935952380952735;
                } else {
                  sum += (double)0.4744721979166666159;
                }
              } else {
                sum += (double)0.3364681805555556071;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.116747558116912842) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.32221174240112305) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.91803586483001709) ) ) {
              sum += (double)0.4206116388888889168;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4921.91796875) ) ) {
                sum += (double)0.3787506874999999607;
              } else {
                sum += (double)0.2379731517857142375;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4226000010967254639) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2702499926090240479) ) ) {
                sum += (double)0.2449440468750000155;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.2856755256652832) ) ) {
                  sum += (double)0.2134763984375000201;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.51873207092285156) ) ) {
                    sum += (double)0.1347922205882353119;
                  } else {
                    sum += (double)0.0798838166666666627;
                  }
                }
              }
            } else {
              sum += (double)0.3276383906249999423;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
            sum += (double)0.2622881805555555279;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21313.9375) ) ) {
              sum += (double)0.2045970119047618718;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.018280982971191406) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2103.2374267578125) ) ) {
                  sum += (double)0.1610425294117647232;
                } else {
                  sum += (double)0.05330789285714286618;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5382.2822265625) ) ) {
                  sum += (double)0.03198582758620688998;
                } else {
                  sum += (double)0.009085033333333332461;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9429409801959991455) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.527967453002929688) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5251489877700805664) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2764.6925048828125) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4920250028371810913) ) ) {
                    sum += (double)0.5847097499999999171;
                  } else {
                    sum += (double)0.4670466041666666013;
                  }
                } else {
                  sum += (double)0.4632698055555555805;
                }
              } else {
                sum += (double)0.6014808303571428372;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992000043392181396) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3016.6683349609375) ) ) {
                  sum += (double)0.5453284558823529027;
                } else {
                  sum += (double)0.6094177142857141183;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3324.51171875) ) ) {
                  sum += (double)0.6423755865384616071;
                } else {
                  sum += (double)0.6841262053571427471;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5433959066867828369) ) ) {
              sum += (double)0.4413157900000000411;
            } else {
              sum += (double)0.5467364499999999294;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7240049839019775391) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8408499956130981445) ) ) {
                sum += (double)0.7019178874999999485;
              } else {
                sum += (double)0.7368400357142856905;
              }
            } else {
              sum += (double)0.6330782980769231738;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03894999995827674866) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7887639999389648438) ) ) {
                sum += (double)0.7958550749999998564;
              } else {
                sum += (double)0.8668599895833333235;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7965764999389648438) ) ) {
                sum += (double)0.7119922307692306829;
              } else {
                sum += (double)0.775672464285714236;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2998.645751953125) ) ) {
          sum += (double)0.4593251630434781463;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.170329689979553223) ) ) {
            sum += (double)0.4402356388888889471;
          } else {
            sum += (double)0.1775993500000000169;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5343510210514068604) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
          sum += (double)0.1115414807692307469;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3553670048713684082) ) ) {
            sum += (double)0.3700209895833333484;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.646491169929504395) ) ) {
              sum += (double)0.2555269999999999486;
            } else {
              sum += (double)0.1712548382352940823;
            }
          }
        }
      } else {
        sum += (double)0.5312530978260869841;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.504999995231628418) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1079379990696907043) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.60416603088378906) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05795949883759021759) ) ) {
                sum += (double)0.005611571428571429307;
              } else {
                sum += (double)0.01270443333333333598;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5778.2471923828125) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.77536201477050781) ) ) {
                  sum += (double)0.006246086956521739939;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1851499974727630615) ) ) {
                      sum += (double)0.002500000000000001353;
                    } else {
                      sum += (double)0.003061233333333333601;
                    }
                  } else {
                    sum += (double)0.003674680000000000914;
                  }
                }
              } else {
                sum += (double)0.008703107142857144374;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06469250097870826721) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5076999962329864502) ) ) {
                sum += (double)0.006841022727272727706;
              } else {
                sum += (double)0.01566764062499999971;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08011249825358390808) ) ) {
                sum += (double)0.04540940217391303824;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2049999982118606567) ) ) {
                  sum += (double)0.01872153846153846307;
                } else {
                  sum += (double)0.007365000000000000886;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1353163346648216248) ) ) {
            sum += (double)0.09665248863636363708;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3910440057516098022) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.19999980926513672) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1131500005722045898) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03070000093430280685) ) ) {
                    sum += (double)0.01532112903225806705;
                  } else {
                    sum += (double)0.03924320312500000074;
                  }
                } else {
                  sum += (double)0.08243080434782609767;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5641784369945526123) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.186261497437953949) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1425554975867271423) ) ) {
                      sum += (double)0.01052745000000000243;
                    } else {
                      sum += (double)0.01633617857142857094;
                    }
                  } else {
                    sum += (double)0.0466765166666666606;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5463.33447265625) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)88.96428298950195312) ) ) {
                      sum += (double)0.02483010714285714335;
                    } else {
                      sum += (double)0.003869977272727273196;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.5) ) ) {
                      sum += (double)0.003118923076923077291;
                    } else {
                      sum += (double)0.002500000000000000052;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.07543141176470588571;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0241000000387430191) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4401587843894958496) ) ) {
            sum += (double)0.2975388269230769267;
          } else {
            sum += (double)0.1079353522727272696;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2238349989056587219) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.99325180053710938) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1576480045914649963) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.80997276306152344) ) ) {
                  sum += (double)0.04507336111111110571;
                } else {
                  sum += (double)0.01214320454545454557;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9300.794921875) ) ) {
                  sum += (double)0.1378019305555555629;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.86128807067871094) ) ) {
                    sum += (double)0.06365154347826088022;
                  } else {
                    sum += (double)0.02723775000000000154;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1323999986052513123) ) ) {
                sum += (double)0.009757048387096773842;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.79147911071777344) ) ) {
                  sum += (double)0.03060393939393939514;
                } else {
                  sum += (double)0.01563140740740740636;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.14985275268554688) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7119949460029602051) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07445000112056732178) ) ) {
                  sum += (double)0.06711332692307692138;
                } else {
                  sum += (double)0.1469084374999999887;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3908079862594604492) ) ) {
                  sum += (double)0.02723824999999999857;
                } else {
                  sum += (double)0.07501459999999998685;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9628.1279296875) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2965604960918426514) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26087.947265625) ) ) {
                    sum += (double)0.02086682499999999857;
                  } else {
                    sum += (double)0.09850779411764705451;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6663896739482879639) ) ) {
                    sum += (double)0.08703827499999999828;
                  } else {
                    sum += (double)0.1809018421052631664;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.222760222852230072) ) ) {
                  sum += (double)0.144371387500000059;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1759499981999397278) ) ) {
                    sum += (double)0.3445889999999999231;
                  } else {
                    sum += (double)0.2024458000000000091;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9664483964443206787) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596890121698379517) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.5117271199999999798;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4879499971866607666) ) ) {
                  sum += (double)0.3134104230769230726;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2337089627981185913) ) ) {
                    sum += (double)0.1116420555555555638;
                  } else {
                    sum += (double)0.2135623076923076902;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4612497687339782715) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0355500001460313797) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.15449762344360352) ) ) {
                      sum += (double)0.4044917727272727137;
                    } else {
                      sum += (double)0.4879213586956521742;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0653499998152256012) ) ) {
                      sum += (double)0.3059106969696969713;
                    } else {
                      sum += (double)0.3910663156249999384;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.44832038879394531) ) ) {
                    sum += (double)0.3618293103448275705;
                  } else {
                    sum += (double)0.1789381250000000312;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5364249348640441895) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1822.28302001953125) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07735000178217887878) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.41594886779785156) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05205000005662441254) ) ) {
                      sum += (double)0.4932402937499998918;
                    } else {
                      sum += (double)0.5467176428571427493;
                    }
                  } else {
                    sum += (double)0.5846590294117648412;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.45567035675048828) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4435250014066696167) ) ) {
                      sum += (double)0.4671082134146342102;
                    } else {
                      sum += (double)0.5132764324324323724;
                    }
                  } else {
                    sum += (double)0.4183219523809524332;
                  }
                }
              } else {
                sum += (double)0.5735835729166666175;
              }
            } else {
              sum += (double)0.3993635875000000057;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.335476994514465332) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.2999420166015625) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.24473667144775391) ) ) {
                sum += (double)0.09640551666666666297;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1240499988198280334) ) ) {
                  sum += (double)0.3179341911764706485;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1919394955039024353) ) ) {
                    sum += (double)0.1091923333333333357;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.8928070068359375) ) ) {
                      sum += (double)0.2266207812500000141;
                    } else {
                      sum += (double)0.2673659999999999926;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.1049949310344827635;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4006521403789520264) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7256000041961669922) ) ) {
                sum += (double)0.4221032115384615313;
              } else {
                sum += (double)0.3184287666666666961;
              }
            } else {
              sum += (double)0.212757624999999978;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.813309073448181152) ) ) {
          sum += (double)0.2881948214285713905;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.089089453220367432) ) ) {
            sum += (double)0.2048649899999999968;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3895944952964782715) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05404999852180480957) ) ) {
                sum += (double)0.1278413281249999867;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5770500004291534424) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3244239985942840576) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.236400999128818512) ) ) {
                      sum += (double)0.02342853947368421161;
                    } else {
                      sum += (double)0.007686583333333334329;
                    }
                  } else {
                    sum += (double)0.03811678947368420806;
                  }
                } else {
                  sum += (double)0.07883393750000000644;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2449.731201171875) ) ) {
                sum += (double)0.1963325250000000077;
              } else {
                sum += (double)0.08455349999999998978;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.043504655361175537) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8163.606201171875) ) ) {
            sum += (double)0.5149654886363635997;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03170000016689300537) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5986414849758148193) ) ) {
                sum += (double)0.6660995526315790505;
              } else {
                sum += (double)0.7339471956521740337;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.901477336883544922) ) ) {
                sum += (double)0.6106786015624998676;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3779.650390625) ) ) {
                  sum += (double)0.6796384047619048463;
                } else {
                  sum += (double)0.6122611071428571972;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1059499979019165039) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.43790817260742188) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07048232853412628174) ) ) {
                sum += (double)0.7809945735294117064;
              } else {
                sum += (double)0.8212053676470588703;
              }
            } else {
              sum += (double)0.8373956999999998541;
            }
          } else {
            sum += (double)0.7026778666666668727;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.863842248916625977) ) ) {
          sum += (double)0.3868211617647059342;
        } else {
          sum += (double)0.2647717954545454888;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.160416603088378906) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4805810004472732544) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1534420028328895569) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.555000007152557373) ) ) {
            sum += (double)0.02602681818181817874;
          } else {
            sum += (double)0.1367801499999999892;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.49186086654663086) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2330.1739501953125) ) ) {
              sum += (double)0.2334736818181818441;
            } else {
              sum += (double)0.09626843055555554807;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4099999964237213135) ) ) {
              sum += (double)0.1242818333333333414;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1295.96942138671875) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.36842155456542969) ) ) {
                    sum += (double)0.1486448088235294007;
                  } else {
                    sum += (double)0.2483708977272727492;
                  }
                } else {
                  sum += (double)0.3294657678571428217;
                }
              } else {
                sum += (double)0.3703777083333333331;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-962.347198486328125) ) ) {
          sum += (double)0.4724388958333333721;
        } else {
          sum += (double)0.2210744687500000305;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03914999961853027344) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0006499999944935552776) ) ) {
                sum += (double)0.04180740000000000151;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.94250011444091797) ) ) {
                  sum += (double)0.02147643750000000074;
                } else {
                  sum += (double)0.003442000000000000181;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.114321000874042511) ) ) {
                sum += (double)0.02176550000000000359;
              } else {
                sum += (double)0.129048923913043484;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07252199947834014893) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.052138499915599823) ) ) {
                    sum += (double)0.002500000000000001787;
                  } else {
                    sum += (double)0.003732590909090908928;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05855749920010566711) ) ) {
                    sum += (double)0.005713142857142857606;
                  } else {
                    sum += (double)0.002500000000000000052;
                  }
                }
              } else {
                sum += (double)0.01438983750000000228;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7804144918918609619) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05994999967515468597) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                    sum += (double)0.02335509259259258355;
                  } else {
                    sum += (double)0.0042429615384615392;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                    sum += (double)0.00586881818181818251;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1277634948492050171) ) ) {
                      sum += (double)0.07182744318181817633;
                    } else {
                      sum += (double)0.02287730952380952545;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1050985008478164673) ) ) {
                  sum += (double)0.01924373076923076992;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2304335013031959534) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1724710017442703247) ) ) {
                      sum += (double)0.00308434375000000028;
                    } else {
                      sum += (double)0.002500000000000000486;
                    }
                  } else {
                    sum += (double)0.007092916666666667508;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2134735062718391418) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02465000003576278687) ) ) {
              sum += (double)0.1370313690476190616;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.40783405303955078) ) ) {
                sum += (double)0.1052503823529411797;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7410667836666107178) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4955710768699645996) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1861904561519622803) ) ) {
                      sum += (double)0.06215437500000000476;
                    } else {
                      sum += (double)0.02844305048076922054;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1836999952793121338) ) ) {
                      sum += (double)0.03232576666666667209;
                    } else {
                      sum += (double)0.111366796875000007;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12241.97119140625) ) ) {
                    sum += (double)0.01631517857142857422;
                  } else {
                    sum += (double)0.007043545454545455109;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4329956769943237305) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9005.986328125) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17473.4150390625) ) ) {
                  sum += (double)0.1242709558823529292;
                } else {
                  sum += (double)0.04808126470588234419;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05164999887347221375) ) ) {
                  sum += (double)0.06717587499999999601;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6331000030040740967) ) ) {
                    sum += (double)0.2988077166666666673;
                  } else {
                    sum += (double)0.1443669736842105311;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)52.79999923706054688) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3257499933242797852) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09714999794960021973) ) ) {
                    sum += (double)0.01068722222222222469;
                  } else {
                    sum += (double)0.03801622413793102895;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.75793647766113281) ) ) {
                    sum += (double)0.1310667031249999892;
                  } else {
                    sum += (double)0.04050652631578947199;
                  }
                }
              } else {
                sum += (double)0.1458999374999999654;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.48000001907348633) ) ) {
          sum += (double)0.09470160869565216744;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5545.888671875) ) ) {
            sum += (double)0.1908417976190475707;
          } else {
            sum += (double)0.4165134218750000672;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47614249587059021) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9199577271938323975) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.08494234085083008) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.58190441131591797) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.938151836395263672) ) ) {
                    sum += (double)0.226337230769230735;
                  } else {
                    sum += (double)0.3441223333333333079;
                  }
                } else {
                  sum += (double)0.1946449130434782515;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7384999990463256836) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.292966499924659729) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.97461390495300293) ) ) {
                      sum += (double)0.4078838699999999817;
                    } else {
                      sum += (double)0.3335524907407407258;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.84621238708496094) ) ) {
                      sum += (double)0.4038682107843136748;
                    } else {
                      sum += (double)0.4886051527777777181;
                    }
                  }
                } else {
                  sum += (double)0.2349176617647058818;
                }
              }
            } else {
              sum += (double)0.4937316597222223269;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999886320438236) ) ) {
              sum += (double)0.5952123999999998638;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2439.1243896484375) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.57873630523681641) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6061999797821044922) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.4360504150390625) ) ) {
                      sum += (double)0.4783105131578947455;
                    } else {
                      sum += (double)0.4164138214285714179;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3560.574462890625) ) ) {
                      sum += (double)0.4598164999999999614;
                    } else {
                      sum += (double)0.5177617777777777652;
                    }
                  }
                } else {
                  sum += (double)0.3986623333333333963;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2144.4927978515625) ) ) {
                  sum += (double)0.573414928571428506;
                } else {
                  sum += (double)0.5062627999999999018;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05024999938905239105) ) ) {
            sum += (double)0.3886432068965516851;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3342725038528442383) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1935489997267723083) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3127499967813491821) ) ) {
                  sum += (double)0.203343916666666652;
                } else {
                  sum += (double)0.05201215000000000005;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2501000016927719116) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12481.5732421875) ) ) {
                    sum += (double)0.133312902777777742;
                  } else {
                    sum += (double)0.2249666071428571557;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.377499997615814209) ) ) {
                    sum += (double)0.3102060000000000373;
                  } else {
                    sum += (double)0.2208367205882352802;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.04359245300292969) ) ) {
                sum += (double)0.4196894411764706123;
              } else {
                sum += (double)0.2810134083333333255;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4376004934310913086) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2775360047817230225) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29772.4052734375) ) ) {
              sum += (double)0.1192874333333333453;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3994999974966049194) ) ) {
                sum += (double)0.005437058823529412888;
              } else {
                sum += (double)0.03637517647058823717;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4432.196044921875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.32458257675170898) ) ) {
                sum += (double)0.2842845312500000277;
              } else {
                sum += (double)0.11552586956521739;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.683270692825317383) ) ) {
                sum += (double)0.2177747499999999892;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1948.93408203125) ) ) {
                  sum += (double)0.01851300000000000168;
                } else {
                  sum += (double)0.06818603571428571986;
                }
              }
            }
          }
        } else {
          sum += (double)0.2569269513888888246;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.03631901741027832) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6571570038795471191) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.00396823883056641) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5121190249919891357) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09219999983906745911) ) ) {
                sum += (double)0.5637566826923077201;
              } else {
                sum += (double)0.4882005689655172787;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1555000022053718567) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.120183311402797699) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8764999806880950928) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09207046404480934143) ) ) {
                      sum += (double)0.6113176964285713666;
                    } else {
                      sum += (double)0.7021649333333334075;
                    }
                  } else {
                    sum += (double)0.7003948636363636071;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2807.538330078125) ) ) {
                    sum += (double)0.5842777777777777848;
                  } else {
                    sum += (double)0.6568240277777777081;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5807184875011444092) ) ) {
                  sum += (double)0.5172307647058823621;
                } else {
                  sum += (double)0.5945027142857143287;
                }
              }
            }
          } else {
            sum += (double)0.2915729833333333132;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8142319917678833008) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.695976495742797852) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.464015722274780273) ) ) {
                sum += (double)0.6956123382352942253;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
                  sum += (double)0.7496839558823528149;
                } else {
                  sum += (double)0.7998841428571429324;
                }
              }
            } else {
              sum += (double)0.6490805300000000999;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03845000080764293671) ) ) {
              sum += (double)0.8826949250000000191;
            } else {
              sum += (double)0.8023352222222223107;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
            sum += (double)0.4321152608695651987;
          } else {
            sum += (double)0.2215920892857143054;
          }
        } else {
          sum += (double)0.4916979218749999991;
        }
      }
    }
  }
  return sum;
}
