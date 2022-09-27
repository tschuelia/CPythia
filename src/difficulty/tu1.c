#include "prediction.h"
double predict_margin_unit1(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.099671125411987305) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3546.0181884765625) ) ) {
          sum += (double)0.382955642709346622;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1959999948740005493) ) ) {
            sum += (double)0.05658487117337609312;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.49186086654663086) ) ) {
              sum += (double)0.138817190952457481;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000095367431641) ) ) {
                sum += (double)0.2052835608036335524;
              } else {
                sum += (double)0.3950740360525166195;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.092405080795288086) ) ) {
          sum += (double)0.5865100274628712862;
        } else {
          sum += (double)0.4213256460838356032;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.949834346771240234) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04865000024437904358) ) ) {
            sum += (double)0.03719166037731555519;
          } else {
            sum += (double)0.1513499956720231188;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07210149988532066345) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1420499980449676514) ) ) {
                sum += (double)0.01672995424063116604;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8690000176429748535) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.68214225769042969) ) ) {
                      sum += (double)0.005839475000000001088;
                    } else {
                      sum += (double)0.004000000000000002685;
                    }
                  } else {
                    sum += (double)0.005955111111111111542;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04473199881613254547) ) ) {
                    sum += (double)0.004769560000000000813;
                  } else {
                    sum += (double)0.009365755555555556333;
                  }
                }
              }
            } else {
              sum += (double)0.02367922535885167573;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.51648330688476562) ) ) {
              sum += (double)0.05270250789756278365;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1840680018067359924) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6402493715286254883) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11957.29248046875) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.85863113403320312) ) ) {
                      sum += (double)0.06264189523809525484;
                    } else {
                      sum += (double)0.02534121428571428636;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4169.0869140625) ) ) {
                      sum += (double)0.009978139534883722836;
                    } else {
                      sum += (double)0.02189469235880399031;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.046295166015625) ) ) {
                    sum += (double)0.01246880000000000037;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.267149999737739563) ) ) {
                      sum += (double)0.004000000000000000951;
                    } else {
                      sum += (double)0.00464165333333333395;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1118000000715255737) ) ) {
                  sum += (double)0.05738273803418803692;
                } else {
                  sum += (double)0.01882634285714285954;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009349999949336051941) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
            sum += (double)0.1277080797415533764;
          } else {
            sum += (double)0.3855651274074538004;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.431597292423248291) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2281024977564811707) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.54478073120117188) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3516578227281570435) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.846622943878173828) ) ) {
                      sum += (double)0.07885826857619578079;
                    } else {
                      sum += (double)0.03318191725762160288;
                    }
                  } else {
                    sum += (double)0.1067385276807441274;
                  }
                } else {
                  sum += (double)0.1324330213663010014;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.64930534362792969) ) ) {
                  sum += (double)0.07431711869449617036;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6331000030040740967) ) ) {
                    sum += (double)0.3153703845442617504;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1442155987024307251) ) ) {
                      sum += (double)0.211365277019409159;
                    } else {
                      sum += (double)0.1378852098484357747;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4236444979906082153) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.72692298889160156) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.018523246049880981) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19098.7919921875) ) ) {
                      sum += (double)0.0215474868421052651;
                    } else {
                      sum += (double)0.05586586905341645037;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6520.176025390625) ) ) {
                      sum += (double)0.03568609945718494159;
                    } else {
                      sum += (double)0.01182910910556003378;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25179.1484375) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5885865390300750732) ) ) {
                      sum += (double)0.04500209110073744023;
                    } else {
                      sum += (double)0.01542192986857825708;
                    }
                  } else {
                    sum += (double)0.1251832000775230658;
                  }
                }
              } else {
                sum += (double)0.1524527262016408258;
              }
            }
          } else {
            sum += (double)0.3294729002359626513;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47614249587059021) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3165825009346008301) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.972251415252685547) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
              sum += (double)0.6325220329411764819;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.04100513458251953) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3040.6690673828125) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.587068796157836914) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.095543980598449707) ) ) {
                      sum += (double)0.4734573980988333042;
                    } else {
                      sum += (double)0.5255012418737416979;
                    }
                  } else {
                    sum += (double)0.4243441246211578921;
                  }
                } else {
                  sum += (double)0.3703199588923882235;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04474999941885471344) ) ) {
                  sum += (double)0.4500209574628436515;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.008303403854370117) ) ) {
                    sum += (double)0.3643107003175828362;
                  } else {
                    sum += (double)0.243367304872631085;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01069999985338654369) ) ) {
              sum += (double)0.4761959889265838797;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10622.55810546875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.49341392517089844) ) ) {
                  sum += (double)0.4474334659679977677;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2781490087509155273) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19272.123046875) ) ) {
                      sum += (double)0.2570990018137618849;
                    } else {
                      sum += (double)0.1434102444659000331;
                    }
                  } else {
                    sum += (double)0.3511746557519218048;
                  }
                }
              } else {
                sum += (double)0.1468673346912676425;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1274499967694282532) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3380685001611709595) ) ) {
              sum += (double)0.5150068459655322561;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04765000008046627045) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.781531572341918945) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1427602842450141907) ) ) {
                    sum += (double)0.6344031121693121111;
                  } else {
                    sum += (double)0.5702796690582067063;
                  }
                } else {
                  sum += (double)0.6803445572925060914;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.121428489685058594) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2487.288818359375) ) ) {
                    sum += (double)0.5672642659327687964;
                  } else {
                    sum += (double)0.6469959703703702658;
                  }
                } else {
                  sum += (double)0.4608967993598402924;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7603584527969360352) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4715500026941299438) ) ) {
                sum += (double)0.5613135614365147852;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.94261360168457031) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4593.443359375) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3256000131368637085) ) ) {
                      sum += (double)0.5501909560073259264;
                    } else {
                      sum += (double)0.4801209467983726387;
                    }
                  } else {
                    sum += (double)0.411162495185087018;
                  }
                } else {
                  sum += (double)0.3992442067273792028;
                }
              }
            } else {
              sum += (double)0.2796808649123038726;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.935240745544433594) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5132.362060546875) ) ) {
            sum += (double)0.4504060744163829177;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.328200995922088623) ) ) {
              sum += (double)0.03514164167257264465;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.905731201171875) ) ) {
                sum += (double)0.3228735800301406056;
              } else {
                sum += (double)0.1741094946499903151;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29237.2587890625) ) ) {
            sum += (double)0.1502198136088851166;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3537499904632568359) ) ) {
              sum += (double)0.07000029916960022469;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.1869044303894043) ) ) {
                sum += (double)0.03312698725766446972;
              } else {
                sum += (double)0.01245279999999999998;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3012500107288360596) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.138076305389404297) ) ) {
          sum += (double)0.5805605289783990486;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2450.8575439453125) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.6240386962890625) ) ) {
              sum += (double)0.5595831759128826466;
            } else {
              sum += (double)0.4237576301544926372;
            }
          } else {
            sum += (double)0.2050990971178314748;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07750000059604644775) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.120183311402797699) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5362260043621063232) ) ) {
                sum += (double)0.6761399805555555753;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005999999819323420525) ) ) {
                  sum += (double)0.7517711939999998094;
                } else {
                  sum += (double)0.7297265183829138024;
                }
              }
            } else {
              sum += (double)0.6484057578175013159;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.539483487606048584) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1526999995112419128) ) ) {
                  sum += (double)0.5658427744098977197;
                } else {
                  sum += (double)0.6223328725069128264;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1721500009298324585) ) ) {
                  sum += (double)0.68799524380341881;
                } else {
                  sum += (double)0.653125415404808396;
                }
              }
            } else {
              sum += (double)0.4855871914515353382;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7701259851455688477) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2039.78265380859375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1173499971628189087) ) ) {
                sum += (double)0.7619145026984126545;
              } else {
                sum += (double)0.7092975739088610565;
              }
            } else {
              sum += (double)0.8173327234567902;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1056000031530857086) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8551464974880218506) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02989999949932098389) ) ) {
                  sum += (double)0.8769987294117644883;
                } else {
                  sum += (double)0.825752015384615401;
                }
              } else {
                sum += (double)0.9062736177188552844;
              }
            } else {
              sum += (double)0.8084892160656050875;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.258169889450073242) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.632992476224899292) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2569645047187805176) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
            sum += (double)0.07798137802205595825;
          } else {
            sum += (double)0.2015153773118030234;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01029999973252415657) ) ) {
            sum += (double)0.4293610960421466727;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2726.510498046875) ) ) {
              sum += (double)0.3454520340324547245;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.600250482559204102) ) ) {
                sum += (double)0.1387743360126854342;
              } else {
                sum += (double)0.2564660995260548138;
              }
            }
          }
        }
      } else {
        sum += (double)0.5628174996864589996;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.16666650772094727) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1862149983644485474) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08634999766945838928) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.113892190158367157) ) ) {
                sum += (double)0.04210841344347262399;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1088919974863529205) ) ) {
                  sum += (double)0.005434644444444445416;
                } else {
                  sum += (double)0.02336256363636363478;
                }
              }
            } else {
              sum += (double)0.06071239403958664932;
            }
          } else {
            sum += (double)0.08145291896701212231;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07228600233793258667) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1733499988913536072) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03499999921768903732) ) ) {
                  sum += (double)0.004000000000000002685;
                } else {
                  sum += (double)0.005307638095238095127;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2238999977707862854) ) ) {
                  sum += (double)0.008677800000000001138;
                } else {
                  sum += (double)0.004000000000000000083;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5210832059383392334) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02955000009387731552) ) ) {
                  sum += (double)0.01976525000000000504;
                } else {
                  sum += (double)0.006559488888888890916;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.16666793823242188) ) ) {
                  sum += (double)0.008762746666666669862;
                } else {
                  sum += (double)0.004000000000000000083;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.914350658655166626) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3518999963998794556) ) ) {
                sum += (double)0.06386768870243242358;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06049999967217445374) ) ) {
                  sum += (double)0.008045428571428573164;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1389499977231025696) ) ) {
                    sum += (double)0.07687668865492756909;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2950000017881393433) ) ) {
                      sum += (double)0.01111690588235294229;
                    } else {
                      sum += (double)0.02782226666666666806;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1680999994277954102) ) ) {
                sum += (double)0.008954396331435800563;
              } else {
                sum += (double)0.004000000000000000951;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3392460048198699951) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6559292376041412354) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10694.73779296875) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.00380945205688477) ) ) {
                sum += (double)0.1518502563605118871;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4418999999761581421) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.52360057830810547) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.79506874084472656) ) ) {
                      sum += (double)0.04369195363174984553;
                    } else {
                      sum += (double)0.1127482918223734615;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2317500039935112) ) ) {
                      sum += (double)0.01583381714285714281;
                    } else {
                      sum += (double)0.04875139498940774668;
                    }
                  }
                } else {
                  sum += (double)0.114309979753763058;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01555000012740492821) ) ) {
                sum += (double)0.2655900981539425776;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2202610000967979431) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06359999999403953552) ) ) {
                      sum += (double)0.06966930949409491647;
                    } else {
                      sum += (double)0.0356201488668738131;
                    }
                  } else {
                    sum += (double)0.1391989611771192459;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09715000167489051819) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000119209289551) ) ) {
                      sum += (double)0.1413420490367125193;
                    } else {
                      sum += (double)0.08237732394008179249;
                    }
                  } else {
                    sum += (double)0.2849126962122505158;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)51.53696250915527344) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034847021102905273) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3029000014066696167) ) ) {
                  sum += (double)0.06537754603174604495;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    sum += (double)0.01684991050505050408;
                  } else {
                    sum += (double)0.03909989119449341216;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1045999974012374878) ) ) {
                  sum += (double)0.02817093881278539061;
                } else {
                  sum += (double)0.008271545578231294382;
                }
              }
            } else {
              sum += (double)0.07645210332422730515;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.90804672241210938) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3266499936580657959) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.22557497024536133) ) ) {
                sum += (double)0.100209935644021933;
              } else {
                sum += (double)0.02204165217391304554;
              }
            } else {
              sum += (double)0.1814945660420201612;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5000.920654296875) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4707815051078796387) ) ) {
                sum += (double)0.1007632958564920606;
              } else {
                sum += (double)0.2402919151616416393;
              }
            } else {
              sum += (double)0.3678225519361538187;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4562695026397705078) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2901324927806854248) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05040000006556510925) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
                sum += (double)0.6187351217948717785;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2306737527251243591) ) ) {
                  sum += (double)0.543568378062764701;
                } else {
                  sum += (double)0.4033915570795336691;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6036500036716461182) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.55174398422241211) ) ) {
                    sum += (double)0.4159102094247414949;
                  } else {
                    sum += (double)0.2835034032159052253;
                  }
                } else {
                  sum += (double)0.4973452398050657863;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2682649940252304077) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.635363101959228516) ) ) {
                    sum += (double)0.1467711694821992874;
                  } else {
                    sum += (double)0.2922499845157250364;
                  }
                } else {
                  sum += (double)0.3855290862748310676;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.444337993860244751) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2523.8408203125) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4731869101524353027) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3796.2705078125) ) ) {
                      sum += (double)0.5158260140872885646;
                    } else {
                      sum += (double)0.5831952376321352105;
                    }
                  } else {
                    sum += (double)0.4118954001557113553;
                  }
                } else {
                  sum += (double)0.4142802680957057282;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2565.786376953125) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3942845016717910767) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.108978033065795898) ) ) {
                      sum += (double)0.5822427124338623861;
                    } else {
                      sum += (double)0.6181143466063349079;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.793604612350463867) ) ) {
                      sum += (double)0.5766626339491125464;
                    } else {
                      sum += (double)0.480131462067005188;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.927489280700683594) ) ) {
                    sum += (double)0.6053366615384615512;
                  } else {
                    sum += (double)0.6511099907751937144;
                  }
                }
              }
            } else {
              sum += (double)0.4173853609850450286;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2553090006113052368) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-31638.9775390625) ) ) {
              sum += (double)0.3117495849589503876;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3523451536893844604) ) ) {
                sum += (double)0.1797412407088979647;
              } else {
                sum += (double)0.08822211893157562435;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7499605417251586914) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10228.46826171875) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3911639750003814697) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.65770339965820312) ) ) {
                    sum += (double)0.4226211810548448633;
                  } else {
                    sum += (double)0.295633258504167773;
                  }
                } else {
                  sum += (double)0.4956592491292983738;
                }
              } else {
                sum += (double)0.1997505846975385357;
              }
            } else {
              sum += (double)0.1577274109916099731;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
          sum += (double)0.3563566438686224247;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3129.850341796875) ) ) {
              sum += (double)0.2939145098833561009;
            } else {
              sum += (double)0.08057495802072024704;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33309.6494140625) ) ) {
              sum += (double)0.1556698651944069534;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.36271965503692627) ) ) {
                sum += (double)0.08889484439855364906;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.754198610782623291) ) ) {
                  sum += (double)0.01519506206896551956;
                } else {
                  sum += (double)0.03933311779871977165;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.85340785980224609) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6254500150680541992) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3285430967807769775) ) ) {
                  sum += (double)0.555495926924901573;
                } else {
                  sum += (double)0.6107204417301457244;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.44344902038574219) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1096890866756439209) ) ) {
                    sum += (double)0.5926807512105165543;
                  } else {
                    sum += (double)0.6559444021689507798;
                  }
                } else {
                  sum += (double)0.6980193746031745361;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1049031242728233337) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.580504000186920166) ) ) {
                  sum += (double)0.7029810517482517618;
                } else {
                  sum += (double)0.7499089759999998384;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.085714340209960938) ) ) {
                  sum += (double)0.6455669743155749707;
                } else {
                  sum += (double)0.6844636262725779519;
                }
              }
            }
          } else {
            sum += (double)0.5024613622214797459;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6771354973316192627) ) ) {
              sum += (double)0.7782049523809524416;
            } else {
              sum += (double)0.7128736710519937292;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09039999917149543762) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8372030258178710938) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.11297142505645752) ) ) {
                  sum += (double)0.8562517777777777228;
                } else {
                  sum += (double)0.8106533595767194678;
                }
              } else {
                sum += (double)0.8911536840909091151;
              }
            } else {
              sum += (double)0.7844991366849067838;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6746805012226104736) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.042213857173919678) ) ) {
            sum += (double)0.5382849612469577938;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
              sum += (double)0.3460117332674838009;
            } else {
              sum += (double)0.2259976271638301226;
            }
          }
        } else {
          sum += (double)0.6165965491337677129;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.084967374801635742) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8000000119209289551) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1337675899267196655) ) ) {
          sum += (double)0.1677568032927055919;
        } else {
          sum += (double)0.07561916045158814659;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5296977460384368896) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
            sum += (double)0.3713824540049863177;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4647414982318878174) ) ) {
              sum += (double)0.4859200433291828714;
            } else {
              sum += (double)0.6505909123104379743;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.966454267501831055) ) ) {
            sum += (double)0.3972726251422789567;
          } else {
            sum += (double)0.1664462830154997686;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5473309755325317383) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3250000029802322388) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37857151031494141) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2299999967217445374) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08973300084471702576) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4659.20458984375) ) ) {
                  sum += (double)0.01387704000000000368;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7698500156402587891) ) ) {
                    sum += (double)0.005847824000000000598;
                  } else {
                    sum += (double)0.01111233846153846481;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1501.1708984375) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2506.53955078125) ) ) {
                    sum += (double)0.0297345305091733722;
                  } else {
                    sum += (double)0.1354023860096321141;
                  }
                } else {
                  sum += (double)0.01827604705882353298;
                }
              }
            } else {
              sum += (double)0.1066772027396076378;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1932500004768371582) ) ) {
                sum += (double)0.01262470769230769445;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8356499969959259033) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.25) ) ) {
                    sum += (double)0.007981700000000001294;
                  } else {
                    sum += (double)0.004000000000000002685;
                  }
                } else {
                  sum += (double)0.01034253333333333587;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.08333396911621094) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5681.222900390625) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.21567726135253906) ) ) {
                    sum += (double)0.05531123345250214124;
                  } else {
                    sum += (double)0.01739907826086956391;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5395244061946868896) ) ) {
                    sum += (double)0.01319807407407407387;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-91151.75390625) ) ) {
                  sum += (double)0.004000000000000000083;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)126.5894660949707031) ) ) {
                    sum += (double)0.00555900740740740678;
                  } else {
                    sum += (double)0.01191298089816571551;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.160416603088378906) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.162337779998779297) ) ) {
              sum += (double)0.1030601780074659052;
            } else {
              sum += (double)0.2494478174372766199;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2209069952368736267) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02465000003576278687) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6149999797344207764) ) ) {
                  sum += (double)0.07187685677655676619;
                } else {
                  sum += (double)0.2155222804262461322;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7401177585124969482) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.58660793304443359) ) ) {
                    sum += (double)0.09023085273844294596;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6829999983310699463) ) ) {
                      sum += (double)0.036883857355456795;
                    } else {
                      sum += (double)0.07502703754924226753;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12241.97119140625) ) ) {
                    sum += (double)0.02399963594183594437;
                  } else {
                    sum += (double)0.008582139130434783547;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075429320335388184) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9005.986328125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.45055007934570312) ) ) {
                    sum += (double)0.127253558876634254;
                  } else {
                    sum += (double)0.06514627525398744567;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.35500001907348633) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05164999887347221375) ) ) {
                      sum += (double)0.05132292619165428754;
                    } else {
                      sum += (double)0.1707224143248932402;
                    }
                  } else {
                    sum += (double)0.381866651221714537;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.694999992847442627) ) ) {
                  sum += (double)0.1184928047400135576;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.80000019073486328) ) ) {
                    sum += (double)0.01038793333333333513;
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.50028705596923828) ) ) {
                      sum += (double)0.05548281244292797149;
                    } else {
                      sum += (double)0.01693902857142857293;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.4171507602282420457;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9722101092338562012) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2427854984998703003) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.5692855328922995506;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13618.9873046875) ) ) {
                sum += (double)0.4147781081297118866;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2140770033001899719) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                    sum += (double)0.2037104858317249911;
                  } else {
                    sum += (double)0.4250466831137441059;
                  }
                } else {
                  sum += (double)0.1862937834796769832;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04235000163316726685) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.63569021224975586) ) ) {
                  sum += (double)0.5080116594675337938;
                } else {
                  sum += (double)0.5756367211311564924;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1571500003337860107) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5955500006675720215) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4521.69287109375) ) ) {
                      sum += (double)0.5021020013496777512;
                    } else {
                      sum += (double)0.4119935675557743759;
                    }
                  } else {
                    sum += (double)0.2977990785571945631;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5323908329010009766) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2459500059485435486) ) ) {
                      sum += (double)0.5621031442837863823;
                    } else {
                      sum += (double)0.5227755574467046751;
                    }
                  } else {
                    sum += (double)0.4319033843575112996;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1109500005841255188) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)4.999999873689375818e-05) ) ) {
                  sum += (double)0.6856248892857141897;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.68990373611450195) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.955624580383300781) ) ) {
                      sum += (double)0.597909043560606035;
                    } else {
                      sum += (double)0.5607617653061897078;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1564999446272850037) ) ) {
                      sum += (double)0.5929026129083245777;
                    } else {
                      sum += (double)0.6567167631878557676;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.72145175933837891) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2069843709468841553) ) ) {
                    sum += (double)0.6046454925518924828;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4228999912738800049) ) ) {
                      sum += (double)0.5709120891143412146;
                    } else {
                      sum += (double)0.5124166586321585726;
                    }
                  }
                } else {
                  sum += (double)0.4121095233156069626;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3351285010576248169) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06930000148713588715) ) ) {
              sum += (double)0.3102841409123647254;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2401490062475204468) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3087499886751174927) ) ) {
                  sum += (double)0.1702483300197414062;
                } else {
                  sum += (double)0.07483102270185167104;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2987629920244216919) ) ) {
                  sum += (double)0.3030638103875247236;
                } else {
                  sum += (double)0.171890651511248993;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.04359245300292969) ) ) {
              sum += (double)0.4842102852697836579;
            } else {
              sum += (double)0.2601617808460320314;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.476842164993286133) ) ) {
          sum += (double)0.322268211462781784;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3350.552978515625) ) ) {
              sum += (double)0.3682160278119489538;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3559605032205581665) ) ) {
                sum += (double)0.02325094000000000119;
              } else {
                sum += (double)0.08820800055445375543;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
              sum += (double)0.1178450954382630755;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.66184139251708984) ) ) {
                sum += (double)0.07484863477876582682;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1429999992251396179) ) ) {
                  sum += (double)0.03239998814814814415;
                } else {
                  sum += (double)0.01057176842105263248;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6792999804019927979) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.186949998140335083) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.44344902038574219) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4917249977588653564) ) ) {
                  sum += (double)0.5783491313777503473;
                } else {
                  sum += (double)0.6528142215488962341;
                }
              } else {
                sum += (double)0.7020281023342668236;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.300045251846313477) ) ) {
                sum += (double)0.6024220533376882791;
              } else {
                sum += (double)0.4867499211820544014;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1945500001311302185) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.120183311402797699) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.654179573059082031) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.68633270263671875) ) ) {
                    sum += (double)0.7545852762776505962;
                  } else {
                    sum += (double)0.7291473329966330352;
                  }
                } else {
                  sum += (double)0.7030953757396448678;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.191972255706787109) ) ) {
                  sum += (double)0.6589461925780397689;
                } else {
                  sum += (double)0.6946082311111110297;
                }
              }
            } else {
              sum += (double)0.6458334966756227313;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.223503351211547852) ) ) {
              sum += (double)0.7276676474040901788;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.695976495742797852) ) ) {
                sum += (double)0.8163795629629628792;
              } else {
                sum += (double)0.7608691555555556763;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8554465174674987793) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05520000122487545013) ) ) {
                sum += (double)0.8596288610229276816;
              } else {
                sum += (double)0.7973756162907268408;
              }
            } else {
              sum += (double)0.9037666251207729928;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3698.1630859375) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.657117992639541626) ) ) {
            sum += (double)0.5089392543303691285;
          } else {
            sum += (double)0.6833163841607162725;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
            sum += (double)0.5048798852552567329;
          } else {
            sum += (double)0.3168192092138273908;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3019105046987533569) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.608771800994873047) ) ) {
          sum += (double)0.1163505709664600513;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07372036203742027283) ) ) {
                sum += (double)0.0099077411764705893;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.06340599060058594) ) ) {
                  sum += (double)0.006239714285714285935;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8185500204563140869) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1851499974727630615) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004623914285714286233;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.116298329085111618) ) ) {
                      sum += (double)0.004000000000000000951;
                    } else {
                      sum += (double)0.006486480000000000197;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1139269992709159851) ) ) {
                sum += (double)0.02250620476190476685;
              } else {
                sum += (double)0.008342812925170070559;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1099705696105957) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.20445442199707031) ) ) {
                sum += (double)0.04462408871984369779;
              } else {
                sum += (double)0.09710716172039292327;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7680511474609375) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.45820522308349609) ) ) {
                  sum += (double)0.06618775203334005541;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)268.513641357421875) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1312000006437301636) ) ) {
                      sum += (double)0.01587135532150527051;
                    } else {
                      sum += (double)0.03449214794415933483;
                    }
                  } else {
                    sum += (double)0.06239347619047620058;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2950000017881393433) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8687331974506378174) ) ) {
                    sum += (double)0.008451925000000000757;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                } else {
                  sum += (double)0.02287518137651822075;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.801829338073730469) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03594999946653842926) ) ) {
            sum += (double)0.262091488561697894;
          } else {
            sum += (double)0.171222436948537865;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02389999944716691971) ) ) {
            sum += (double)0.1748159672683120835;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2284030020236968994) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7852500081062316895) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3892499953508377075) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.51572322845458984) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2829480171203613281) ) ) {
                      sum += (double)0.02527205558312655906;
                    } else {
                      sum += (double)0.05979797552382485476;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1538999974727630615) ) ) {
                      sum += (double)0.01332064999999999985;
                    } else {
                      sum += (double)0.02567101842206338108;
                    }
                  }
                } else {
                  sum += (double)0.09474818658719283415;
                }
              } else {
                sum += (double)0.1128507890119039847;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
                sum += (double)0.2097214984141319294;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6179550886154174805) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3411679565906524658) ) ) {
                    sum += (double)0.05555984496489520946;
                  } else {
                    sum += (double)0.2032448902089418197;
                  }
                } else {
                  sum += (double)0.03784967671232876418;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5766305327415466309) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8449999988079071045) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3773840069770812988) ) ) {
            sum += (double)0.2459092495622580421;
          } else {
            sum += (double)0.1378658725172848543;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03240000084042549133) ) ) {
            sum += (double)0.5175189502368675587;
          } else {
            sum += (double)0.3342851883009222425;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5381860136985778809) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07355000078678131104) ) ) {
            sum += (double)0.03374345000000000122;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727000027894973755) ) ) {
              sum += (double)0.1873844894596694566;
            } else {
              sum += (double)0.06985417075110091079;
            }
          }
        } else {
          sum += (double)0.3044038032326472076;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4601614922285079956) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6275455057621002197) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.38224649429321289) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2572209984064102173) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03889999911189079285) ) ) {
              sum += (double)0.4907783484874356783;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2466348633170127869) ) ) {
                sum += (double)0.214484053220213744;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5001500099897384644) ) ) {
                  sum += (double)0.2793434442852678057;
                } else {
                  sum += (double)0.3955529054883975548;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4612497687339782715) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005399999907240271568) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.597499966621398926) ) ) {
                  sum += (double)0.6003684035039505984;
                } else {
                  sum += (double)0.6467441068871027099;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3558439910411834717) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.14032764732837677) ) ) {
                    sum += (double)0.4089816508233546921;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.298264980316162109) ) ) {
                      sum += (double)0.4658704465814816897;
                    } else {
                      sum += (double)0.5232960603371800135;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07584999874234199524) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.816810369491577148) ) ) {
                      sum += (double)0.5513631916164721813;
                    } else {
                      sum += (double)0.6437509274018933247;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.930519461631774902) ) ) {
                      sum += (double)0.5949075832528180063;
                    } else {
                      sum += (double)0.4503029034677304976;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.990753650665283203) ) ) {
                sum += (double)0.5163709321289691179;
              } else {
                sum += (double)0.3542877818144243851;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4348500072956085205) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6317000091075897217) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.9658966064453125) ) ) {
                sum += (double)0.287765132711434779;
              } else {
                sum += (double)0.08008336550467433368;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7420499920845031738) ) ) {
                sum += (double)0.3711238774226834347;
              } else {
                sum += (double)0.2154687205279657569;
              }
            }
          } else {
            sum += (double)0.4189301457091919589;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.039836645126342773) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2516999915242195129) ) ) {
            sum += (double)0.3024668553146438454;
          } else {
            sum += (double)0.456095342329835618;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.19734001159667969) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8540.66796875) ) ) {
                sum += (double)0.4582453319955464011;
              } else {
                sum += (double)0.2619935643145443471;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.20872879028320312) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7518902122974395752) ) ) {
                  sum += (double)0.2809442949158949543;
                } else {
                  sum += (double)0.1348552348268173828;
                }
              } else {
                sum += (double)0.04452230260400547729;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3333.7301025390625) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.307078361511230469) ) ) {
                sum += (double)0.2255211129636325307;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25422.712890625) ) ) {
                  sum += (double)0.1611390917213799123;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.01004123687744141) ) ) {
                    sum += (double)0.06109238881125567122;
                  } else {
                    sum += (double)0.02707875789473683861;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4031929969787597656) ) ) {
                sum += (double)0.01557790400000000006;
              } else {
                sum += (double)0.07995950832449680301;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4056834876537322998) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5857160091400146484) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.479411840438842773) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.731054782867431641) ) ) {
              sum += (double)0.6032673685763563221;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8313499987125396729) ) ) {
                sum += (double)0.7291979999999999018;
              } else {
                sum += (double)0.6713722837765407903;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5304469764232635498) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.69296073913574219) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.397037029266357422) ) ) {
                  sum += (double)0.5138141539082620168;
                } else {
                  sum += (double)0.6438156368795818763;
                }
              } else {
                sum += (double)0.4926449043137254291;
              }
            } else {
              sum += (double)0.6353909614111048487;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5855000019073486328) ) ) {
              sum += (double)0.6916749493388218983;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.695976495742797852) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6546829938888549805) ) ) {
                  sum += (double)0.766434099999999896;
                } else {
                  sum += (double)0.8058814928395060528;
                }
              } else {
                sum += (double)0.7372940252834466746;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06500000134110450745) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8496383428573608398) ) ) {
                sum += (double)0.9035342699999999727;
              } else {
                sum += (double)0.8515513264513264735;
              }
            } else {
              sum += (double)0.7980976889334774338;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6841369867324829102) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.16964244842529297) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-934.662872314453125) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5277909040451049805) ) ) {
                sum += (double)0.6478548834443922377;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1405.181396484375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5518995225429534912) ) ) {
                    sum += (double)0.4570144751379233705;
                  } else {
                    sum += (double)0.5975929448073137307;
                  }
                } else {
                  sum += (double)0.3578149310208882938;
                }
              }
            } else {
              sum += (double)0.2668913750113972028;
            }
          } else {
            sum += (double)0.2370481256998785424;
          }
        } else {
          sum += (double)0.6531494563664491659;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4594839960336685181) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
          sum += (double)0.1089487190289292751;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.49675369262695312) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.126681499183177948) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)79.43944168090820312) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6884500086307525635) ) ) {
                  sum += (double)0.01888669852941176827;
                } else {
                  sum += (double)0.04996938751322752004;
                }
              } else {
                sum += (double)0.006577138461538462565;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1725.0023193359375) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1691835001111030579) ) ) {
                  sum += (double)0.05602270665803749106;
                } else {
                  sum += (double)0.1153130257466748326;
                }
              } else {
                sum += (double)0.01327524705882353329;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1488.8948974609375) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.20833206176757812) ) ) {
                    sum += (double)0.004637977777777777671;
                  } else {
                    sum += (double)0.004000000000000002685;
                  }
                } else {
                  sum += (double)0.009292384000000000754;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.52115249633789062) ) ) {
                  sum += (double)0.02145726109253065853;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7303999960422515869) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22379.5537109375) ) ) {
                      sum += (double)0.006534460000000000615;
                    } else {
                      sum += (double)0.004379466666666666577;
                    }
                  } else {
                    sum += (double)0.01024234285714285646;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)270.5681076049804688) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.08333396911621094) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1358520016074180603) ) ) {
                      sum += (double)0.01832390344827586684;
                    } else {
                      sum += (double)0.009550282352941178235;
                    }
                  } else {
                    sum += (double)0.005177824000000001009;
                  }
                } else {
                  sum += (double)0.03196059869587897923;
                }
              } else {
                sum += (double)0.04779850645161290434;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.801829338073730469) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7442728281021118164) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6450000107288360596) ) ) {
              sum += (double)0.1542658985751163003;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3847.76513671875) ) ) {
                sum += (double)0.2074962129182657822;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.34222450852394104) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
                    sum += (double)0.2762414611814411058;
                  } else {
                    sum += (double)0.4466795804010908477;
                  }
                } else {
                  sum += (double)0.2360034002014734789;
                }
              }
            }
          } else {
            sum += (double)0.09456322479893265742;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14613.36474609375) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4420000016689300537) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.31403732299804688) ) ) {
                sum += (double)0.08881044157059944655;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2483280003070831299) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.41869926452636719) ) ) {
                    sum += (double)0.03260817120793339102;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1525499969720840454) ) ) {
                      sum += (double)0.009678490909090909852;
                    } else {
                      sum += (double)0.02252587148908438697;
                    }
                  }
                } else {
                  sum += (double)0.06506319598863617715;
                }
              }
            } else {
              sum += (double)0.09273370773952792356;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.171875) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0128000001423060894) ) ) {
                sum += (double)0.2163982777698495175;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.14985275268554688) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7574189603328704834) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.23908758163452148) ) ) {
                      sum += (double)0.1164462556493227746;
                    } else {
                      sum += (double)0.04228953676913521642;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1816499978303909302) ) ) {
                      sum += (double)0.03663419502959006785;
                    } else {
                      sum += (double)0.01469331818181818412;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2202610000967979431) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                      sum += (double)0.01444258181818182038;
                    } else {
                      sum += (double)0.09816858578064874274;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7470.277099609375) ) ) {
                      sum += (double)0.1067760340479679132;
                    } else {
                      sum += (double)0.2490827518508228478;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.2639922679924254778;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1902.40814208984375) ) ) {
          sum += (double)0.2304334951648384366;
        } else {
          sum += (double)0.1395490893666548327;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.584967374801635742) ) ) {
          sum += (double)0.5668551290443049062;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.40476131439208984) ) ) {
            sum += (double)0.2314817233680875885;
          } else {
            sum += (double)0.4458857569707074808;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.25617265701293945) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2450014948844909668) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01440000021830201149) ) ) {
              sum += (double)0.5299592095716296747;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.463449478149414062) ) ) {
                  sum += (double)0.3611545534458892592;
                } else {
                  sum += (double)0.4410692585986010217;
                }
              } else {
                sum += (double)0.2127846571694465561;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3392730057239532471) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009099999908357858658) ) ) {
                sum += (double)0.5914520363126484215;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7052.579345703125) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2999199926853179932) ) ) {
                    sum += (double)0.5339098975145264436;
                  } else {
                    sum += (double)0.4779130757408257546;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5309000015258789062) ) ) {
                      sum += (double)0.4346782750371687709;
                    } else {
                      sum += (double)0.5195671354388052832;
                    }
                  } else {
                    sum += (double)0.3235418787170750154;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1695500016212463379) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006950000068172812462) ) ) {
                  sum += (double)0.6640848717465753781;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2487.288818359375) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4201900064945220947) ) ) {
                      sum += (double)0.5539849767482335485;
                    } else {
                      sum += (double)0.6001865412037036274;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6795499920845031738) ) ) {
                      sum += (double)0.6654466999999999466;
                    } else {
                      sum += (double)0.5859638797616070205;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4107555001974105835) ) ) {
                  sum += (double)0.5227955327384058437;
                } else {
                  sum += (double)0.4283369723140352248;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.82905960083007812) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.44165000319480896) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.18651199340820312) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.54307174682617188) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2025960013270378113) ) ) {
                    sum += (double)0.1228723077250087198;
                  } else {
                    sum += (double)0.3382034375172723872;
                  }
                } else {
                  sum += (double)0.4486437332508342313;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16609.810546875) ) ) {
                  sum += (double)0.2689650681922409192;
                } else {
                  sum += (double)0.1516742505361115267;
                }
              }
            } else {
              sum += (double)0.466417306838138257;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2687500119209289551) ) ) {
              sum += (double)0.1026543585457070501;
            } else {
              sum += (double)0.3069728936869989822;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.149999856948852539) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.96103978157043457) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.848009347915649414) ) ) {
              sum += (double)0.249756004450034319;
            } else {
              sum += (double)0.05842412431972788395;
            }
          } else {
            sum += (double)0.3792037787422686268;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05865000002086162567) ) ) {
            sum += (double)0.1971416523055701253;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.67684412002563477) ) ) {
              sum += (double)0.0751536971622217137;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3625984936952590942) ) ) {
                sum += (double)0.01332209090909091016;
              } else {
                sum += (double)0.04473215446393762063;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6645184755325317383) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031407535076141357) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.09328365325927734) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5616550147533416748) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6026999950408935547) ) ) {
                  sum += (double)0.6034139748848618146;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08867195248603820801) ) ) {
                    sum += (double)0.6552940895736072413;
                  } else {
                    sum += (double)0.702904342857142983;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1441270485520362854) ) ) {
                  sum += (double)0.5078017069081334212;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4773259162902832031) ) ) {
                    sum += (double)0.6438803373657042695;
                  } else {
                    sum += (double)0.5854978643393651261;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.769251346588134766) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02460000012069940567) ) ) {
                  sum += (double)0.7761361874554524309;
                } else {
                  sum += (double)0.7274661130434781908;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.773450016975402832) ) ) {
                  sum += (double)0.7048553639317148845;
                } else {
                  sum += (double)0.6363606828418804096;
                }
              }
            }
          } else {
            sum += (double)0.4207550187916466178;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.380626201629638672) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.555548012256622314) ) ) {
              sum += (double)0.5328720895536038782;
            } else {
              sum += (double)0.4596436557032506087;
            }
          } else {
            sum += (double)0.2526970062589813937;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5613919496536254883) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1050499975681304932) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
              sum += (double)0.790780104056437394;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9077499806880950928) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07574216276407241821) ) ) {
                  sum += (double)0.8364966541339320383;
                } else {
                  sum += (double)0.8694984800000000735;
                }
              } else {
                sum += (double)0.8924029882352940701;
              }
            }
          } else {
            sum += (double)0.7657209740461671243;
          }
        } else {
          sum += (double)0.6533696792493121075;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.143333196640014648) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5100000053644180298) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0009999999892897903919) ) ) {
            sum += (double)0.1257011857071249628;
          } else {
            sum += (double)0.05793192177945556687;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.45384597778320312) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7396482229232788086) ) ) {
              sum += (double)0.2514296111775987663;
            } else {
              sum += (double)0.1167734212171391145;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2245.58984375) ) ) {
              sum += (double)0.2792356166730338707;
            } else {
              sum += (double)0.470165519404849519;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4249999970197677612) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1068915016949176788) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1666999980807304382) ) ) {
                sum += (double)0.01461944322344322332;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.67760181427001953) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01589999999850988388) ) ) {
                    sum += (double)0.004000000000000000951;
                  } else {
                    sum += (double)0.01017593548387096987;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03499999921768903732) ) ) {
                      sum += (double)0.004202541538461540722;
                    } else {
                      sum += (double)0.006216636734693879729;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1353119.9375) ) ) {
                      sum += (double)0.004000000000000000083;
                    } else {
                      sum += (double)0.01050505000000000015;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1732994988560676575) ) ) {
                sum += (double)0.03025481654741896814;
              } else {
                sum += (double)0.00925828000000000241;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.78259611129760742) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.17857170104980469) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.75) ) ) {
                  sum += (double)0.08985388376566072477;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09019999951124191284) ) ) {
                    sum += (double)0.01181408000000000111;
                  } else {
                    sum += (double)0.03603898825855889748;
                  }
                }
              } else {
                sum += (double)0.1461350097373542156;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7294000089168548584) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8338.1943359375) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.53703689575195312) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1909999996423721313) ) ) {
                      sum += (double)0.01062722424242424323;
                    } else {
                      sum += (double)0.02283917894736842147;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.296450003981590271) ) ) {
                      sum += (double)0.004000000000000000083;
                    } else {
                      sum += (double)0.01003615555555555788;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4327.5029296875) ) ) {
                    sum += (double)0.06188896593942740804;
                  } else {
                    sum += (double)0.006732076190476191276;
                  }
                }
              } else {
                sum += (double)0.05259619166666666679;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6474024057388305664) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9298.3466796875) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08454049751162528992) ) ) {
                sum += (double)0.130168368796969719;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2134735062718391418) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4838169962167739868) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.63998603820800781) ) ) {
                      sum += (double)0.04772489354646125559;
                    } else {
                      sum += (double)0.01814285981768908734;
                    }
                  } else {
                    sum += (double)0.07387438455193337528;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17473.4150390625) ) ) {
                    sum += (double)0.1149333609778854653;
                  } else {
                    sum += (double)0.06005757178433943078;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.72222232818603516) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01889999955892562866) ) ) {
                  sum += (double)0.2817038799054373266;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.9918980598449707) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1231499984860420227) ) ) {
                      sum += (double)0.1056951010512425793;
                    } else {
                      sum += (double)0.1843110878217500692;
                    }
                  } else {
                    sum += (double)0.04586716433533983422;
                  }
                }
              } else {
                sum += (double)0.3523130984823207856;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2421125024557113647) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7649999856948852539) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.127371668815612793) ) ) {
                  sum += (double)0.01586323333333333405;
                } else {
                  sum += (double)0.02584977959183673568;
                }
              } else {
                sum += (double)0.006064048624172763656;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)69.8480377197265625) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.36904716491699219) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.392172515392303467) ) ) {
                    sum += (double)0.08018544863776551346;
                  } else {
                    sum += (double)0.02130469948979592243;
                  }
                } else {
                  sum += (double)0.01772897443609022447;
                }
              } else {
                sum += (double)0.1143080710458810878;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9600000083446502686) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8070119619369506836) ) ) {
          sum += (double)0.0960958997024139866;
        } else {
          sum += (double)0.2595891667553680282;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.596500009298324585) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.376512527465820312) ) ) {
            sum += (double)0.3744890413614068714;
          } else {
            sum += (double)0.1833928826233348075;
          }
        } else {
          sum += (double)0.5075014960921235829;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7597746551036834717) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01539999991655349731) ) ) {
              sum += (double)0.5348976667869641544;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1452500000596046448) ) ) {
                sum += (double)0.2283759450434778571;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2185500040650367737) ) ) {
                  sum += (double)0.3951338797952622106;
                } else {
                  sum += (double)0.2693696076245955529;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340396493673324585) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005200000014156103134) ) ) {
                sum += (double)0.5918670030750796673;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.041002750396728516) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07880000025033950806) ) ) {
                    sum += (double)0.5391815253797838103;
                  } else {
                    sum += (double)0.4680586579874251862;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1628499999642372131) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04420000128448009491) ) ) {
                      sum += (double)0.4773300699247995382;
                    } else {
                      sum += (double)0.2939904019423669745;
                    }
                  } else {
                    sum += (double)0.4936407895554751901;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4046880006790161133) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03564999997615814209) ) ) {
                    sum += (double)0.5557886053180457475;
                  } else {
                    sum += (double)0.6167731793112918304;
                  }
                } else {
                  sum += (double)0.6502249701590646636;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1207532212138175964) ) ) {
                  sum += (double)0.4026946880741952839;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                    sum += (double)0.5961555178340013361;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4160854965448379517) ) ) {
                      sum += (double)0.5587995977937665337;
                    } else {
                      sum += (double)0.4532504021514298653;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.46131515502929688) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1598075032234191895) ) ) {
              sum += (double)0.1378802218589463557;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9776.255859375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.2536931037902832) ) ) {
                  sum += (double)0.4751386979833717716;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16593.294921875) ) ) {
                    sum += (double)0.4183955354461067477;
                  } else {
                    sum += (double)0.2355280092595486152;
                  }
                }
              } else {
                sum += (double)0.2025602105452636026;
              }
            }
          } else {
            sum += (double)0.1753112530865265362;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.722097396850585938) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
            sum += (double)0.5194735022339108665;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.436428546905517578) ) ) {
              sum += (double)0.3826637048701136967;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3350.552978515625) ) ) {
                sum += (double)0.3157014040788886367;
              } else {
                sum += (double)0.06517970421091512367;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21575.447265625) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.55824851989746094) ) ) {
              sum += (double)0.3267522099661467339;
            } else {
              sum += (double)0.0990475158782668369;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3768779933452606201) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1390000060200691223) ) ) {
                sum += (double)0.03434336654970760599;
              } else {
                sum += (double)0.01784675210526315975;
              }
            } else {
              sum += (double)0.1102629020408163324;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6571570038795471191) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.53772830963134766) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4667980223894119263) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04279999993741512299) ) ) {
                  sum += (double)0.6741175130958331208;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6851500272750854492) ) ) {
                    sum += (double)0.6493370468750252478;
                  } else {
                    sum += (double)0.5944608086484112208;
                  }
                }
              } else {
                sum += (double)0.5283732105295366743;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2558.655029296875) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5787999927997589111) ) ) {
                  sum += (double)0.6216111122386559495;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.795833349227905273) ) ) {
                    sum += (double)0.7058673967948718708;
                  } else {
                    sum += (double)0.658039832517482437;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.640740752220153809) ) ) {
                  sum += (double)0.7442440038770087307;
                } else {
                  sum += (double)0.6863358973692974541;
                }
              }
            }
          } else {
            sum += (double)0.3891440868365075301;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09039999917149543762) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7396534979343414307) ) ) {
              sum += (double)0.7817887831932771592;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8372030258178710938) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.952875614166259766) ) ) {
                  sum += (double)0.8490304998236332112;
                } else {
                  sum += (double)0.8776900352941175987;
                }
              } else {
                sum += (double)0.9128886928395061329;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7703499794006347656) ) ) {
              sum += (double)0.7449184049048628298;
            } else {
              sum += (double)0.7914479489090701092;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6494295001029968262) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
            sum += (double)0.5271784121563553027;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3939.188232421875) ) ) {
              sum += (double)0.4299607057486665163;
            } else {
              sum += (double)0.1693073511043621526;
            }
          }
        } else {
          sum += (double)0.5746886103326963591;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.241598129272460938) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2981.1297607421875) ) ) {
          sum += (double)0.3948804643615942966;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.300000190734863281) ) ) {
            sum += (double)0.1019084147371714932;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2968864887952804565) ) ) {
              sum += (double)0.152200234438110843;
            } else {
              sum += (double)0.3616996661220236442;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2775000035762786865) ) ) {
          sum += (double)0.3954346878142397381;
        } else {
          sum += (double)0.6152697591727546156;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.504999995231628418) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1276310011744499207) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1750000044703483582) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1370999962091445923) ) ) {
              sum += (double)0.0361567721611721557;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.51363563537597656) ) ) {
                sum += (double)0.02324691888544891394;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09602699801325798035) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4947.7421875) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.7426910400390625) ) ) {
                      sum += (double)0.006829396491228072706;
                    } else {
                      sum += (double)0.004431702325581398684;
                    }
                  } else {
                    sum += (double)0.01207311428571429014;
                  }
                } else {
                  sum += (double)0.01336808750000000046;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03574999980628490448) ) ) {
              sum += (double)0.04575752319458523815;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.134400002658367157) ) ) {
                sum += (double)0.01294323809523809793;
              } else {
                sum += (double)0.03027299795918367634;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94999980926513672) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.41161727905273438) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1563.31512451171875) ) ) {
                sum += (double)0.03446115400979982146;
              } else {
                sum += (double)0.1336407287220389983;
              }
            } else {
              sum += (double)0.173033670776327253;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4513150006532669067) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5707696676254272461) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2250000014901161194) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.25) ) ) {
                    sum += (double)0.03337628803827750318;
                  } else {
                    sum += (double)0.01756663703703703963;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1940765008330345154) ) ) {
                    sum += (double)0.04801045679513184922;
                  } else {
                    sum += (double)0.1149961986464004826;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5302.632080078125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)80.1409759521484375) ) ) {
                    sum += (double)0.02942469473684210593;
                  } else {
                    sum += (double)0.007227900000000000644;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1965999975800514221) ) ) {
                    sum += (double)0.004000000000000000083;
                  } else {
                    sum += (double)0.007128400000000000014;
                  }
                }
              }
            } else {
              sum += (double)0.1094740882051282033;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5918934941291809082) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.160416603088378906) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.79444456100463867) ) ) {
              sum += (double)0.1099518685213116687;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7129499912261962891) ) ) {
                sum += (double)0.3663619313002760558;
              } else {
                sum += (double)0.1787875931140602836;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6086320579051971436) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7183.38818359375) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8550000190734863281) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2004804983735084534) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06130000017583370209) ) ) {
                      sum += (double)0.01109120000000000245;
                    } else {
                      sum += (double)0.03500968762454490651;
                    }
                  } else {
                    sum += (double)0.08191264045407635475;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.95258808135986328) ) ) {
                    sum += (double)0.1789624906026913709;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1972499936819076538) ) ) {
                      sum += (double)0.04971636850450409512;
                    } else {
                      sum += (double)0.1106850610786930256;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.17346000671386719) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4718.4921875) ) ) {
                    sum += (double)0.1856114065038111938;
                  } else {
                    sum += (double)0.06341417154578754545;
                  }
                } else {
                  sum += (double)0.2759856605636690774;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7199999988079071045) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.41185760498046875) ) ) {
                  sum += (double)0.06041866321779439108;
                } else {
                  sum += (double)0.1983071682384637269;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5169000029563903809) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7886.52392578125) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25826.7255859375) ) ) {
                      sum += (double)0.01097374736842105479;
                    } else {
                      sum += (double)0.03787903281535000277;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.07985496520996094) ) ) {
                      sum += (double)0.01367119999999999967;
                    } else {
                      sum += (double)0.005440177777777778848;
                    }
                  }
                } else {
                  sum += (double)0.06662665958147465095;
                }
              }
            }
          }
        } else {
          sum += (double)0.3956662543432883372;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8318758606910705566) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.21700811386108398) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2314330041408538818) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
              sum += (double)0.1866722978478053407;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2087280005216598511) ) ) {
                sum += (double)0.4720743452921210559;
              } else {
                sum += (double)0.3244311178669725959;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01650000084191560745) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.78706932067871094) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001500000013038516045) ) ) {
                  sum += (double)0.6121192001730834109;
                } else {
                  sum += (double)0.5266843722009654227;
                }
              } else {
                sum += (double)0.6498803410507301148;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340074002742767334) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5872.31591796875) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8032.161376953125) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11710.71533203125) ) ) {
                      sum += (double)0.5044163982730814899;
                    } else {
                      sum += (double)0.463453432442011648;
                    }
                  } else {
                    sum += (double)0.5300663028489162043;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2713164985179901123) ) ) {
                    sum += (double)0.3000519224365632009;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.42348003387451172) ) ) {
                      sum += (double)0.5078210157270477421;
                    } else {
                      sum += (double)0.3740992091247906104;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3772229999303817749) ) ) {
                    sum += (double)0.5335961247585642164;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181384891271591187) ) ) {
                      sum += (double)0.6072605502452147475;
                    } else {
                      sum += (double)0.6345863160493826483;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                    sum += (double)0.5999794976131688218;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3942845016717910767) ) ) {
                      sum += (double)0.5558096016016017549;
                    } else {
                      sum += (double)0.3948890241452076566;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3323754966259002686) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.214211881160736084) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6699999868869781494) ) ) {
                sum += (double)0.4857806686884688641;
              } else {
                sum += (double)0.2708769369755055778;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1265000030398368835) ) ) {
                sum += (double)0.1411811772267345944;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4572999924421310425) ) ) {
                  sum += (double)0.1795826686639903358;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33205.66796875) ) ) {
                    sum += (double)0.3405214345210757498;
                  } else {
                    sum += (double)0.2346762998439010095;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3968420028686523438) ) ) {
              sum += (double)0.5207431602003482762;
            } else {
              sum += (double)0.2948784039135678992;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.45491504669189453) ) ) {
            sum += (double)0.3729065166978725032;
          } else {
            sum += (double)0.1797540237384726014;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5968500077724456787) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.638694882392883301) ) ) {
              sum += (double)0.1927398569608763379;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0553500000387430191) ) ) {
                sum += (double)0.1427670107228014018;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2706499993801116943) ) ) {
                  sum += (double)0.06649008963825141227;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.69741535186767578) ) ) {
                    sum += (double)0.03992796595744680516;
                  } else {
                    sum += (double)0.01101837500000000039;
                  }
                }
              }
            }
          } else {
            sum += (double)0.271582556885160975;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3774155378341674805) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5441325008869171143) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3181999921798706055) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.68488168716430664) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.57076728343963623) ) ) {
                  sum += (double)0.6130315691464691685;
                } else {
                  sum += (double)0.5429572332504177812;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4953644871711730957) ) ) {
                  sum += (double)0.6264331671963436765;
                } else {
                  sum += (double)0.691146338302277341;
                }
              }
            } else {
              sum += (double)0.5522268513436121573;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7017999887466430664) ) ) {
              sum += (double)0.6583261760319745193;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01159999985247850418) ) ) {
                sum += (double)0.7538131523809523671;
              } else {
                sum += (double)0.706535895122425539;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7414509952068328857) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2440.659912109375) ) ) {
              sum += (double)0.7197291568570549636;
            } else {
              sum += (double)0.7885698791153087361;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1672.965087890625) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1008500009775161743) ) ) {
                sum += (double)0.8474648369194591746;
              } else {
                sum += (double)0.7790694584197943584;
              }
            } else {
              sum += (double)0.8863956036363634938;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5473549962043762207) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.569444537162780762) ) ) {
              sum += (double)0.5699964340089327397;
            } else {
              sum += (double)0.3564508881969147835;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4873500168323516846) ) ) {
              sum += (double)0.7016042946386946699;
            } else {
              sum += (double)0.5839818115226337314;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
            sum += (double)0.5164421728159374059;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3658.5477294921875) ) ) {
              sum += (double)0.504985944175518453;
            } else {
              sum += (double)0.1830456665777857317;
            }
          }
        }
      }
    }
  }
  return sum;
}
