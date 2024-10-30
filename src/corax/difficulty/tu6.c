
#include "prediction.h"

void predict_unit6(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.49507021931512174) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9772770219198791963) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1187500000000000083) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.008696263679219727;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6549412391405855516) ) ) {
              result[0] += 0;
            } else {
              result[0] += 0.002705515062877619;
            }
          } else {
            result[0] += -0.0025074634886710426;
          }
        }
      } else {
        result[0] += -0.0007373111931536302;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.53228021978022078) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7425.301902740433434) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8337.708244919273056) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13395.22104316800687) ) ) {
              result[0] += 0.002032403787365452;
            } else {
              result[0] += 0;
            }
          } else {
            result[0] += 0.005028482084780256;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.264116657309969971) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1860.099431670796776) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5885500000000001286) ) ) {
                result[0] += 0.005083539362918961;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += -0.0019407104458458928;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.77179878048780548) ) ) {
                result[0] += -0.0024943509323386175;
              } else {
                result[0] += -0.010446729798188505;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4049500000000000877) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3002000000000000779) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
                    result[0] += -0.003623766696335412;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.196750000000000036) ) ) {
                      result[0] += 0.005436028438469577;
                    } else {
                      result[0] += -0.0032629908686649853;
                    }
                  }
                } else {
                  result[0] += -0.007549469970449319;
                }
              } else {
                result[0] += 0.0014075930529342958;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1658.751546212527273) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8461.096702489729068) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1116.565576061355387) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                result[0] += 0.0014156399891001692;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)51.70714285714286262) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)739.2431776973787692) ) ) {
                    result[0] += -0.003620719313522204;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                result[0] += -0.000819190711501067;
              } else {
                result[0] += -0.008049573510869006;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8050000000000001599) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.45498652291105657) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)690.7475206421901248) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)482.0848310656759281) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.0650000000000000161) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0007050046262067674;
                    }
                  } else {
                    result[0] += 0.0036441495424743256;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2750000000000000777) ) ) {
                    result[0] += -0.0005099238602622615;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2338600000000000401) ) ) {
                      result[0] += -0.0014093981155870838;
                    } else {
                      result[0] += -0.004480956299553344;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2450000000000000233) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1275.919050802347783) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.20714285714286262) ) ) {
                      result[0] += -0.0008845472006900808;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0.0002856636147927885;
                  }
                } else {
                  result[0] += 0.004130303887471677;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.50897851045040099) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33592821992194288) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4507.9565926974592) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00840828455079377;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)760.1404084372057923) ) ) {
                      result[0] += -0.002421192865691429;
                    } else {
                      result[0] += 0.002720829778777892;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1407.682258252089468) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003841324123405216;
                    }
                  } else {
                    result[0] += 0.002777906417081287;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                  result[0] += 0.0010456247424424773;
                } else {
                  result[0] += 0.011434006407738248;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2404.62816755580252) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.52228163992870336) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2139.565893084248728) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1250500000000000222) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3282773505116238777) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2660001773777408984) ) ) {
                      result[0] += -0.013190880656643852;
                    } else {
                      result[0] += -0.000934434146943913;
                    }
                  }
                } else {
                  result[0] += 0.0035801353180361147;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4507.9565926974592) ) ) {
                  result[0] += -0.015578176381515551;
                } else {
                  result[0] += -0.002379814023605322;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.294700000000000073) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1381000000000000283) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.087782058337921853) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2087.634986269159981) ) ) {
                      result[0] += 0.0031552189919804166;
                    } else {
                      result[0] += -0.0011955861766356247;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004505757459276241;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.005892358505048244;
                  }
                }
              } else {
                result[0] += -0.0048377052141846295;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.69062500000000249) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.362024000000000068) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2190499999999999947) ) ) {
                  result[0] += 0.005308808366351496;
                } else {
                  result[0] += 0.0003584062608867796;
                }
              } else {
                result[0] += -0.0002886230166667133;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4958483270806217091) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5885500000000001286) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8006.423874351355153) ) ) {
                      result[0] += -0.002549630799619021;
                    } else {
                      result[0] += 0.0014246163574261833;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
                      result[0] += 0.00768611108672207;
                    } else {
                      result[0] += -1.4687480659764564e-05;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2399659671015315077) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2703.500010395392565) ) ) {
                      result[0] += 0.0037871236457642688;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                      result[0] += -0.006841658536155041;
                    } else {
                      result[0] += -0.0005746695762746039;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4290.319098872139875) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5141168753850328121) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2340754640673623765) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003999845737626656;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7552793108361041119) ) ) {
                      result[0] += 0.0018711585134356572;
                    } else {
                      result[0] += -0.0013736801047894865;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4662.809440025213917) ) ) {
                    result[0] += 0.006261067911477246;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38273.51477145576064) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.002531663009958433;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.0641025641025834) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)93.89015151515152979) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.0064516129032306) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2042500000000000426) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3871448717291648411) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2412.226788823968036) ) ) {
                  result[0] += 0.0014044181694821453;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0.008816534584483912;
              }
            } else {
              result[0] += -0.0012582518416723032;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.927352500000000135) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.440904500000000088) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1720691644993862512) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004837944734512223;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.81296296296296422) ) ) {
                      result[0] += 0.00023122518994352285;
                    } else {
                      result[0] += -0.001690114059309142;
                    }
                  }
                } else {
                  result[0] += 0.005556466934117052;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.71370023419203754) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9439.28927156883401) ) ) {
                    result[0] += 0.00015597491993739633;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1022.028164160269057) ) ) {
                      result[0] += -0.0027228973933771296;
                    } else {
                      result[0] += -0.008817715813929556;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2850500000000000811) ) ) {
                    result[0] += -0.0017301492706590018;
                  } else {
                    result[0] += 0.005587994601452534;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003750000000000000295) ) ) {
                result[0] += 0.004739900627221947;
              } else {
                result[0] += 0.0002677241013413582;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.67204301075269157) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1427500000000000158) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04395000000000000989) ) ) {
                result[0] += 0.0029852807552232367;
              } else {
                result[0] += -0.00037978132448850387;
              }
            } else {
              result[0] += 0.005238170366496034;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.45022222222222652) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1204359241998356339) ) ) {
                result[0] += -0.0005293264445297688;
              } else {
                result[0] += -0.006953320918672376;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.509500000000000175) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
                      result[0] += 0.0022492458688426918;
                    } else {
                      result[0] += 0.00010969380093237424;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.145515329548585759) ) ) {
                      result[0] += -0.002736917433029464;
                    } else {
                      result[0] += 0.0008166801029978913;
                    }
                  }
                } else {
                  result[0] += 0.008467293038317418;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5639.254044705900924) ) ) {
                  result[0] += -0.004477370771183443;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5436705000000000565) ) ) {
                    result[0] += -0.0009012270821532166;
                  } else {
                    result[0] += 0.002228002307902831;
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 0.00485287013915304;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13476.57528643532896) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9704.877429389192912) ) ) {
          result[0] += -0.0004614698951347234;
        } else {
          result[0] += -0.00958580882716251;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.674650000000000083) ) ) {
          result[0] += -0.0017674573458372328;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.870650000000000035) ) ) {
            result[0] += 0.0056440304965398;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1506500000000000339) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.4247832738398927) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.003335577232103429;
              }
            } else {
              result[0] += -0.002874672980939461;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3739500000000000601) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5708454851664590546) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08395000000000001072) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2928.425989978642974) ) ) {
            result[0] += 0.0010888230539170454;
          } else {
            result[0] += -0.0021672417836107374;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.285058977719528484) ) ) {
              result[0] += 0.002420773878339958;
            } else {
              result[0] += 0;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.61204013377927069) ) ) {
              result[0] += 0.011007487265582457;
            } else {
              result[0] += 0.0028027578631381234;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2127.473441927146268) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7444253094382086156) ) ) {
              result[0] += 0.004227888013374488;
            } else {
              result[0] += -0.0013265059571420162;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.83412756598240634) ) ) {
                result[0] += -0.0064643916795510264;
              } else {
                result[0] += -0.0007782019289799174;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3439.063894173575591) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6768.866270911575157) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0027645205985566113;
                }
              } else {
                result[0] += -0.0009592306953333255;
              }
            }
          }
        } else {
          result[0] += 0.0035504351561972433;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3545500000000000873) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2696500000000000563) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.1650000000000000355) ) ) {
              result[0] += 8.757357006106125e-05;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9606451612903227355) ) ) {
                result[0] += 0.0003094560968500775;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
                  result[0] += -3.0334658127333932e-05;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)15.77248611608338713) ) ) {
                    result[0] += -0.007696076534261256;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)49.6585239618122003) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003890239843215642;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
              result[0] += 0.004273749778203721;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5586000000000000965) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.600595238095238848) ) ) {
                  result[0] += 7.952175540882329e-05;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4675530000000000519) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.004767741477084653;
                  }
                }
              } else {
                result[0] += 0.0025150536984318195;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9930683563748080589) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3305835000000000856) ) ) {
                result[0] += 0;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4951140000000000541) ) ) {
                  result[0] += 0.009996395834295428;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.16869918699187636) ) ) {
                    result[0] += 0.0036885752886804185;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2178.807099952505723) ) ) {
                result[0] += 0.0038081591258579475;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.689073741007194762) ) ) {
                  result[0] += 0.00031682338947613823;
                } else {
                  result[0] += -0.0028363920519281906;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32109164420485392) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1119.109071009208719) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1607000000000000095) ) ) {
                    result[0] += 0.005499574613453817;
                  } else {
                    result[0] += 0.0007425428457888246;
                  }
                } else {
                  result[0] += -0.0014432820218279925;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.5723809523809571) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1925500000000000267) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.004388240347818486;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.61204013377927069) ) ) {
                    result[0] += 0.0032693620649606615;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.044849653237345022) ) ) {
                      result[0] += -0.0015657486133505585;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9842100889221309101) ) ) {
                  result[0] += 0.0013535167096334158;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04185000000000000525) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.002806193944520284;
                  }
                }
              } else {
                result[0] += -0.004285167648090192;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
          result[0] += -0.0007080081050586713;
        } else {
          result[0] += 0.008653706264506065;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4236293998663874238) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.701050000000000062) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.310715078210065665) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1915340000000000376) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.0650000000000000161) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0007174443220664984;
                  }
                } else {
                  result[0] += -0.0013351059507756829;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2721073006283602491) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.5723809523809571) ) ) {
                    result[0] += 0.0025395449654900654;
                  } else {
                    result[0] += 0.0085741311018175;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                    result[0] += 0.004642562240186405;
                  } else {
                    result[0] += -0.002450377611616357;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6291500000000000981) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000000000000697) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3726408267520956996) ) ) {
                    result[0] += 0.00034140888868820974;
                  } else {
                    result[0] += -0.003508745718019579;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
                    result[0] += 0.0046015743536948275;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005250000000000000326) ) ) {
                  result[0] += -0.007636916106080121;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.18465909090909172) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0024050321706379275;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.180896918882973573) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45141065830721239) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09832488768552394287) ) ) {
                    result[0] += 0.003974174479821071;
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1743.228671346950478) ) ) {
                      result[0] += 0.0008619824929566111;
                    } else {
                      result[0] += -0.00038912506067299136;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1171905010334959446) ) ) {
                    result[0] += -0.0022941640525038468;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1243193429785608706) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-985.1868867154022382) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.64483714483714571) ) ) {
                      result[0] += 0.0035195742468557443;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
                      result[0] += 0.00023475824907674312;
                    } else {
                      result[0] += -0.006290261183571399;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711180124223603105) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.02658071352879077) ) ) {
                      result[0] += -0.0031999709424077156;
                    } else {
                      result[0] += 0.0008803094219560294;
                    }
                  } else {
                    result[0] += -0.00605946878819211;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.56214887640449618) ) ) {
                  result[0] += -0.0011011335368634801;
                } else {
                  result[0] += -0.010235816475078511;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.746250000000000191) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2602911804898560555) ) ) {
                    result[0] += 0.00414046519113088;
                  } else {
                    result[0] += -0.0013974976644813306;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1950.296414506860629) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1233065969357276664) ) ) {
                      result[0] += -0.0056810943819095745;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
              result[0] += 0.001155401870263775;
            } else {
              result[0] += -0.000808424277177483;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.473050000000000026) ) ) {
                result[0] += 0.0005163308580525485;
              } else {
                result[0] += -0.0009586192731724638;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4401670142345356918) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4706500000000000683) ) ) {
                  result[0] += -0.0016489472370968875;
                } else {
                  result[0] += -0.008587011531972506;
                }
              } else {
                result[0] += -0.001209827954702413;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4268500000000000627) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5642304926403781673) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3239502683350661827) ) ) {
                  result[0] += 0.0004244498045101381;
                } else {
                  result[0] += 0.010198848413630585;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-985.1868867154022382) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3224500000000000699) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2741000000000000658) ) ) {
                      result[0] += -5.3916198373731236e-05;
                    } else {
                      result[0] += 0.0021679116756464444;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                      result[0] += -0.0038231125744448632;
                    } else {
                      result[0] += 0.00018868497875249008;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)642.537947836085209) ) ) {
                    result[0] += 0.0005731524467178227;
                  } else {
                    result[0] += 0.0046848454104145565;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5062870000000001536) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1909226976060683645) ) ) {
                  result[0] += 0.004439300429598249;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.576686013579013057) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1775.162171534685513) ) ) {
                      result[0] += -0.008155939519342686;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14236111111111249) ) ) {
                      result[0] += 0.0006662721644620427;
                    } else {
                      result[0] += -0.0017879999144528786;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.21064381391329512) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.985999416642361126) ) ) {
                    result[0] += -0.0020957590779875895;
                  } else {
                    result[0] += 0.00020574311687130754;
                  }
                } else {
                  result[0] += -0.008602092206084577;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.46790123456790411) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6507500000000000506) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240913000000000016) ) ) {
                  result[0] += -0.003711590797694445;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
                    result[0] += -0.0018810059870339143;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3958227677773696884) ) ) {
                      result[0] += 0.0016414775573926636;
                    } else {
                      result[0] += 0.0075746256133195165;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4589380000000000126) ) ) {
                    result[0] += -0.001448469934928073;
                  } else {
                    result[0] += 0.0007921963297315918;
                  }
                } else {
                  result[0] += -0.006204622916236376;
                }
              }
            } else {
              result[0] += 0.00578559338219805;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3283310000000000395) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2164415000000000366) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4206000000000000294) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2180905966455483069) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.000982619182008845;
                    }
                  } else {
                    result[0] += 0.00019535966922766808;
                  }
                } else {
                  result[0] += 0.0016463117017074527;
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7750000000000001332) ) ) {
                  result[0] += 0;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11994.21414222725798) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8006.423874351355153) ) ) {
                      result[0] += -0.0021769843529794294;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.0030171217087429114;
                  }
                }
              }
            } else {
              result[0] += 0.002500753725210695;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-67546.57382663110911) ) ) {
              result[0] += 0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)58.19230769230770051) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1511569171003262213) ) ) {
                    result[0] += -0.0011964828614846905;
                  } else {
                    result[0] += -0.007179871500600519;
                  }
                } else {
                  result[0] += -0.0017405770462886844;
                }
              } else {
                result[0] += 0;
              }
            }
          }
        }
      }
    } else {
      result[0] += -0.006379359703021028;
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5094895000000000396) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4925320000000000253) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3755158646863254179) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3327500000000000457) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6358500000000001373) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8050000000000001599) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6200500000000001011) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2093320000000000181) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2456.927866336010538) ) ) {
                    result[0] += 0.0014507634375800435;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.09500000000000001499) ) ) {
                      result[0] += -0.0005467248065665983;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += -0.003592360493442701;
                }
              } else {
                result[0] += 0.0036675578382324263;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.66602316602317302) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005250000000000000326) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.94804318488530015) ) ) {
                    result[0] += 0.007262108204862716;
                  } else {
                    result[0] += 0.0009083227382837413;
                  }
                }
              } else {
                result[0] += 0.011686090643318063;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3604310129059999368) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6497500000000001608) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3166171325058890207) ) ) {
                  result[0] += -0.0015542041398205332;
                } else {
                  result[0] += -0.008257375252102756;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6535500000000000753) ) ) {
                  result[0] += 0.005884742351411864;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1909226976060683645) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2745899061051987888) ) ) {
                      result[0] += 0.00014025245049214557;
                    } else {
                      result[0] += -0.0017440391742396138;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.285918000000000061) ) ) {
                      result[0] += -0.00019245676789290343;
                    } else {
                      result[0] += 0.003896680216700527;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1811500000000000055) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
                  result[0] += 0.004191794041514207;
                } else {
                  result[0] += -0.0034667801127070065;
                }
              } else {
                result[0] += 0.007735045893043003;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9003.644477627831293) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2732877049818078219) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.895945945945947564) ) ) {
                result[0] += -0.00045795840899733335;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
                  result[0] += -0.009746441740460042;
                } else {
                  result[0] += -0.0014375171935989122;
                }
              }
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.14277939042090537) ) ) {
              result[0] += 0.003440046546877335;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8135000000000001119) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)135.6750000000000398) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34049.72333320909092) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.008312000784493978;
                  }
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0.0014485321590058796;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5482000000000001316) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4800849858356940891) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37840909090909314) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03305000000000000299) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4496507448607858781) ) ) {
                  result[0] += 0.003050644624773078;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0.010710591848678806;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5254000000000000892) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9003.644477627831293) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.002520991955203318;
                }
              } else {
                result[0] += -0.0027223282342325413;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2060232146152657651) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3632.024792260073355) ) ) {
                result[0] += 0.005001013686629005;
              } else {
                result[0] += 0.0001053485449705298;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3341321480314294878) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.36135000000000006) ) ) {
                  result[0] += 0.0024022548101949714;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1582500000000000295) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5381500000000001283) ) ) {
                      result[0] += -0.003388541797620255;
                    } else {
                      result[0] += 0.0015075577233117227;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93867243867244454) ) ) {
                      result[0] += 0.0013750807347154659;
                    } else {
                      result[0] += -0.0033447157964114583;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4960.940101036608212) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
                      result[0] += -0.0006092605077823657;
                    } else {
                      result[0] += 0.004558033743059449;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1160.815387464434707) ) ) {
                      result[0] += 0.0014080538830014574;
                    } else {
                      result[0] += 0.006175919816480114;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7143.768529324467636) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.21064381391329512) ) ) {
                      result[0] += 0.002952366310745757;
                    } else {
                      result[0] += -5.382025952014531e-05;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
                      result[0] += -0.00016475466840016923;
                    } else {
                      result[0] += -0.0026913707165517574;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1079.931960267036857) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                result[0] += -0.0014815409818220617;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
                  result[0] += -0.0010898299836419908;
                } else {
                  result[0] += 0.005626319561199274;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02395000000000000254) ) ) {
                  result[0] += -0.004507662704548728;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.00714285714286333) ) ) {
                      result[0] += 0.0032051469664982866;
                    } else {
                      result[0] += -0.0010847142162996603;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.264116657309969971) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.006072569227927303;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600160000000000582) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2519.658559778325525) ) ) {
                    result[0] += -0.010907173275049304;
                  } else {
                    result[0] += -0.004025558138593268;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2757311940914686788) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1154034132138477414) ) ) {
                      result[0] += 0.00105410050433687;
                    } else {
                      result[0] += -0.004173878596730987;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4549058249040809909) ) ) {
                      result[0] += 0.004250235746216223;
                    } else {
                      result[0] += -0.00455226087748181;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6129500000000001059) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3922500000000000431) ) ) {
                result[0] += 0.001311466790012846;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5885500000000001286) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5677500000000000879) ) ) {
                    result[0] += -0.003110355795597646;
                  } else {
                    result[0] += 0.0007503534111322957;
                  }
                } else {
                  result[0] += -0.004452676613946779;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
                result[0] += -0.0016218170220438507;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4302840000000000553) ) ) {
                  result[0] += 0.006853241211276786;
                } else {
                  result[0] += 0.0006405994672336466;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8076.895240587145963) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.7261363636363658) ) ) {
          result[0] += 0.0029571326135021474;
        } else {
          result[0] += -0.002638275763072075;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3495500000000000829) ) ) {
              result[0] += -0.0042533916143586165;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4420656524973072266) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3060106677825033539) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.003638423485057426;
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            result[0] += -0.005639790692442398;
          }
        } else {
          result[0] += -0.011286414551839366;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7750000000000001332) ) ) {
      result[0] += -0.0032425893483435074;
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-49080.05530822202854) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5678500000000000769) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)229.6363636363636545) ) ) {
            result[0] += 0;
          } else {
            result[0] += -0.0006010378296173538;
          }
        } else {
          result[0] += -0.004702837301050184;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5291855000000000864) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.67902930402930473) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06815000000000000224) ) ) {
              result[0] += -0.0034410831029096905;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3018.749278514522757) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.0010053596084319129;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1775.162171534685513) ) ) {
              result[0] += 0.0076237474433762595;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4917.478106812183796) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.114147004888090417) ) ) {
                  result[0] += 0.0022830029487623145;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1967701477038585611) ) ) {
                    result[0] += -0.00487139769604369;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.3190058479532194) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.0090518129481156;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34049.72333320909092) ) ) {
            result[0] += 0.0034210467093596423;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14236111111111249) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.05227272727272947) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5817765000000001407) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.711180124223603105) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2470603993683292143) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.002423647092614089;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3184.283198592457211) ) ) {
                      result[0] += 0.0005047933595442246;
                    } else {
                      result[0] += -0.004631650430556956;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
                      result[0] += 0.0005408910929699208;
                    } else {
                      result[0] += 0.0032087519599806407;
                    }
                  } else {
                    result[0] += -0.0025634059300438583;
                  }
                }
              } else {
                result[0] += 0.004511772679542455;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5324000000000000954) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6720624541353420467) ) ) {
                  result[0] += -0.009140077975770941;
                } else {
                  result[0] += 0.000432610386666173;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4033126559258033983) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3060106677825033539) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5877760000000001872) ) ) {
                      result[0] += -0.0014202563858948794;
                    } else {
                      result[0] += 0.0017189889332451691;
                    }
                  } else {
                    result[0] += -0.006214571623699481;
                  }
                } else {
                  result[0] += 0.004629502954093392;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4420656524973072266) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2050000000000000433) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1960.422395893427392) ) ) {
          result[0] += 0;
        } else {
          result[0] += -0.001595735079123907;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1793500000000000372) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05505000000000000865) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3609444825669292922) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.933699633699635712) ) ) {
                  result[0] += 0.0008203188318821596;
                } else {
                  result[0] += 0.004428864849662002;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3926465801380922271) ) ) {
                  result[0] += 0.0022185003187694466;
                } else {
                  result[0] += -0.0026637482646624734;
                }
              }
            } else {
              result[0] += 0.007615708843920599;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
              result[0] += 0.0011770686777196715;
            } else {
              result[0] += 0.009609396032729263;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
            result[0] += 0.0031231880606885937;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4105955000000000576) ) ) {
              result[0] += -0.006098750084416054;
            } else {
              result[0] += 0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.60769230769231442) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6672.266741891098718) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4126257761330971996) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.310715078210065665) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.18253968253969077) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7124500000000001387) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1396.779958297000576) ) ) {
                      result[0] += 0.00485838065626675;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.17517875383044057) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.57979626485568936) ) ) {
                      result[0] += 0.00022589190284796526;
                    } else {
                      result[0] += -0.004642597478902345;
                    }
                  } else {
                    result[0] += 0.0021745540748166143;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1221000000000000141) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.5723809523809571) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                      result[0] += -0.0008229896719983794;
                    } else {
                      result[0] += 0.002186916153746576;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6656.245527964973007) ) ) {
                      result[0] += 0.0020633044951566715;
                    } else {
                      result[0] += -0.004009739989111824;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4013.229638921312926) ) ) {
                      result[0] += 0.005434247147741791;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.002065417220988151;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5192.030210470990824) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4478500000000000258) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2850500000000000811) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001050000000000000369) ) ) {
                      result[0] += -0.001109611663895631;
                    } else {
                      result[0] += 0.0005021125005140423;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.18541666666667567) ) ) {
                      result[0] += -0.005582718164817861;
                    } else {
                      result[0] += 2.699897599328806e-05;
                    }
                  }
                } else {
                  result[0] += 0.006015610875466875;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1891267783217778775) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07798442130072869016) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.08712121212122526) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.003883474003401704;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.005133900791172828;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09244144239215144887) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.315748500000000043) ) ) {
                      result[0] += -0.0005542281781255867;
                    } else {
                      result[0] += -0.010679267067162683;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.58257918552036436) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.264912280701754987) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.169986979704803115) ) ) {
                  result[0] += -0.00025155373749164095;
                } else {
                  result[0] += 0.002527534470423306;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10745.58170698661525) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4006.744949928525784) ) ) {
                    result[0] += -0.010222985188379647;
                  } else {
                    result[0] += -0.002214309469794199;
                  }
                }
              }
            } else {
              result[0] += 0.0034381432301339803;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
            result[0] += 0.010167929528867607;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6941500000000001558) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.169986979704803115) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0057703538993517265;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1911254520728568607) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000000000000487) ) ) {
                    result[0] += 0.0021394593939295164;
                  } else {
                    result[0] += -0.0012421401774591156;
                  }
                } else {
                  result[0] += -0.0045775272833674;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2338600000000000401) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.518295403837575108) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.010509824732879546;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)99.07708333333334849) ) ) {
                      result[0] += 0.000903849779006544;
                    } else {
                      result[0] += -0.0017508048687799598;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02895000000000000351) ) ) {
                      result[0] += -0.0004876289153573636;
                    } else {
                      result[0] += 0.0023543195573667458;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4487310000000000465) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3970620000000000815) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01975000000000000019) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1110915000000000236) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05517050000000000426) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0004305282006439601;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1647458771900037477) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0015665334041554595;
                  }
                }
              } else {
                result[0] += -0.009292740009034994;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02895000000000000351) ) ) {
                result[0] += 0.003257594565940779;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.34234234234234506) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19099.32569550648986) ) ) {
                      result[0] += 0.001697688095923676;
                    } else {
                      result[0] += -0.0008256036493686442;
                    }
                  } else {
                    result[0] += 0.00452550708955728;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2312300000000000189) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955750000000000266) ) ) {
                      result[0] += -0.0005164193913621038;
                    } else {
                      result[0] += 0.0005098539182371287;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)195.4405187835420463) ) ) {
                      result[0] += -0.0032704063168332398;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19099.32569550648986) ) ) {
              result[0] += -0.0013079876828677559;
            } else {
              result[0] += -0.008161825727101833;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4951140000000000541) ) ) {
            result[0] += 0.006523925229541306;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13476.57528643532896) ) ) {
              result[0] += -0.00395359337491232;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2552661953259802718) ) ) {
                result[0] += -0.0002704549335770055;
              } else {
                result[0] += 0.004247938608864986;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)43.5582844574780168) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3689500000000000557) ) ) {
            result[0] += 0.00939664358494081;
          } else {
            result[0] += 0;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-94839.3939457742963) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8220058538128890424) ) ) {
              result[0] += -0.0009344686070550336;
            } else {
              result[0] += 0.002525076771317975;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1727500000000000424) ) ) {
              result[0] += -0.0032885577993474603;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4084000000000000408) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.0004834529984305291;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3344.138681686334621) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.240695900668028262) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.808257918552036436) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.286607142857144837) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1746784584268683549) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)901.8913219877068741) ) ) {
                    result[0] += -0.002529260832933729;
                  } else {
                    result[0] += 4.900596996795726e-05;
                  }
                } else {
                  result[0] += 0.0022250137606071654;
                }
              } else {
                result[0] += -0.002638606428672654;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08235000000000002041) ) ) {
                result[0] += -0.0005169145171691585;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1308500000000000218) ) ) {
                  result[0] += 0.00727144799908948;
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5354000000000000981) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3991483633491397787) ) ) {
                  result[0] += 0.006504196383510533;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4768620372057117418) ) ) {
                    result[0] += -0.0022085580124975297;
                  } else {
                    result[0] += 0;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.025350000000000001) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4769234976159801298) ) ) {
                      result[0] += 0.006012433165558629;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.583910433979686783) ) ) {
                      result[0] += 0.0009217437100325068;
                    } else {
                      result[0] += -0.0021451429338371826;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041500000000000065) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3944745000000000612) ) ) {
                      result[0] += -0.0008122919430174453;
                    } else {
                      result[0] += -0.00340055410954094;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1395500000000000351) ) ) {
                      result[0] += 0.0010593098960524367;
                    } else {
                      result[0] += -0.0013607731046390338;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.57979626485568936) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2841076982928243955) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.06002400960384335) ) ) {
                    result[0] += -0.002712257178656486;
                  } else {
                    result[0] += -0.012002410886291493;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3176158234407915892) ) ) {
                    result[0] += 0.0005379474789071006;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09695000000000000839) ) ) {
                      result[0] += -0.00688710177614698;
                    } else {
                      result[0] += -0.0002795674306402793;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4880421551248437795) ) ) {
                  result[0] += -0.0007007920324202199;
                } else {
                  result[0] += 0.00225953967761369;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.502450980392157298) ) ) {
            result[0] += 0.0016400718499724857;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2503885000000000693) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1934555000000000302) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5095115945175783256) ) ) {
                    result[0] += -0.0011989372450067033;
                  } else {
                    result[0] += 0.00023890273829966846;
                  }
                } else {
                  result[0] += -0.004798837839123315;
                }
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
                result[0] += -0.010906769305659817;
              } else {
                result[0] += -0.003363389102061856;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.39689043154655579) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2067000000000000226) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3810500000000000553) ) ) {
              result[0] += 0.005986869619366611;
            } else {
              result[0] += 0.0015094703716181717;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2342500000000000415) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7049118465821219148) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5296500000000000652) ) ) {
                  result[0] += 0.0027847903434188625;
                } else {
                  result[0] += -0.0010519741529955357;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.041494490358127578) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.008999127621064217;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361985000000000334) ) ) {
                      result[0] += 0.0022292205784977545;
                    } else {
                      result[0] += -0.0015192890710749884;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6298699906795736103) ) ) {
                      result[0] += 0.0020797257510804905;
                    } else {
                      result[0] += 0.007842997603209894;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7140656586248165238) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5296500000000000652) ) ) {
                      result[0] += -0.0015564333377218018;
                    } else {
                      result[0] += 0.0012593215903801982;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.921363443236741575) ) ) {
                      result[0] += 0.005285695566917139;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5142890000000001072) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1187500000000000083) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.540750000000000175) ) ) {
                      result[0] += -0.006973372615505299;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  result[0] += 0.0050764278357704855;
                }
              }
            }
          }
        } else {
          result[0] += 0.008794502377784178;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.0064516129032306) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4191117286610134829) ) ) {
              result[0] += -0.0016700510683218541;
            } else {
              result[0] += 0.0013082522394565817;
            }
          } else {
            result[0] += -0.006938127183676584;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5001000000000001) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5568739105774286324) ) ) {
              result[0] += 0.00674728512468177;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3829700104266255956) ) ) {
                result[0] += 0.0034019159472069662;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6871.194738991899612) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11531.82324522852832) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9118823529411765882) ) ) {
                      result[0] += -0.0013734637057807963;
                    } else {
                      result[0] += 0.0021771115392978384;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.397650000000000059) ) ) {
                      result[0] += 0.007313253154576676;
                    } else {
                      result[0] += -0.0008040042842024213;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                    result[0] += -0.0034845835493727845;
                  } else {
                    result[0] += 0;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.12532467532468061) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
                result[0] += 0;
              } else {
                result[0] += 0.005444695724991326;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.7610275038920733) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3640125000000000166) ) ) {
                  result[0] += -0.0005691356137652307;
                } else {
                  result[0] += -0.007696081684895515;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.83232931726908177) ) ) {
                  result[0] += 0.002857742511352227;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4029797040248608853) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5867500000000001048) ) ) {
                      result[0] += -0.004305270794936856;
                    } else {
                      result[0] += -0.0006413007076642505;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20302.8995617723449) ) ) {
                      result[0] += -0.0007709123178696377;
                    } else {
                      result[0] += 0.003322062564026954;
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
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2872355000000000325) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6984108188956750229) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6779663431404205909) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.265050167224081257) ) ) {
          result[0] += 0.0020846630600163995;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.81858974358974734) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2956.070258926816678) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4729.064601742868945) ) ) {
                result[0] += -0.006658604380266551;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.218025500000000011) ) ) {
                  result[0] += 0.0013954653340565195;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2607440000000000313) ) ) {
                    result[0] += -0.005983444262935595;
                  } else {
                    result[0] += 0.0009525374332714406;
                  }
                }
              }
            } else {
              result[0] += 0.00235316347459749;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10263157894737063) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2063695000000000113) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09695000000000000839) ) ) {
                    result[0] += -0.0001424664704393314;
                  } else {
                    result[0] += 0.004601542929369261;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.005516871969051472;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.52228163992870336) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1055500000000000188) ) ) {
                    result[0] += -0.0017061876760911556;
                  } else {
                    result[0] += 0.002621516305751565;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.50611355962782556) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.901809780515980819) ) ) {
                      result[0] += 0.0020648765327536925;
                    } else {
                      result[0] += 0.008002631284261461;
                    }
                  } else {
                    result[0] += 0;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.75486037469071476) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.875000000000000111) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1595.83134361526254) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3304355872301289465) ) ) {
                      result[0] += -0.002197055967372152;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1665780000000000316) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.003304070092557238;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.73508771929824768) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5420.781404110555741) ) ) {
                      result[0] += -0.004992504062227933;
                    } else {
                      result[0] += 2.7965271956824557e-05;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15774.24072148520463) ) ) {
                      result[0] += -0.0017188559029004862;
                    } else {
                      result[0] += 0.0018000333469910498;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.71008403361344818) ) ) {
                  result[0] += 0.0031225324325537276;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.88731060606061618) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4120.477146499230912) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004460414315475064;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
                      result[0] += -0.0034658702473916647;
                    } else {
                      result[0] += -9.755976356479525e-05;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 0.0030616072330679174;
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18644.6123996954484) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
          result[0] += -0.006898006960280357;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2556.820004021212753) ) ) {
            result[0] += -0.001994294407459421;
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11531.82324522852832) ) ) {
            result[0] += 0;
          } else {
            result[0] += 0.003970813091876502;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2114255000000000162) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1494105000000000294) ) ) {
                  result[0] += -0.002698384159569927;
                } else {
                  result[0] += 0;
                }
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0.002467129800898851;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45141065830721239) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.265050167224081257) ) ) {
                result[0] += -0.00022068278932289054;
              } else {
                result[0] += -0.007891724199873731;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.29705882352941515) ) ) {
                result[0] += 0.0008660056203988117;
              } else {
                result[0] += -0.0013448040839891585;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)67.25628626692457601) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036930000000000462) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1828494567527934322) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09712242158187701924) ) ) {
            result[0] += 0.0034654314902562997;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2930090000000000194) ) ) {
              result[0] += 0;
            } else {
              result[0] += -0.004655465074977001;
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3954325276832468261) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2429488264872171899) ) ) {
              result[0] += 0.01280479570133282;
            } else {
              result[0] += 0.0024599988311600146;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5454500000000001014) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3912.581042876649917) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3495500000000000829) ) ) {
                  result[0] += 0.009903338810701866;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4671500000000000652) ) ) {
                    result[0] += -0.0018512028462337902;
                  } else {
                    result[0] += 0.0048889631010251315;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.0036043387413246288;
                }
              }
            } else {
              result[0] += -0.004303363341036263;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-72018.65726884668402) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5678500000000000769) ) ) {
            result[0] += 0.007751735578394771;
          } else {
            result[0] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.026875901875902164) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5565325000000000966) ) ) {
              result[0] += 0.0042843711857328045;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6133040000000001823) ) ) {
                result[0] += -0.0017139700255071942;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9706500000000001238) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1458.29730909354339) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2063.329983498031197) ) ) {
                      result[0] += -0.0010276586957358772;
                    } else {
                      result[0] += 0.0007866293794722638;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.927352500000000135) ) ) {
                      result[0] += 0.0014170153209160526;
                    } else {
                      result[0] += 0.004408106570662715;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
                    result[0] += 0.001415782952078533;
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1885.524186461903128) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0027683294197535305;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.498956746384165761) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2450.380029300642036) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03580261074118568781) ) ) {
                    result[0] += 0.003822593089939794;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04618346993186531885) ) ) {
                      result[0] += -0.0056006005682189275;
                    } else {
                      result[0] += 6.358104643855279e-05;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.43089430894309011) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4388460000000000694) ) ) {
                      result[0] += -0.0021975627128876184;
                    } else {
                      result[0] += 0.0009820834306609786;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8116500000000000936) ) ) {
                      result[0] += 0.00449779295717818;
                    } else {
                      result[0] += 0;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
                  result[0] += 0.00556989231582423;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904340000000000588) ) ) {
                    result[0] += -0.0010827513821430384;
                  } else {
                    result[0] += 0.0025485670462037377;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.908568443051202213) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.742610837438423932) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9678488682944218491) ) ) {
                    result[0] += -0.006104041782166566;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.746743020758769305) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.005002498521908121;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                      result[0] += 0.003369990791918906;
                    } else {
                      result[0] += -0.00012639183714254157;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1022.028164160269057) ) ) {
                    result[0] += -0.009654280919263758;
                  } else {
                    result[0] += -0.003224628949146629;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03785000000000000864) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5466515000000001789) ) ) {
                      result[0] += 0.0022062583596288796;
                    } else {
                      result[0] += -0.0031265974035748945;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1488.538162805079082) ) ) {
                      result[0] += -0.009688968924986635;
                    } else {
                      result[0] += -0.0013951471523900283;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)175.4247832738398927) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-40295.74630962839001) ) ) {
          result[0] += 0.0008867235056408061;
        } else {
          result[0] += -0.0009233845274523022;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0779500000000000054) ) ) {
          result[0] += -0.006397992844000911;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-160227.8577119282854) ) ) {
            result[0] += 0.0008791076901462477;
          } else {
            result[0] += -0.0018620106686501295;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14995.28300841563214) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.789850000000000052) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.314613457894214299) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3183000000000000829) ) ) {
            result[0] += -0.006867800766993121;
          } else {
            result[0] += -0.001715974191264071;
          }
        } else {
          result[0] += 0;
        }
      } else {
        result[0] += 0;
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)13833.51142176279791) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)112.2710577188622096) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2741.853991412898267) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7881440123671350495) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.53708791208791595) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.2641090678503506) ) ) {
                      result[0] += 7.288201286134732e-05;
                    } else {
                      result[0] += -0.0013598308339884584;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01975000000000000019) ) ) {
                      result[0] += -0.002449444102053118;
                    } else {
                      result[0] += 0.004967367406492143;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3904340000000000588) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.006290031123360773;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04185000000000000525) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2850000000000000866) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5626395000000000701) ) ) {
                      result[0] += 0.0048521267390461845;
                    } else {
                      result[0] += 0;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.107150000000000023) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0261500000000000031) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.005413746007060985;
                    }
                  } else {
                    result[0] += 0.003702794822859758;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3227809997884624194) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2552661953259802718) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6133040000000001823) ) ) {
                      result[0] += -0.0022919771014487983;
                    } else {
                      result[0] += 0.0008169629189696373;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9550000000000000711) ) ) {
                      result[0] += -0.0017525339419936813;
                    } else {
                      result[0] += 0.0022251669463462017;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.11189358372457292) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06285000000000001696) ) ) {
                      result[0] += -0.0012826360808344207;
                    } else {
                      result[0] += 0.002365789036064662;
                    }
                  } else {
                    result[0] += -0.007190371838981514;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.00290697674418716) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6107500000000001261) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5254000000000000892) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00344867902024282;
                    }
                  } else {
                    result[0] += -0.0010467791470988577;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7613.202902318957968) ) ) {
                    result[0] += 0.0004441656114777898;
                  } else {
                    result[0] += 0.007527631410011678;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.921363443236741575) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2233.819323444386555) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.236694677871149395) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.875961538461539568) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6795141123970477315) ) ) {
                      result[0] += 0.00038419714591053205;
                    } else {
                      result[0] += 0.003461540903079922;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5995.730546760533798) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0034377891209194794;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8557.692406390551696) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.24725274725274815) ) ) {
                      result[0] += 0.005016413940037528;
                    } else {
                      result[0] += 6.417963566507878e-05;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4698276866784543149) ) ) {
                  result[0] += 0.00280952579059581;
                } else {
                  result[0] += 0.009901448581145915;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.433327285921625727) ) ) {
                result[0] += 0.004059022884249695;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9842100889221309101) ) ) {
                  result[0] += -0.0036583002931522383;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.66526610644257822) ) ) {
                    result[0] += -0.00219903269531121;
                  } else {
                    result[0] += 0.0021988786450600787;
                  }
                }
              }
            }
          }
        } else {
          result[0] += -0.00479334247731067;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7425.301902740433434) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06446597211275277572) ) ) {
            result[0] += 0.0011628995414573774;
          } else {
            result[0] += -0.0012419352096941316;
          }
        } else {
          result[0] += 0.005755937340880769;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03843854959155177525) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.73508771929824768) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4368015000000000092) ) ) {
          result[0] += -0.007638393992735923;
        } else {
          result[0] += -0.0018054012927712134;
        }
      } else {
        result[0] += 0.00011769442344491179;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04272266684492439376) ) ) {
        result[0] += 0.004372162374724044;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8360500000000000709) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5031527682228830178) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4880421551248437795) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5452.444267353072973) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.007336951598680741;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.264116657309969971) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2902500000000000635) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5732.82001265566214) ) ) {
                      result[0] += -0.0010373203640902046;
                    } else {
                      result[0] += 0.0006614006502154657;
                    }
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3660021954817824219) ) ) {
                      result[0] += -0.0036038753523679338;
                    } else {
                      result[0] += 0.0017119881664392918;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4450000000000000622) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1911254520728568607) ) ) {
                      result[0] += -0.00203661928094345;
                    } else {
                      result[0] += -0.00032968126028252504;
                    }
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3546921061251228635) ) ) {
                      result[0] += 0.0051688025773089915;
                    } else {
                      result[0] += 0.0006894916545951351;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45993589743590135) ) ) {
                result[0] += 0.009537162496280581;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5751000000000000556) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9850000000000000977) ) ) {
                    result[0] += -0.00048665551620991266;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += 0.0037520745094624802;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4805000000000000937) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553249611856754364) ) ) {
                result[0] += 0.004493137046358656;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4625500000000000722) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6225430000000001796) ) ) {
                      result[0] += -0.0006397268847850952;
                    } else {
                      result[0] += -0.005849125495381746;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9118821962252711133) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.0036725643364427254;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074926675286680289) ) ) {
                    result[0] += 0.005412050998666537;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2227500000000000313) ) ) {
                      result[0] += -0.0007314154271800789;
                    } else {
                      result[0] += 0.001529637060210978;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3554500000000000437) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2114255000000000162) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5258.869399769443589) ) ) {
                      result[0] += -0.0017263993729272511;
                    } else {
                      result[0] += 0.001092194311754198;
                    }
                  } else {
                    result[0] += 0.0022886745072227565;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
                    result[0] += 0;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5001330000000000497) ) ) {
                      result[0] += -0.003187033009067835;
                    } else {
                      result[0] += -0.009209107695438947;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5567.746532477868641) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
                      result[0] += 0.0007205828460083341;
                    } else {
                      result[0] += 0.007176968443851003;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3305835000000000856) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.004645501441713279;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)101.5672514619883202) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3860500000000000598) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
                result[0] += -0.0007836646935617856;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1911254520728568607) ) ) {
                  result[0] += -0.012097708816210681;
                } else {
                  result[0] += -0.0006916877552743182;
                }
              }
            } else {
              result[0] += 0.002395816618932391;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.92861142217245352) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8801500000000000989) ) ) {
                result[0] += 0.004941671971715529;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08505000000000001448) ) ) {
                  result[0] += -0.0012106896625588095;
                } else {
                  result[0] += 0.0007582045621675986;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06344288914682723324) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8450000000000000844) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += -0.005333028383785208;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8775500000000001632) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0014820701481120962;
                  }
                } else {
                  result[0] += -0.0014519053052836964;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.32484954126279364) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5950000000000000844) ) ) {
          result[0] += 0;
        } else {
          result[0] += 0.005688308524891672;
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2997.79619999661054) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-156.7600528121663501) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05408888269713012925) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1885.524186461903128) ) ) {
                result[0] += 0;
              } else {
                result[0] += -0.004515873380734507;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1066415978387809521) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)2168.319171519228803) ) ) {
                  result[0] += 0;
                } else {
                  result[0] += 0.00394480233988913;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.328559547571523947) ) ) {
                    result[0] += -0.0028332723275601595;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.155357142857144304) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.0014977054937009898;
                    }
                  }
                } else {
                  result[0] += 0;
                }
              }
            }
          } else {
            result[0] += 0.002079895027256965;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8924000000000001931) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
              result[0] += 0.00015590681726973302;
            } else {
              result[0] += -0.0007980508777388614;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)4169.613374163339358) ) ) {
              result[0] += 0.003631772122215621;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)8817.104006290848702) ) ) {
                result[0] += -0.00020935925876248198;
              } else {
                result[0] += 0.0013507656505761156;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3016800000000000592) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.13209924403954787) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9350000000000001643) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4856.133881915514394) ) ) {
              result[0] += 0.0012874269085915457;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4250000000000000444) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1110915000000000236) ) ) {
                  result[0] += -0.0010266955927840788;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2009165000000000256) ) ) {
                    result[0] += 0.0008564773062847431;
                  } else {
                    result[0] += -0.0003347804504281693;
                  }
                }
              } else {
                result[0] += -0.002982789719307131;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004650000000000000487) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)3107.181136317587516) ) ) {
                result[0] += 0.00784541847162378;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.42792207792208359) ) ) {
                  result[0] += -0.002169397389007014;
                } else {
                  result[0] += 0.0051294551801424094;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
                result[0] += -0.0025291857042373488;
              } else {
                result[0] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8550000000000000933) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2986.391455690082239) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)18906.11182675446616) ) ) {
                result[0] += -0.0010959930308420047;
              } else {
                result[0] += 0;
              }
            } else {
              result[0] += 0;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5435000000000000941) ) ) {
              result[0] += -0.0006719853915417122;
            } else {
              result[0] += -0.0066993350867328525;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3325620000000000798) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.975304878048781188) ) ) {
            result[0] += 0;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.18541666666667567) ) ) {
              result[0] += -0.010836544885357418;
            } else {
              result[0] += -0.0009670360267468211;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-952.9475905187154012) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3064.401422747675497) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.57979626485568936) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06065038394431352536) ) ) {
                  result[0] += -0.00016514643057445767;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
                    result[0] += 0.004815648451344206;
                  } else {
                    result[0] += 0.0006591394101449235;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36860497623707644) ) ) {
                  result[0] += -0.007248922437609793;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.159464746154530435) ) ) {
                  result[0] += 0;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2779054249029654367) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1090413665276023236) ) ) {
                      result[0] += -0.00614576834698619;
                    } else {
                      result[0] += 0;
                    }
                  } else {
                    result[0] += -0.009905586065130619;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006850000000000001053) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.106606960732522002) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += 0.0039932041260039505;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)1618.91458251395693) ) ) {
                    result[0] += 0;
                  } else {
                    result[0] += -0.0021937121327793045;
                  }
                }
              }
            }
          } else {
            result[0] += -0.005680658372702333;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.509500000000000175) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9118821962252711133) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9950000000000001066) ) ) {
            result[0] += -0.0031704286122939754;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.600595238095238848) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)9.965684599721443604) ) ) {
                result[0] += 0.00337085230910337;
              } else {
                result[0] += 0;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                result[0] += -0.0015319434839892892;
              } else {
                result[0] += 0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)129.5625000000000284) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.32484954126279364) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9930683563748080589) ) ) {
                result[0] += 0.0123352461048103;
              } else {
                result[0] += 0.00305602402576525;
              }
            }
          } else {
            result[0] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)118.0299834287672098) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9650000000000000799) ) ) {
              result[0] += 0;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9631328576282706111) ) ) {
                result[0] += -0.007638419197484637;
              } else {
                result[0] += -0.0019059799866747817;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8426833958685702175) ) ) {
              result[0] += 0.0030312733812956154;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.17170228445099589) ) ) {
                result[0] += 0.00010794268345872399;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2668555000000000788) ) ) {
                  result[0] += -7.634633482031915e-05;
                } else {
                  result[0] += -0.004090396046258273;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4828000000000000624) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)43.5582844574780168) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3436155000000000181) ) ) {
                  result[0] += 0.0058052098273204435;
                } else {
                  result[0] += 0.0013447180729206027;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)6361.997541307308893) ) ) {
                  result[0] += -0.0011107548364003349;
                } else {
                  result[0] += 0;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7320592709375011164) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7049118465821219148) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6984108188956750229) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6657846984349986563) ) ) {
                      result[0] += 0.00010344805323448364;
                    } else {
                      result[0] += 0.002046348040791307;
                    }
                  } else {
                    result[0] += -0.004593194641799291;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4463094520789036013) ) ) {
                    result[0] += 0;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3213010000000000588) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += 0.00852626906415993;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3871448717291648411) ) ) {
                    result[0] += 0.001909221473075556;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2128500000000000114) ) ) {
                      result[0] += -0.0015392009495606145;
                    } else {
                      result[0] += 0.0004199664228471399;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1887915000000000287) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7050000000000000711) ) ) {
                      result[0] += -0.00034708247568881654;
                    } else {
                      result[0] += 0.001881670671514341;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.71626984126984361) ) ) {
                      result[0] += -0.005393499733713555;
                    } else {
                      result[0] += -0.0013137643678343962;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6158757957356907342) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)5258.869399769443589) ) ) {
                result[0] += 0.007388220490969699;
              } else {
                result[0] += 0.000877559216685134;
              }
            } else {
              result[0] += -0.0004013036042177214;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8378500000000000947) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1829182123299770424) ) ) {
          result[0] += -0.006627976584875979;
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)11018.535337379677) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.13486978090120516) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184640000000000581) ) ) {
                  result[0] += 0.001349667411756441;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6507500000000000506) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5189379155588735859) ) ) {
                      result[0] += 0;
                    } else {
                      result[0] += -0.004028560840103615;
                    }
                  } else {
                    result[0] += 6.98195885365328e-05;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2690500000000000669) ) ) {
                  result[0] += 0.0043098056406065096;
                } else {
                  result[0] += -0.0007442107660293786;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.22777777777778141) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18158.57126180104024) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-27390.08921065179311) ) ) {
                    result[0] += -0.004229792654410317;
                  } else {
                    result[0] += 0;
                  }
                } else {
                  result[0] += -0.007012670743337239;
                }
              } else {
                result[0] += 0;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-45582.08751746388589) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3535211598876289441) ) ) {
                result[0] += -0.003225212788947813;
              } else {
                result[0] += 0.0007338968011748674;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-32780.76529662315443) ) ) {
                result[0] += 0.005185984473489972;
              } else {
                result[0] += 0;
              }
            }
          }
        }
      } else {
        result[0] += 0.0029947322458743907;
      }
    }
  }
}

