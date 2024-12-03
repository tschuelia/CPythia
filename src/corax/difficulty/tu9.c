
#include "prediction.h"

void predict_unit9(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66515151515151771) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.22653958944281882) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2758315000000000627) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2135850000000000526) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2110000000000000209) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6022642703829196309) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.167306000000000038) ) ) {
                result[0] += -0.003309402618233725;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041500000000000065) ) ) {
                  result[0] += 0.008044745559923055;
                } else {
                  result[0] += -0.000859281333997177;
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6289617284540625075) ) ) {
                  result[0] += -0.002443812474031038;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7961059747699177347) ) ) {
                    result[0] += 0.0040947285937734884;
                  } else {
                    result[0] += 0.00013219138148278537;
                  }
                }
              } else {
                result[0] += -0.007748889807939111;
              }
            }
          } else {
            result[0] += 0.008708309915865953;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.74246339362618663) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.288941480206541534) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5306308187652577502) ) ) {
                  result[0] += 0.006569355855011458;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3928000000000000935) ) ) {
                    result[0] += -0.003144490579281364;
                  } else {
                    result[0] += 0.0018640496559231379;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5158500000000001418) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2540640000000000676) ) ) {
                    result[0] += -0.0005483586693364306;
                  } else {
                    result[0] += -0.006630385395325543;
                  }
                } else {
                  result[0] += -0.010041388687448782;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5290000000000001368) ) ) {
                result[0] += -0.0050925208850426075;
              } else {
                result[0] += 0.013911765749762243;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.17005163511187682) ) ) {
              result[0] += -0.011401356003539698;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.107150000000000023) ) ) {
                result[0] += -0.008873365793891868;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6505818940810462747) ) ) {
                  result[0] += 0.003286503847126362;
                } else {
                  result[0] += -0.005133918065197219;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3018320000000000447) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8226431302510440746) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.40503860987115059) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.90384615384615508) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09255000000000000726) ) ) {
                    result[0] += 0.007945348732303386;
                  } else {
                    result[0] += -0.004951940640237023;
                  }
                } else {
                  result[0] += 0.00986493195127582;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.529766123316798065) ) ) {
                  result[0] += 0.004418190353128172;
                } else {
                  result[0] += -0.011254395647238081;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7290141514373503773) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2888525000000000675) ) ) {
                  result[0] += -0.01085097512127246;
                } else {
                  result[0] += -0.0013948092469708887;
                }
              } else {
                result[0] += 0.003184746099862682;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1524500000000000022) ) ) {
              result[0] += 0.004245189496927982;
            } else {
              result[0] += 0.0161709316209102;
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3037930000000000352) ) ) {
            result[0] += -0.011665220747097565;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3135840000000000294) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5451500000000001345) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8870229725046551161) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.002590673575131319) ) ) {
                    result[0] += 0.00340364315896904;
                  } else {
                    result[0] += 0.011890875489184148;
                  }
                } else {
                  result[0] += -0.0020959844111082472;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3100855000000000694) ) ) {
                  result[0] += -0.006722641974769584;
                } else {
                  result[0] += 0.004397082866529629;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3489680000000000559) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1412378932181409807) ) ) {
                  result[0] += 0.007477672487514099;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6359500000000001263) ) ) {
                    result[0] += -0.000939389506135581;
                  } else {
                    result[0] += -0.011301847943020414;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4411580000000000501) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
                    result[0] += 0.0001984387719245128;
                  } else {
                    result[0] += 0.003208780887924799;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.27951388888889106) ) ) {
                    result[0] += -4.6244563515649724e-05;
                  } else {
                    result[0] += -0.001334722915418274;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2594500000000000139) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5122949209789572356) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09585000000000000464) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1456569483578152857) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0261500000000000031) ) ) {
                result[0] += 0.0009961107035703918;
              } else {
                result[0] += -0.0036059311904942056;
              }
            } else {
              result[0] += 0.005329870939265688;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2151073141463651639) ) ) {
              result[0] += -0.010194797875402969;
            } else {
              result[0] += -0.005989907823201885;
            }
          }
        } else {
          result[0] += 0.008979856316684355;
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4337075000000000791) ) ) {
          result[0] += -0.013481026047534548;
        } else {
          result[0] += -0.00434690347280481;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.76676186590507811) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124740124740388) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346500000000000197) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03798846128036145048) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.24613422604814517) ) ) {
              result[0] += -0.0007267509634028551;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002750000000000000708) ) ) {
                result[0] += 0.0015815520662530891;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02265000000000000346) ) ) {
                  result[0] += 0.007515881683970763;
                } else {
                  result[0] += 0.0040969375553390214;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06375000000000001499) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4725700000000001011) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8112500000000001377) ) ) {
                  result[0] += 0.0033669258804591906;
                } else {
                  result[0] += -0.0020770146814013935;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.325338167619579455) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1400043546222365654) ) ) {
                    result[0] += -0.004252219270250389;
                  } else {
                    result[0] += 0.0010281413301627463;
                  }
                } else {
                  result[0] += -0.008062732956644511;
                }
              }
            } else {
              result[0] += 0.005233593128397815;
            }
          }
        } else {
          result[0] += -0.009621437778108956;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.82683658170914853) ) ) {
            result[0] += 0.009184695786035875;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2990942639582315765) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4189740000000000686) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3980730000000000657) ) ) {
                    result[0] += 0.003766562490867618;
                  } else {
                    result[0] += 0.012218937645971845;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4705165000000000597) ) ) {
                    result[0] += -0.0034350577713092266;
                  } else {
                    result[0] += 0.003870392015121183;
                  }
                }
              } else {
                result[0] += -0.0033769729452025306;
              }
            } else {
              result[0] += -0.003897371265111426;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5802500000000001545) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.32230727173319096) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4357900000000000662) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33392018779342791) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10498759988977824) ) ) {
                    result[0] += -0.00014324922063890642;
                  } else {
                    result[0] += 0.015186138139925523;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7171778145864996512) ) ) {
                    result[0] += -0.007920365663213476;
                  } else {
                    result[0] += -0.000535498495051071;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7689930731636639427) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4935615000000000419) ) ) {
                    result[0] += 0.01037313973118133;
                  } else {
                    result[0] += 0.001607484923090305;
                  }
                } else {
                  result[0] += -0.0029721381222550056;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1752500000000000446) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3242675000000000418) ) ) {
                  result[0] += 0.007718486148756343;
                } else {
                  result[0] += -0.008512049727728056;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3825153637350416913) ) ) {
                  result[0] += 0.006057193488282684;
                } else {
                  result[0] += 0.026535492597570494;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4979840000000000377) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3526540000000000785) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10498759988977824) ) ) {
                  result[0] += -0.004482958305124767;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.7467948717948758) ) ) {
                    result[0] += 0.009170474631570892;
                  } else {
                    result[0] += -0.003201499847976649;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2284500000000000142) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.436750302971882165) ) ) {
                    result[0] += -0.00980380099057657;
                  } else {
                    result[0] += -0.02072418866899025;
                  }
                } else {
                  result[0] += -0.0010302209366232213;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3786500000000000421) ) ) {
                result[0] += 0.007730506714730202;
              } else {
                result[0] += -0.0019325642746269587;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.81114130434783149) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2110000000000000209) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3807664597650188831) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4820105000000000639) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.383548387096774412) ) ) {
                result[0] += -0.000853123628295421;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7302500000000001767) ) ) {
                  result[0] += -0.006388160853977438;
                } else {
                  result[0] += -0.01645001345592909;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5701575000000000948) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7302500000000001767) ) ) {
                  result[0] += 0.0024608312355897184;
                } else {
                  result[0] += 0.010111245373706208;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03665000000000000896) ) ) {
                  result[0] += -0.0005180409674496783;
                } else {
                  result[0] += 0.0027460256106390806;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5424500000000000988) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08455000000000001403) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04785000000000001058) ) ) {
                  result[0] += -0.0006875124739891547;
                } else {
                  result[0] += -0.00841388446006295;
                }
              } else {
                result[0] += 0.004867052236160724;
              }
            } else {
              result[0] += 0.014999070191364042;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.23986928104575256) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.334577114427863975) ) ) {
              result[0] += -0.0009352989154906606;
            } else {
              result[0] += -0.01569886398888236;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.59508740204942789) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5988500000000001044) ) ) {
                result[0] += -0.012621709548503416;
              } else {
                result[0] += 0.0031585655735479833;
              }
            } else {
              result[0] += 0.008223783487023106;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.10319148936170564) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.819805194805195647) ) ) {
            result[0] += -0.0067623828570297145;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5396500000000000741) ) ) {
              result[0] += -0.0008071629223602319;
            } else {
              result[0] += 0.016221369880005644;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.54904306220096188) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4269960000000000977) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3651455000000000672) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2427990000000000148) ) ) {
                  result[0] += -0.007202306622883137;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.0987804878048788) ) ) {
                    result[0] += 0.003837074331718237;
                  } else {
                    result[0] += -0.005499551700994285;
                  }
                }
              } else {
                result[0] += -0.012387520661586788;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289080946470230471) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1386088498927906809) ) ) {
                  result[0] += 0.004659049922509953;
                } else {
                  result[0] += -0.009613060585195274;
                }
              } else {
                result[0] += 0.007468513155605848;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.87666034155597927) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4154419428488258514) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.014709063378759879) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3241500000000000492) ) ) {
                    result[0] += 0.0017811517398813488;
                  } else {
                    result[0] += 0.007133842678534558;
                  }
                } else {
                  result[0] += 0.011779618770989306;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1979241379727537664) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6359500000000001263) ) ) {
                    result[0] += -0.005235373367954194;
                  } else {
                    result[0] += 0.010962794034351755;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6317500000000001448) ) ) {
                    result[0] += -0.0008161143714937537;
                  } else {
                    result[0] += -0.016437902957840894;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.947140112784286) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4632614272892083274) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3411105000000000387) ) ) {
                    result[0] += -0.008073645838382819;
                  } else {
                    result[0] += -0.0013238255085205074;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4959959919839679876) ) ) {
                    result[0] += 0.01293689651534293;
                  } else {
                    result[0] += 0.00015571059435111432;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.16951566951567187) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09105000000000000593) ) ) {
                    result[0] += -0.00475534357102278;
                  } else {
                    result[0] += 0.006675351164047512;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.47809523809523924) ) ) {
                    result[0] += -0.00370521095511637;
                  } else {
                    result[0] += 1.4362023423807196e-05;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1705100000000000227) ) ) {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.03840550000000000214) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8494243075500166329) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5419086073107369783) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-970.1019205114903343) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3509.586989430135418) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.09737269772481483) ) ) {
                  result[0] += 0.0008487692380915956;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8511000000000000787) ) ) {
                    result[0] += -0.00045927805830238395;
                  } else {
                    result[0] += -0.0017608870356856851;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7362500000000001821) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.356381612068028597) ) ) {
                    result[0] += -0.003249726917637393;
                  } else {
                    result[0] += -0.0019481081664149674;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2627.755464084859796) ) ) {
                    result[0] += 0.0009432274173868283;
                  } else {
                    result[0] += -0.001865131036501053;
                  }
                }
              }
            } else {
              result[0] += 0.0008032062861675908;
            }
          } else {
            result[0] += -0.0028070141940179645;
          }
        } else {
          result[0] += 0.0016498597265577502;
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11.87522710460594944) ) ) {
          result[0] += -0.002727302791548808;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3913.110212643198338) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5111.874409617834317) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5556.93894018442279) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.245196219089809153) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15791.59976423629087) ) ) {
                    result[0] += 0.0004097954194569438;
                  } else {
                    result[0] += -0.00025939564063243604;
                  }
                } else {
                  result[0] += -0.0019307681319982773;
                }
              } else {
                result[0] += 0.0025133233825461497;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3404000000000000359) ) ) {
                result[0] += 0.0003055602627628365;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1112685000000000063) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2708333333333334259) ) ) {
                    result[0] += -0.0019417956742206902;
                  } else {
                    result[0] += -4.428296775120493e-06;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.89237451737451856) ) ) {
                    result[0] += -0.0038040943453990874;
                  } else {
                    result[0] += -0.0020528046869298824;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09410000000000001696) ) ) {
              result[0] += 0.004415586934888588;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1872.534671783868816) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840540656815825127) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6521500000000001185) ) ) {
                    result[0] += -0.004836620277095851;
                  } else {
                    result[0] += -0.0005319484626688382;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3190.817953366558413) ) ) {
                    result[0] += -0.001012622305509415;
                  } else {
                    result[0] += 0.0014283317475150433;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1614813989374807301) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.209084699453553569) ) ) {
                    result[0] += 0.0009721242931098758;
                  } else {
                    result[0] += -0.0012638282671594949;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2046649341083811857) ) ) {
                    result[0] += 0.004915068090468271;
                  } else {
                    result[0] += 0.0016104810861243832;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8117010151197184831) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37025703794369846) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.0225430597771048) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1437665000000000193) ) ) {
              result[0] += -0.006262473253440989;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7217500000000002247) ) ) {
                result[0] += -0.0035095425803804716;
              } else {
                result[0] += 0.0022168477296557534;
              }
            }
          } else {
            result[0] += -0.0069462516307600905;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1597878988880053475) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)24923.86035082091621) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24005.21158890879087) ) ) {
                result[0] += 0.007146144169500871;
              } else {
                result[0] += 0.0025117456520800927;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0453100156961256037) ) ) {
                result[0] += -0.004543623606504642;
              } else {
                result[0] += -0.0018628446237821178;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1437665000000000193) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3476566175261612823) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.40153452685422764) ) ) {
                  result[0] += -0.0036093154541503776;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)27856.34674737125533) ) ) {
                    result[0] += -0.0017302295143072758;
                  } else {
                    result[0] += 0.00015178334949949934;
                  }
                }
              } else {
                result[0] += -0.005555168946735393;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3530928486564372526) ) ) {
                result[0] += 0.0013895999620821245;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.19259259259259665) ) ) {
                  result[0] += -0.00026736974726249244;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-33595.95242623185186) ) ) {
                    result[0] += -0.0013768803015486671;
                  } else {
                    result[0] += -0.003321373937329329;
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 0.003296890528818826;
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1917145000000000377) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1331.549621022016936) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2347.346151230799023) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6505818940810462747) ) ) {
            result[0] += 0.015925850978027397;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.80322580645161779) ) ) {
              result[0] += 0.007546929496446889;
            } else {
              result[0] += 0.00025711545580515245;
            }
          }
        } else {
          result[0] += -0.0010506568157410755;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5031527682228830178) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3188822082018960002) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9640.380337645368854) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2950710236599619618) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7699000000000001398) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4863.937132689356076) ) ) {
                    result[0] += -0.0025141022052389155;
                  } else {
                    result[0] += -7.723167701841605e-05;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8238500000000000822) ) ) {
                    result[0] += 0.0032347975616176974;
                  } else {
                    result[0] += 0.00020365651565630835;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.217148977082086192) ) ) {
                  result[0] += -0.005938054593055624;
                } else {
                  result[0] += -0.0007379775970906008;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1880060000000000342) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.64611005692600187) ) ) {
                  result[0] += 0.0053938713142993;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)50.56746031746032344) ) ) {
                    result[0] += -0.004505108760517549;
                  } else {
                    result[0] += 0.0022252498469121948;
                  }
                }
              } else {
                result[0] += 0.009634408756168033;
              }
            }
          } else {
            result[0] += 0.0069136603645091185;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.6113130395274915) ) ) {
            result[0] += -0.006738390450574765;
          } else {
            result[0] += -0.0010511717636580479;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.4375000000000000555) ) ) {
        if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.3541666666666666852) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-970.1019205114903343) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.286523500000000042) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1786.988107982415613) ) ) {
                result[0] += -0.0037062280367898288;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7064500000000001334) ) ) {
                  result[0] += 0.0011629041975705237;
                } else {
                  result[0] += -0.002861540977616294;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2251.879919224290916) ) ) {
                result[0] += 0.0021523763956298268;
              } else {
                result[0] += -0.0009786369703041334;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2692985000000000517) ) ) {
              result[0] += 0.0039570697051180374;
            } else {
              result[0] += -0.0017893479058883408;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1503.749159866045829) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.36507936507936734) ) ) {
              result[0] += -0.006609976996340822;
            } else {
              result[0] += -0.003162407611954695;
            }
          } else {
            result[0] += -0.0013521352856407265;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)877986.081390736741) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5208333333333333703) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36860497623707644) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.0225430597771048) ) ) {
                result[0] += 0.0010354554936740526;
              } else {
                result[0] += 0.010138625110956022;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.78536184210526727) ) ) {
                result[0] += -0.003387554385022303;
              } else {
                result[0] += 0.0009690797937476574;
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6458333333333333703) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.035538893813282) ) ) {
                result[0] += 0.003219608358256291;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4955405000000000504) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2191665000000000141) ) ) {
                    result[0] += -8.748979392367488e-05;
                  } else {
                    result[0] += -0.003325656418520255;
                  }
                } else {
                  result[0] += 0.0007501163468720414;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1953360000000000374) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5891.981688076555656) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2519788480021191157) ) ) {
                    result[0] += -0.0067176854857038705;
                  } else {
                    result[0] += -0.0028516134725804763;
                  }
                } else {
                  result[0] += 0.0017965989711946717;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14109.36047608618719) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4315500000000000447) ) ) {
                    result[0] += -0.0007761625933087415;
                  } else {
                    result[0] += 0.000580590661786243;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11625.88613410333346) ) ) {
                    result[0] += 1.4009885376206338e-05;
                  } else {
                    result[0] += -0.0014029298242565805;
                  }
                }
              }
            }
          }
        } else {
          result[0] += 0.004970466686156787;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.700000000000001066) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7290141514373503773) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.553444000000000158) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.690700657578043109) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.410450000000000037) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1716.028809615633918) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3897500000000000409) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.037345839847144013) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.774419091590062) ) ) {
                    result[0] += -0.002619892321903819;
                  } else {
                    result[0] += 0.0006508203202409354;
                  }
                } else {
                  result[0] += -0.007664203065601178;
                }
              } else {
                result[0] += 0.003201106612531484;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)92.51656411757237208) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4079010000000000136) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-284.2006577138453736) ) ) {
                    result[0] += -0.0014668035889587546;
                  } else {
                    result[0] += -0.00769066901028561;
                  }
                } else {
                  result[0] += 0.0047292373174813405;
                }
              } else {
                result[0] += 0.009375725901406843;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)753.7197460358141825) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.23919669735304952) ) ) {
                result[0] += 0.000391030262644359;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
                  result[0] += -0.011871999255004692;
                } else {
                  result[0] += -0.004106490811379606;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4935615000000000419) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1922.684858006477725) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.180717299578059709) ) ) {
                    result[0] += -0.00015970000214960274;
                  } else {
                    result[0] += 0.003294519842767841;
                  }
                } else {
                  result[0] += -0.003444049009280737;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03165000000000000452) ) ) {
                  result[0] += -0.006340911778338376;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2068500000000000061) ) ) {
                    result[0] += -0.002253525127881093;
                  } else {
                    result[0] += 0.0008838785110895764;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)14.95855265161754488) ) ) {
            result[0] += -0.010248694056570596;
          } else {
            result[0] += -0.0009415627133855582;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.522532894736842835) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.866661769027329054) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-113.0432554252483754) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8.579390238601620311) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5644020255061351632) ) ) {
                  result[0] += 0.0014906471112130098;
                } else {
                  result[0] += 0.007320723658780017;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03027359610555290306) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.953361000000000125) ) ) {
                    result[0] += 0.003422206925219475;
                  } else {
                    result[0] += -0.0016527900024316733;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)892.7839483094804791) ) ) {
                    result[0] += -0.0001095376854179366;
                  } else {
                    result[0] += -0.0016417183305535124;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6307015360864961506) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7219650000000000789) ) ) {
                  result[0] += -0.0009439336435851997;
                } else {
                  result[0] += 0.001302032865993313;
                }
              } else {
                result[0] += -0.007872244639983839;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-889.5839568061797991) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5181500000000001105) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.037345839847144013) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.620622000000000118) ) ) {
                    result[0] += -0.00044479715212787917;
                  } else {
                    result[0] += 0.00448582319761051;
                  }
                } else {
                  result[0] += 0.009585630366953856;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09900000000000001854) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1276.198284932604565) ) ) {
                    result[0] += 0.0011129057810823637;
                  } else {
                    result[0] += 0.00470944418310956;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1704818006003851749) ) ) {
                    result[0] += -0.0009605826412999508;
                  } else {
                    result[0] += -0.006797684325133128;
                  }
                }
              }
            } else {
              result[0] += -0.003643590314178138;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04995000000000000828) ) ) {
            result[0] += -0.007355298439800216;
          } else {
            result[0] += -0.0004456912847805478;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.812500000000000111) ) ) {
            result[0] += -0.0003221816705387092;
          } else {
            result[0] += -0.005524240501148765;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.080650406504065186) ) ) {
            result[0] += 0.01187608070315361;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1969500000000000417) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.094439958701753035) ) ) {
                result[0] += -0.0009777622664950225;
              } else {
                result[0] += -0.00503835020915003;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6049365000000000991) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2159.388666833940533) ) ) {
                  result[0] += 0.0024472381545042774;
                } else {
                  result[0] += 0.013742086412164373;
                }
              } else {
                result[0] += -0.0024889011307483245;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8494243075500166329) ) ) {
          result[0] += -0.006089652151348385;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8923726800623609234) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.326140544518028541) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8692129219887744229) ) ) {
                result[0] += 0.0012282775971465681;
              } else {
                result[0] += 0.009472718931980826;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1110.752112162190087) ) ) {
                result[0] += 0.0018795005081768523;
              } else {
                result[0] += -0.0024892818005488922;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1617.156145847696735) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2723500000000000365) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.725601914823043037) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.184936040256943768) ) ) {
                    result[0] += 0.004365145026365784;
                  } else {
                    result[0] += 0.009921032390222633;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06795000000000002427) ) ) {
                    result[0] += -0.0013988490136607177;
                  } else {
                    result[0] += 0.0034275100432558897;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.594626313305680831) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.387675230458735864) ) ) {
                    result[0] += 0.0003222556279455322;
                  } else {
                    result[0] += -0.006508502134754231;
                  }
                } else {
                  result[0] += 0.004454987197762765;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3191480000000000428) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.124288472983382414) ) ) {
                  result[0] += -0.0005047476098350196;
                } else {
                  result[0] += 0.005520572409525367;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3466475000000000528) ) ) {
                  result[0] += -0.007386496263907297;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1168.062366236748858) ) ) {
                    result[0] += -0.004524132448745343;
                  } else {
                    result[0] += -7.249244762787445e-05;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4223800000000000332) ) ) {
        result[0] += 0.007347119726687938;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5309975000000001222) ) ) {
          result[0] += -0.002717284966165327;
        } else {
          result[0] += 0.002522628029815325;
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3.727359974682000754) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4801450000000000995) ) ) {
          result[0] += -0.0010149434373459669;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4729000000000000425) ) ) {
            result[0] += -0.0074330416034206525;
          } else {
            result[0] += -0.003870135711590744;
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.15064935064935181) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1526.154173473093351) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09410000000000001696) ) ) {
              result[0] += 0.00480450976236716;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)180.3360792364846645) ) ) {
                result[0] += -0.0048087083834808505;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3229585000000000927) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.775242712123145) ) ) {
                    result[0] += 0.00035320558834852695;
                  } else {
                    result[0] += 0.006488161521001008;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.076190476190476808) ) ) {
                    result[0] += -0.0017220462335165655;
                  } else {
                    result[0] += 0.0005747491173273744;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01425000000000000051) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.656050000000000133) ) ) {
                result[0] += -0.005803454786055944;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2087.963610990688721) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08403493318258596634) ) ) {
                    result[0] += -0.0017086625489574194;
                  } else {
                    result[0] += 0.00443166417035999;
                  }
                } else {
                  result[0] += 0.004896231850445023;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1039.769997802646685) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1131695334055241864) ) ) {
                  result[0] += 0.0020500296445027594;
                } else {
                  result[0] += 0.010584933261218562;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02505000000000000282) ) ) {
                  result[0] += 0.0027954365329164823;
                } else {
                  result[0] += -0.0013965382350113532;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.005617977528091345) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1312.224607273150696) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.576757931334203278) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)78.28421457482372148) ) ) {
                  result[0] += -0.006173129670026959;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3238000000000000322) ) ) {
                    result[0] += 0.009379625868961405;
                  } else {
                    result[0] += -0.0007574874507540827;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2118.155753535761505) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2805.314543835761469) ) ) {
                    result[0] += -0.004036123961067445;
                  } else {
                    result[0] += -0.017996055813047297;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3757500000000000284) ) ) {
                    result[0] += -0.005875533289299612;
                  } else {
                    result[0] += 0.001272412518094012;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01625000000000000402) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2134.80121387119334) ) ) {
                  result[0] += -0.0002845083025073399;
                } else {
                  result[0] += -0.004763635228497128;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2301.556344757376337) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3286648086247792588) ) ) {
                    result[0] += 0.004449836440699947;
                  } else {
                    result[0] += 0.0006538897505128831;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6084480000000002109) ) ) {
                    result[0] += -0.0014502586869188903;
                  } else {
                    result[0] += 0.0006819125062927188;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8.579390238601620311) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.380182360511232664) ) ) {
                result[0] += 0.012225837201417507;
              } else {
                result[0] += -0.0016556890062130155;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11.87522710460594944) ) ) {
                result[0] += -0.004185060430235374;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1276.198284932604565) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1995.367899735987294) ) ) {
                    result[0] += 0.0002965530605472823;
                  } else {
                    result[0] += -2.2907506631939047e-05;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)302.7868852467867669) ) ) {
                    result[0] += 0.0017160390611948824;
                  } else {
                    result[0] += -0.00102386905696944;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2508523744426000568) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1237500000000000128) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05115000000000000796) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04995000000000000828) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1085485015600718556) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1879495013645960666) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04385000000000000703) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04195000000000000812) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1267725882486329947) ) ) {
                    result[0] += 0.00041457902077941366;
                  } else {
                    result[0] += -0.0006931329259007268;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1233406754772393699) ) ) {
                    result[0] += -0.007246825164593379;
                  } else {
                    result[0] += 0.0012576435456606227;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3151665000000000716) ) ) {
                  result[0] += -0.003576814624932168;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3913.110212643198338) ) ) {
                    result[0] += 0.013439484732335893;
                  } else {
                    result[0] += -0.0005737421340512992;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5241315000000000834) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8285500000000000087) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.758534714230918006) ) ) {
                    result[0] += 5.9259001117199327e-05;
                  } else {
                    result[0] += -0.010534930812228385;
                  }
                } else {
                  result[0] += -0.016756274944099887;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5833650000000001334) ) ) {
                  result[0] += 0.007464963613360449;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8216500000000001025) ) ) {
                    result[0] += -0.0031111153427837604;
                  } else {
                    result[0] += 0.001414719136280074;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1098096607971473931) ) ) {
              result[0] += 0.006892719497173167;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.812500000000000111) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.7708333333333333703) ) ) {
                    result[0] += -0.0001368291648535594;
                  } else {
                    result[0] += 0.0026623944549811897;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.64611005692600187) ) ) {
                    result[0] += -0.0005133908416499639;
                  } else {
                    result[0] += -0.0053751412173206545;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2899.923639043688581) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03735000000000000819) ) ) {
                    result[0] += 0.003672284435443396;
                  } else {
                    result[0] += -0.0024199772260599627;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2805.314543835761469) ) ) {
                    result[0] += -0.006336121207697819;
                  } else {
                    result[0] += 0.000275824947641129;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4783005000000000728) ) ) {
            result[0] += -0.009261104972684162;
          } else {
            result[0] += -0.00015553322737509284;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1822794002739398789) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.194335169158143639) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2324.854021777930484) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02159164964612171264) ) ) {
                result[0] += 0.004489982922483328;
              } else {
                result[0] += -0.001493534339832144;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.319805194805195203) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1086385441254854312) ) ) {
                  result[0] += -0.00609018396729883;
                } else {
                  result[0] += 0.0021389151507746574;
                }
              } else {
                result[0] += -0.015160953431789501;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4114490000000000092) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09105000000000000593) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4396.181289187711627) ) ) {
                    result[0] += 0.016295895591138827;
                  } else {
                    result[0] += -0.0005437959250095299;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2482395000000000296) ) ) {
                    result[0] += 0.0005519113280744044;
                  } else {
                    result[0] += -0.004196782856073131;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08054401739085483014) ) ) {
                    result[0] += 0.0013457207345673576;
                  } else {
                    result[0] += -0.0018949727199370464;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8737500000000001377) ) ) {
                    result[0] += -0.009542161364213625;
                  } else {
                    result[0] += -0.004035500517619089;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0453100156961256037) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9427500000000000879) ) ) {
                    result[0] += -0.0059061898862717;
                  } else {
                    result[0] += 0.0036303772396888805;
                  }
                } else {
                  result[0] += 0.007389856302387137;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08291002809803414697) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09425000000000001432) ) ) {
                    result[0] += 0.014172536879817742;
                  } else {
                    result[0] += 0.004711551182210272;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05705000000000001042) ) ) {
                    result[0] += 0.007538417063613361;
                  } else {
                    result[0] += -0.004124829011503002;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2247630000000000183) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.5208333333333333703) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6484.005380192698794) ) ) {
                result[0] += -0.001151437072351205;
              } else {
                result[0] += 0.0021489089505946778;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.00735294117647456) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2966.685986956896613) ) ) {
                  result[0] += -0.0068097977975473695;
                } else {
                  result[0] += -0.0028355680021591987;
                }
              } else {
                result[0] += -0.000717102433797818;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4801450000000000995) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1525564339979418871) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3858855000000000479) ) ) {
                    result[0] += 0.003674291192178167;
                  } else {
                    result[0] += 0.01228095539376012;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1028217954414843011) ) ) {
                    result[0] += 0.006823910644356582;
                  } else {
                    result[0] += -0.003796275566114863;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06455000000000001015) ) ) {
                  result[0] += 0.004553280397949363;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3292335000000000678) ) ) {
                    result[0] += 0.01594090647547013;
                  } else {
                    result[0] += 0.010607195736961804;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.27475490196078578) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8671500000000000874) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.207305540238820557) ) ) {
                    result[0] += 0.008165534570098677;
                  } else {
                    result[0] += 0.0015575938490260785;
                  }
                } else {
                  result[0] += -0.004632448095494154;
                }
              } else {
                result[0] += -0.007026181196871181;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3828.868654278664962) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4046.967284318978272) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4357900000000000662) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4223800000000000332) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2414082582617355366) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03027359610555290306) ) ) {
                  result[0] += -0.0053021398167804774;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.906550000000000078) ) ) {
                    result[0] += -0.000685825708724757;
                  } else {
                    result[0] += 0.0035977811506308945;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37025703794369846) ) ) {
                  result[0] += -0.010199789024706788;
                } else {
                  result[0] += 2.4992608169217964e-06;
                }
              }
            } else {
              result[0] += -0.008161146777190764;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4725700000000001011) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.73128342245989408) ) ) {
                result[0] += 0.01122901391682316;
              } else {
                result[0] += 0.0014499929190302887;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2414082582617355366) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3506500000000000727) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5164445000000000841) ) ) {
                    result[0] += -0.004366169642824175;
                  } else {
                    result[0] += -0.0006378300856721507;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5164445000000000841) ) ) {
                    result[0] += 0.007249944065822443;
                  } else {
                    result[0] += 6.495443214715305e-05;
                  }
                }
              } else {
                result[0] += 0.005097456718784471;
              }
            }
          }
        } else {
          result[0] += 0.007079438442555693;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1383500000000000285) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2093.23039061359168) ) ) {
            result[0] += -0.010195864446235709;
          } else {
            result[0] += -0.0025700743656488488;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1448500000000000343) ) ) {
            result[0] += 0.005982982427473814;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.586265500000000106) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2777390000000000692) ) ) {
                  result[0] += 0.0016905194236318;
                } else {
                  result[0] += -0.0019601806961349593;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2670.194409694011938) ) ) {
                  result[0] += -0.011040135398699306;
                } else {
                  result[0] += -0.0014559536706108642;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9092500000000002247) ) ) {
                result[0] += 0.00330883676902239;
              } else {
                result[0] += -0.00023467906123352162;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7750500000000001277) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1058592616225647598) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3175845000000001028) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6852500000000000258) ) ) {
              result[0] += 0.0006511822207358484;
            } else {
              result[0] += -0.009263200255213563;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5102655000000001495) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3301612342698274083) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7497000000000001441) ) ) {
                  result[0] += 0.014875544002887401;
                } else {
                  result[0] += 0.005045510778158159;
                }
              } else {
                result[0] += 0.0036593453398585953;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09882060861174114808) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2745899061051987888) ) ) {
                  result[0] += -0.006182777133842317;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.080650406504065186) ) ) {
                    result[0] += -0.0015426096171750258;
                  } else {
                    result[0] += 0.0019038436034457165;
                  }
                }
              } else {
                result[0] += 0.007274648658341502;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7025000000000000133) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6934500000000000108) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6738500000000001711) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3530928486564372526) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6695500000000000895) ) ) {
                    result[0] += 0.0008746964714360259;
                  } else {
                    result[0] += 0.008525820698548332;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1145938035574793623) ) ) {
                    result[0] += 0.007566480705105151;
                  } else {
                    result[0] += -0.00031047075681637197;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.390774125132556271) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.270242914979758275) ) ) {
                    result[0] += -0.0015427722913968819;
                  } else {
                    result[0] += 0.012726998946439118;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3218960891583437234) ) ) {
                    result[0] += -0.0022566394063457305;
                  } else {
                    result[0] += -0.009974555860287714;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5556.93894018442279) ) ) {
                result[0] += 0.010864644049722262;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1563924358960289418) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1386088498927906809) ) ) {
                    result[0] += 0.00019310390820213638;
                  } else {
                    result[0] += 0.012962246699911407;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3002208421277365313) ) ) {
                    result[0] += 0.005388970442030655;
                  } else {
                    result[0] += -0.005421409090140135;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10562.87122396129962) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.14135254988913815) ) ) {
                result[0] += 0.010708091697273624;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2715324643853566089) ) ) {
                  result[0] += -0.004439623417351321;
                } else {
                  result[0] += 0.003994142846869938;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3468.465314767739983) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4462.713921450710586) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7193500000000000449) ) ) {
                    result[0] += 0.0031129596502685766;
                  } else {
                    result[0] += -0.006322420758428499;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.601724137931035408) ) ) {
                    result[0] += -0.002710091956196314;
                  } else {
                    result[0] += -0.015276378888739119;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7362500000000001821) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3084.240859710316272) ) ) {
                    result[0] += 0.005212149718138655;
                  } else {
                    result[0] += -0.0029667809262827315;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3306920000000000415) ) ) {
                    result[0] += -0.0030486925953157502;
                  } else {
                    result[0] += 0.004343819347626907;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09882060861174114808) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2577141792102714546) ) ) {
            result[0] += -0.009333776189116452;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5967355000000001963) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08291002809803414697) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7947500000000001785) ) ) {
                  result[0] += -0.0050186186475283095;
                } else {
                  result[0] += 0.004350033684054385;
                }
              } else {
                result[0] += 0.011175528600435245;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2637.868029878028665) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3136152341452576597) ) ) {
                  result[0] += -0.0014475531572959999;
                } else {
                  result[0] += 0.0025392650012826317;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.566136724960254467) ) ) {
                  result[0] += 7.382814886891196e-05;
                } else {
                  result[0] += -0.006702520135489963;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1581026364170406151) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041500000000000065) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.47405150000000007) ) ) {
                result[0] += -0.020015722225775093;
              } else {
                result[0] += -0.00841131217276845;
              }
            } else {
              result[0] += -8.787580564673691e-05;
            }
          } else {
            result[0] += 0.005343782394862362;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1237500000000000128) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3986689308614450034) ) ) {
          result[0] += -0.0022687634814931253;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5710214034532944405) ) ) {
            result[0] += 0.015188527101231093;
          } else {
            result[0] += -0.00015606671035420241;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-284.2006577138453736) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4972.713039862052938) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5401.607521750545857) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6377.665229350911432) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7123.512048179920384) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2819380000000000774) ) ) {
                    result[0] += 0.0007652410037709118;
                  } else {
                    result[0] += -0.0002232432569681024;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2076236950652520508) ) ) {
                    result[0] += 0.0008818376366782969;
                  } else {
                    result[0] += -0.004192143090111045;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.793653083354456057) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3455500000000000793) ) ) {
                    result[0] += 0.013131277810999325;
                  } else {
                    result[0] += 0.0016069743936001754;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9354017638884142283) ) ) {
                    result[0] += -0.010331405780752725;
                  } else {
                    result[0] += 0.0007188710239231882;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.75378787878788067) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.041987179487180448) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1969500000000000417) ) ) {
                    result[0] += -0.007401224685249421;
                  } else {
                    result[0] += 0.0025628205361239264;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6221500000000000918) ) ) {
                    result[0] += -0.006179616264357068;
                  } else {
                    result[0] += -0.023450375460009876;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3096000000000000418) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3118835000000000357) ) ) {
                    result[0] += -0.00025716369730606253;
                  } else {
                    result[0] += 0.013855104505553755;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6022642703829196309) ) ) {
                    result[0] += -0.0005133135140046218;
                  } else {
                    result[0] += -0.006000592128435154;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3558.496385149145226) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1584500000000000075) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5154874332154414374) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1753821899233260206) ) ) {
                    result[0] += 0.0030731663203105446;
                  } else {
                    result[0] += 0.016565240436301403;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.270242914979758275) ) ) {
                    result[0] += -0.00318156235163661;
                  } else {
                    result[0] += 0.003949642462103623;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3828.868654278664962) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2310500000000000331) ) ) {
                    result[0] += -0.001329822238379273;
                  } else {
                    result[0] += 0.002062160493021863;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2132500000000000229) ) ) {
                    result[0] += 0.009491176926622042;
                  } else {
                    result[0] += 0.00022656537192717563;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3191480000000000428) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2619963990829793921) ) ) {
                    result[0] += 0.005787008253464428;
                  } else {
                    result[0] += -0.0005764944436409626;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6339019286269085285) ) ) {
                    result[0] += -0.012113209182605224;
                  } else {
                    result[0] += -0.0012736692490722683;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5034195000000000197) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105614129712844229) ) ) {
                    result[0] += 0.010173155470732297;
                  } else {
                    result[0] += 0.0012162075395493578;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1248.431414373846337) ) ) {
                    result[0] += -0.0012866479224227275;
                  } else {
                    result[0] += 0.002141266457849801;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6049365000000000991) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9345935333859788363) ) ) {
              result[0] += 0.0007918089091220283;
            } else {
              result[0] += -0.012196308303184234;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8014155000000001694) ) ) {
              result[0] += 0.002338992861420714;
            } else {
              result[0] += -0.0017429794215343486;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.35571587125416571) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19954.67408175594392) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5576.569694912017439) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2427990000000000148) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2135850000000000526) ) ) {
            result[0] += -0.0013381130112858116;
          } else {
            result[0] += 0.014368427371402233;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2736000000000000099) ) ) {
            result[0] += -0.004152193971911487;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.107150000000000023) ) ) {
              result[0] += 0.006663264086570883;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.14851097178683759) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5419086073107369783) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4221117431024698496) ) ) {
                    result[0] += 0.0020596309889964757;
                  } else {
                    result[0] += -0.007019836850071826;
                  }
                } else {
                  result[0] += 0.008191031235004979;
                }
              } else {
                result[0] += -0.003971743656659369;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11140.90608249307297) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4081628666563487662) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9640.380337645368854) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9044.257124938287234) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6981500000000001593) ) ) {
                  result[0] += 0.0013350251359068176;
                } else {
                  result[0] += -0.008161838650187764;
                }
              } else {
                result[0] += 0.006130002814585506;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4801450000000000995) ) ) {
                result[0] += -0.012239423499759063;
              } else {
                result[0] += 0.00035909365344252817;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.436750302971882165) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3668185000000000473) ) ) {
                result[0] += 0.0076614497902197706;
              } else {
                result[0] += 0.00011482948940708057;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4098200428446435173) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4800500000000000322) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.75461600214076086) ) ) {
                    result[0] += -0.0006594372381621098;
                  } else {
                    result[0] += 0.007221891782712937;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3356656060707096656) ) ) {
                    result[0] += -0.0016344340532294238;
                  } else {
                    result[0] += -0.005597488111919677;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34941.86410757353588) ) ) {
                    result[0] += 0.0025687568149980224;
                  } else {
                    result[0] += -0.0036271148577284207;
                  }
                } else {
                  result[0] += 0.010238150590505183;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11901.15478194124989) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4131013443293440335) ) ) {
              result[0] += 0.014883128415407187;
            } else {
              result[0] += 0.00020564228319839553;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2965509996887087385) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17824.9451882581634) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2065670000000000284) ) ) {
                  result[0] += 0.004376564978708824;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4463295000000000456) ) ) {
                    result[0] += -0.0049401847464403455;
                  } else {
                    result[0] += 0.0008506694777941377;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19423.731309531835) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.62202380952381198) ) ) {
                    result[0] += 0.0008343419518753996;
                  } else {
                    result[0] += 0.01282150484346645;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.15564516129032668) ) ) {
                    result[0] += 0.001090371204102531;
                  } else {
                    result[0] += -0.0014670605704810236;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.09737269772481483) ) ) {
                result[0] += -0.0013413864854139078;
              } else {
                result[0] += 0.01258025246513484;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18722.62916807730289) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5644.507670862270061) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.46385017421602903) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.60043296587724726) ) ) {
              result[0] += -0.01265360321164138;
            } else {
              result[0] += -0.0025747086739507357;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5089500000000001245) ) ) {
              result[0] += -0.0030015700714908313;
            } else {
              result[0] += 0.0019921229978503824;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.656050000000000133) ) ) {
            result[0] += 0.0062602196336153755;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4114490000000000092) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3499121892707919845) ) ) {
                result[0] += -0.002338313841254296;
              } else {
                result[0] += -0.006459586357709275;
              }
            } else {
              result[0] += 0.0018485011139903417;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17705.48077603937054) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4613500000000000933) ) ) {
            result[0] += -0.005713175268992784;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4212533942858654457) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.00735294117647456) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2274745869116796826) ) ) {
                  result[0] += 0.0026242228862753156;
                } else {
                  result[0] += 0.008116677018412193;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3242675000000000418) ) ) {
                  result[0] += -0.0004113394959603402;
                } else {
                  result[0] += -0.009569414185363837;
                }
              }
            } else {
              result[0] += 0.010330352844895772;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.69425511197663425) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3460500000000000798) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3333500000000000907) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3281000000000000028) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2161500000000000365) ) ) {
                    result[0] += 2.2002914726071544e-05;
                  } else {
                    result[0] += -0.0006392529967337933;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5330.906933113767991) ) ) {
                    result[0] += -0.0006181654332961182;
                  } else {
                    result[0] += 0.010306847992246612;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.334577114427863975) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.781746031746032521) ) ) {
                    result[0] += -0.0027758277186351035;
                  } else {
                    result[0] += 0.007083994063919852;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5241315000000000834) ) ) {
                    result[0] += -0.004349314092483705;
                  } else {
                    result[0] += -0.012524820928868675;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1004.56789128042135) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1617.156145847696735) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1721.929484821459255) ) ) {
                    result[0] += 0.0013709710440810857;
                  } else {
                    result[0] += -0.0001280953595052287;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.08644133644133678) ) ) {
                    result[0] += -0.00167417637620902;
                  } else {
                    result[0] += -0.008198135017647226;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-580.1179637303870322) ) ) {
                  result[0] += 0.009109355261384691;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.005850000000000000165) ) ) {
                    result[0] += -0.0017435056678408022;
                  } else {
                    result[0] += 0.0035794515413622354;
                  }
                }
              }
            }
          } else {
            result[0] += 0.0038899148591821646;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.40153452685422764) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.752141886213528843) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6934500000000000108) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3071499552684361367) ) ) {
              result[0] += -0.0050012366236446585;
            } else {
              result[0] += 0.00016643315944604573;
            }
          } else {
            result[0] += 0.00519219719624669;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12535.57931695244952) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)20233.89840428002572) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36262.76808293737122) ) ) {
                result[0] += 0.001511373483431056;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3838015000000000732) ) ) {
                  result[0] += 2.1089582850302067e-05;
                } else {
                  result[0] += -0.0054310968698427576;
                }
              }
            } else {
              result[0] += -0.008502058952059643;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3066040000000000432) ) ) {
              result[0] += -0.0024264815337424637;
            } else {
              result[0] += -0.00905064713419101;
            }
          }
        }
      } else {
        result[0] += 0.00494044148203385;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.02459016393443392) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34941.86410757353588) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.52255000000000007) ) ) {
            result[0] += -0.001849212625386832;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)13763.95786997891082) ) ) {
              result[0] += 0.013045505275006149;
            } else {
              result[0] += 6.860827110402496e-05;
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3430250000000000798) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22333.51733967311884) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2305220000000000324) ) ) {
                result[0] += -0.003226159844935058;
              } else {
                result[0] += -0.0010895998368789612;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2368015000000000259) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1622485000000000455) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.07460750000000000715) ) ) {
                    result[0] += 0.00033392564868643904;
                  } else {
                    result[0] += 0.0013087143507581269;
                  }
                } else {
                  result[0] += -0.0009808683062454214;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5508500000000001728) ) ) {
                  result[0] += 0.0012421029521199327;
                } else {
                  result[0] += 0.01297655944619819;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1969500000000000417) ) ) {
              result[0] += -0.009439004718267993;
            } else {
              result[0] += -0.0006492182633452458;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)110.2386992295352286) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)77.81223118279571338) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2711220000000000296) ) ) {
              result[0] += -0.0011434393500774273;
            } else {
              result[0] += 0.006481263293982537;
            }
          } else {
            result[0] += -0.00306129013373912;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.380182360511232664) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9084995485512600277) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11385.5555937579793) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3838015000000000732) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10669.02265293044911) ) ) {
                    result[0] += -0.00018867822623308122;
                  } else {
                    result[0] += -0.003322355488048722;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4955405000000000504) ) ) {
                    result[0] += -0.00413261724271289;
                  } else {
                    result[0] += 0.0008649932495999274;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11625.88613410333346) ) ) {
                  result[0] += 0.007363437472853088;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5647000000000000908) ) ) {
                    result[0] += 0.00016833453999518427;
                  } else {
                    result[0] += -0.0021145256148318763;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-102854.7252300698165) ) ) {
                result[0] += -0.0007735981936469467;
              } else {
                result[0] += 0.008020203556698512;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9172022279348758245) ) ) {
              result[0] += -0.0004264895425585464;
            } else {
              result[0] += -0.0051845447155026095;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66515151515151771) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4732.095312547814501) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4905.045163925654379) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.22653958944281882) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.72240143369175769) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.59605263157894939) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.209084699453553569) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.334577114427863975) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.502293577981652639) ) ) {
                    result[0] += -0.000603662609786417;
                  } else {
                    result[0] += 0.0027893389651906463;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10747.17545795251317) ) ) {
                    result[0] += -0.001388600834124848;
                  } else {
                    result[0] += -0.007818638408540383;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6307015360864961506) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3743000000000000216) ) ) {
                    result[0] += -0.0011289330092201309;
                  } else {
                    result[0] += 0.005531373455726126;
                  }
                } else {
                  result[0] += 0.012816438175528869;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.035538893813282) ) ) {
                result[0] += -0.0025598542691816304;
              } else {
                result[0] += -0.009400096327118905;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.03235294117647136) ) ) {
              result[0] += -0.004053749194026028;
            } else {
              result[0] += 0.009145604976570597;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4929566561779720746) ) ) {
            result[0] += -0.00020995086229908588;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3579500000000000459) ) ) {
              result[0] += -0.001317832173832887;
            } else {
              result[0] += -0.014290209613245891;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1626000000000000223) ) ) {
          result[0] += 0.001864964345876258;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.448321891685737661) ) ) {
            result[0] += 0.0007527448811258192;
          } else {
            result[0] += -0.014439577749203148;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4507.436608844527655) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.335416666666668029) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1752500000000000446) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2412699476203346849) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.154380165289259352) ) ) {
                result[0] += -0.0018122056102593137;
              } else {
                result[0] += 0.005281433325002274;
              }
            } else {
              result[0] += 0.007239488227172656;
            }
          } else {
            result[0] += -0.0028698147993098636;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4183000000000000607) ) ) {
            result[0] += 0.00673683163091266;
          } else {
            result[0] += 0.017103813199427678;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07915000000000001201) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3645.188716455099438) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.265006002400961727) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.828427249789739584) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.357662227858803972) ) ) {
                    result[0] += 0.00036917433078585286;
                  } else {
                    result[0] += -0.006976388316060204;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04195000000000000812) ) ) {
                    result[0] += -0.00012700988338544135;
                  } else {
                    result[0] += 0.006635165718839319;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3127769248817890424) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0590500000000000122) ) ) {
                    result[0] += -0.00609309551384635;
                  } else {
                    result[0] += -0.0187311494864471;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.994444444444445352) ) ) {
                    result[0] += 0.0001061737184259569;
                  } else {
                    result[0] += -0.006022354149952204;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.48254401942926783) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.13831967213114815) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.813466494845362931) ) ) {
                    result[0] += -0.00015037144864854814;
                  } else {
                    result[0] += 0.0011778617972872409;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.368560367816584411) ) ) {
                    result[0] += -0.002774796953927953;
                  } else {
                    result[0] += 0.0027367872328170353;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04265000000000000041) ) ) {
                    result[0] += 0.002263497423576611;
                  } else {
                    result[0] += -0.0023164284665881836;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.941722972972973693) ) ) {
                    result[0] += 0.015158279027817658;
                  } else {
                    result[0] += 7.448410241396387e-05;
                  }
                }
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2347.346151230799023) ) ) {
              result[0] += -3.237721208097075e-05;
            } else {
              result[0] += -0.011441196651930073;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6241500000000000936) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6133500000000001728) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3606.555973432984047) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6216068849656636308) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.95938981653267597) ) ) {
                    result[0] += 0.0009429099063630246;
                  } else {
                    result[0] += 0.00827227060444179;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.774419091590062) ) ) {
                    result[0] += -0.004258581660528557;
                  } else {
                    result[0] += 0.0012222739609008863;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5776500000000001078) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08455000000000001403) ) ) {
                    result[0] += 0.004682150407011339;
                  } else {
                    result[0] += -0.00022063486224613724;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.95938981653267597) ) ) {
                    result[0] += -0.0006185823423824974;
                  } else {
                    result[0] += -0.012084867394141259;
                  }
                }
              }
            } else {
              result[0] += -0.008130037891677641;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6402500000000000968) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1263500000000000456) ) ) {
                result[0] += 0.011694644691727343;
              } else {
                result[0] += 0.0016009600370207441;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.621024439236693482) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3680724160323877725) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346500000000000197) ) ) {
                    result[0] += 0.002599596025876653;
                  } else {
                    result[0] += -0.0004242776279653113;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3929701013096121298) ) ) {
                    result[0] += -0.005434718127425451;
                  } else {
                    result[0] += -0.0009163995224680839;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7387500000000001288) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.28464818763326427) ) ) {
                    result[0] += 0.004276929570350385;
                  } else {
                    result[0] += -0.002049963215093097;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3002208421277365313) ) ) {
                    result[0] += 0.002958393247740088;
                  } else {
                    result[0] += -0.00647118183637557;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.24613422604814517) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02075000000000000108) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.010850000000000002) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
            result[0] += 0.0017262731186274988;
          } else {
            result[0] += -0.003382886813521508;
          }
        } else {
          result[0] += -0.008912139964932661;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346500000000000197) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3511633202422851929) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.325338167619579455) ) ) {
              result[0] += 9.826235777550008e-05;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2251.879919224290916) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07915000000000001201) ) ) {
                  result[0] += 0.0002702993934261697;
                } else {
                  result[0] += 0.00884287037065358;
                }
              } else {
                result[0] += 0.011793151882513302;
              }
            }
          } else {
            result[0] += 0.017374069200834185;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500000000000503) ) ) {
            result[0] += -0.008771131014421576;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8215.850837031795891) ) ) {
              result[0] += 0.004434275587430556;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2965509996887087385) ) ) {
                result[0] += 0.0035997786334497892;
              } else {
                result[0] += -0.007933839742020528;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10498759988977824) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3045631882353195263) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2642978763556740884) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.334577114427861311) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.69570538495772283) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05545000000000000623) ) ) {
                    result[0] += 0.0029283645825192;
                  } else {
                    result[0] += -0.004339770713678716;
                  }
                } else {
                  result[0] += 0.007505245139645832;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06455000000000001015) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01625000000000000402) ) ) {
                    result[0] += -0.0025995151786534563;
                  } else {
                    result[0] += 0.002470798365268119;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1015718621544924455) ) ) {
                    result[0] += -0.0005703555372967424;
                  } else {
                    result[0] += -0.008894758139106724;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.638350000000000084) ) ) {
                result[0] += -0.009950941345365779;
              } else {
                result[0] += -0.004800308059228757;
              }
            }
          } else {
            result[0] += 0.011220872068038243;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4723500000000000476) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6505818940810462747) ) ) {
              result[0] += 0.004731052410454058;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2564000000000000168) ) ) {
                result[0] += -0.001088785091500227;
              } else {
                result[0] += -0.008003369857138398;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3356656060707096656) ) ) {
              result[0] += -0.012393623843140153;
            } else {
              result[0] += -0.005678909746204398;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33392018779342791) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2161500000000000365) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
              result[0] += 0.00285664907408572;
            } else {
              result[0] += 0.015872927545610566;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.775681341719080208) ) ) {
              result[0] += 0.003597245302247272;
            } else {
              result[0] += -0.003806775777325245;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.02889784946237128) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6445500000000000673) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6062500000000000666) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4743618828237703422) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.334577114427863975) ) ) {
                    result[0] += 0.0021228005840475;
                  } else {
                    result[0] += 0.012613581897820116;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.32230727173319096) ) ) {
                    result[0] += -0.0026047900352831263;
                  } else {
                    result[0] += 0.004076852892235037;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.32230727173319096) ) ) {
                  result[0] += -0.005246707014835778;
                } else {
                  result[0] += -0.014978364635288092;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6615500000000001934) ) ) {
                result[0] += 0.01675307007345854;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6738500000000001711) ) ) {
                  result[0] += -0.0055181932418627904;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2041194872788455739) ) ) {
                    result[0] += 0.000704707213227007;
                  } else {
                    result[0] += 0.008534630994839934;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.81114130434783149) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1015718621544924455) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07335542033840654341) ) ) {
                  result[0] += 0.001105584709033632;
                } else {
                  result[0] += 0.007063209222010497;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.168079096045198995) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041500000000000065) ) ) {
                    result[0] += -0.003880353527782273;
                  } else {
                    result[0] += -0.01717128493690117;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5290000000000001368) ) ) {
                    result[0] += -0.0034488315348678226;
                  } else {
                    result[0] += 0.0018860377479242472;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1963.811816770965606) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.10319148936170564) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
                    result[0] += -0.0031697986825394405;
                  } else {
                    result[0] += 0.007262809522938551;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.591372912801484851) ) ) {
                    result[0] += 0.0008133626346434466;
                  } else {
                    result[0] += -5.635484156680223e-05;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.54904306220096188) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1248.431414373846337) ) ) {
                    result[0] += -0.0006321344359784032;
                  } else {
                    result[0] += -0.01019546344427819;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1716.028809615633918) ) ) {
                    result[0] += -0.0022204339516124125;
                  } else {
                    result[0] += 0.00011803908846357322;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2644870000000000831) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2191665000000000141) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2065670000000000284) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1880060000000000342) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01755000000000000657) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-213.4350721623848131) ) ) {
                    result[0] += 0.00020841497627024076;
                  } else {
                    result[0] += -0.0020328840361107546;
                  }
                } else {
                  result[0] += 0.002942167991434092;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.665550000000000086) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3105614129712844229) ) ) {
                    result[0] += -0.0025340725627116035;
                  } else {
                    result[0] += -0.0003802664764380221;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7114500000000001378) ) ) {
                    result[0] += 0.002023675634853312;
                  } else {
                    result[0] += -0.00035525242810650437;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02925000000000000516) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01425000000000000051) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.812500000000000111) ) ) {
                    result[0] += 0.0006782205554470079;
                  } else {
                    result[0] += -0.0008191952898476497;
                  }
                } else {
                  result[0] += 0.007406493637769972;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1860.92441007674438) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
                    result[0] += -0.00015180502867273766;
                  } else {
                    result[0] += -0.003279610277232934;
                  }
                } else {
                  result[0] += 0.003144885086270006;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1774491924585733515) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1705100000000000227) ) ) {
                result[0] += -0.0036852581923570984;
              } else {
                result[0] += 0.006209737816897968;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.47809523809523924) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4613500000000000933) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3964500000000000246) ) ) {
                    result[0] += -0.005336011142833021;
                  } else {
                    result[0] += 0.0031803975738000094;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3694.512900490842185) ) ) {
                    result[0] += -0.010461882743293866;
                  } else {
                    result[0] += -0.003606619853147257;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2181446333714152641) ) ) {
                  result[0] += -0.006271832964562668;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1437665000000000193) ) ) {
                    result[0] += -0.004596523735458184;
                  } else {
                    result[0] += 2.6038076443398785e-05;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.17005163511187682) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3404000000000000359) ) ) {
              result[0] += -0.00013334932818249702;
            } else {
              result[0] += 0.00934724336387965;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1487500000000000211) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1953360000000000374) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2624768466104180908) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)134.6304347826087167) ) ) {
                    result[0] += 0.003941392741786633;
                  } else {
                    result[0] += -0.0006077151087597009;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.562500000000000111) ) ) {
                    result[0] += -0.00031232765170466305;
                  } else {
                    result[0] += -0.003406799427760147;
                  }
                }
              } else {
                result[0] += 0.0169618213750267;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1917145000000000377) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1548000000000000209) ) ) {
                  result[0] += -0.0030782407009572604;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1840640000000000331) ) ) {
                    result[0] += 0.0002956619087234335;
                  } else {
                    result[0] += 0.003290498593490998;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4786.052326248042846) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2520.213847381996857) ) ) {
                    result[0] += -0.0013293523250851376;
                  } else {
                    result[0] += -0.008657033128164507;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-28911.59644960196238) ) ) {
                    result[0] += -0.002444910519166899;
                  } else {
                    result[0] += 0.001206532120975734;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1941.045842846070173) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2135850000000000526) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3263.750040760352022) ) ) {
              result[0] += -0.009842076836961014;
            } else {
              result[0] += -0.002313642822087452;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7171778145864996512) ) ) {
              result[0] += 0.005183139516638016;
            } else {
              result[0] += -0.001766126435815982;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.86337543053961596) ) ) {
            result[0] += 0.011304415918705417;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)15373.25889383924914) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2099405000000000299) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2551729739349475334) ) ) {
                  result[0] += -0.000728867072399647;
                } else {
                  result[0] += 0.00732441117548867;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13238.69636896185511) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)58.94076923076924146) ) ) {
                    result[0] += -0.004364943486894979;
                  } else {
                    result[0] += -0.002630609474269627;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.347563200274363493) ) ) {
                    result[0] += -0.001628814919050688;
                  } else {
                    result[0] += 0.003689893770266463;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-47466.75880997419154) ) ) {
                result[0] += -0.00024613325334497667;
              } else {
                result[0] += 0.01056573414154348;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8865000000000000657) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.207305540238820557) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01885000000000000217) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004150000000000000043) ) ) {
              result[0] += 0.0005464155779829105;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2516630000000000256) ) ) {
                result[0] += -0.006940636789242873;
              } else {
                result[0] += -0.0014087375819898992;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1168500000000000094) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)134.6304347826087167) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2427990000000000148) ) ) {
                  result[0] += -0.0019654253917162673;
                } else {
                  result[0] += 0.010567020628968964;
                }
              } else {
                result[0] += 0.0157158053856921;
              }
            } else {
              result[0] += -0.003291733273026221;
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7903.503055055340155) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.45747126436781826) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0756500000000000089) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2516630000000000256) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2427990000000000148) ) ) {
                    result[0] += 0.00023271976141051582;
                  } else {
                    result[0] += 0.009966917908604395;
                  }
                } else {
                  result[0] += -0.00431430741757401;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4351.329183438213477) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2516630000000000256) ) ) {
                    result[0] += -0.003949059749427924;
                  } else {
                    result[0] += -0.009598351757490459;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.27951388888889106) ) ) {
                    result[0] += 0.00021106097960505474;
                  } else {
                    result[0] += -0.006203397511088146;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.02658071352879077) ) ) {
                result[0] += 0.009157724632178526;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6484.005380192698794) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03665000000000000896) ) ) {
                    result[0] += 0.006548737683161359;
                  } else {
                    result[0] += 0.00047947074628249757;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                    result[0] += 0.0008445524672719527;
                  } else {
                    result[0] += -0.002823689692520443;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34941.86410757353588) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17824.9451882581634) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)104.0477272727272862) ) ) {
                  result[0] += -0.003767739144997543;
                } else {
                  result[0] += -0.0007620469159078781;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3566416580975863004) ) ) {
                  result[0] += 0.006072918857508695;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2723500000000000365) ) ) {
                    result[0] += 0.000656330618580025;
                  } else {
                    result[0] += 0.00129446488682836;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7907500000000000639) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6062500000000000666) ) ) {
                  result[0] += 6.167523976392182e-05;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)62.83278388278389315) ) ) {
                    result[0] += -0.0019796043034246524;
                  } else {
                    result[0] += -0.005613967132450813;
                  }
                }
              } else {
                result[0] += -0.009856235759261575;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)148.5009469696969973) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
            result[0] += -0.0013694133445463002;
          } else {
            result[0] += -0.01638143767436459;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)26494.54584815848284) ) ) {
            result[0] += -0.0033923591775358026;
          } else {
            result[0] += 0.0009753819197320919;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2819380000000000774) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6618093422766974099) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5181500000000001105) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3263.750040760352022) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1846000000000000141) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4899000000000000576) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6289617284540625075) ) ) {
                  result[0] += -0.004663188883800722;
                } else {
                  result[0] += 6.180464971773655e-05;
                }
              } else {
                result[0] += 0.006077059424136931;
              }
            } else {
              result[0] += -0.006372594691094883;
            }
          } else {
            result[0] += -0.014559126212278286;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.64379699248120659) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.32230727173319096) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1364500000000000435) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.67136150234741976) ) ) {
                  result[0] += -0.0028125068063006536;
                } else {
                  result[0] += 0.004714896051269091;
                }
              } else {
                result[0] += -0.005664432219203106;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3862.309036383199327) ) ) {
                result[0] += 0.015504253207250896;
              } else {
                result[0] += 0.003483461489073965;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2663275000000000503) ) ) {
              result[0] += 0.008352659043375057;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6785500000000000975) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5776500000000001078) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4863158929976397205) ) ) {
                    result[0] += 0.0052555926512145145;
                  } else {
                    result[0] += -0.003875705186058504;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-25974.62741760602876) ) ) {
                    result[0] += -0.0011154099374544315;
                  } else {
                    result[0] += -0.00536521605868513;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7497000000000001441) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.91806020066889715) ) ) {
                    result[0] += 0.012828525777937676;
                  } else {
                    result[0] += -0.0015353796402195986;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03935000000000000303) ) ) {
                    result[0] += -0.006230078303090962;
                  } else {
                    result[0] += 7.041436218385033e-05;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)156.6560485639346041) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2651500000000000523) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8541666666666668517) ) ) {
              result[0] += 0.0006852922768682756;
            } else {
              result[0] += -0.005969829359879496;
            }
          } else {
            result[0] += 0.003399539044699745;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1200000000000000094) ) ) {
            result[0] += 0.01138937617069837;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1874500000000000333) ) ) {
              result[0] += -0.003475018163688791;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2711220000000000296) ) ) {
                result[0] += 0.0008402275298967978;
              } else {
                result[0] += 0.011715947791441157;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2842505000000000726) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4992000000000000326) ) ) {
          result[0] += -0.012088565472975894;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.15909090909091361) ) ) {
            result[0] += 0.003703420013790838;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4273892915217033517) ) ) {
              result[0] += -0.0007489695109975111;
            } else {
              result[0] += -0.005809499828032605;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8541666666666668517) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.785363700564971845) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08955000000000001847) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7123.512048179920384) ) ) {
                result[0] += -0.0036295645473495676;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)113.4891304347826235) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05205000000000000598) ) ) {
                    result[0] += -0.0006356155952490058;
                  } else {
                    result[0] += -0.004361482797250518;
                  }
                } else {
                  result[0] += 0.004551579686293455;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11354.96555769008955) ) ) {
                result[0] += -0.0001767025925999612;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1780500000000000138) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                    result[0] += -0.0031091712580365305;
                  } else {
                    result[0] += -0.006993790717454277;
                  }
                } else {
                  result[0] += -0.0025070612017682337;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9084995485512600277) ) ) {
              result[0] += 0.004939905777862237;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9525051900969851992) ) ) {
                result[0] += -0.005971528503759789;
              } else {
                result[0] += 0.0017096372422093697;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)177846.518680623878) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6484.005380192698794) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6588500000000000467) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7903.503055055340155) ) ) {
                    result[0] += 0.0028711094655641356;
                  } else {
                    result[0] += -0.0025788777503318334;
                  }
                } else {
                  result[0] += 0.007390313751457938;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.77783929136349528) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8757500000000001394) ) ) {
                    result[0] += -0.0006402414351433244;
                  } else {
                    result[0] += 0.0012154302966332926;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04126507918390250051) ) ) {
                    result[0] += 5.975964602956401e-05;
                  } else {
                    result[0] += -0.0048591496723688;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9257.231014387447431) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9681.136102375299743) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3115.942419799886466) ) ) {
                    result[0] += -0.0010534228169014124;
                  } else {
                    result[0] += 0.0001745689615736484;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1430500000000000382) ) ) {
                    result[0] += 0.0008245189306779961;
                  } else {
                    result[0] += -0.0059414335877768605;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.035538893813282) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1827.40614998019123) ) ) {
                    result[0] += -0.003647305165248975;
                  } else {
                    result[0] += 0.00523377443725197;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8551.001968962680621) ) ) {
                    result[0] += -0.004324024769001162;
                  } else {
                    result[0] += 0.00016315101163002935;
                  }
                }
              }
            }
          } else {
            result[0] += 0.003884075017949346;
          }
        }
      }
    }
  }
}

