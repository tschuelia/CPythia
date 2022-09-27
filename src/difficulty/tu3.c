#include "prediction.h"
double predict_margin_unit3(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.598214387893676758) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4776910096406936646) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002899999904911965132) ) ) {
          sum += (double)0.1330560021952688909;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.211111187934875488) ) ) {
            sum += (double)0.3499187744006165834;
          } else {
            sum += (double)0.2474177448085128628;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.041044771671295166) ) ) {
          sum += (double)0.5927236595984484158;
        } else {
          sum += (double)0.4173905002788943497;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1267609968781471252) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1051399968564510345) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                sum += (double)0.004000000000000000951;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.287451818585395813) ) ) {
                  sum += (double)0.01936188739495798769;
                } else {
                  sum += (double)0.008793527272727273691;
                }
              }
            } else {
              sum += (double)0.04497816962669683172;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06210000067949295044) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.78889083862304688) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5037999898195266724) ) ) {
                  sum += (double)0.05959589208544264355;
                } else {
                  sum += (double)0.01414524615384615477;
                }
              } else {
                sum += (double)0.1551400498035197528;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1589500010013580322) ) ) {
                sum += (double)0.1770925991585220183;
              } else {
                sum += (double)0.07767542242628686089;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07252199947834014893) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04294849932193756104) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.005060485714285715628;
                  }
                } else {
                  sum += (double)0.00738431428571428676;
                }
              } else {
                sum += (double)0.01004321666666666869;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.74583244323730469) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2833.01513671875) ) ) {
                  sum += (double)0.03930410110794554934;
                } else {
                  sum += (double)0.008760200000000002707;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2051999941468238831) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.62976837158203125) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.73630523681640625) ) ) {
                      sum += (double)0.006119105882352941263;
                    } else {
                      sum += (double)0.009997371428571428034;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05248149856925010681) ) ) {
                      sum += (double)0.005628474999999999971;
                    } else {
                      sum += (double)0.004000000000000000951;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2779999971389770508) ) ) {
                    sum += (double)0.03556787142857143619;
                  } else {
                    sum += (double)0.005929176470588236325;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5945.66943359375) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2478049993515014648) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)62.49761772155761719) ) ) {
                  sum += (double)0.05423937470238095193;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6452499926090240479) ) ) {
                    sum += (double)0.01631266428571428659;
                  } else {
                    sum += (double)0.02919688421052631794;
                  }
                }
              } else {
                sum += (double)0.09398785686619720581;
              }
            } else {
              sum += (double)0.00808257333333333404;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615219980478286743) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.782407283782958984) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3383000046014785767) ) ) {
              sum += (double)0.06122148751936822703;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7127999961376190186) ) ) {
                sum += (double)0.3645945907570944944;
              } else {
                sum += (double)0.2016494464226993022;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2679924964904785156) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008849999867379665375) ) ) {
                sum += (double)0.1627671610874214247;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1678309962153434753) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.36461687088012695) ) ) {
                    sum += (double)0.05690226029671127672;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-32008.3818359375) ) ) {
                      sum += (double)0.03687630253220625098;
                    } else {
                      sum += (double)0.01839470024213074942;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6917999982833862305) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6205592453479766846) ) ) {
                      sum += (double)0.07178364581004977041;
                    } else {
                      sum += (double)0.02232959419793079797;
                    }
                  } else {
                    sum += (double)0.1326587996001995506;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
                sum += (double)0.2802366805281628626;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3512154519557952881) ) ) {
                  sum += (double)0.1668070866624712101;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.42857170104980469) ) ) {
                      sum += (double)0.01455357037037037157;
                    } else {
                      sum += (double)0.06558787286174361242;
                    }
                  } else {
                    sum += (double)0.1434939954077219249;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7947375476360321045) ) ) {
            sum += (double)0.1847642196972630046;
          } else {
            sum += (double)0.3826226925198888407;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7597746551036834717) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.87184906005859375) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2302800044417381287) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02270000055432319641) ) ) {
              sum += (double)0.486068254624190399;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3067707866430282593) ) ) {
                sum += (double)0.2003632999404621751;
              } else {
                sum += (double)0.3731847892415599;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3929300010204315186) ) ) {
                sum += (double)0.6284059548130889183;
              } else {
                sum += (double)0.6889705535986083706;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3597664982080459595) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5255.547607421875) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.64965057373046875) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.195372104644775391) ) ) {
                      sum += (double)0.5182000929585484084;
                    } else {
                      sum += (double)0.4482302490608562895;
                    }
                  } else {
                    sum += (double)0.5641799805479682517;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.076923131942749023) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.298687174916267395) ) ) {
                      sum += (double)0.5454594671159262997;
                    } else {
                      sum += (double)0.4451402382155505988;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08734999969601631165) ) ) {
                      sum += (double)0.3052539394665234052;
                    } else {
                      sum += (double)0.4139671446166470203;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.00507354736328125) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2716.7725830078125) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4142140001058578491) ) ) {
                      sum += (double)0.586700237928303836;
                    } else {
                      sum += (double)0.5177947130787969865;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.15297174453735352) ) ) {
                      sum += (double)0.5871391883779382148;
                    } else {
                      sum += (double)0.6530956675786593335;
                    }
                  }
                } else {
                  sum += (double)0.4733446878458556495;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3444418162107467651) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3333054929971694946) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1240499988198280334) ) ) {
                sum += (double)0.4095439904982903778;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2636154890060424805) ) ) {
                  sum += (double)0.181400923215202875;
                } else {
                  sum += (double)0.3199969830135334647;
                }
              }
            } else {
              sum += (double)0.5044356533432569067;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3697500079870223999) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.48737621307373047) ) ) {
                sum += (double)0.3087204875028836115;
              } else {
                sum += (double)0.0842433145345318074;
              }
            } else {
              sum += (double)0.342256926773904735;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.083642482757568359) ) ) {
            sum += (double)0.5424015440811249533;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.876943737268447876) ) ) {
              sum += (double)0.1394792862195606553;
            } else {
              sum += (double)0.3341991503677196329;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05635000020265579224) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1974.7989501953125) ) ) {
              sum += (double)0.4072784638530234091;
            } else {
              sum += (double)0.111240513226077406;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6018500030040740967) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.378157496452331543) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1599000021815299988) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2386654987931251526) ) ) {
                    sum += (double)0.04749644244852363473;
                  } else {
                    sum += (double)0.02262581052631578923;
                  }
                } else {
                  sum += (double)0.07992349666181337853;
                }
              } else {
                sum += (double)0.0940568660246364624;
              }
            } else {
              sum += (double)0.1592824092632752486;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3479607552289962769) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5860525071620941162) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.622023820877075195) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.509651482105255127) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4858189970254898071) ) ) {
                sum += (double)0.6481582547404547423;
              } else {
                sum += (double)0.5238340786277958516;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4872.33837890625) ) ) {
                sum += (double)0.6160761863541603933;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5593884885311126709) ) ) {
                  sum += (double)0.7097293016908213792;
                } else {
                  sum += (double)0.6521297987695849896;
                }
              }
            }
          } else {
            sum += (double)0.5252539449128862392;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.87761020660400391) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0930651836097240448) ) ) {
                  sum += (double)0.7620035232850240758;
                } else {
                  sum += (double)0.7241319575128590813;
                }
              } else {
                sum += (double)0.7967794994505494888;
              }
            } else {
              sum += (double)0.7027557953947368707;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0685500018298625946) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9451737403869628906) ) ) {
                sum += (double)0.8916959600000000652;
              } else {
                sum += (double)0.8472807946190009654;
              }
            } else {
              sum += (double)0.8040685326617978967;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6712910234928131104) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.39378070831298828) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7531519830226898193) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5088259875774383545) ) ) {
                sum += (double)0.5428920463450875866;
              } else {
                sum += (double)0.6574604300328935613;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.170329689979553223) ) ) {
                sum += (double)0.5199940024780081993;
              } else {
                sum += (double)0.343346427972395396;
              }
            }
          } else {
            sum += (double)0.2562069113996146008;
          }
        } else {
          sum += (double)0.6608904089926438408;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.253819003701210022) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.236111164093017578) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999970197677612) ) ) {
            sum += (double)0.0956531271682646983;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.028528451919555664) ) ) {
              sum += (double)0.03657359730981434714;
            } else {
              sum += (double)0.01100442312925170064;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.24611186981201172) ) ) {
            sum += (double)0.2433706912439922709;
          } else {
            sum += (double)0.157685522012466689;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.444999992847442627) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.24025726318359375) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08973300084471702576) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.63666629791259766) ) ) {
                sum += (double)0.04070512469635627351;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5703499913215637207) ) ) {
                    sum += (double)0.004000000000000000951;
                  } else {
                    sum += (double)0.007193711111111111833;
                  }
                } else {
                  sum += (double)0.01288644705882353164;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.59285736083984375) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06275000050663948059) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1423714980483055115) ) ) {
                    sum += (double)0.008130422222222223258;
                  } else {
                    sum += (double)0.01697657777777777932;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5411282181739807129) ) ) {
                    sum += (double)0.03973207054907409996;
                  } else {
                    sum += (double)0.01840978000000000406;
                  }
                }
              } else {
                sum += (double)0.0599887748205817084;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8701499998569488525) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05701099894940853119) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0410149991512298584) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8254499733448028564) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.004367723076923076854;
                  }
                } else {
                  sum += (double)0.005759514285714286731;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000549999989743810147) ) ) {
                  sum += (double)0.01713209230769231067;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20845.64453125) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)409.7064437866210938) ) ) {
                      sum += (double)0.0143470947368421059;
                    } else {
                      sum += (double)0.004000000000000000083;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1389985010027885437) ) ) {
                      sum += (double)0.004142862500000000364;
                    } else {
                      sum += (double)0.006220052173913044775;
                    }
                  }
                }
              }
            } else {
              sum += (double)0.021303946666666667;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02045000065118074417) ) ) {
            sum += (double)0.1616982235644116861;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6996805667877197266) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)82.83382797241210938) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.26923084259033203) ) ) {
                  sum += (double)0.08748584294767736136;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1614600047469139099) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.88995170593261719) ) ) {
                      sum += (double)0.01739955151515151441;
                    } else {
                      sum += (double)0.02973881070748897112;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9781.1298828125) ) ) {
                      sum += (double)0.06819548554431914544;
                    } else {
                      sum += (double)0.02069713333333333266;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)50.10454559326171875) ) ) {
                  sum += (double)0.1718038668373621236;
                } else {
                  sum += (double)0.03918729384615385336;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1189999990165233612) ) ) {
                sum += (double)0.05574488403361344685;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9422245919704437256) ) ) {
                  sum += (double)0.0176417844040404094;
                } else {
                  sum += (double)0.008169616000000001071;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.930952310562133789) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.222748637199401855) ) ) {
          sum += (double)0.5508230585037814375;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1074.5780029296875) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3485690057277679443) ) ) {
              sum += (double)0.5197487966879015264;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4571020007133483887) ) ) {
                sum += (double)0.2825268152274877931;
              } else {
                sum += (double)0.4315820083517973305;
              }
            }
          } else {
            sum += (double)0.1351484047711871139;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6000744998455047607) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075429320335388184) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1154000014066696167) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.2469635009765625) ) ) {
                  sum += (double)0.1575728794199056926;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.4333343505859375) ) ) {
                    sum += (double)0.05226515596899225513;
                  } else {
                    sum += (double)0.08012298067820412817;
                  }
                }
              } else {
                sum += (double)0.2090699812945667202;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8822.72412109375) ) ) {
                sum += (double)0.09872329007648773802;
              } else {
                sum += (double)0.3637509078117591166;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4829500019550323486) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3908079862594604492) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1794499978423118591) ) ) {
                  sum += (double)0.03506762634408602114;
                } else {
                  sum += (double)0.005512929032258065756;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.69534111022949219) ) ) {
                  sum += (double)0.03717346231349387409;
                } else {
                  sum += (double)0.1866912203380551027;
                }
              }
            } else {
              sum += (double)0.153997658686238964;
            }
          }
        } else {
          sum += (double)0.4575207802950212455;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9531540870666503906) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.25617265701293945) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2444199994206428528) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500004917383194) ) ) {
              sum += (double)0.5350731829483187374;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12994.455078125) ) ) {
                sum += (double)0.4281027673821084512;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.836490631103515625) ) ) {
                  sum += (double)0.3475624843482251203;
                } else {
                  sum += (double)0.1884794195736549938;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0008499999821651726961) ) ) {
              sum += (double)0.6655763498868778605;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595600128173828125) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.31999969482421875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7030499875545501709) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.283674955368041992) ) ) {
                      sum += (double)0.5190908988251585754;
                    } else {
                      sum += (double)0.4549912504772654076;
                    }
                  } else {
                    sum += (double)0.3544705214985589548;
                  }
                } else {
                  sum += (double)0.5644039178662026979;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.042261838912963867) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.723249435424804688) ) ) {
                    sum += (double)0.5591922843378560604;
                  } else {
                    sum += (double)0.6343660987854251587;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1708500012755393982) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3408.8646240234375) ) ) {
                      sum += (double)0.584557298684210469;
                    } else {
                      sum += (double)0.543776247718215644;
                    }
                  } else {
                    sum += (double)0.5068157348733685064;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.335476994514465332) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84093379974365234) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6387500166893005371) ) ) {
                sum += (double)0.3636439422869806037;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2544725015759468079) ) ) {
                  sum += (double)0.2128043497882878832;
                } else {
                  sum += (double)0.3325667728492309183;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4628499895334243774) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2735920101404190063) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-34899.625) ) ) {
                    sum += (double)0.1307887863701540088;
                  } else {
                    sum += (double)0.2537521403348521609;
                  }
                } else {
                  sum += (double)0.0804486749296432907;
                }
              } else {
                sum += (double)0.3070916827313900921;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1604999974370002747) ) ) {
              sum += (double)0.5396004283446511618;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.96285629272460938) ) ) {
                sum += (double)0.4232903872708436155;
              } else {
                sum += (double)0.2567975402964472464;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.782791495323181152) ) ) {
          sum += (double)0.2834400136745292564;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.271773815155029297) ) ) {
            sum += (double)0.1884806744435594261;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.183620452880859375) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                sum += (double)0.202184393409176405;
              } else {
                sum += (double)0.041310011788539866;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-15797.10009765625) ) ) {
                sum += (double)0.07611957473525543527;
              } else {
                sum += (double)0.01625610000000000249;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.034132540225982666) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.621632993221282959) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3091374784708023071) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4761.35205078125) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7895.837158203125) ) ) {
                    sum += (double)0.6374888823414339711;
                  } else {
                    sum += (double)0.5868461724791743661;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.01828098297119141) ) ) {
                    sum += (double)0.641210695590828883;
                  } else {
                    sum += (double)0.7000938061728393391;
                  }
                }
              } else {
                sum += (double)0.5551263051596864173;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1249069347977638245) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01655000029131770134) ) ) {
                  sum += (double)0.7704204888888889213;
                } else {
                  sum += (double)0.7072404432900433191;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3051367700099945068) ) ) {
                  sum += (double)0.6187224736491394594;
                } else {
                  sum += (double)0.6691181700000001786;
                }
              }
            }
          } else {
            sum += (double)0.416889182234130018;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.115697808563709259) ) ) {
                sum += (double)0.8077584235294116288;
              } else {
                sum += (double)0.7574361956467332568;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1295500025153160095) ) ) {
                sum += (double)0.6752164534798534845;
              } else {
                sum += (double)0.7325861759534584294;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06500000134110450745) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05671153776347637177) ) ) {
                sum += (double)0.8850617965581742963;
              } else {
                sum += (double)0.8504412190476189348;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7035000026226043701) ) ) {
                sum += (double)0.7710406252459508503;
              } else {
                sum += (double)0.823030490000000059;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5586430132389068604) ) ) {
          sum += (double)0.3116215331508150332;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06179999746382236481) ) ) {
            sum += (double)0.4225412600127951279;
          } else {
            sum += (double)0.5644475884649111652;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.580495357513427734) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1704934984445571899) ) ) {
        sum += (double)0.06514892592950249917;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-970.381988525390625) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5131235122680664062) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3485690057277679443) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2874559909105300903) ) ) {
                sum += (double)0.3244733454568846098;
              } else {
                sum += (double)0.478898879074421524;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2061500027775764465) ) ) {
                sum += (double)0.1865958497212118761;
              } else {
                sum += (double)0.3360960019039761493;
              }
            }
          } else {
            sum += (double)0.5344665321827373194;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.176328539848327637) ) ) {
            sum += (double)0.3105288059245530086;
          } else {
            sum += (double)0.09251891266053693941;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4249999970197677612) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.37087917327880859) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1095724999904632568) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02364999987185001373) ) ) {
                sum += (double)0.006546183333333334582;
              } else {
                sum += (double)0.01773602312925170316;
              }
            } else {
              sum += (double)0.07545853696283634504;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05958699993789196014) ) ) {
                  sum += (double)0.004000000000000002685;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08604050055146217346) ) ) {
                    sum += (double)0.005880742857142857126;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2238999977707862854) ) ) {
                  sum += (double)0.008584000000000001351;
                } else {
                  sum += (double)0.004000000000000000951;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.48271369934082031) ) ) {
                sum += (double)0.01970650808678501079;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.22161197662353516) ) ) {
                  sum += (double)0.01062081818181818266;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7161104083061218262) ) ) {
                    sum += (double)0.007223200000000001668;
                  } else {
                    sum += (double)0.004631147826086957041;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
            sum += (double)0.0759641783287419714;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3062135130167007446) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.29761886596679688) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1820.41180419921875) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4933216571807861328) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.40783405303955078) ) ) {
                      sum += (double)0.05046339594752708574;
                    } else {
                      sum += (double)0.02085896624748491066;
                    }
                  } else {
                    sum += (double)0.05939378077169890635;
                  }
                } else {
                  sum += (double)0.01098375384615384726;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.297000005841255188) ) ) {
                  sum += (double)0.004000000000000000951;
                } else {
                  sum += (double)0.007106715789473685638;
                }
              }
            } else {
              sum += (double)0.08030030811073810004;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6789383888244628906) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5022.721923828125) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1689469963312149048) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2824000120162963867) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.27513504028320312) ) ) {
                      sum += (double)0.02394603678009456921;
                    } else {
                      sum += (double)0.06273514635451503396;
                    }
                  } else {
                    sum += (double)0.0806734110521516723;
                  }
                } else {
                  sum += (double)0.1119730661824730605;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14759.43505859375) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.280020490288734436) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.60548496246337891) ) ) {
                      sum += (double)0.08610243449091205259;
                    } else {
                      sum += (double)0.02522531495911496321;
                    }
                  } else {
                    sum += (double)0.1253808266939462623;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)62.9144744873046875) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1783499941229820251) ) ) {
                      sum += (double)0.08043357676760375108;
                    } else {
                      sum += (double)0.1647420026883911204;
                    }
                  } else {
                    sum += (double)0.3201428762770645586;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4315.2431640625) ) ) {
                sum += (double)0.361449006299609743;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.01458358764648438) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.463235378265380859) ) ) {
                    sum += (double)0.2034161288027575842;
                  } else {
                    sum += (double)0.06402312935870713151;
                  }
                } else {
                  sum += (double)0.2603312443322197134;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.822329401969909668) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2666459977626800537) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7414.750244140625) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20649.8720703125) ) ) {
                    sum += (double)0.01807093682277318911;
                  } else {
                    sum += (double)0.03728034712252775024;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2251560017466545105) ) ) {
                    sum += (double)0.005456719999999999973;
                  } else {
                    sum += (double)0.00918556923076923465;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.90476179122924805) ) ) {
                  sum += (double)0.01744573913043478627;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)37.66477203369140625) ) ) {
                    sum += (double)0.08026929009224667566;
                  } else {
                    sum += (double)0.01791927584229390663;
                  }
                }
              }
            } else {
              sum += (double)0.1404997752297093561;
            }
          }
        } else {
          sum += (double)0.3325937671111805494;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5474660098552703857) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3596890121698379517) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005050000036135315895) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1854631304740905762) ) ) {
                sum += (double)0.5959242727656270944;
              } else {
                sum += (double)0.5496628175243769565;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2338574975728988647) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.589755773544311523) ) ) {
                  sum += (double)0.4651062840520682196;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                    sum += (double)0.1913427255458734211;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4357010573148727417) ) ) {
                      sum += (double)0.4180563121091722678;
                    } else {
                      sum += (double)0.2788014422445202478;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4331.488525390625) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3343700021505355835) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.197473049163818359) ) ) {
                      sum += (double)0.5080056154253880241;
                    } else {
                      sum += (double)0.4394576561718594454;
                    }
                  } else {
                    sum += (double)0.5535633792521994501;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.11270236968994141) ) ) {
                    sum += (double)0.5070657178635936679;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.10398769378662109) ) ) {
                      sum += (double)0.273217482350769425;
                    } else {
                      sum += (double)0.3848044860387002108;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.332076072692871094) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.36806297302246094) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.037037134170532227) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.705384731292724609) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02049999963492155075) ) ) {
                      sum += (double)0.5495705876504448639;
                    } else {
                      sum += (double)0.5947470362037680092;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08903484046459197998) ) ) {
                      sum += (double)0.5716707719249419783;
                    } else {
                      sum += (double)0.649611747318647903;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.24444437026977539) ) ) {
                    sum += (double)0.5130682448217317448;
                  } else {
                    sum += (double)0.5746330809046761301;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03639999963343143463) ) ) {
                  sum += (double)0.7343234941176469688;
                } else {
                  sum += (double)0.6166426964257425425;
                }
              }
            } else {
              sum += (double)0.4873792873959880145;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3745680004358291626) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5132.362060546875) ) ) {
              sum += (double)0.2756606494925986639;
            } else {
              sum += (double)0.04066701275017150369;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1701499968767166138) ) ) {
              sum += (double)0.1853854998601664195;
            } else {
              sum += (double)0.4518769250330608722;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.123808443546295166) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3306660056114196777) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.34866619110107422) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6896195709705352783) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.204797498881816864) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1845500022172927856) ) ) {
                    sum += (double)0.2770665124774459587;
                  } else {
                    sum += (double)0.05571006160778229493;
                  }
                } else {
                  sum += (double)0.3068385010965181681;
                }
              } else {
                sum += (double)0.3817307395373202294;
              }
            } else {
              sum += (double)0.09205958496545749159;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.0242156982421875) ) ) {
              sum += (double)0.4752289602910653721;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3650897890329360962) ) ) {
                sum += (double)0.3722983524898991203;
              } else {
                sum += (double)0.2305422381535669474;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1833999976515769958) ) ) {
            sum += (double)0.142271444326357327;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4307000041007995605) ) ) {
              sum += (double)0.01077334117647059039;
            } else {
              sum += (double)0.0163310571428571423;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.0984763503074646) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7224465012550354004) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7739.230712890625) ) ) {
            sum += (double)0.5853383547473182125;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6727240085601806641) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08109999820590019226) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.878048896789550781) ) ) {
                  sum += (double)0.6931169117101823041;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1815.1107177734375) ) ) {
                    sum += (double)0.7214983869565216867;
                  } else {
                    sum += (double)0.7697775263157894399;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.548343420028686523) ) ) {
                  sum += (double)0.6405933562130177172;
                } else {
                  sum += (double)0.6882547664890664718;
                }
              }
            } else {
              sum += (double)0.7645104565590218337;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1074000000953674316) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7774834632873535156) ) ) {
              sum += (double)0.8819643388083736602;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06487137079238891602) ) ) {
                sum += (double)0.7886599631828489221;
              } else {
                sum += (double)0.8607027272727273415;
              }
            }
          } else {
            sum += (double)0.7735612528566531143;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06179999746382236481) ) ) {
          sum += (double)0.363583653836584364;
        } else {
          sum += (double)0.5175806060393300934;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
        sum += (double)0.0972085254598201165;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-765.98193359375) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1696.7208251953125) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
              sum += (double)0.3218840904073233533;
            } else {
              sum += (double)0.4173720598708782759;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01745000015944242477) ) ) {
              sum += (double)0.4370872666077894597;
            } else {
              sum += (double)0.5610964133060628578;
            }
          }
        } else {
          sum += (double)0.2419320699115318496;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4178429991006851196) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8249999880790710449) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.49107122421264648) ) ) {
                sum += (double)0.01055614545454545798;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8346000015735626221) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1099499985575675964) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05132200010120868683) ) ) {
                      sum += (double)0.004405031578947369436;
                    } else {
                      sum += (double)0.007649515789473686905;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-26892.861328125) ) ) {
                    sum += (double)0.01212422222222222373;
                  } else {
                    sum += (double)0.004250000000000000305;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
                sum += (double)0.05062250097602625371;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.78571510314941406) ) ) {
                    sum += (double)0.01170211428571428687;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03070000000298023224) ) ) {
                    sum += (double)0.02887750769230769399;
                  } else {
                    sum += (double)0.0144516222222222223;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1245824471116065979) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02669999934732913971) ) ) {
                sum += (double)0.1613236679267044948;
              } else {
                sum += (double)0.08096733736580256913;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2278854995965957642) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.63783788681030273) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1221999973058700562) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5420.46533203125) ) ) {
                      sum += (double)0.06068425064253923917;
                    } else {
                      sum += (double)0.02038049999999999931;
                    }
                  } else {
                    sum += (double)0.08854982385364236486;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1520499959588050842) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5689465999603271484) ) ) {
                      sum += (double)0.01714445762061403769;
                    } else {
                      sum += (double)0.006429874285714287652;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7680511474609375) ) ) {
                      sum += (double)0.04833510648851034597;
                    } else {
                      sum += (double)0.01551057839721254467;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3430376201868057251) ) ) {
                  sum += (double)0.1530266142671558305;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6099999845027923584) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.379999995231628418) ) ) {
                      sum += (double)0.02434744000000000491;
                    } else {
                      sum += (double)0.1255920714761500356;
                    }
                  } else {
                    sum += (double)0.02360833846153846671;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4447162598371505737) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009450000245124101639) ) ) {
              sum += (double)0.3944828940229919145;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1624710038304328918) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2656126618385314941) ) ) {
                  sum += (double)0.02675330841750842362;
                } else {
                  sum += (double)0.1069717698551577306;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.711707115173339844) ) ) {
                  sum += (double)0.2635818402892105561;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.075439453125) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06404999829828739166) ) ) {
                      sum += (double)0.05652663433648418001;
                    } else {
                      sum += (double)0.1228442617150566768;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2543655037879943848) ) ) {
                      sum += (double)0.136680360406728707;
                    } else {
                      sum += (double)0.2131078105212062535;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2597499936819076538) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7876397669315338135) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4069499969482421875) ) ) {
                  sum += (double)0.04993508801906662575;
                } else {
                  sum += (double)0.02109277461572244342;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.137449994683265686) ) ) {
                  sum += (double)0.006825815384615386248;
                } else {
                  sum += (double)0.01576856470588235484;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6326920390129089355) ) ) {
                sum += (double)0.1249487542931490003;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.198886752128601074) ) ) {
                  sum += (double)0.06156997713936597505;
                } else {
                  sum += (double)0.02251135733544806089;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.03296661376953125) ) ) {
          sum += (double)0.08398278893369176545;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6349999904632568359) ) ) {
            sum += (double)0.1101382741275616362;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06374999880790710449) ) ) {
              sum += (double)0.2753199624692235226;
            } else {
              sum += (double)0.4505807397515690371;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46942424774169922) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2416300028562545776) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.06211948394775391) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.04346036911010742) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5006725937128067017) ) ) {
                  sum += (double)0.2835199322463056726;
                } else {
                  sum += (double)0.4500122045386623082;
                }
              } else {
                sum += (double)0.1353533067604592299;
              }
            } else {
              sum += (double)0.5175718424789961247;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.284801959991455078) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3962208777666091919) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1935720145702362061) ) ) {
                    sum += (double)0.4777173420397708981;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.87587285041809082) ) ) {
                      sum += (double)0.5088115951086576993;
                    } else {
                      sum += (double)0.5646456570149427368;
                    }
                  }
                } else {
                  sum += (double)0.4593661369474156819;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.631099998950958252) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1579999998211860657) ) ) {
                    sum += (double)0.2927891139665381171;
                  } else {
                    sum += (double)0.4934744746206732868;
                  }
                } else {
                  sum += (double)0.4835933245869681874;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08029999956488609314) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.819211483001708984) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38109549880027771) ) ) {
                    sum += (double)0.5448306363505746042;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.816810369491577148) ) ) {
                      sum += (double)0.59020553909131801;
                    } else {
                      sum += (double)0.634501872060195371;
                    }
                  }
                } else {
                  sum += (double)0.6670071622269705403;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                  sum += (double)0.592133716512345698;
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3257.8267822265625) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1286389976739883423) ) ) {
                      sum += (double)0.4378957383617222976;
                    } else {
                      sum += (double)0.5558898944854185897;
                    }
                  } else {
                    sum += (double)0.3843619754768516361;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.695404052734375) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19434.8349609375) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2679415047168731689) ) ) {
                sum += (double)0.3254175104012383968;
              } else {
                sum += (double)0.4705656362451241526;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1268499940633773804) ) ) {
                sum += (double)0.3990186630150250879;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3088000118732452393) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11159.1328125) ) ) {
                    sum += (double)0.2223379264062438077;
                  } else {
                    sum += (double)0.3435158724689025278;
                  }
                } else {
                  sum += (double)0.1382483552128332127;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2077115029096603394) ) ) {
              sum += (double)0.2789774497674906151;
            } else {
              sum += (double)0.1169438292325718082;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.335132837295532227) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1840.76361083984375) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3672800064086914062) ) ) {
              sum += (double)0.1913737007748098351;
            } else {
              sum += (double)0.4181314632898535666;
            }
          } else {
            sum += (double)0.1334760510695272573;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25422.712890625) ) ) {
            sum += (double)0.1572845669765221832;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3895944952964782715) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.78266429901123047) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2826000005006790161) ) ) {
                  sum += (double)0.01942202745098039682;
                } else {
                  sum += (double)0.04971144392547613422;
                }
              } else {
                sum += (double)0.01658978000000000536;
              }
            } else {
              sum += (double)0.102698977404466707;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513555049896240234) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3567.67431640625) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7854500114917755127) ) ) {
                  sum += (double)0.6048891742099213875;
                } else {
                  sum += (double)0.534374792522185782;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.873384952545166016) ) ) {
                  sum += (double)0.6246699700713778114;
                } else {
                  sum += (double)0.6917020827160494933;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09205000102519989014) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.120183311402797699) ) ) {
                  sum += (double)0.7289736484848484688;
                } else {
                  sum += (double)0.6755644255629489336;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6877000033855438232) ) ) {
                  sum += (double)0.6885172822278911031;
                } else {
                  sum += (double)0.6357634026159026952;
                }
              }
            }
          } else {
            sum += (double)0.4435734503368360393;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01555000059306621552) ) ) {
              sum += (double)0.7988528801169589855;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1354499980807304382) ) ) {
                sum += (double)0.7161365498637111138;
              } else {
                sum += (double)0.7809814847332743337;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9177328944206237793) ) ) {
              sum += (double)0.872031369585024918;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.734485447406768799) ) ) {
                sum += (double)0.7934876226967225721;
              } else {
                sum += (double)0.8367197000000000662;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5527740120887756348) ) ) {
          sum += (double)0.2408440701158889863;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759060025215148926) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6289905011653900146) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.881829261779785156) ) ) {
                sum += (double)0.5332408909213758319;
              } else {
                sum += (double)0.441937544835465046;
              }
            } else {
              sum += (double)0.2544191670843844455;
            }
          } else {
            sum += (double)0.5885896089304526457;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.491978645324707031) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.516666650772094727) ) ) {
        sum += (double)0.5762091151663241151;
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1033.249481201171875) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9149999916553497314) ) ) {
            sum += (double)0.2141941236432800821;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1546.9949951171875) ) ) {
              sum += (double)0.3559703303543512165;
            } else {
              sum += (double)0.5171637027013888943;
            }
          }
        } else {
          sum += (double)0.1137651933389692005;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4154970049858093262) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-932.292022705078125) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09679999947547912598) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.35869550704956055) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01295000035315752029) ) ) {
                      sum += (double)0.005121146666666667215;
                    } else {
                      sum += (double)0.01228305714285714452;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0290924999862909317) ) ) {
                      sum += (double)0.00403950743801653224;
                    } else {
                      sum += (double)0.005760443835616441133;
                    }
                  }
                } else {
                  sum += (double)0.01101273043478260757;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.97321510314941406) ) ) {
                  sum += (double)0.0168869000000000033;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.88888931274414062) ) ) {
                    sum += (double)0.01150096000000000278;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                }
              }
            } else {
              sum += (double)0.02399380193923723523;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.78476190567016602) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.76250076293945312) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09375) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.86410236358642578) ) ) {
                    sum += (double)0.02925283391405343256;
                  } else {
                    sum += (double)0.01125336842105263344;
                  }
                } else {
                  sum += (double)0.06945073910378637971;
                }
              } else {
                sum += (double)0.1641465675455898166;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001699999964330345392) ) ) {
                sum += (double)0.06726762068761227287;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06049999967217445374) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4892379790544509888) ) ) {
                    sum += (double)0.007897622222222223237;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8385.6435546875) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.29563522338867188) ) ) {
                      sum += (double)0.03832724797178130305;
                    } else {
                      sum += (double)0.0116659491794001164;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.75) ) ) {
                      sum += (double)0.0306857491060025557;
                    } else {
                      sum += (double)0.08300618337155800386;
                    }
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
                  sum += (double)0.1216794157987372144;
                } else {
                  sum += (double)0.04786367927272727057;
                }
              } else {
                sum += (double)0.204989264599102966;
              }
            } else {
              sum += (double)0.2644876649301177718;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.736466825008392334) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8264.47216796875) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5495293736457824707) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.13558950275182724) ) ) {
                      sum += (double)0.02011255000000000334;
                    } else {
                      sum += (double)0.04711200813951774841;
                    }
                  } else {
                    sum += (double)0.09551345636164870756;
                  }
                } else {
                  sum += (double)0.1039502603716661172;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1318000033497810364) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4532499909400939941) ) ) {
                    sum += (double)0.1518125131743516265;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3897852897644043) ) ) {
                      sum += (double)0.07747548165374677775;
                    } else {
                      sum += (double)0.02660973675213675407;
                    }
                  }
                } else {
                  sum += (double)0.2904513480713609153;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6450000107288360596) ) ) {
                sum += (double)0.09840300957767723899;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2591499984264373779) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    sum += (double)0.005436415999999999471;
                  } else {
                    sum += (double)0.02006560253456221229;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.23784160614013672) ) ) {
                    sum += (double)0.04323806077734466263;
                  } else {
                    sum += (double)0.0220744647995279597;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6000744998455047607) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4863049983978271484) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
              sum += (double)0.1974936580070278114;
            } else {
              sum += (double)0.4032592825139439952;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1086000017821788788) ) ) {
              sum += (double)0.1510063026871071301;
            } else {
              sum += (double)0.03890153242472572936;
            }
          }
        } else {
          sum += (double)0.3661773705051510897;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4760459959506988525) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9647493362426757812) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.89961814880371094) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009300000034272670746) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.521008491516113281) ) ) {
                sum += (double)0.5509127550674824958;
              } else {
                sum += (double)0.6100572104377104399;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2319855019450187683) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5823499858379364014) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.659859180450439453) ) ) {
                    sum += (double)0.4682888511051988001;
                  } else {
                    sum += (double)0.2995430884532793159;
                  }
                } else {
                  sum += (double)0.1948142529281434443;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4185.778564453125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.30924534797668457) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.770586013793945312) ) ) {
                      sum += (double)0.4901701551084513553;
                    } else {
                      sum += (double)0.5218429788880805109;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2284711003303527832) ) ) {
                      sum += (double)0.517381608666932058;
                    } else {
                      sum += (double)0.424798596654664129;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.570413589477539062) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0732500031590461731) ) ) {
                      sum += (double)0.3528589423123565938;
                    } else {
                      sum += (double)0.5324664972419227427;
                    }
                  } else {
                    sum += (double)0.2716642432959079922;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0870000012218952179) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3646669983863830566) ) ) {
                sum += (double)0.5450343078790973461;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.71008110046386719) ) ) {
                  sum += (double)0.5824170147314412516;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8034499883651733398) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.66233730316162109) ) ) {
                      sum += (double)0.6357438780672731715;
                    } else {
                      sum += (double)0.6790334857142857894;
                    }
                  } else {
                    sum += (double)0.6196031047568869576;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1078718006610870361) ) ) {
                sum += (double)0.4262401288702118429;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4017308205366134644) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3987.6702880859375) ) ) {
                    sum += (double)0.5447285918620735634;
                  } else {
                    sum += (double)0.6166529307692307782;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8082.7138671875) ) ) {
                    sum += (double)0.5504182189804316394;
                  } else {
                    sum += (double)0.4947544491378375042;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2219502776861190796) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16494.0283203125) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2757060080766677856) ) ) {
                sum += (double)0.3921556433083256965;
              } else {
                sum += (double)0.4790284787236413488;
              }
            } else {
              sum += (double)0.2097473945727719724;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21096.990234375) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2274999991059303284) ) ) {
                sum += (double)0.05999720238761841601;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.05810928344726562) ) ) {
                  sum += (double)0.3089435781817171933;
                } else {
                  sum += (double)0.1954457517266115218;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3271740078926086426) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.230650000274181366) ) ) {
                  sum += (double)0.3111165268480808876;
                } else {
                  sum += (double)0.1648519302454324598;
                }
              } else {
                sum += (double)0.4905213174089069761;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.725787758827209473) ) ) {
          sum += (double)0.2571529363329882467;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.13316720724105835) ) ) {
            sum += (double)0.1653465407566161172;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.29335474967956543) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2422.9786376953125) ) ) {
                sum += (double)0.2628387878034193492;
              } else {
                sum += (double)0.04047477604418570074;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.233950003981590271) ) ) {
                sum += (double)0.06717141395108187918;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.90583705902099609) ) ) {
                  sum += (double)0.03791356730123180557;
                } else {
                  sum += (double)0.01521731666666666788;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9429409801959991455) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6155470013618469238) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.09328365325927734) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5215319991111755371) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4863719940185546875) ) ) {
                sum += (double)0.6670782066681855138;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5008399784564971924) ) ) {
                  sum += (double)0.5493370721836322579;
                } else {
                  sum += (double)0.610876574980567244;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.427553892135620117) ) ) {
                sum += (double)0.6304431505863870022;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1693000048398971558) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.681917190551757812) ) ) {
                    sum += (double)0.7523016400000001047;
                  } else {
                    sum += (double)0.7151721921436587914;
                  }
                } else {
                  sum += (double)0.6413996438059526017;
                }
              }
            }
          } else {
            sum += (double)0.3898198099729079935;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7701259851455688477) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1617.84906005859375) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7694000005722045898) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.18185901641845703) ) ) {
                  sum += (double)0.7278265360830799002;
                } else {
                  sum += (double)0.7632687523809524865;
                }
              } else {
                sum += (double)0.6507865459871901015;
              }
            } else {
              sum += (double)0.8044091755517825959;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02675000019371509552) ) ) {
              sum += (double)0.9015386896969698194;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8400294780731201172) ) ) {
                sum += (double)0.8029727934061343664;
              } else {
                sum += (double)0.8677368607038880022;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.132035613059997559) ) ) {
          sum += (double)0.5545253865753366762;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3939.188232421875) ) ) {
            sum += (double)0.4692271602678353415;
          } else {
            sum += (double)0.2444347277442207866;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.160416603088378906) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7599999904632568359) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.405882358551025391) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2480299994349479675) ) ) {
            sum += (double)0.08044991273982290969;
          } else {
            sum += (double)0.2092907384887628397;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.02991485595703125) ) ) {
            sum += (double)0.0665146153744872598;
          } else {
            sum += (double)0.01123252173913043619;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.649305582046508789) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.450182497501373291) ) ) {
            sum += (double)0.3608624531432335081;
          } else {
            sum += (double)0.5338776244868063126;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.684472203254699707) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008099999744445085526) ) ) {
              sum += (double)0.4072027102945530719;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3798.7977294921875) ) ) {
                sum += (double)0.1923952284943766522;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3190179914236068726) ) ) {
                  sum += (double)0.2456272675047158072;
                } else {
                  sum += (double)0.3869000073116426464;
                }
              }
            }
          } else {
            sum += (double)0.053727532903503121;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3019385039806365967) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1425554975867271423) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.51666641235351562) ) ) {
                sum += (double)0.01542824000000000105;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7086.3857421875) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.128962390124797821) ) ) {
                      sum += (double)0.006667733333333334365;
                    } else {
                      sum += (double)0.004333623783783786994;
                    }
                  } else {
                    sum += (double)0.009948610526315789654;
                  }
                } else {
                  sum += (double)0.00939988387096774361;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0841500014066696167) ) ) {
                sum += (double)0.04382783558897242887;
              } else {
                sum += (double)0.004976799999999999106;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.12000036239624023) ) ) {
              sum += (double)0.05529451494232549835;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
                sum += (double)0.04953826111111111347;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7722391784191131592) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5638000071048736572) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12780.66796875) ) ) {
                      sum += (double)0.01788190282828282934;
                    } else {
                      sum += (double)0.04785497248677249293;
                    }
                  } else {
                    sum += (double)0.01235226250000000248;
                  }
                } else {
                  sum += (double)0.006796261538461538868;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6630390286445617676) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7162.870361328125) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01340000005438923836) ) ) {
                sum += (double)0.1401490372223688219;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4486999958753585815) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.209712497889995575) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                      sum += (double)0.02375108374314007301;
                    } else {
                      sum += (double)0.05201364142533277529;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3360310196876525879) ) ) {
                      sum += (double)0.1154183802897217198;
                    } else {
                      sum += (double)0.03919275341463414331;
                    }
                  }
                } else {
                  sum += (double)0.1160707742053458114;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4436.33837890625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04979999922215938568) ) ) {
                  sum += (double)0.08824752028335232368;
                } else {
                  sum += (double)0.2334314986626446209;
                }
              } else {
                sum += (double)0.06046394321535847327;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3937999904155731201) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.00053134560585022) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4833000004291534424) ) ) {
                  sum += (double)0.03906037957351291001;
                } else {
                  sum += (double)0.0152980571428571431;
                }
              } else {
                sum += (double)0.009977683265306125371;
              }
            } else {
              sum += (double)0.05694140825696932667;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.42083358764648438) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184924960136413574) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8599999845027923584) ) ) {
              sum += (double)0.01511440000000000006;
            } else {
              sum += (double)0.04988497160540609349;
            }
          } else {
            sum += (double)0.1069602364686382118;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1856499984860420227) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.41666793823242188) ) ) {
              sum += (double)0.3387121383144221509;
            } else {
              sum += (double)0.1722329921940870257;
            }
          } else {
            sum += (double)0.08801776436680024129;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9199577271938323975) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2893639951944351196) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.5948836138750138725;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.722131967544555664) ) ) {
                sum += (double)0.454635070469774083;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5691.20263671875) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9269.400390625) ) ) {
                      sum += (double)0.2176239926292220517;
                    } else {
                      sum += (double)0.3978197958019915603;
                    }
                  } else {
                    sum += (double)0.4845199548370132114;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3721.0455322265625) ) ) {
                    sum += (double)0.1371380130983082535;
                  } else {
                    sum += (double)0.2388210120831778249;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3595285117626190186) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.878250598907470703) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7280000150203704834) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1015000008046627045) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.613211393356323242) ) ) {
                      sum += (double)0.5311216392212009252;
                    } else {
                      sum += (double)0.5862103402036559219;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.317928999662399292) ) ) {
                      sum += (double)0.518520296294648575;
                    } else {
                      sum += (double)0.4530870567009473437;
                    }
                  }
                } else {
                  sum += (double)0.4354863628301994249;
                }
              } else {
                sum += (double)0.3542723420720187422;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.10895252227783203) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2557.880615234375) ) ) {
                    sum += (double)0.57313743686562868;
                  } else {
                    sum += (double)0.6187327789473683337;
                  }
                } else {
                  sum += (double)0.6708122036630036478;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4147095084190368652) ) ) {
                  sum += (double)0.5828480303605058088;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2900869995355606079) ) ) {
                    sum += (double)0.4420907207019793561;
                  } else {
                    sum += (double)0.5331626414797323577;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345710039138793945) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4013499915599822998) ) ) {
              sum += (double)0.08361921115259009218;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-20063.3896484375) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-35385.27734375) ) ) {
                  sum += (double)0.2157426597197085183;
                } else {
                  sum += (double)0.358735667385058965;
                }
              } else {
                sum += (double)0.1817715711099369136;
              }
            }
          } else {
            sum += (double)0.3696911359765252536;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
          sum += (double)0.3602334365797152937;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21581.0751953125) ) ) {
            sum += (double)0.2166231182707472891;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.006363630294799805) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2565.63232421875) ) ) {
                sum += (double)0.2369527748255345068;
              } else {
                sum += (double)0.07274430587898690626;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14890.68017578125) ) ) {
                sum += (double)0.06605077142340387564;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.503048837184906006) ) ) {
                  sum += (double)0.01075870000000000125;
                } else {
                  sum += (double)0.02395436099773242539;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7349939048290252686) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6059480011463165283) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.725019931793212891) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02639999985694885254) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1220334097743034363) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8795499801635742188) ) ) {
                  sum += (double)0.7556978970588235089;
                } else {
                  sum += (double)0.7076873228758169265;
                }
              } else {
                sum += (double)0.6658339854503136923;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09479834139347076416) ) ) {
                  sum += (double)0.5592671507493733873;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.169156000018119812) ) ) {
                    sum += (double)0.6595296846687382919;
                  } else {
                    sum += (double)0.6041079030454714616;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5793989896774291992) ) ) {
                  sum += (double)0.6680049290969899412;
                } else {
                  sum += (double)0.6947988013682745434;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.69916343688964844) ) ) {
              sum += (double)0.5856534411941078933;
            } else {
              sum += (double)0.470466483984390782;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.15719032287597656) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8408499956130981445) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7422500252723693848) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.074468135833740234) ) ) {
                    sum += (double)0.7453783229080490624;
                  } else {
                    sum += (double)0.7848956892551890441;
                  }
                } else {
                  sum += (double)0.6958921612045517735;
                }
              } else {
                sum += (double)0.8108614312292358184;
              }
            } else {
              sum += (double)0.6837460158284601741;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
              sum += (double)0.883169013793103419;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.11565709114074707) ) ) {
                sum += (double)0.7789908820830074854;
              } else {
                sum += (double)0.8479903142857142528;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6084134876728057861) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07525000348687171936) ) ) {
            sum += (double)0.2456555134718497457;
          } else {
            sum += (double)0.464676689134199794;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6759060025215148926) ) ) {
            sum += (double)0.527565268705478263;
          } else {
            sum += (double)0.6611137895709277013;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2976669967174530029) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.422222375869750977) ) ) {
          sum += (double)0.1246514180669848482;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.05357122421264648) ) ) {
                sum += (double)0.006719600000000001787;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.182799994945526123) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2411.835205078125) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.004956966666666667333;
                  }
                } else {
                  sum += (double)0.006207433333333334941;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03499999921768903732) ) ) {
                sum += (double)0.0277643847619047611;
              } else {
                sum += (double)0.004000000000000000083;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8536999821662902832) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.43487167358398438) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.52499961853027344) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.19444465637207031) ) ) {
                    sum += (double)0.05714297152684044007;
                  } else {
                    sum += (double)0.01737451866125760622;
                  }
                } else {
                  sum += (double)0.07468731341109630106;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2124940007925033569) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2006999999284744263) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2346000000834465027) ) ) {
                      sum += (double)0.03564120192855577129;
                    } else {
                      sum += (double)0.01012567691313131894;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8163344860076904297) ) ) {
                      sum += (double)0.03577138064516129784;
                    } else {
                      sum += (double)0.008475769230769232901;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5204.59912109375) ) ) {
                    sum += (double)0.07537755346111758847;
                  } else {
                    sum += (double)0.02162918620689655361;
                  }
                }
              }
            } else {
              sum += (double)0.06961504121798749167;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.967741966247558594) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.248263835906982422) ) ) {
            sum += (double)0.05082959321966692978;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.104166507720947266) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7935500144958496094) ) ) {
                sum += (double)0.3524397007031028761;
              } else {
                sum += (double)0.1930672000479710382;
              }
            } else {
              sum += (double)0.154729820001059365;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000125169754028) ) ) {
            sum += (double)0.1884845795081553366;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434910014271736145) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.5917363166809082) ) ) {
                sum += (double)0.09662454143958743025;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7516148090362548828) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2801000028848648071) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.41869926452636719) ) ) {
                      sum += (double)0.04337167514455680245;
                    } else {
                      sum += (double)0.01258891666666667013;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.11755943298339844) ) ) {
                      sum += (double)0.08220918243342628662;
                    } else {
                      sum += (double)0.05354132907502894695;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.05835437774658203) ) ) {
                    sum += (double)0.007325666666666666958;
                  } else {
                    sum += (double)0.02267926956521739909;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.875) ) ) {
                sum += (double)0.2362088427182859052;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1726500019431114197) ) ) {
                  sum += (double)0.1410236424503329977;
                } else {
                  sum += (double)0.04132457864961549404;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5687299966812133789) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.008928775787353516) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.13333320617675781) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07155000045895576477) ) ) {
              sum += (double)0.1502377109691286627;
            } else {
              sum += (double)0.3477517727725087937;
            }
          } else {
            sum += (double)0.4031086860786252668;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4285600036382675171) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5799671411514282227) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6905.6201171875) ) ) {
                sum += (double)0.0965981125381530914;
              } else {
                sum += (double)0.1758896788282752199;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8946.575927734375) ) ) {
                sum += (double)0.08738600808923231711;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.96666622161865234) ) ) {
                  sum += (double)0.04829086126760563646;
                } else {
                  sum += (double)0.01171390000000000105;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07595000043511390686) ) ) {
              sum += (double)0.09823352878491938001;
            } else {
              sum += (double)0.2601701349298388699;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.668449163436889648) ) ) {
          sum += (double)0.5597877688879306923;
        } else {
          sum += (double)0.377146245763721466;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4756494909524917603) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9664483964443206787) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.66211271286010742) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2926619946956634521) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
              sum += (double)0.6289847296969697243;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412595003843307495) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5097493231296539307) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.152281522750854492) ) ) {
                    sum += (double)0.3737324777816121157;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2819685041904449463) ) ) {
                      sum += (double)0.1398777080497504155;
                    } else {
                      sum += (double)0.2425368317405183494;
                    }
                  }
                } else {
                  sum += (double)0.4381746538545591707;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5896.412841796875) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2698989957571029663) ) ) {
                    sum += (double)0.5451021988783385508;
                  } else {
                    sum += (double)0.4896967554353650054;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3120.1031494140625) ) ) {
                    sum += (double)0.3002217514178057156;
                  } else {
                    sum += (double)0.4005037126732916564;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001200000024255132303) ) ) {
              sum += (double)0.660822905986010789;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6198999881744384766) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3129770010709762573) ) ) {
                    sum += (double)0.553999656603118229;
                  } else {
                    sum += (double)0.4936990942703360918;
                  }
                } else {
                  sum += (double)0.4175881930155116439;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2580661028623580933) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8409.23193359375) ) ) {
                    sum += (double)0.4811774329850182497;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7040999829769134521) ) ) {
                      sum += (double)0.6267930083890373982;
                    } else {
                      sum += (double)0.576480106427666672;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5561999976634979248) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1290000006556510925) ) ) {
                      sum += (double)0.4854399015061395817;
                    } else {
                      sum += (double)0.5837812089075614663;
                    }
                  } else {
                    sum += (double)0.4441297631859524309;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3349944949150085449) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.57576227188110352) ) ) {
              sum += (double)0.1089795671764877544;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7018999755382537842) ) ) {
                  sum += (double)0.3930963282701687711;
                } else {
                  sum += (double)0.2217080875159786746;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25223.1259765625) ) ) {
                  sum += (double)0.2124864655611563846;
                } else {
                  sum += (double)0.09081967086100575792;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22919.048828125) ) ) {
              sum += (double)0.2480207255434200564;
            } else {
              sum += (double)0.4637249767098040598;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.638694882392883301) ) ) {
          sum += (double)0.267581739029839949;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.100659728050231934) ) ) {
            sum += (double)0.2250654060622274411;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07564999908208847046) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                sum += (double)0.1802067750320025252;
              } else {
                sum += (double)0.06186490442620710267;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2795750051736831665) ) ) {
                sum += (double)0.01734142018753447381;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.512384235858917236) ) ) {
                  sum += (double)0.03124269090909091023;
                } else {
                  sum += (double)0.09494293266221685845;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2131999954581260681) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6760014891624450684) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.286122560501098633) ) ) {
            sum += (double)0.5414306980942293901;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.205986142158508301) ) ) {
              sum += (double)0.3744442616673731017;
            } else {
              sum += (double)0.1333220858173504164;
            }
          }
        } else {
          sum += (double)0.6853901944029502369;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1072998940944671631) ) ) {
                sum += (double)0.5612537828096513248;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3153.9608154296875) ) ) {
                  sum += (double)0.6126387265496955337;
                } else {
                  sum += (double)0.6818714275528392488;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5843000113964080811) ) ) {
                sum += (double)0.6330477584360268972;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0874499976634979248) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6472510099411010742) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3392.0394287109375) ) ) {
                      sum += (double)0.7426615846153847844;
                    } else {
                      sum += (double)0.7126382326632787478;
                    }
                  } else {
                    sum += (double)0.7863179049289891198;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4370.133056640625) ) ) {
                    sum += (double)0.6284601286682616195;
                  } else {
                    sum += (double)0.7341706877988404267;
                  }
                }
              }
            }
          } else {
            sum += (double)0.4846282125005336727;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1070499978959560394) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7774834632873535156) ) ) {
              sum += (double)0.8874345884773662263;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.721825361251831055) ) ) {
                sum += (double)0.8208908896825395374;
              } else {
                sum += (double)0.8804405411764706368;
              }
            }
          } else {
            sum += (double)0.7590479199237104568;
          }
        }
      }
    }
  }
  return sum;
}
