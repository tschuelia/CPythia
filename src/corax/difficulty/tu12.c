
#include "prediction.h"

void predict_unit12(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4272223701248312189) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)516.3318945478059732) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10498759988977824) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.17005163511187682) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.758828417116743648) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.801515151515151736) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3913.110212643198338) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5469.088584656095009) ) ) {
                  result[0] += -0.0014002261387282154;
                } else {
                  result[0] += -0.0034280563425975446;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4316910000000000469) ) ) {
                  result[0] += 0.003336881516262257;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)274.1091215662196987) ) ) {
                    result[0] += -0.0006550336558130366;
                  } else {
                    result[0] += 0.0012462085387853117;
                  }
                }
              }
            } else {
              result[0] += -0.005500465219501697;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1736.121756519464043) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3828.868654278664962) ) ) {
                result[0] += 0.004707346818523631;
              } else {
                result[0] += -0.0038482028623172027;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3356656060707096656) ) ) {
                result[0] += 0.0033963412436995334;
              } else {
                result[0] += 0.009280145476961326;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3939511344374822532) ) ) {
            result[0] += -0.005533212695242105;
          } else {
            result[0] += -0.0010708641785020677;
          }
        }
      } else {
        result[0] += 0.006875053898406353;
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)562.5854813206698282) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4979840000000000377) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3071499552684361367) ) ) {
            result[0] += -0.008549321905197428;
          } else {
            result[0] += -0.003241748844300012;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6084480000000002109) ) ) {
            result[0] += 0.002343369338774985;
          } else {
            result[0] += -0.001196372481750445;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4131013443293440335) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4058348495350315166) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4019577872618069758) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3986689308614450034) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3958771599324090729) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2725118062635197291) ) ) {
                    result[0] += -2.9035818762328904e-05;
                  } else {
                    result[0] += 0.0009755186873077295;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.301826392972169788) ) ) {
                    result[0] += 0.0002849936476359548;
                  } else {
                    result[0] += -0.009836854645489355;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4463295000000000456) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84952830188679407) ) ) {
                    result[0] += 0.009080666232427677;
                  } else {
                    result[0] += 0.0010943366363907563;
                  }
                } else {
                  result[0] += -0.0044669276687717896;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4005.782514566183636) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.22020202020202362) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.46256684491978817) ) ) {
                    result[0] += -0.002269482067822405;
                  } else {
                    result[0] += 0.008743138402631447;
                  }
                } else {
                  result[0] += -0.0054101975447272506;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.758828417116743648) ) ) {
                  result[0] += 0.0024271010267331553;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3879375000000001017) ) ) {
                    result[0] += -0.006941687798820211;
                  } else {
                    result[0] += -0.015258499125320846;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2572926693332214243) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2215265655616065754) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1674644430706538067) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1604.502677974852759) ) ) {
                    result[0] += 0.003552192416541072;
                  } else {
                    result[0] += -0.0037707433755879553;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5270735000000000836) ) ) {
                    result[0] += 0.006500603518661249;
                  } else {
                    result[0] += -0.0010177858513248945;
                  }
                }
              } else {
                result[0] += -0.0056031482009644565;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2965509996887087385) ) ) {
                result[0] += 0.012826952401219496;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.704793028322441728) ) ) {
                  result[0] += 0.009622606719429364;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.64611005692600187) ) ) {
                    result[0] += -0.007368389588158427;
                  } else {
                    result[0] += 0.003977083347534417;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1503.749159866045829) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1661.374751008663452) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1860.92441007674438) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4273892915217033517) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7224.572194877482616) ) ) {
                    result[0] += 0.000531542711515137;
                  } else {
                    result[0] += -0.0038252224416809527;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4005.782514566183636) ) ) {
                    result[0] += -0.0002953745737737991;
                  } else {
                    result[0] += 0.0005142191990928236;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.301826392972169788) ) ) {
                  result[0] += 0.002572567486193141;
                } else {
                  result[0] += -0.01791527381117456;
                }
              }
            } else {
              result[0] += 0.008213544281678142;
            }
          } else {
            result[0] += -0.004895774284423295;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4332407390653168489) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2703.412105777776105) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3151665000000000716) ) ) {
          result[0] += 0.012242827642253805;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.79261363636364734) ) ) {
            result[0] += 0.0003737766291744842;
          } else {
            result[0] += 0.005005045881626292;
          }
        }
      } else {
        result[0] += -0.003867593063150745;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.785363700564971845) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.695048309178745605) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.332482993197279697) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6618093422766974099) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3363960000000000838) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1041666666666666713) ) ) {
                  result[0] += -0.0014709265793120545;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6046637229270882541) ) ) {
                    result[0] += 0.006011998395072301;
                  } else {
                    result[0] += 2.127532347543782e-05;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)932.260226151358097) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.758828417116743648) ) ) {
                    result[0] += -0.0030907323494231667;
                  } else {
                    result[0] += -0.012997520330253028;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5358140000000001235) ) ) {
                    result[0] += 0.002250144141527325;
                  } else {
                    result[0] += -0.0021792303624495945;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3396.060442531631452) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)609.6317085093859305) ) ) {
                  result[0] += -0.003516324305396674;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1017.140349237611076) ) ) {
                    result[0] += 0.0015296480584454358;
                  } else {
                    result[0] += -0.0007469579156979463;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.037345839847144013) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.624854312354312436) ) ) {
                    result[0] += 0.0037847303163340393;
                  } else {
                    result[0] += -0.00015538390575984613;
                  }
                } else {
                  result[0] += 0.009107351642183409;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1661.374751008663452) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3120.411781551796594) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3651455000000000672) ) ) {
                  result[0] += 0.005615855951253861;
                } else {
                  result[0] += -0.0033067064547649652;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3944445000000000312) ) ) {
                  result[0] += 0.005619196136488762;
                } else {
                  result[0] += 0.015487105259738143;
                }
              }
            } else {
              result[0] += -0.0023261911443986203;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.552403100775196165) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.079059829059831443) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.902832415420928847) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.495352833984574914) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4683879798511265125) ) ) {
                    result[0] += -0.0017872856620468622;
                  } else {
                    result[0] += 0.004908215348832246;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6841668807075014236) ) ) {
                    result[0] += -0.0023913853365920574;
                  } else {
                    result[0] += -0.008090263325205857;
                  }
                }
              } else {
                result[0] += 0.005648270506298491;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6562884567030830008) ) ) {
                result[0] += -0.0026274642442563082;
              } else {
                result[0] += -0.0101477489359968;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.03591337907375802) ) ) {
              result[0] += 0.007471035799151746;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6405977316080030404) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7107537360355972167) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6022642703829196309) ) ) {
                    result[0] += -6.869397748389893e-05;
                  } else {
                    result[0] += 0.0028047997198248614;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4660265000000000657) ) ) {
                    result[0] += 0.0009924785400214776;
                  } else {
                    result[0] += 0.01213338828269596;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.07146908678389963) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2644870000000000831) ) ) {
                    result[0] += 0.0006853506970248879;
                  } else {
                    result[0] += -0.003250125750806557;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                    result[0] += -0.00041157664537669396;
                  } else {
                    result[0] += 0.0012910425494131136;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7961059747699177347) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84952830188679407) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.655630936227951544) ) ) {
              result[0] += -0.0027305093934100575;
            } else {
              result[0] += -0.010805931454839468;
            }
          } else {
            result[0] += 0.0031721472837664844;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6630084695216510449) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8923726800623609234) ) ) {
              result[0] += 0.004349953049892714;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.245196219089809153) ) ) {
                result[0] += -0.002647144293430402;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3913979746246071811) ) ) {
                  result[0] += 0.0010116316320507464;
                } else {
                  result[0] += -0.00013566424338825632;
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-284.2006577138453736) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6405977316080030404) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6307015360864961506) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)156.6560485639346041) ) ) {
                    result[0] += 0.0014142185149070784;
                  } else {
                    result[0] += -0.001835991385101687;
                  }
                } else {
                  result[0] += -0.006943477435530971;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6533511457093607033) ) ) {
                  result[0] += 0.0049238239810164425;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.124288472983382414) ) ) {
                    result[0] += 0.00045669569960632043;
                  } else {
                    result[0] += -0.00041285197112107347;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.678173972291619798) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.319805194805195203) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7290141514373503773) ) ) {
                    result[0] += -0.005912700851376752;
                  } else {
                    result[0] += -0.00025920740818364353;
                  }
                } else {
                  result[0] += 0.00866535190285707;
                }
              } else {
                result[0] += -0.0062429541104396585;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3460500000000000798) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3333500000000000907) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3281000000000000028) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3209000000000000186) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2723500000000000365) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2161500000000000365) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1674644430706538067) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1168500000000000094) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1581026364170406151) ) ) {
                    result[0] += 2.7093549680935585e-05;
                  } else {
                    result[0] += -0.0017767108048889738;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3073.70609235882921) ) ) {
                    result[0] += 0.0004763327055880707;
                  } else {
                    result[0] += -0.001473542213450632;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105614129712844229) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.687500000000000111) ) ) {
                    result[0] += -0.0005177591633359602;
                  } else {
                    result[0] += 0.002106669699153197;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1448500000000000343) ) ) {
                    result[0] += -0.00014954202418585824;
                  } else {
                    result[0] += 0.000575040824096424;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1753821899233260206) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1298667417686050485) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.33549783549783996) ) ) {
                    result[0] += -0.0018481169358582547;
                  } else {
                    result[0] += 0.0013274803079330072;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4397.595081501068307) ) ) {
                    result[0] += 0.007858482289326525;
                  } else {
                    result[0] += 0.0010906875525812977;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4929566561779720746) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.27475490196078578) ) ) {
                    result[0] += -0.012926475923775929;
                  } else {
                    result[0] += -0.0027694915259337057;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2232000000000000095) ) ) {
                    result[0] += -0.0034117549790587134;
                  } else {
                    result[0] += 0.00015330717830207104;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-23399.7511538159124) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.35571587125416571) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.15564516129032668) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7814.107328715305812) ) ) {
                    result[0] += 0.005754129745347597;
                  } else {
                    result[0] += -0.0017191944936733503;
                  }
                } else {
                  result[0] += 0.013857784431259599;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-47466.75880997419154) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-59456.31974871831335) ) ) {
                    result[0] += 0.0001518043496523122;
                  } else {
                    result[0] += 0.00476313122597159;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7344.62256810161216) ) ) {
                    result[0] += 0.00015519275664132215;
                  } else {
                    result[0] += -0.002749895080718572;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2866500000000000714) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.416344086021505966) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7961059747699177347) ) ) {
                    result[0] += -0.0011575746853295602;
                  } else {
                    result[0] += -0.004891635431914827;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.0350985221674911) ) ) {
                    result[0] += 0.006591444797527382;
                  } else {
                    result[0] += 0.0014646522545806416;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1043500352414964832) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3129500000000000615) ) ) {
                    result[0] += 0.004991219890619209;
                  } else {
                    result[0] += -0.0009431437994293755;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12763.40579176873143) ) ) {
                    result[0] += -0.004696026875382153;
                  } else {
                    result[0] += -0.00017397800986303862;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3241500000000000492) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.472136222910218173) ) ) {
              result[0] += 0.001369211964621315;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.14851097178683759) ) ) {
                result[0] += -0.010010885990607902;
              } else {
                result[0] += -1.7860816108538203e-05;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.04557724252491901) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2932.390892308531875) ) ) {
                result[0] += 0.004881964329597668;
              } else {
                result[0] += 0.0016134884527269449;
              }
            } else {
              result[0] += -0.0028791712076735748;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6377.665229350911432) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.368560367816584411) ) ) {
            result[0] += 0.0006030352605307765;
          } else {
            result[0] += -0.002966620509242541;
          }
        } else {
          result[0] += 0.006754553155407003;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.13339920948616779) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.23986928104575256) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.334577114427863975) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.95916666666667005) ) ) {
              result[0] += -0.0019757174483040524;
            } else {
              result[0] += 0.005109035541082898;
            }
          } else {
            result[0] += -0.006650801158930198;
          }
        } else {
          result[0] += 0.006326350433467623;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.82843137254902288) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09225511088934852666) ) ) {
            result[0] += -0.0012762973148495414;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4058348495350315166) ) ) {
              result[0] += -0.011012994817871232;
            } else {
              result[0] += -0.0036839078391060105;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9421.605627117181939) ) ) {
            result[0] += -0.001892708439596749;
          } else {
            result[0] += 0.0015115986173965573;
          }
        }
      }
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1004.56789128042135) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1617.156145847696735) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1900.973197986588957) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3379937171972570709) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2950710236599619618) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8098.539324017688159) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8540.790452769679177) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5027000000000000357) ) ) {
                    result[0] += -0.0001005424045940428;
                  } else {
                    result[0] += -0.010215477413494965;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10239.19055228768593) ) ) {
                    result[0] += 0.004818014321843221;
                  } else {
                    result[0] += -9.85844204261335e-05;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.50925925925926663) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08291002809803414697) ) ) {
                    result[0] += 0.0011167102115424924;
                  } else {
                    result[0] += -0.0026140944891212274;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.446650000000000047) ) ) {
                    result[0] += 0.0010936351528137067;
                  } else {
                    result[0] += 0.008858846769907409;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5735500000000001153) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34941.86410757353588) ) ) {
                  result[0] += 0.000564794429409426;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.150900799608872066) ) ) {
                    result[0] += -0.0030826420775614907;
                  } else {
                    result[0] += -0.00958496026336877;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1924404709589289386) ) ) {
                  result[0] += 0.004661174242986364;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6795500000000002094) ) ) {
                    result[0] += -0.006323088217128384;
                  } else {
                    result[0] += 0.0017137238291239183;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3786500000000000421) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.56776556776557285) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4717290968772051563) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2151073141463651639) ) ) {
                    result[0] += 0.0015381656952795167;
                  } else {
                    result[0] += -0.012128447797698302;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5244371701077347181) ) ) {
                    result[0] += 0.008879614099127409;
                  } else {
                    result[0] += -0.0001424181346816506;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.83870359628770785) ) ) {
                  result[0] += 0.01361661865077147;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4632614272892083274) ) ) {
                    result[0] += 0.005824780024712181;
                  } else {
                    result[0] += -0.0004930257871901372;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4344000000000000639) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.91885964912280826) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4395461641391615326) ) ) {
                    result[0] += 0.004094735656251024;
                  } else {
                    result[0] += -0.00017364541582959048;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.35768025078370158) ) ) {
                    result[0] += -0.00986996404597482;
                  } else {
                    result[0] += -0.002668811606242594;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.347563200274363493) ) ) {
                  result[0] += 0.006840077501196437;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4950500000000000456) ) ) {
                    result[0] += 0.0013091963060306588;
                  } else {
                    result[0] += -1.353226256538674e-05;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4344000000000000639) ) ) {
            result[0] += 0.010682303978537862;
          } else {
            result[0] += -0.0010440512795581592;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1332.881470937780705) ) ) {
          result[0] += -0.005382547976880289;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.08644133644133678) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4797000000000000708) ) ) {
              result[0] += -0.0007061524916140741;
            } else {
              result[0] += 0.0025458043280174474;
            }
          } else {
            result[0] += -0.004224104975170847;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-580.1179637303870322) ) ) {
        result[0] += 0.007361296754700095;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8.579390238601620311) ) ) {
          result[0] += -0.0005447723414314979;
        } else {
          result[0] += 0.0015083811061151046;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01025000000000000216) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9253005000000000813) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3035.449605533378872) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006350000000000000609) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2428.141113281569233) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9464500000000001245) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005650000000000001375) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9175500000000001988) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.080650406504065186) ) ) {
                    result[0] += -0.00215327774727453;
                  } else {
                    result[0] += -1.4470377198679562e-05;
                  }
                } else {
                  result[0] += -0.003743807753553448;
                }
              } else {
                result[0] += 0.0031049645716117636;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3913979746246071811) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3128156565656566301) ) ) {
                  result[0] += -0.0022672621909304554;
                } else {
                  result[0] += 0.0014343342793250947;
                }
              } else {
                result[0] += 0.00616335847330251;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.73128342245989408) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1716.028809615633918) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.54692082111437301) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3161.371852426907026) ) ) {
                    result[0] += -0.0010712176169632671;
                  } else {
                    result[0] += -0.0029738804657179424;
                  }
                } else {
                  result[0] += -0.012040979690291565;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9605000000000001315) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8940500000000001224) ) ) {
                    result[0] += -0.001972691788160131;
                  } else {
                    result[0] += 0.0030491759769674023;
                  }
                } else {
                  result[0] += -0.007144916557939494;
                }
              }
            } else {
              result[0] += 0.004529268586386624;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3649912904309082773) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.098543689320389483) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1360.735594309118596) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2370.398064265408721) ) ) {
                  result[0] += 8.441537713182772e-05;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.611458188829374) ) ) {
                    result[0] += -0.006556956932779669;
                  } else {
                    result[0] += -0.003256811937155267;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009050000000000002487) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.528116531165311986) ) ) {
                    result[0] += -0.0006598698922039954;
                  } else {
                    result[0] += 0.005504062753461042;
                  }
                } else {
                  result[0] += -0.0044855478969426646;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4337075000000000791) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1827.40614998019123) ) ) {
                  result[0] += 0.0004998390069658028;
                } else {
                  result[0] += -0.005057764927921538;
                }
              } else {
                result[0] += -0.011357333664888957;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4800500000000000322) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.20633533276206828) ) ) {
                result[0] += 0.0025452417067954483;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                  result[0] += -0.00604687752602207;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2604.367943201571507) ) ) {
                    result[0] += -0.005020805555283254;
                  } else {
                    result[0] += 0.003046437186356373;
                  }
                }
              }
            } else {
              result[0] += 0.005538538183036715;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3230.323190207400785) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.88483844241923038) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4783005000000000728) ) ) {
              result[0] += 0.013868994468587525;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8835500000000000576) ) ) {
                result[0] += 0.000400808989464584;
              } else {
                result[0] += 0.00283316919665815;
              }
            }
          } else {
            result[0] += -0.0018050095935082523;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8835500000000000576) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.560470779220779924) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.270242914979758275) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07466098337194494727) ) ) {
                    result[0] += 0.0001638814732302491;
                  } else {
                    result[0] += 0.0030299855883324494;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4337.012047408426952) ) ) {
                    result[0] += 0.0025925166372714244;
                  } else {
                    result[0] += -0.004463107299272821;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005650000000000001375) ) ) {
                  result[0] += 0.0015521879365316326;
                } else {
                  result[0] += 0.008169905415453102;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.47809523809523924) ) ) {
                result[0] += -0.004709097179177872;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4011795000000000777) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3135840000000000294) ) ) {
                    result[0] += -0.0004053533090191501;
                  } else {
                    result[0] += 0.0025541779517362626;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4559570000000000567) ) ) {
                    result[0] += -0.00849559917868949;
                  } else {
                    result[0] += -0.0008694312728022764;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06981312588668585339) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05559438449050682629) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9128000000000001668) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.38163074039362721) ) ) {
                    result[0] += 0.00149502584117233;
                  } else {
                    result[0] += -0.0083741189104439;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9247500000000000719) ) ) {
                    result[0] += 0.0024863134636374062;
                  } else {
                    result[0] += -0.0007016967068564561;
                  }
                }
              } else {
                result[0] += 0.0037608869061069804;
              }
            } else {
              result[0] += -0.00662567513556414;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9922500000000001874) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009944440127977462532) ) ) {
          result[0] += 0.005992714579056243;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9175500000000001988) ) ) {
            result[0] += 0.0032963377168839605;
          } else {
            result[0] += -0.0027850872530171726;
          }
        }
      } else {
        result[0] += -0.0009653545054554024;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.010850000000000002) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.319459459459459971) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.476627348186981603) ) ) {
          result[0] += 0.005302276433005688;
        } else {
          result[0] += 0.0026598190463393645;
        }
      } else {
        result[0] += -0.0006345395306179223;
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9253005000000000813) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)44505.14021809133556) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)35399.25657557062368) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.98645000000000016) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01145000000000000011) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3651455000000000672) ) ) {
                  result[0] += -0.0056184157371267805;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1306.189448752128555) ) ) {
                    result[0] += 0.0030432126416513224;
                  } else {
                    result[0] += -0.0031329293405362867;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01225000000000000221) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2364.153332471118119) ) ) {
                    result[0] += 0.0064847671786357735;
                  } else {
                    result[0] += -0.0009500049865267218;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01345000000000000188) ) ) {
                    result[0] += -0.0012031841691751268;
                  } else {
                    result[0] += 2.5374549121498226e-05;
                  }
                }
              }
            } else {
              result[0] += 0.002949366441540051;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04265000000000000041) ) ) {
              result[0] += 0.0030516957663996123;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8671500000000000874) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3151665000000000716) ) ) {
                  result[0] += 0.0006175480905336547;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4391930000000000556) ) ) {
                    result[0] += -0.0036575556703431125;
                  } else {
                    result[0] += -0.0009624963662260957;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9207000000000000739) ) ) {
                  result[0] += -0.006106800744235156;
                } else {
                  result[0] += -0.0011207007307145764;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)158.6222527472527872) ) ) {
            result[0] += 0.0063887849854832165;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.10363247863248048) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3944445000000000312) ) ) {
                result[0] += 0.007244059072686441;
              } else {
                result[0] += 3.931267254074663e-05;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)64.72098214285715301) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8642000000000001902) ) ) {
                  result[0] += -0.0067634868908943244;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03615663516913097952) ) ) {
                    result[0] += -0.0017613126601493398;
                  } else {
                    result[0] += 0.0010123761469719985;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3507325000000000581) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7193500000000000449) ) ) {
                    result[0] += -0.0009613286456466933;
                  } else {
                    result[0] += 0.0012822963117361068;
                  }
                } else {
                  result[0] += 0.004460576028069099;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08183313046454290807) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2400.030403748101435) ) ) {
            result[0] += 0.002804939256005911;
          } else {
            result[0] += -0.0042097838201806525;
          }
        } else {
          result[0] += -0.004952988301865993;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.150900799608872066) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1412378932181409807) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1198.092384839380657) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6418835000000001623) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007150000000000000973) ) ) {
            result[0] += -0.0020637723928684103;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8541666666666668517) ) ) {
              result[0] += -0.0009237252562518421;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.22653958944281882) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.881080907396698088) ) ) {
                  result[0] += 0.006122302001732376;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1733500000000000318) ) ) {
                    result[0] += 0.00153259503454456;
                  } else {
                    result[0] += 0.004621947194011997;
                  }
                }
              } else {
                result[0] += 0.0066439535320971;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.03591337907375802) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7021555000000000435) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)977.7693481096513324) ) ) {
                result[0] += -0.004099299562277362;
              } else {
                result[0] += -0.0013125054689743856;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7354420558372239958) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.3913979746246071811) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004150000000000000043) ) ) {
                    result[0] += 0.0017597679919245095;
                  } else {
                    result[0] += -0.0023722219536269746;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01755000000000000657) ) ) {
                    result[0] += -0.004200676163128051;
                  } else {
                    result[0] += -0.000472607601310174;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05205000000000000598) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02825000000000000427) ) ) {
                    result[0] += 0.0015424344034603175;
                  } else {
                    result[0] += 0.003861429824647067;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.326140544518028541) ) ) {
                    result[0] += -0.0025377039352115476;
                  } else {
                    result[0] += 0.001287895077998665;
                  }
                }
              }
            }
          } else {
            result[0] += 0.003701421477256628;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355721953891439735) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1298667417686050485) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4273892915217033517) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3986689308614450034) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3868846981858549694) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.11758225232954507) ) ) {
                    result[0] += -0.0001222184494265011;
                  } else {
                    result[0] += 0.0009273450425387112;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.33602150537634579) ) ) {
                    result[0] += -0.0022772177165909487;
                  } else {
                    result[0] += -0.006220681938973098;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.59605263157894939) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1058592616225647598) ) ) {
                    result[0] += 0.0014061207389875388;
                  } else {
                    result[0] += -0.001178747148895704;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08541787161889451141) ) ) {
                    result[0] += 0.001564414681150011;
                  } else {
                    result[0] += 0.01337611714724384;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1207048891313476507) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0590500000000000122) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1895.084169001929013) ) ) {
                    result[0] += 0.004474259964125168;
                  } else {
                    result[0] += -0.00013174251230280078;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2490000000000000269) ) ) {
                    result[0] += -0.0026750508871864463;
                  } else {
                    result[0] += 0.0007659062826627359;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4664235563324645173) ) ) {
                  result[0] += -0.0115040557217521;
                } else {
                  result[0] += -0.002328265932355066;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.43921568627451535) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1508500000000000119) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2163.442343789042752) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.448321891685737661) ) ) {
                    result[0] += -0.003263324292825998;
                  } else {
                    result[0] += 0.007459642039984209;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3136152341452576597) ) ) {
                    result[0] += -0.0072869917102539586;
                  } else {
                    result[0] += 0.0017834721270294296;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3590000000000000413) ) ) {
                  result[0] += -0.013669668752682768;
                } else {
                  result[0] += -0.0012057439984862878;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3944445000000000312) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1317028901634673399) ) ) {
                  result[0] += 0.003986593885449985;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                    result[0] += 0.0014686023549542395;
                  } else {
                    result[0] += -0.0034667006539631025;
                  }
                }
              } else {
                result[0] += 0.010057221755829928;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1369847229079423634) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2903305000000001024) ) ) {
              result[0] += -0.003470578295131865;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4524.630590094714535) ) ) {
                result[0] += 0.011534854883258122;
              } else {
                result[0] += 0.002240925895544605;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9640.380337645368854) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02475000000000000464) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4540995000000000448) ) ) {
                  result[0] += 0.008678003430058584;
                } else {
                  result[0] += -0.0007246739161227654;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4391930000000000556) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3449290000000000411) ) ) {
                    result[0] += -0.0003546250726684045;
                  } else {
                    result[0] += -0.012563521664718061;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.549626000000000059) ) ) {
                    result[0] += 0.005301065434241409;
                  } else {
                    result[0] += -0.002973872076199318;
                  }
                }
              }
            } else {
              result[0] += 0.00583409552603969;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1094.551388389202884) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1474839081354617498) ) ) {
          result[0] += -0.009082660120253366;
        } else {
          result[0] += 0.0005209798713629269;
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3902.354245376167455) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2458.081396306326042) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09725000000000001699) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124740124740388) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1444.206459403876352) ) ) {
                  result[0] += 0.0012752706636652343;
                } else {
                  result[0] += -0.005094789418154326;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4169520000000000448) ) ) {
                  result[0] += -0.0001804742456263135;
                } else {
                  result[0] += 0.006514968086032369;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4346740216305434168) ) ) {
                result[0] += -0.009934387780110021;
              } else {
                result[0] += 0.00353896281069421;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2904.128485139186523) ) ) {
              result[0] += 0.011043809916281849;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4011795000000000777) ) ) {
                result[0] += 0.005563172368917918;
              } else {
                result[0] += -0.005730872323313576;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5736.278277745757805) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
              result[0] += -0.0034913567225167215;
            } else {
              result[0] += -0.009968563688683004;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.14135254988913815) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2651500000000000523) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.95912400047738622) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2214874552651933948) ) ) {
                    result[0] += 0.00017467504056440137;
                  } else {
                    result[0] += 0.0039523309636628826;
                  }
                } else {
                  result[0] += 0.00588761922233896;
                }
              } else {
                result[0] += -0.003555117712939227;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3977500000000001035) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.57027972027972496) ) ) {
                  result[0] += -0.008448756166914321;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2065670000000000284) ) ) {
                    result[0] += -0.0002685391866374592;
                  } else {
                    result[0] += -0.0039034228729985217;
                  }
                }
              } else {
                result[0] += 0.004933978386842265;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105614129712844229) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2520.213847381996857) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09585000000000000464) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4912475000000000591) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1614813989374807301) ) ) {
              result[0] += -0.00623561840851582;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8541666666666668517) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2551729739349475334) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3125000000000000555) ) ) {
                    result[0] += -0.0006982000155430873;
                  } else {
                    result[0] += 0.0027146271449816034;
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3541666666666666852) ) ) {
                    result[0] += -0.0006796372367799584;
                  } else {
                    result[0] += -0.004381164273125158;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01995000000000000592) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2754413179479652807) ) ) {
                    result[0] += 0.002296551188380845;
                  } else {
                    result[0] += -0.0024646445186041126;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1541.330699544382924) ) ) {
                    result[0] += 0.003712545293187872;
                  } else {
                    result[0] += 0.010546832788869838;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1753821899233260206) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2685307668603297282) ) ) {
                result[0] += -0.00014580518240252987;
              } else {
                result[0] += 0.004506796212191901;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007850000000000002809) ) ) {
                result[0] += 0.00211702380694448;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.222539682539683703) ) ) {
                  result[0] += -0.002109172743710377;
                } else {
                  result[0] += -0.0126137476221964;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.33549783549783996) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.3783980078854583) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.222539682539683703) ) ) {
                result[0] += 0.0021067076846264907;
              } else {
                result[0] += 0.006366204185499286;
              }
            } else {
              result[0] += 0.016501745931301052;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.92403846153846558) ) ) {
              result[0] += 0.0019284401570500867;
            } else {
              result[0] += -0.002026351235302247;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.33549783549783996) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02075000000000000108) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4094415000000000693) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.189832689832690527) ) ) {
                result[0] += -0.0030441277320718764;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.88483844241923038) ) ) {
                  result[0] += 0.012356978615065831;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.641839080459782) ) ) {
                    result[0] += -0.003961121591369272;
                  } else {
                    result[0] += 0.0051438070679412735;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4886700000000000488) ) ) {
                result[0] += -0.00709944417952511;
              } else {
                result[0] += -0.00019463605883952373;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4427690000000000237) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3600110000000000809) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2715324643853566089) ) ) {
                    result[0] += -0.003052444710477417;
                  } else {
                    result[0] += 0.00918299213353914;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1846000000000000141) ) ) {
                    result[0] += -0.01111976772232427;
                  } else {
                    result[0] += -0.0013630617981096552;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0756500000000000089) ) ) {
                  result[0] += -0.01641541852841083;
                } else {
                  result[0] += -0.005149366240476394;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.13339920948616779) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.22653958944281882) ) ) {
                  result[0] += 0.0006702377573147666;
                } else {
                  result[0] += -0.0030248566704526533;
                }
              } else {
                result[0] += 0.007225926071021907;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.79217479674796998) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.33573141486810876) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601965045881026173) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.158823480849580867) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03665000000000000896) ) ) {
                    result[0] += 0.0008452220829505564;
                  } else {
                    result[0] += -0.0020708342242399405;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1704818006003851749) ) ) {
                    result[0] += 0.011920175567583527;
                  } else {
                    result[0] += 0.0028698499327844042;
                  }
                }
              } else {
                result[0] += -0.0036343054661428513;
              }
            } else {
              result[0] += 0.012902749225575156;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2897740295086664308) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.18333333333335133) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5203.159600494148435) ) ) {
                  result[0] += -0.0008856544920850896;
                } else {
                  result[0] += -0.006919924786488554;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.10363247863248048) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.02827380952381375) ) ) {
                    result[0] += 0.0005871029122534302;
                  } else {
                    result[0] += 0.0062799605490087935;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3306920000000000415) ) ) {
                    result[0] += -8.200627795660321e-05;
                  } else {
                    result[0] += -0.0029555919966322798;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2950710236599619618) ) ) {
                result[0] += 0.009739511771498947;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2775211666417710665) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2977460000000000107) ) ) {
                    result[0] += 0.00031758810855446505;
                  } else {
                    result[0] += -0.005375401735683087;
                  }
                } else {
                  result[0] += 0.006412029400534043;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3188465325964183195) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3162745180867091999) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2022010309504783943) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4189740000000000686) ) ) {
              result[0] += 0.01094405881512541;
            } else {
              result[0] += -0.0020939468952011903;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3489680000000000559) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2598190000000000777) ) ) {
                result[0] += -0.0031208664171814334;
              } else {
                result[0] += -0.007423926794080268;
              }
            } else {
              result[0] += -0.0014108592219066731;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4722.925910272198053) ) ) {
            result[0] += -0.011175954161251044;
          } else {
            result[0] += -0.001705812187012017;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1563924358960289418) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3115.942419799886466) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.0121430674124241) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346500000000000197) ) ) {
                result[0] += -0.0027385070436041136;
              } else {
                result[0] += 0.002602004215957743;
              }
            } else {
              result[0] += 0.012812615329664177;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.0225430597771048) ) ) {
              result[0] += -0.006353224075392383;
            } else {
              result[0] += -1.6121692638227735e-05;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1614813989374807301) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1248500000000000165) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.334577114427863975) ) ) {
                result[0] += -0.0022357649526906047;
              } else {
                result[0] += -0.010637869662301552;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2651500000000000523) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                  result[0] += 0.0012450101485236005;
                } else {
                  result[0] += 0.008592393376020852;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5901.553629380664461) ) ) {
                  result[0] += -0.006783657219224142;
                } else {
                  result[0] += -0.0007099894722135159;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1852970055032208962) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1487500000000000211) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5266.471447463914046) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1827.40614998019123) ) ) {
                    result[0] += -0.0019936778454556973;
                  } else {
                    result[0] += 0.0027050967292744006;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7814.107328715305812) ) ) {
                    result[0] += -0.00757410389339662;
                  } else {
                    result[0] += -0.0011066495654217421;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1893500000000000461) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1647500000000000353) ) ) {
                    result[0] += 0.0013121655353061385;
                  } else {
                    result[0] += 0.010282268574509756;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4208705000000000918) ) ) {
                    result[0] += -0.0015558998172419236;
                  } else {
                    result[0] += 0.00317140952898782;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869560366706151944) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3653893359693760057) ) ) {
                  result[0] += -0.00767835313681603;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1762.254189155988797) ) ) {
                    result[0] += -0.0030151328999876836;
                  } else {
                    result[0] += -0.00016129242876494008;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3566416580975863004) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4685515000000000652) ) ) {
                    result[0] += -0.0002293139885215907;
                  } else {
                    result[0] += 0.003937547519090195;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3630166700826673032) ) ) {
                    result[0] += -0.0026219656498746406;
                  } else {
                    result[0] += -3.1959448189056225e-05;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4447100000000001052) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4316910000000000469) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05533921706643565169) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8541666666666668517) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.167306000000000038) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1173820000000000141) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9551500000000000545) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06065038394431352536) ) ) {
                  result[0] += -0.0023003220044182115;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1458333333333333426) ) ) {
                    result[0] += -0.00077525865540769;
                  } else {
                    result[0] += 0.0009563057420992767;
                  }
                }
              } else {
                result[0] += 0.00044720055956130596;
              }
            } else {
              result[0] += 0.003615427858280769;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4248.335231464433491) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)877986.081390736741) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.562500000000000111) ) ) {
                  result[0] += -0.00426698339115127;
                } else {
                  result[0] += -0.002230895539437507;
                }
              } else {
                result[0] += -0.0009462379659765154;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5203.159600494148435) ) ) {
                result[0] += -0.0008169104529743558;
              } else {
                result[0] += 0.0021130450046530484;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05152776681168800416) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9508000000000000895) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9389500000000000624) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03953087405495988443) ) ) {
                  result[0] += -0.002631287826564979;
                } else {
                  result[0] += 0.001109108967918238;
                }
              } else {
                result[0] += 0.0115527517965118;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01404130762682907936) ) ) {
                result[0] += 0.004443697910395337;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03324520994880592051) ) ) {
                  result[0] += -0.0005151177025581527;
                } else {
                  result[0] += -0.004530144145680919;
                }
              }
            }
          } else {
            result[0] += 0.008928136362161573;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9207000000000000739) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1233406754772393699) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.89545454545454817) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1195.496933691951881) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3325265000000000581) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.8738636363636445) ) ) {
                    result[0] += 0.004007581844675123;
                  } else {
                    result[0] += -0.001251072364739602;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4159.460652026083153) ) ) {
                    result[0] += 0.009856275226806287;
                  } else {
                    result[0] += 0.0023416931189384855;
                  }
                }
              } else {
                result[0] += -0.0003814543538975801;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)83.67261904761906521) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4005.782514566183636) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05290970539545401113) ) ) {
                    result[0] += -0.010215751878422854;
                  } else {
                    result[0] += -0.002373030742326829;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.91806020066889715) ) ) {
                    result[0] += -0.0030740750269931893;
                  } else {
                    result[0] += 0.0010226468531475208;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9092500000000002247) ) ) {
                    result[0] += 0.00020559194982868362;
                  } else {
                    result[0] += -0.004112116283044948;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15791.59976423629087) ) ) {
                    result[0] += -0.004718992114191736;
                  } else {
                    result[0] += 0.007009586754052472;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8363500000000000378) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06334929332387927159) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34941.86410757353588) ) ) {
                  result[0] += -0.0035158707113973216;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601965045881026173) ) ) {
                    result[0] += 0.00241301873607343;
                  } else {
                    result[0] += 0.008021015589562005;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06981312588668585339) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3175845000000001028) ) ) {
                    result[0] += 0.0030883299956818936;
                  } else {
                    result[0] += -0.008357748366659421;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07335542033840654341) ) ) {
                    result[0] += 0.004726481957075089;
                  } else {
                    result[0] += 1.3942842031388876e-05;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3363960000000000838) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.201938665738694012) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05701861194901656354) ) ) {
                    result[0] += -0.003957271072462853;
                  } else {
                    result[0] += 0.00014946104632164293;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.238734978718284252) ) ) {
                    result[0] += 0.010747894293219002;
                  } else {
                    result[0] += -0.0019146103579872691;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8488500000000001044) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1990818593712635198) ) ) {
                    result[0] += -0.013749801868966965;
                  } else {
                    result[0] += -0.004381657138162055;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4913.352940143695378) ) ) {
                    result[0] += -0.005371643772152162;
                  } else {
                    result[0] += 0.0007657930940159628;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9389500000000000624) ) ) {
              result[0] += -0.0007155780277635708;
            } else {
              result[0] += 0.002777330648077832;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3558.496385149145226) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07464056384323641824) ) ) {
                result[0] += -0.005724149498690678;
              } else {
                result[0] += 0.002198147922208675;
              }
            } else {
              result[0] += -0.009481650209419353;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.201938665738694012) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1233406754772393699) ) ) {
          result[0] += -0.002816886828840117;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.8369719981015713) ) ) {
            result[0] += -0.0002574158906747914;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4564.612143258819742) ) ) {
              result[0] += 0.006005434084224664;
            } else {
              result[0] += 0.015860450853787164;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7619500000000001272) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5699500000000000677) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5589555053734368562) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5297127797323987197) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4833440790887599814) ) ) {
                  result[0] += -0.007082833739018514;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4972.713039862052938) ) ) {
                    result[0] += 0.0022315056408506494;
                  } else {
                    result[0] += 0.005662062410468995;
                  }
                }
              } else {
                result[0] += -0.011003660123619063;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.24613422604814517) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.774419091590062) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3649912904309082773) ) ) {
                    result[0] += 0.002542487755403176;
                  } else {
                    result[0] += -0.006256719600515227;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)429.1171918924630404) ) ) {
                    result[0] += -0.0013829941247534526;
                  } else {
                    result[0] += 0.007888028044686343;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.86337543053961596) ) ) {
                  result[0] += 0.010742882940218596;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4375050000000000883) ) ) {
                    result[0] += 0.0006977219224372743;
                  } else {
                    result[0] += -0.003474831895868456;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4803413391557496692) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4423005565862709321) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6872500000000001386) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3745321869304507056) ) ) {
                    result[0] += 0.01630404918486801;
                  } else {
                    result[0] += 0.004237461444019752;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7434000000000000608) ) ) {
                    result[0] += -0.0028050055795479103;
                  } else {
                    result[0] += 0.00718455234082894;
                  }
                }
              } else {
                result[0] += -0.0027032222667205093;
              }
            } else {
              result[0] += 0.011479036937284356;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1015718621544924455) ) ) {
            result[0] += 1.0205090487643472e-05;
          } else {
            result[0] += -0.013889475544746992;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4540995000000000448) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.90384615384615508) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4743618828237703422) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.09618603538976878) ) ) {
            result[0] += 0.0023337366599430337;
          } else {
            result[0] += 0.008468089299392769;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1644500000000000128) ) ) {
            result[0] += 0.0017665894045243978;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2637.868029878028665) ) ) {
              result[0] += 0.0010509824093210137;
            } else {
              result[0] += -0.004182150460770705;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.22653958944281882) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.552093295775335946) ) ) {
            result[0] += -0.01443957573422182;
          } else {
            result[0] += -0.0009316957269686984;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4274500000000000521) ) ) {
            result[0] += -0.007368266745208389;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4482755000000000489) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.27991452991453158) ) ) {
                result[0] += -0.004083378460357604;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1427700348432055788) ) ) {
                  result[0] += -0.000766061173513488;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6267.378546571134393) ) ) {
                    result[0] += 0.009682329988095076;
                  } else {
                    result[0] += 0.004392770101767696;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2666.433655949607328) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2215265655616065754) ) ) {
                  result[0] += 0.0006318824915983662;
                } else {
                  result[0] += 0.008884946035915038;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3428.95033302068623) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1753821899233260206) ) ) {
                    result[0] += 0.0015880813701028248;
                  } else {
                    result[0] += -0.005795660072299613;
                  }
                } else {
                  result[0] += -0.016611857427721272;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4559570000000000567) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6588500000000000467) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.035538893813282) ) ) {
            result[0] += 0.009312214659435427;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2724.737518907181311) ) ) {
              result[0] += -0.001146116785760647;
            } else {
              result[0] += 0.005899196064194649;
            }
          }
        } else {
          result[0] += -0.002212035132400187;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2873.70979119194044) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4470.737490760877336) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2551729739349475334) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8511000000000000787) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.02889784946237128) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5896685000000000398) ) ) {
                    result[0] += -0.0022641927591185106;
                  } else {
                    result[0] += 0.002514533711375487;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.728150000000000075) ) ) {
                    result[0] += 0.0007836662557558397;
                  } else {
                    result[0] += 0.010815781012964284;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1879495013645960666) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3953.814167494189405) ) ) {
                    result[0] += 0.001183435564959307;
                  } else {
                    result[0] += 0.006214485803883737;
                  }
                } else {
                  result[0] += -0.006341060603420289;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2803536647300774454) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1145938035574793623) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08950345372645202024) ) ) {
                    result[0] += -0.002256597898599425;
                  } else {
                    result[0] += 0.007701993624665283;
                  }
                } else {
                  result[0] += -0.013518882182497423;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5802690000000000348) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3303.87952810574825) ) ) {
                    result[0] += 0.0005266896408214855;
                  } else {
                    result[0] += 0.004111330704547578;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3428.95033302068623) ) ) {
                    result[0] += 0.00024063765880321628;
                  } else {
                    result[0] += -0.002215610998069322;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4913.352940143695378) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601965045881026173) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.79423076923077573) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5633670000000000622) ) ) {
                    result[0] += 0.00014688454102313963;
                  } else {
                    result[0] += -0.002364574739520127;
                  }
                } else {
                  result[0] += 0.004632156059741304;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.126292728868830112) ) ) {
                  result[0] += -0.01022597028829698;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11761.67842346677571) ) ) {
                    result[0] += -0.006694347173374238;
                  } else {
                    result[0] += 0.00017191731145541463;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5423.979011800238368) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.61404815090593701) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5102655000000001495) ) ) {
                    result[0] += -0.006994046790019789;
                  } else {
                    result[0] += 0.0016451027898015064;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5309975000000001222) ) ) {
                    result[0] += 0.010743046099554102;
                  } else {
                    result[0] += 0.0038275302166712803;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5330.906933113767991) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4553150571621396026) ) ) {
                    result[0] += 0.00024353008290261974;
                  } else {
                    result[0] += -0.0012389312577628896;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1687573550250007492) ) ) {
                    result[0] += -0.0006921869273710598;
                  } else {
                    result[0] += -0.0099528990807559;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2670.194409694011938) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5701575000000000948) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5114794848757114876) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6615500000000001934) ) ) {
                  result[0] += 0.006174743715878157;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5164445000000000841) ) ) {
                    result[0] += -0.012105511007457576;
                  } else {
                    result[0] += -0.0015753127168070186;
                  }
                }
              } else {
                result[0] += -0.011701684430303543;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2715324643853566089) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.95916666666667005) ) ) {
                  result[0] += -0.000997230792497121;
                } else {
                  result[0] += 0.006442507754436404;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7356605000000001615) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6643750000000000488) ) ) {
                    result[0] += -0.00043605601970615743;
                  } else {
                    result[0] += -0.006218528727170946;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1000322996839296819) ) ) {
                    result[0] += -0.001263462775779933;
                  } else {
                    result[0] += 0.003080444063429306;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.812500000000000111) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7291666666666668517) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-836.0042144475063424) ) ) {
                    result[0] += -0.0028459477656872984;
                  } else {
                    result[0] += 6.442888879422318e-06;
                  }
                } else {
                  result[0] += 0.002454471760824704;
                }
              } else {
                result[0] += -0.0048505259308480935;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.02251840727203791) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)404.5624623590170472) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.344799119427628753) ) ) {
                    result[0] += 0.00016665207954683826;
                  } else {
                    result[0] += 0.0060158365851224645;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2702195988975289453) ) ) {
                    result[0] += -4.4352398447161676e-05;
                  } else {
                    result[0] += -0.002026725359327643;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1245500000000000079) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5564040000000001207) ) ) {
                    result[0] += -0.0021489654710689166;
                  } else {
                    result[0] += 0.00047526820814182397;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.708030962747944415) ) ) {
                    result[0] += -0.0011522976237955428;
                  } else {
                    result[0] += -0.00859304111936799;
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
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5826500000000001123) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5776500000000001078) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5749500000000000721) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2921808083424245472) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.00735294117647456) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.168079096045198995) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.468769816106531678) ) ) {
                  result[0] += -0.0027208711248089238;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1879495013645960666) ) ) {
                    result[0] += -0.00040882618702725907;
                  } else {
                    result[0] += 0.001496910394761424;
                  }
                }
              } else {
                result[0] += -0.007428969458664112;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2156942646659316121) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03320000000000000728) ) ) {
                  result[0] += -0.0033009931625503017;
                } else {
                  result[0] += 0.000366194809838717;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)104.7575757575757649) ) ) {
                  result[0] += -0.0004438383250424253;
                } else {
                  result[0] += 0.005669892355248152;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105614129712844229) ) ) {
              result[0] += 0.006461826943690537;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5728500000000000814) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5674000000000000155) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5621000000000001551) ) ) {
                    result[0] += 6.75590838558269e-05;
                  } else {
                    result[0] += -0.002266006872054753;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4337075000000000791) ) ) {
                    result[0] += 0.003956056195284058;
                  } else {
                    result[0] += -0.0024017273608424898;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4316910000000000469) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.460458988432354499) ) ) {
                    result[0] += -0.008357557783249467;
                  } else {
                    result[0] += -0.001682588546273003;
                  }
                } else {
                  result[0] += 0.0011845896091622584;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.69425511197663425) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2192000000000000337) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4212533942858654457) ) ) {
                result[0] += -0.0008073776576866183;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.90384615384615508) ) ) {
                  result[0] += 0.0023506855806881884;
                } else {
                  result[0] += 0.00909031925929025;
                }
              }
            } else {
              result[0] += -0.007060493845179127;
            }
          } else {
            result[0] += 0.011125001144614843;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5031527682228830178) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4107361159622773816) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3229585000000000927) ) ) {
              result[0] += -0.0038672403163862164;
            } else {
              result[0] += 0.008218709722453806;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.025350000000000001) ) ) {
              result[0] += -0.007241438264225647;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.46385017421602903) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.33589743589743826) ) ) {
                  result[0] += -0.0028716115829141107;
                } else {
                  result[0] += 0.005824897499959394;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4776103313496700697) ) ) {
                  result[0] += -0.0039776556828816185;
                } else {
                  result[0] += -0.0019627594874739454;
                }
              }
            }
          }
        } else {
          result[0] += -0.00858326396079139;
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3430250000000000798) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.902832415420928847) ) ) {
          result[0] += 0.005947071230030827;
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3306920000000000415) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1630.741360602702343) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2191665000000000141) ) ) {
                result[0] += 0.0008760171673467425;
              } else {
                result[0] += 0.003110120373196383;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7171.422813562979172) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4019577872618069758) ) ) {
                  result[0] += 0.0010391311776700297;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1448500000000000343) ) ) {
                    result[0] += -0.009611120383718485;
                  } else {
                    result[0] += -0.003056377421382353;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9640.380337645368854) ) ) {
                  result[0] += 0.005138525109001026;
                } else {
                  result[0] += -0.002278901934834575;
                }
              }
            }
          } else {
            result[0] += -0.009463639132789085;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84952830188679407) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.82683658170914853) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.41754258789416632) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04995000000000000828) ) ) {
                result[0] += 0.0043520225784252865;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500000000000503) ) ) {
                  result[0] += -0.004259932502732867;
                } else {
                  result[0] += 0.0017710254558643143;
                }
              }
            } else {
              result[0] += 0.010122254019585674;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.5141620771046469) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2192000000000000337) ) ) {
                result[0] += -0.012863854611763552;
              } else {
                result[0] += -7.080668302434918e-05;
              }
            } else {
              result[0] += 0.004768407539150746;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.63592622293504775) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1647500000000000353) ) ) {
              result[0] += 0.005959788042566769;
            } else {
              result[0] += 0.015855040697603913;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.85584415584416718) ) ) {
              result[0] += -0.0045598761230630286;
            } else {
              result[0] += 0.001860601626860471;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6111500000000000821) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.03235294117647136) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.52606951871658048) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4463295000000000456) ) ) {
            result[0] += -0.004707528570721075;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1548000000000000209) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.969280660377358938) ) ) {
                result[0] += 0.0016258952609999426;
              } else {
                result[0] += 0.004062919380001457;
              }
            } else {
              result[0] += -0.002720047717665915;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.912662090007628102) ) ) {
            result[0] += -0.014059224931618207;
          } else {
            result[0] += -0.004903889208622946;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.96720430107527378) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4540995000000000448) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6038500000000001089) ) ) {
              result[0] += 0.010425118100932483;
            } else {
              result[0] += 0.003751101749158664;
            }
          } else {
            result[0] += 0.0011355580798773014;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3817900000000000182) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2835000000000000298) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6089500000000001023) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.35238095238095468) ) ) {
                  result[0] += 0.0047605309870421995;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.347563200274363493) ) ) {
                    result[0] += 0.002374253963328309;
                  } else {
                    result[0] += -0.003309585678106019;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.5128949065119297) ) ) {
                  result[0] += -0.005764007981773334;
                } else {
                  result[0] += -0.0022283687854075247;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3685500000000000442) ) ) {
                result[0] += 0.00663305976155068;
              } else {
                result[0] += -5.56845361861158e-05;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4212533942858654457) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6038500000000001089) ) ) {
                result[0] += -0.003371390289946192;
              } else {
                result[0] += 0.007774204142922214;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3685500000000000442) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5486.447841096402954) ) ) {
                  result[0] += -0.01142504133723746;
                } else {
                  result[0] += -0.004833942531123651;
                }
              } else {
                result[0] += -0.0023183140108844857;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6133500000000001728) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.12245989304813776) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.168079096045198995) ) ) {
            result[0] += 0.003943697245102792;
          } else {
            result[0] += -0.007023744569296636;
          }
        } else {
          result[0] += 0.012686476222273308;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6154500000000000526) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.608901515151517359) ) ) {
            result[0] += 0.0035791491840778665;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.54474097331240401) ) ) {
              result[0] += -0.008448288841601165;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)62.83278388278389315) ) ) {
                result[0] += 0.001495718594108835;
              } else {
                result[0] += -0.003287340904634717;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.881080907396698088) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.180717299578059709) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08390237751272640321) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05152776681168800416) ) ) {
                  result[0] += 0.00015078118162279588;
                } else {
                  result[0] += 0.003665547074353103;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.075647075647077067) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1267725882486329947) ) ) {
                    result[0] += -0.004256469077173919;
                  } else {
                    result[0] += -0.0008813101187037298;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5673840000000001105) ) ) {
                    result[0] += -0.0020946912209523676;
                  } else {
                    result[0] += 0.0011267579771407307;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3929701013096121298) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5739275000000000349) ) ) {
                  result[0] += -0.007300410217694854;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2400.030403748101435) ) ) {
                    result[0] += -0.002812187129396631;
                  } else {
                    result[0] += 0.0005234858714580968;
                  }
                }
              } else {
                result[0] += 0.0015620651635579986;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3902.354245376167455) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3688.285112543364903) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4797000000000000708) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4959959919839679876) ) ) {
                    result[0] += 4.4428181997855814e-05;
                  } else {
                    result[0] += 0.002576852934612362;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4849465000000000026) ) ) {
                    result[0] += 0.01097324311646253;
                  } else {
                    result[0] += -0.0007362216975699079;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.801734104046245122) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.079059829059831443) ) ) {
                    result[0] += 0.0014509598254699968;
                  } else {
                    result[0] += -0.009072845282792806;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4035667457111984935) ) ) {
                    result[0] += 0.007836272639461492;
                  } else {
                    result[0] += -0.0009212512694215408;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5357.523801430734238) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5138.591951859688379) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5647000000000000908) ) ) {
                    result[0] += -0.0004276460573472326;
                  } else {
                    result[0] += 0.006457965656387676;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01425000000000000051) ) ) {
                    result[0] += 0.005553305864644861;
                  } else {
                    result[0] += -0.004703887772763498;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6291500000000000981) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5998.397359475912708) ) ) {
                    result[0] += 0.010838814091814501;
                  } else {
                    result[0] += 0.0005401249933973699;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3680724160323877725) ) ) {
                    result[0] += 4.4028043941181076e-05;
                  } else {
                    result[0] += -0.0009151951142260672;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1935119961629459817) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1899971049495448316) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.338266500000000081) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2977460000000000107) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08183313046454290807) ) ) {
              result[0] += 0.004661930787486237;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09225511088934852666) ) ) {
                result[0] += -0.005152996867687058;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2247630000000000183) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2004115000000000202) ) ) {
                    result[0] += 0.0002784454855638986;
                  } else {
                    result[0] += -0.002392269417626071;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.24542300000000003) ) ) {
                    result[0] += 0.008983570422634743;
                  } else {
                    result[0] += -0.000613105325512918;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1233406754772393699) ) ) {
              result[0] += 0.00452509385169359;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3292335000000000678) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1747936067630936063) ) ) {
                  result[0] += -0.012372561038039137;
                } else {
                  result[0] += -0.0027155691736835386;
                }
              } else {
                result[0] += -0.000623015447417027;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.695048309178745605) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.88483844241923038) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.452251500000000084) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.79393939393940016) ) ) {
                  result[0] += 0.00018515763153158482;
                } else {
                  result[0] += 0.008146021113595473;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1848141088226633866) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1801279406462452659) ) ) {
                    result[0] += 0.000706259100211873;
                  } else {
                    result[0] += -0.0033478808459727707;
                  }
                } else {
                  result[0] += 0.004366699248818022;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3347.459141515674219) ) ) {
                result[0] += 0.001369342435614118;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1071921241514602469) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8089500000000001689) ) ) {
                    result[0] += -0.004483030875607258;
                  } else {
                    result[0] += 0.0036657227010691877;
                  }
                } else {
                  result[0] += -0.008398038588761573;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)14930.12114189812746) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4579.929613711167804) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3152.729601350707071) ) ) {
                  result[0] += 0.00654836700766873;
                } else {
                  result[0] += -0.0034285827858225597;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7972500000000001252) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1525564339979418871) ) ) {
                    result[0] += -0.000505104940628624;
                  } else {
                    result[0] += 0.00644339755136338;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5358140000000001235) ) ) {
                    result[0] += 0.011092451256789388;
                  } else {
                    result[0] += 0.0018629199265258627;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4447100000000001052) ) ) {
                result[0] += -0.0053065865228927684;
              } else {
                result[0] += 0.0005116649908087771;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8383500000000000396) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07466098337194494727) ) ) {
            result[0] += 0.00200908606655225;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3269880000000000564) ) ) {
              result[0] += -0.0005235210732810999;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                result[0] += -0.003739601216747939;
              } else {
                result[0] += -0.010878828315001653;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.162018451266281005) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.158823480849580867) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09225511088934852666) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6418835000000001623) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1051827870237245638) ) ) {
                    result[0] += 9.055402113795537e-05;
                  } else {
                    result[0] += -0.0011514032182466426;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04950512002784904914) ) ) {
                    result[0] += 7.485265799750915e-05;
                  } else {
                    result[0] += 0.0019393754086452098;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1116920601014284448) ) ) {
                    result[0] += 0.0017208498607458635;
                  } else {
                    result[0] += 0.007512562285410358;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.079059829059831443) ) ) {
                    result[0] += -0.0031098542708528324;
                  } else {
                    result[0] += 0.0012956856466842647;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124740124740388) ) ) {
                result[0] += -0.0005055815754920889;
              } else {
                result[0] += 0.007639422216779813;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07743380528222744419) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.080540540540540828) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2113.689413772091484) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.861650000000000138) ) ) {
                    result[0] += -0.000875848550307919;
                  } else {
                    result[0] += 0.0037235188653890815;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8809500000000000108) ) ) {
                    result[0] += 0.0011202137023390147;
                  } else {
                    result[0] += -0.007915293921389635;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0419270344431006553) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5464955000000001339) ) ) {
                    result[0] += 0.008035653387897914;
                  } else {
                    result[0] += 0.0008798460572060031;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.08644133644133678) ) ) {
                    result[0] += 0.004159515045370237;
                  } else {
                    result[0] += -0.004415549636392111;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)62.83278388278389315) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09483558412827299) ) ) {
                  result[0] += -0.011770066327086756;
                } else {
                  result[0] += -0.0008572094013866441;
                }
              } else {
                result[0] += 0.0028370715475124608;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2965.706575687875556) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1850.585799025786173) ) ) {
          result[0] += 0.0007725890399087492;
        } else {
          result[0] += 0.010322184242075311;
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2692985000000000517) ) ) {
          result[0] += 0.0028253603220422807;
        } else {
          result[0] += -0.0015990505323136102;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1962199642500267183) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3086990000000000567) ) ) {
        result[0] += 0.0022422139335992824;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5056465000000001098) ) ) {
          result[0] += -0.015275452220745084;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08403493318258596634) ) ) {
            result[0] += -0.006680974933342247;
          } else {
            result[0] += 0.002454913662459936;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07075279291499393663) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06647167380074837928) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.91885964912280826) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3086990000000000567) ) ) {
              result[0] += -0.00584445901528902;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.10978638847492306) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5802690000000000348) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2703.500010395391655) ) ) {
                    result[0] += 0.005882766109149484;
                  } else {
                    result[0] += 0.0007758213687449353;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8194500000000001227) ) ) {
                    result[0] += -0.0018005504862016158;
                  } else {
                    result[0] += 0.0004959529275985972;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4447100000000001052) ) ) {
                  result[0] += -0.005026976687868945;
                } else {
                  result[0] += 0.0007293477682789269;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)15373.25889383924914) ) ) {
              result[0] += 0.009384127753284663;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.40153452685422764) ) ) {
                result[0] += -0.0022583017719348193;
              } else {
                result[0] += 0.002300616180867334;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2768892570409074438) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06981312588668585339) ) ) {
              result[0] += -0.011351341387847621;
            } else {
              result[0] += -0.00510565208486243;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.650157000000000096) ) ) {
                result[0] += 0.0027198661828236473;
              } else {
                result[0] += -0.0015024266519757005;
              }
            } else {
              result[0] += -0.004513585328286959;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07466098337194494727) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.89818809318378356) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.504385964912282603) ) ) {
              result[0] += 0.0015692671261956115;
            } else {
              result[0] += -0.0043689840287297185;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.754650000000000154) ) ) {
              result[0] += 0.012326451348116819;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5034195000000000197) ) ) {
                result[0] += -0.0008252481009377486;
              } else {
                result[0] += 0.006126351153940478;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8363500000000000378) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.826150000000000051) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8238500000000000822) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8018000000000000682) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7972500000000001252) ) ) {
                    result[0] += -2.6680307999997562e-05;
                  } else {
                    result[0] += -0.004071014924337098;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601965045881026173) ) ) {
                    result[0] += -0.00046780853156213036;
                  } else {
                    result[0] += 0.004547906179578547;
                  }
                }
              } else {
                result[0] += 0.005707405100586225;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.985550935550937091) ) ) {
                result[0] += -0.010069367975890267;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1000322996839296819) ) ) {
                  result[0] += -0.0016437904684806484;
                } else {
                  result[0] += 0.004752739788903733;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.390774125132556271) ) ) {
              result[0] += 0.006328401382697474;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09225511088934852666) ) ) {
                result[0] += -0.006519677626143301;
              } else {
                result[0] += 0.005094194240779934;
              }
            }
          }
        }
      }
    }
  }
}

