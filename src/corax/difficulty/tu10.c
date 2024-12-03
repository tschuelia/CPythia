
#include "prediction.h"

void predict_unit10(union Entry* data, double* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4725700000000001011) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4660265000000000657) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4643995000000000206) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4621460000000000568) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4463295000000000456) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4316910000000000469) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4344000000000000639) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4972.713039862052938) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4249400000000000399) ) ) {
                    result[0] += -0.0002797542074875208;
                  } else {
                    result[0] += 0.0031492065541982297;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4780.79918261664443) ) ) {
                    result[0] += 0.004630586712150368;
                  } else {
                    result[0] += 6.443388916774521e-05;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3411105000000000387) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.126292728868830112) ) ) {
                    result[0] += 0.003811624511512421;
                  } else {
                    result[0] += -0.0006847913642196547;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5419086073107369783) ) ) {
                    result[0] += 0.0003894262941339416;
                  } else {
                    result[0] += 0.004909075983111548;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5699500000000000677) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5508500000000001728) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1872.534671783868816) ) ) {
                    result[0] += 0.002563806377285868;
                  } else {
                    result[0] += -0.002362854541191367;
                  }
                } else {
                  result[0] += -0.01377664696629941;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2990942639582315765) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.34495192307692513) ) ) {
                    result[0] += 0.0027758328327520533;
                  } else {
                    result[0] += -0.0027230528464527565;
                  }
                } else {
                  result[0] += 0.015804419526575655;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500000000000503) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.90384615384615508) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.185213414634148421) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0182500000000000058) ) ) {
                    result[0] += 0.0016615517238144277;
                  } else {
                    result[0] += -0.00392812080863;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1055500000000000188) ) ) {
                    result[0] += 0.004141885485952438;
                  } else {
                    result[0] += 0.010452384052620275;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.67567084078712192) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05115000000000000796) ) ) {
                    result[0] += -0.0013599778698483338;
                  } else {
                    result[0] += -0.02625264773559155;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.781746031746032521) ) ) {
                    result[0] += 0.001345305294361005;
                  } else {
                    result[0] += -0.005123172404724437;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2594500000000000139) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1581026364170406151) ) ) {
                  result[0] += -0.0001132117595428875;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5573500000000001231) ) ) {
                    result[0] += 0.0037225997715463876;
                  } else {
                    result[0] += 0.018360655033786533;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6180500000000000993) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3835500000000000576) ) ) {
                    result[0] += -0.008869638709947936;
                  } else {
                    result[0] += -0.0006366307232604389;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.91806020066889715) ) ) {
                    result[0] += 0.006768567596682278;
                  } else {
                    result[0] += -0.004811388953577849;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.49775381850854217) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2428.141113281569233) ) ) {
              result[0] += 0.006268604797765198;
            } else {
              result[0] += -0.006289343434589671;
            }
          } else {
            result[0] += 0.014394101732331814;
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2161500000000000365) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1003500000000000086) ) ) {
            result[0] += -0.0025534170779931255;
          } else {
            result[0] += 0.007150476045265617;
          }
        } else {
          result[0] += -0.007549371924621098;
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.05570291777189595) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.141604010025063065) ) ) {
          result[0] += -0.00524384979921039;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.76676186590507811) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1872.534671783868816) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)562.5854813206698282) ) ) {
                result[0] += -0.002140650857375222;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.084422195825556656) ) ) {
                  result[0] += 0.008119059713091072;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3468.465314767739983) ) ) {
                    result[0] += 0.007283660802510405;
                  } else {
                    result[0] += -0.0033106905360144457;
                  }
                }
              }
            } else {
              result[0] += -0.003077631949333011;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.50233644859813609) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.6605458221024314) ) ) {
                result[0] += 0.006113549938375122;
              } else {
                result[0] += 0.016140542054466175;
              }
            } else {
              result[0] += 0.0014507610675236421;
            }
          }
        }
      } else {
        result[0] += -0.0068134146864768305;
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4783005000000000728) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6897500000000001963) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4843500000000000583) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4510084821850932069) ) ) {
            result[0] += 0.0070544125096480975;
          } else {
            result[0] += -0.003952720030885092;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10562.87122396129962) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17110.8457892469487) ) ) {
              result[0] += -0.0032424129351478594;
            } else {
              result[0] += -0.02165548599427234;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2873.70979119194044) ) ) {
              result[0] += 0.003123279394541826;
            } else {
              result[0] += -0.012189155492370984;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1656345976266143383) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.64583333333335702) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2428.141113281569233) ) ) {
              result[0] += 0.0019938425820044945;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06647167380074837928) ) ) {
                result[0] += -0.0004284790317951867;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7841500000000001247) ) ) {
                  result[0] += -0.0044864945171798525;
                } else {
                  result[0] += -0.010354656094671075;
                }
              }
            }
          } else {
            result[0] += 0.00859713358756591;
          }
        } else {
          result[0] += 0.009585009484247677;
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.656050000000000133) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6267500000000001403) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2221.82791069670111) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2022.266193993530806) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5594500000000001139) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5396500000000000741) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.13831967213114815) ) ) {
                    result[0] += 0.00016721654126198538;
                  } else {
                    result[0] += -0.0016236235013562313;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                    result[0] += 0.00036795427841010886;
                  } else {
                    result[0] += 0.0067054201459793294;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5645500000000001073) ) ) {
                  result[0] += -0.010533308299159721;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.025350000000000001) ) ) {
                    result[0] += -0.005389441538960202;
                  } else {
                    result[0] += 0.0003509926764020493;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.15909090909091361) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.13831967213114815) ) ) {
                  result[0] += 0.00031623051132798026;
                } else {
                  result[0] += -0.0026529862983639485;
                }
              } else {
                result[0] += -0.008564813461155583;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-36262.76808293737122) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2244500000000000106) ) ) {
                  result[0] += 0.00015252558739490155;
                } else {
                  result[0] += 0.005324673644174978;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7701.814954046463754) ) ) {
                  result[0] += -0.005606987027216347;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3604886952753205698) ) ) {
                    result[0] += -0.00394978292928866;
                  } else {
                    result[0] += 0.0002678476545480095;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5190295000000001435) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.168079096045198995) ) ) {
                  result[0] += -0.00292349936382396;
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5102655000000001495) ) ) {
                    result[0] += 0.004485435562977608;
                  } else {
                    result[0] += 0.016011371129106448;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1831831338943523402) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4010.052697610588893) ) ) {
                    result[0] += 0.001972212172353974;
                  } else {
                    result[0] += -0.004411564475073974;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2452178646097160908) ) ) {
                    result[0] += 0.008664067007155173;
                  } else {
                    result[0] += 0.0003662587736980739;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.529766123316798065) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02075000000000000108) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
                result[0] += -0.003303347470668035;
              } else {
                result[0] += -0.007658935351041956;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0756500000000000089) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1366.16280735785358) ) ) {
                  result[0] += 0.004318954038358746;
                } else {
                  result[0] += 0.0012946532194373348;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.700000000000001066) ) ) {
                  result[0] += 0.0012258561999250086;
                } else {
                  result[0] += -0.0031837763521475847;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.48814016172507024) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5270735000000000836) ) ) {
                result[0] += 0.01775688181417465;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6049365000000000991) ) ) {
                  result[0] += 0.009110950036643901;
                } else {
                  result[0] += 0.0019981922482283743;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.12245989304813776) ) ) {
                result[0] += -0.008019386915685805;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.645224719101126) ) ) {
                  result[0] += 0.003039595980481063;
                } else {
                  result[0] += -0.00040087629219560646;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5218480000000002006) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6763500000000001178) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1364500000000000435) ) ) {
              result[0] += -0.0013072208763989708;
            } else {
              result[0] += -0.013569570178571846;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5641.056814807182491) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869560366706151944) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6267.378546571134393) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6514.587695889199495) ) ) {
                    result[0] += -0.00508804017393417;
                  } else {
                    result[0] += 0.0004407473877296528;
                  }
                } else {
                  result[0] += 0.007020692235208125;
                }
              } else {
                result[0] += 0.010779012929666711;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)6094.863866320612033) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4396.181289187711627) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4732.095312547814501) ) ) {
                    result[0] += -0.0032582056295056387;
                  } else {
                    result[0] += 0.012863118806744697;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.08644133644133678) ) ) {
                    result[0] += -0.0012591367708374285;
                  } else {
                    result[0] += -0.011389213857810922;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4096.398333074744187) ) ) {
                  result[0] += -0.021550714474518524;
                } else {
                  result[0] += 0.0035921122979930345;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7866.566150133202427) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03165000000000000452) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0480211614051639854) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)129.7563131313131635) ) ) {
                  result[0] += -0.0035403855130682264;
                } else {
                  result[0] += 0.0003009269317018337;
                }
              } else {
                result[0] += -0.009675868267604857;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.48914488258751021) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.12245989304813776) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.429971988795520232) ) ) {
                    result[0] += -0.0017404845280636092;
                  } else {
                    result[0] += 0.002607287272720225;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7520000000000001128) ) ) {
                    result[0] += -0.014216904911788338;
                  } else {
                    result[0] += -0.0013216289490099941;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2449000000000000343) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1998500000000000276) ) ) {
                    result[0] += 0.0015850557768267357;
                  } else {
                    result[0] += 0.010372273609740518;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1085485015600718556) ) ) {
                    result[0] += -0.002376076949778302;
                  } else {
                    result[0] += 0.001507142789001114;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.549626000000000059) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06375000000000001499) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03165000000000000452) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5270735000000000836) ) ) {
                    result[0] += 0.008592340346727597;
                  } else {
                    result[0] += 0.00041154709572976934;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1661.374751008663452) ) ) {
                    result[0] += -0.005064388258859597;
                  } else {
                    result[0] += 0.001087504204812398;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.50925925925926663) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1134500000000000092) ) ) {
                    result[0] += 0.0063270099923042;
                  } else {
                    result[0] += -0.0002647567844854071;
                  }
                } else {
                  result[0] += 0.012991031035425019;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.079059829059831443) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.560470779220779924) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04685000000000000969) ) ) {
                    result[0] += 0.00035537928471141407;
                  } else {
                    result[0] += -0.000726533531884505;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1200000000000000094) ) ) {
                    result[0] += -0.0006112415214020523;
                  } else {
                    result[0] += 0.004912343480839455;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5793.249377164793259) ) ) {
                  result[0] += 0.004027554547673312;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.78049759229535454) ) ) {
                    result[0] += -0.01367674649865818;
                  } else {
                    result[0] += -0.0018853255002071092;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9508000000000000895) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.862805500000000114) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66515151515151771) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1995.367899735987294) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.74737090866123346) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8835500000000000576) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8163500000000000201) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3770898412903186947) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.005617977528091345) ) ) {
                    result[0] += 8.325495727233208e-05;
                  } else {
                    result[0] += 0.002344699449494438;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4035667457111984935) ) ) {
                    result[0] += -0.003347144047275894;
                  } else {
                    result[0] += -0.00014510461008348548;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.185213414634148421) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.075647075647077067) ) ) {
                    result[0] += -0.004216268915585153;
                  } else {
                    result[0] += 0.000468840725148372;
                  }
                } else {
                  result[0] += -0.007193591784951475;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1291.760246402436906) ) ) {
                result[0] += 0.0070415856492416105;
              } else {
                result[0] += 0.0016361765756090925;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)913.4768302542491938) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)868.0972492193021708) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5330.906933113767991) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6186.11782883037813) ) ) {
                    result[0] += 0.0003878076140413844;
                  } else {
                    result[0] += 0.012926757483134124;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.27951388888889106) ) ) {
                    result[0] += 0.0011486313695939923;
                  } else {
                    result[0] += -0.0030539909672673187;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5843957245848719895) ) ) {
                  result[0] += -0.015324057681268365;
                } else {
                  result[0] += -0.0018557957129689778;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1803500000000000381) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1786.988107982415613) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4411580000000000501) ) ) {
                    result[0] += 0.003821732187622933;
                  } else {
                    result[0] += -0.00019726611653878682;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.86811594202898767) ) ) {
                    result[0] += -0.0009600300978335848;
                  } else {
                    result[0] += -0.010901500791104562;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6740.924545030961781) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.8269148480958517) ) ) {
                    result[0] += -0.004064783036790261;
                  } else {
                    result[0] += 0.00321809677332095;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6038500000000001089) ) ) {
                    result[0] += 0.011198119900493202;
                  } else {
                    result[0] += 0.0009880579271106659;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.8269148480958517) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9044.257124938287234) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2516630000000000256) ) ) {
                result[0] += 0.004556700357535678;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2777390000000000692) ) ) {
                  result[0] += -0.007600196029073484;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9308500000000000663) ) ) {
                    result[0] += 6.302858577829644e-05;
                  } else {
                    result[0] += -0.0042899891077670844;
                  }
                }
              }
            } else {
              result[0] += -0.004750024720439537;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2221.82791069670111) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6763500000000001178) ) ) {
                result[0] += 0.0015554306360823138;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7972500000000001252) ) ) {
                  result[0] += -0.01976007798096179;
                } else {
                  result[0] += -0.0057014932504602395;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2711220000000000296) ) ) {
                result[0] += -0.010284106837198412;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4863.937132689356076) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2400.030403748101435) ) ) {
                    result[0] += -0.014776927862891556;
                  } else {
                    result[0] += -0.0008561270949835775;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3413457424047925404) ) ) {
                    result[0] += -0.0002139319147930502;
                  } else {
                    result[0] += 0.013120038762240686;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.24613422604814517) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5424500000000000988) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5061000000000001053) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.02658071352879077) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4732.095312547814501) ) ) {
                  result[0] += 0.004158808374026575;
                } else {
                  result[0] += -0.005047871796193417;
                }
              } else {
                result[0] += 0.00812308967325393;
              }
            } else {
              result[0] += 0.014705540571631892;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4553150571621396026) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02075000000000000108) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2805.117281170830665) ) ) {
                  result[0] += -0.006324613981177306;
                } else {
                  result[0] += -0.0015481076478386822;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5102655000000001495) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4048600000000000532) ) ) {
                    result[0] += 0.003954542783195436;
                  } else {
                    result[0] += 0.010101379851507919;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2520.213847381996857) ) ) {
                    result[0] += 0.0021137725941438815;
                  } else {
                    result[0] += -0.0018561946677201702;
                  }
                }
              }
            } else {
              result[0] += -0.0059857900064292716;
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1786.988107982415613) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3574970000000000092) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3269880000000000564) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2960395000000000665) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2711220000000000296) ) ) {
                    result[0] += -0.00023020592078238327;
                  } else {
                    result[0] += 0.0031308173989920804;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3037930000000000352) ) ) {
                    result[0] += -0.007039232715294974;
                  } else {
                    result[0] += -0.0010485105745053423;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03255000000000000254) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1617.156145847696735) ) ) {
                    result[0] += -0.008652999013685976;
                  } else {
                    result[0] += -0.0008039641534378447;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1291.760246402436906) ) ) {
                    result[0] += 0.0012840048691084701;
                  } else {
                    result[0] += 0.011066811924917994;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5164445000000000841) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.52255000000000007) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5327191796258734513) ) ) {
                    result[0] += 0.008424126838852764;
                  } else {
                    result[0] += -0.0013178271925611653;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3786.394717162055713) ) ) {
                    result[0] += -0.012962962244060345;
                  } else {
                    result[0] += -0.003035925450875265;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1248.431414373846337) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4905.045163925654379) ) ) {
                    result[0] += -0.0018032199987210046;
                  } else {
                    result[0] += 0.0032504211007348587;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008450000000000000913) ) ) {
                    result[0] += 0.0005720545019629141;
                  } else {
                    result[0] += -0.006889087065040089;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2274.959778437426849) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11761.67842346677571) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.00847457627119041) ) ) {
                  result[0] += -0.011483316047964359;
                } else {
                  result[0] += -0.0016601760181258309;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6339019286269085285) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2021500000000000241) ) ) {
                    result[0] += 0.002233856614711585;
                  } else {
                    result[0] += -0.0009916806567428244;
                  }
                } else {
                  result[0] += 0.017227047417387;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2329.403618021861803) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.08578431372549744) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05424999999999999961) ) ) {
                    result[0] += -0.004701844785690938;
                  } else {
                    result[0] += -0.016772853178753534;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2301.556344757376337) ) ) {
                    result[0] += 0.008326219336198166;
                  } else {
                    result[0] += -0.0016436191220068645;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1360.735594309118596) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.96720430107527378) ) ) {
                    result[0] += 0.0012775177458325688;
                  } else {
                    result[0] += 4.023230087441653e-06;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.18820315011250699) ) ) {
                    result[0] += 0.006654027615301582;
                  } else {
                    result[0] += -0.0008533174221509707;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9207000000000000739) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.38379705400982189) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3786500000000000421) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.326490713587487935) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)92.51656411757237208) ) ) {
                result[0] += 0.0017457047648983919;
              } else {
                result[0] += -0.003988433689080785;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.501700680272109345) ) ) {
                result[0] += 0.0038172440161137033;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05705000000000001042) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                    result[0] += 0.0012356529127359667;
                  } else {
                    result[0] += -0.0042978773483394045;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6827000000000001956) ) ) {
                    result[0] += 0.0011665559850957269;
                  } else {
                    result[0] += 0.002787094989040288;
                  }
                }
              }
            }
          } else {
            result[0] += -0.002849148339844421;
          }
        } else {
          result[0] += -0.002472638293919505;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1415.504208660328004) ) ) {
          result[0] += 0.0016507287189340848;
        } else {
          result[0] += 0.00601168076531587;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1086385441254854312) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02267788138525016553) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2197.008210486540975) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3303.87952810574825) ) ) {
              result[0] += -0.0008211311956040946;
            } else {
              result[0] += 0.00281763118097272;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4652.199036657647412) ) ) {
              result[0] += -0.0009119765857731869;
            } else {
              result[0] += -0.0026906825132509745;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002350000000000000092) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.85584415584416718) ) ) {
              result[0] += 0.008199319697717854;
            } else {
              result[0] += -0.0001512777605148028;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5164445000000000841) ) ) {
              result[0] += 0.0024336927688369306;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3396.060442531631452) ) ) {
                result[0] += -0.00023816766145752757;
              } else {
                result[0] += -0.0034000215822092414;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06675000000000001765) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)113.4891304347826235) ) ) {
              result[0] += 0.0016194371097454161;
            } else {
              result[0] += -0.0016616036312032771;
            }
          } else {
            result[0] += 0.0037226009403303058;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3931450000000000777) ) ) {
            result[0] += -0.008828430081466523;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5169.137920194380968) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7224.572194877482616) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12763.40579176873143) ) ) {
                  result[0] += 0.0011428256725826698;
                } else {
                  result[0] += -0.005568567522462235;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7356605000000001615) ) ) {
                  result[0] += 0.008848846778559164;
                } else {
                  result[0] += 0.0027476124658836676;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.03333333333333854) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0590500000000000122) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02265000000000000346) ) ) {
                    result[0] += -0.0011966730866470568;
                  } else {
                    result[0] += 0.0022144148838295534;
                  }
                } else {
                  result[0] += -0.004784032278440922;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
                  result[0] += -0.001569686001276243;
                } else {
                  result[0] += -0.012071921723796153;
                }
              }
            }
          }
        }
      }
    } else {
      result[0] += 0.004947174801654161;
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.450900000000000023) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2151073141463651639) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5891.981688076555656) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15387.68558542448773) ) ) {
          result[0] += -0.0008363712982052451;
        } else {
          result[0] += -0.008296953792076504;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07475000000000002476) ) ) {
          result[0] += -0.002432227343657448;
        } else {
          result[0] += 0.0020699544931284185;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2257330354602715417) ) ) {
        result[0] += 0.009604168329966514;
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4385500000000000509) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2156942646659316121) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6533511457093607033) ) ) {
              result[0] += -0.00671344234132105;
            } else {
              result[0] += 9.77638341116886e-05;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3958771599324090729) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3653893359693760057) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01505000000000000261) ) ) {
                  result[0] += 0.005218008384053129;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1626000000000000223) ) ) {
                    result[0] += -0.00477812911236442;
                  } else {
                    result[0] += 0.0033494190416784417;
                  }
                }
              } else {
                result[0] += 0.00927667350732843;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4154419428488258514) ) ) {
                result[0] += -0.0054661431818242845;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3777078305615261811) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0801500000000000129) ) ) {
                    result[0] += 0.0036710646053540325;
                  } else {
                    result[0] += -0.0012601627525139125;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3896731296988180104) ) ) {
                    result[0] += 0.0032367554585699867;
                  } else {
                    result[0] += 0.00016034206872847555;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8098.539324017688159) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500000000000503) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.75461600214076086) ) ) {
                result[0] += 0.004832619811139018;
              } else {
                result[0] += -0.003282506245025762;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4275000000000000466) ) ) {
                result[0] += 0.014299232355680475;
              } else {
                result[0] += 0.0001103541320667553;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6216068849656636308) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5908139956411030402) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4664.784318267557865) ) ) {
                  result[0] += -0.0026906573148214696;
                } else {
                  result[0] += 0.0015992341051724735;
                }
              } else {
                result[0] += -0.007912159524168913;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4434500000000000663) ) ) {
                result[0] += 0.007176600566317135;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6618093422766974099) ) ) {
                  result[0] += 0.002518011347579132;
                } else {
                  result[0] += -0.0027800696457562757;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4574500000000000788) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04265000000000000041) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5710214034532944405) ) ) {
          result[0] += 0.0026251876534272374;
        } else {
          result[0] += -0.0006521062383437904;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3166500000000000425) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6451728482409898602) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1821500000000000341) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09900000000000001854) ) ) {
                result[0] += -0.0048501528231389285;
              } else {
                result[0] += 0.0028139455991722452;
              }
            } else {
              result[0] += -0.007187811951335073;
            }
          } else {
            result[0] += -0.009060391577298318;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
            result[0] += -0.005528454673488905;
          } else {
            result[0] += 0.004973166523716878;
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14109.36047608618719) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4218.792795401183866) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5544758402383391793) ) ) {
            result[0] += -0.010089791649477738;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.73128342245989408) ) ) {
              result[0] += -0.0059564691885655935;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.21641156462585442) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.62202380952381198) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.23919669735304952) ) ) {
                    result[0] += 0.006139800897503722;
                  } else {
                    result[0] += -0.0016523491049725539;
                  }
                } else {
                  result[0] += 0.00914078712278943;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.60043296587724726) ) ) {
                  result[0] += -0.007268840348050863;
                } else {
                  result[0] += 0.000987934878450504;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4722.925910272198053) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.57259953161593202) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5480226986128626798) ) ) {
                result[0] += -0.00254296676406799;
              } else {
                result[0] += 0.0041914209435179066;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.09737269772481483) ) ) {
                result[0] += 0.021948806275168042;
              } else {
                result[0] += 0.001965339319502419;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4723500000000000476) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1237500000000000128) ) ) {
                result[0] += -0.0031697792527073786;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4011018767401447471) ) ) {
                  result[0] += 0.015302130453726356;
                } else {
                  result[0] += 0.0032582478340364446;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-18722.62916807730289) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3786500000000000421) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4380734778181184508) ) ) {
                    result[0] += 0.00010570633059065544;
                  } else {
                    result[0] += 0.004878059276810076;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4275000000000000466) ) ) {
                    result[0] += -0.004072854209556012;
                  } else {
                    result[0] += -0.0003564362295665623;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4969.322965716292856) ) ) {
                  result[0] += -0.006530774676194247;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5357.523801430734238) ) ) {
                    result[0] += 0.010018200392842356;
                  } else {
                    result[0] += 0.0013049644266997175;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.59508740204942789) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.14549731182795789) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4011018767401447471) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3896731296988180104) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3977500000000001035) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3874000000000000221) ) ) {
                    result[0] += -2.6406191215927628e-05;
                  } else {
                    result[0] += -0.006686915415629512;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.265006002400961727) ) ) {
                    result[0] += -0.0019548091629518886;
                  } else {
                    result[0] += 0.002455708326840695;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1366.16280735785358) ) ) {
                  result[0] += 0.009213574452282453;
                } else {
                  result[0] += 0.001422419748036116;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8334.031066467961864) ) ) {
                result[0] += 0.005224060075024055;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6267.378546571134393) ) ) {
                  result[0] += -0.014818427866268696;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2723500000000000365) ) ) {
                    result[0] += -0.0026816013503463995;
                  } else {
                    result[0] += 0.004941825132458002;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7302500000000001767) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3281000000000000028) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5169.137920194380968) ) ) {
                  result[0] += 0.016653908928077877;
                } else {
                  result[0] += 0.005447041730874129;
                }
              } else {
                result[0] += -0.000258029927765049;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5330.906933113767991) ) ) {
                result[0] += -0.008747220441585511;
              } else {
                result[0] += 0.002418474541095415;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12357.92113280423655) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.21641156462585442) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3136152341452576597) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.73252032520325372) ) ) {
                  result[0] += 0.0069961336510420925;
                } else {
                  result[0] += -0.0035879745952886676;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3953.814167494189405) ) ) {
                  result[0] += -0.004384834559313241;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1893500000000000461) ) ) {
                    result[0] += -0.008709033679886104;
                  } else {
                    result[0] += -0.014693351461761915;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4240352865681720762) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.48863636363636687) ) ) {
                    result[0] += -0.001421357351328795;
                  } else {
                    result[0] += 3.5551258061785034e-05;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8540.790452769679177) ) ) {
                    result[0] += -0.004608097145368286;
                  } else {
                    result[0] += -0.008431951271942987;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1527500000000000246) ) ) {
                  result[0] += -0.0020760425431681395;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5354827414836903499) ) ) {
                    result[0] += 0.00411011248490935;
                  } else {
                    result[0] += 0.007146682493224313;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2192871037289895186) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.79217479674796998) ) ) {
                result[0] += 0.008357711949008004;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5203.159600494148435) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.03528574333943801) ) ) {
                    result[0] += -0.002590047868036291;
                  } else {
                    result[0] += 0.003259064203623143;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2977699194230143953) ) ) {
                    result[0] += -0.0003492334138549927;
                  } else {
                    result[0] += -0.006267803763952448;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5266.471447463914046) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5251500000000001167) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.24337662337662458) ) ) {
                    result[0] += -0.005310592270010471;
                  } else {
                    result[0] += 0.0017921999349875862;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5573500000000001231) ) ) {
                    result[0] += -0.004682632575153133;
                  } else {
                    result[0] += -0.0016321871140573614;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5486.447841096402954) ) ) {
                  result[0] += 0.013125638625065229;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
                    result[0] += 0.002981889155431417;
                  } else {
                    result[0] += -0.004444103405380894;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)184.5543478260869676) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-64209.50517865573784) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3638500000000000623) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2305220000000000324) ) ) {
          result[0] += 0.009359777703295146;
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)64.72098214285715301) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3191480000000000428) ) ) {
              result[0] += 0.0005351958348967426;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4391930000000000556) ) ) {
                result[0] += 0.01097201418832056;
              } else {
                result[0] += 0.001212608171902029;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)140.9270833333333428) ) ) {
              result[0] += -0.002827629078976134;
            } else {
              result[0] += 0.0014821521147634768;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2977460000000000107) ) ) {
          result[0] += -0.0031791354973123827;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3931450000000000777) ) ) {
            result[0] += 0.003964532599918106;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10429.20586663455833) ) ) {
              result[0] += 0.0022728278567002605;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)23807.59772303205318) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5772832283623651195) ) ) {
                  result[0] += -0.0013466017447734482;
                } else {
                  result[0] += -0.0041847449085941875;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.17758620689655658) ) ) {
                  result[0] += 0.0010758209987146246;
                } else {
                  result[0] += -0.000984531698758698;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-55797.14682103950327) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)24923.86035082091621) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4995331520331520725) ) ) {
            result[0] += 0.0019615302685572662;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.33549783549783996) ) ) {
              result[0] += -0.0007632036916204229;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3018320000000000447) ) ) {
                result[0] += -0.0019194853965285683;
              } else {
                result[0] += -0.006141553580553781;
              }
            }
          }
        } else {
          result[0] += -0.005835069816770565;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-33595.95242623185186) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.92403846153846558) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1752500000000000446) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01695000000000000326) ) ) {
                result[0] += 0.0004968723397430328;
              } else {
                result[0] += 0.005366063835013719;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2933500000000000552) ) ) {
                result[0] += -0.005653741399075919;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.446650000000000047) ) ) {
                  result[0] += 0.003473155322065467;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4212533942858654457) ) ) {
                    result[0] += 0.0011176710984830529;
                  } else {
                    result[0] += -0.003911617608737497;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5438275000000001302) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.44097222222222499) ) ) {
                result[0] += 0.00653396153590741;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4705165000000000597) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4337075000000000791) ) ) {
                    result[0] += 0.0002791626335784487;
                  } else {
                    result[0] += 0.007191859048374656;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3770898412903186947) ) ) {
                    result[0] += -0.0005859966429704071;
                  } else {
                    result[0] += -0.005651937791809241;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-39813.79238308515778) ) ) {
                result[0] += 0.002213992915954169;
              } else {
                result[0] += 0.010276276145174214;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-32503.51492044490442) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.08304056212073618) ) ) {
              result[0] += -0.007272696344563685;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1893500000000000461) ) ) {
                result[0] += 0.0032046145937367106;
              } else {
                result[0] += -0.0031992699748405276;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29973.18077780933891) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5034195000000000197) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.79220779220780457) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8540.790452769679177) ) ) {
                    result[0] += 0.00124232218380057;
                  } else {
                    result[0] += 0.01254193519878005;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)50.56746031746032344) ) ) {
                    result[0] += -0.003979317285378882;
                  } else {
                    result[0] += 0.002418471731565203;
                  }
                }
              } else {
                result[0] += -0.003178500749923859;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11901.15478194124989) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11385.5555937579793) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-21389.24849911775891) ) ) {
                    result[0] += -0.0007465410096208563;
                  } else {
                    result[0] += 2.3973176023213677e-05;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.64611005692600187) ) ) {
                    result[0] += 0.0012312602825415337;
                  } else {
                    result[0] += 0.011460327590211502;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12974.91888855271645) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1821500000000000341) ) ) {
                    result[0] += -0.006100727300521109;
                  } else {
                    result[0] += -0.0007878214317795323;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)74.39148936170214199) ) ) {
                    result[0] += 0.0015014070646449595;
                  } else {
                    result[0] += -0.0008574983923664982;
                  }
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.80322580645161779) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11538.33154189746892) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0475712373302734845) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03748475326359510668) ) ) {
            result[0] += 0.0022807938521514446;
          } else {
            result[0] += -0.0015116674931729013;
          }
        } else {
          result[0] += 0.008790184602065374;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)275.2226890756302851) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6186.11782883037813) ) ) {
            result[0] += -0.005588901424938274;
          } else {
            result[0] += -0.0005217639064264361;
          }
        } else {
          result[0] += 0.000849103491542198;
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.57027972027972496) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2711220000000000296) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1173820000000000141) ) ) {
            result[0] += -0.0018219209747504551;
          } else {
            result[0] += 0.001686978573370582;
          }
        } else {
          result[0] += -0.006117978378168425;
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-303065.7934048865573) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1163.375000000000227) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2427990000000000148) ) ) {
              result[0] += -0.0016974604243495742;
            } else {
              result[0] += 0.00782032137483266;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4524500000000000743) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)139.8343653250774139) ) ) {
                result[0] += 0.0015823251983962843;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3242675000000000418) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2004115000000000202) ) ) {
                    result[0] += -0.0004324313321040022;
                  } else {
                    result[0] += -0.0035942103381546827;
                  }
                } else {
                  result[0] += 0.002404202093520178;
                }
              }
            } else {
              result[0] += -0.003170356052677686;
            }
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1840640000000000331) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4214500000000000468) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07055048397203854404) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)53.43712121212121957) ) ) {
                  result[0] += -0.003034310595265827;
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.2291666666666667129) ) ) {
                    result[0] += -0.0012484539340177373;
                  } else {
                    result[0] += 0.0008933815860720553;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.6458333333333333703) ) ) {
                    result[0] += -2.5130608823020093e-05;
                  } else {
                    result[0] += 0.0014730329290330395;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3714418462289422185) ) ) {
                    result[0] += 0.0001755816825989404;
                  } else {
                    result[0] += -0.002490289501733886;
                  }
                }
              }
            } else {
              result[0] += 0.0028372698478231133;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.69425511197663425) ) ) {
              result[0] += 0.0028872178212386132;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0872500000000000081) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4833440790887599814) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)18578.6629724865561) ) ) {
                    result[0] += -0.007406084205145094;
                  } else {
                    result[0] += -0.002772394171308165;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3325265000000000581) ) ) {
                    result[0] += -0.0029307560029344106;
                  } else {
                    result[0] += 0.0012006261336068196;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2214874552651933948) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-55797.14682103950327) ) ) {
                    result[0] += 0.001657769973749263;
                  } else {
                    result[0] += -0.0033812264921621537;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-47466.75880997419154) ) ) {
                    result[0] += -0.0008104975029126838;
                  } else {
                    result[0] += 0.0017563454675767907;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10498759988977824) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.69570538495772283) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7903.503055055340155) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66515151515151771) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2022.266193993530806) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.27951388888889106) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.74434389140271584) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.29760031471282566) ) ) {
                    result[0] += -4.680950309049809e-05;
                  } else {
                    result[0] += -0.002354189275878339;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3468.465314767739983) ) ) {
                    result[0] += 0.0047878845483474205;
                  } else {
                    result[0] += -0.0005471574672016824;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4972.713039862052938) ) ) {
                  result[0] += 0.008912801923557931;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3396.060442531631452) ) ) {
                    result[0] += -0.02140717947792931;
                  } else {
                    result[0] += -0.0024667810946361786;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1035.301558117577088) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7045782027770501887) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                    result[0] += 0.004607951019480281;
                  } else {
                    result[0] += -0.004114161263463232;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3129500000000000615) ) ) {
                    result[0] += 0.0042152515785421635;
                  } else {
                    result[0] += -0.0025830639437752416;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1467.679265218292812) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02475000000000000464) ) ) {
                    result[0] += -0.0016782012668723374;
                  } else {
                    result[0] += 0.006622729827768112;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1604.502677974852759) ) ) {
                    result[0] += -0.005622358269893732;
                  } else {
                    result[0] += 0.0011181532371754201;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2221.82791069670111) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.504385964912282603) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2163.442343789042752) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2197.008210486540975) ) ) {
                    result[0] += -0.002281656875884781;
                  } else {
                    result[0] += 0.0022146777332818666;
                  }
                } else {
                  result[0] += 0.004333418599764733;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6130430000000001156) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1810809162147536122) ) ) {
                    result[0] += -0.01047364705574374;
                  } else {
                    result[0] += -0.00241263346904032;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.29760031471282566) ) ) {
                    result[0] += -0.0039526824832841565;
                  } else {
                    result[0] += 0.0012766368776670764;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2274.959778437426849) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7862500000000001155) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1691505514173692326) ) ) {
                    result[0] += -0.0008005714112685983;
                  } else {
                    result[0] += 0.004111452484706361;
                  }
                } else {
                  result[0] += 0.007382047532271948;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2329.403618021861803) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4820105000000000639) ) ) {
                    result[0] += -0.011798411060932075;
                  } else {
                    result[0] += -0.0002056194484234249;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1086385441254854312) ) ) {
                    result[0] += 0.0016262847565676783;
                  } else {
                    result[0] += -0.0003803104547409562;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346500000000000197) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2482395000000000296) ) ) {
                result[0] += -0.0057496612068720955;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2996690000000000187) ) ) {
                  result[0] += 0.010054361070678874;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03025000000000000258) ) ) {
                    result[0] += -0.0014537261947400147;
                  } else {
                    result[0] += 0.0025509165300871745;
                  }
                }
              }
            } else {
              result[0] += 0.01733174874292487;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3056000000000000383) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289080946470230471) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2836.592125003699493) ) ) {
                  result[0] += 0.006570787151939966;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7976.948351077033294) ) ) {
                    result[0] += 0.0003935435516343001;
                  } else {
                    result[0] += -0.004357618128944351;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.02658071352879077) ) ) {
                  result[0] += -0.010686881651840422;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2367000000000000492) ) ) {
                    result[0] += -0.0034111772689605895;
                  } else {
                    result[0] += -0.0072949767940950015;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2659091360976169605) ) ) {
                result[0] += -0.0008074384490261046;
              } else {
                result[0] += 0.005866895890572607;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.638350000000000084) ) ) {
          result[0] += 0.0020189229816306464;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.553444000000000158) ) ) {
            result[0] += -0.00734933899765383;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9640.380337645368854) ) ) {
              result[0] += -0.004313228157097623;
            } else {
              result[0] += -0.00010349842597163175;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3035.449605533378872) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2966.685986956896613) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1807.764080503680134) ) ) {
            result[0] += -0.003434948130017083;
          } else {
            result[0] += -0.009647541378712673;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3544845000000000357) ) ) {
            result[0] += -0.0026630603175950935;
          } else {
            result[0] += 0.0009682514039715186;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7619500000000001272) ) ) {
          result[0] += 0.003784061254936966;
        } else {
          result[0] += -0.0032674706718930206;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33392018779342791) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3668185000000000473) ) ) {
        result[0] += 0.012136218856301933;
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2161500000000000365) ) ) {
          result[0] += 0.00501216139349795;
        } else {
          result[0] += -0.004631056918905757;
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1786.988107982415613) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3127769248817890424) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.335234307533840481) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1691505514173692326) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1386088498927906809) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1963.811816770965606) ) ) {
                  result[0] += 0.008043354774750173;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.96720430107527378) ) ) {
                    result[0] += 0.004908246457493595;
                  } else {
                    result[0] += -0.0020441575423881062;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04385000000000000703) ) ) {
                    result[0] += -0.004696955890059482;
                  } else {
                    result[0] += -0.011918502043645895;
                  }
                } else {
                  result[0] += 7.20895067284865e-05;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06205000000000000793) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2715324643853566089) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.63961038961039662) ) ) {
                    result[0] += 0.006472736449396073;
                  } else {
                    result[0] += -0.0036149033414314075;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2041194872788455739) ) ) {
                    result[0] += -0.010348499510024206;
                  } else {
                    result[0] += 4.2734874625585635e-05;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2098806409843902709) ) ) {
                  result[0] += 0.010232479979189767;
                } else {
                  result[0] += 0.0033436545993491156;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1273.44963587212419) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2076236950652520508) ) ) {
                result[0] += -0.008665721265185654;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4979840000000000377) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1035.301558117577088) ) ) {
                    result[0] += 0.004101404271707052;
                  } else {
                    result[0] += -0.0030471035433425986;
                  }
                } else {
                  result[0] += 0.007918140131939934;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5601305000000001977) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4411580000000000501) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3346.223713336835317) ) ) {
                    result[0] += -0.0012915631823358763;
                  } else {
                    result[0] += -0.008448894900767352;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2681861478904534191) ) ) {
                    result[0] += -0.018469234574612563;
                  } else {
                    result[0] += -0.00580735426679049;
                  }
                }
              } else {
                result[0] += 0.0008257750519863019;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2310500000000000331) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5327191796258734513) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.79423076923077573) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1604.502677974852759) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
                    result[0] += -0.0015417398066718967;
                  } else {
                    result[0] += 0.008167534180838607;
                  }
                } else {
                  result[0] += 0.014379728736792875;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3752770000000000272) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
                    result[0] += 0.0017151038483569346;
                  } else {
                    result[0] += -0.0014754323407413943;
                  }
                } else {
                  result[0] += -0.004598200130597292;
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.47809523809523924) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2468.165232770545572) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3084.240859710316272) ) ) {
                    result[0] += -0.0027985578566275247;
                  } else {
                    result[0] += -0.010510302046823034;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3630500000000000393) ) ) {
                    result[0] += -0.0007583434477451694;
                  } else {
                    result[0] += 0.005234415807573788;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1586.824366997087736) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9430194805194805907) ) ) {
                    result[0] += 0.0009813798864017258;
                  } else {
                    result[0] += -0.0022270075274784568;
                  }
                } else {
                  result[0] += -0.004467750861938592;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1312.224607273150696) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.76676186590507811) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3544845000000000357) ) ) {
                  result[0] += 0.004038733949506979;
                } else {
                  result[0] += 0.012059761403038882;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2565500000000000558) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7961059747699177347) ) ) {
                    result[0] += 0.012627752283626571;
                  } else {
                    result[0] += -0.0014320686372766669;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6289617284540625075) ) ) {
                    result[0] += -0.0062907516448786616;
                  } else {
                    result[0] += 0.00029323619960928374;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.07146908678389963) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7224.572194877482616) ) ) {
                  result[0] += 0.0038864390711510132;
                } else {
                  result[0] += 0.026554029020796736;
                }
              } else {
                result[0] += -0.0032795535145357965;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1968.533804460251531) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2458590534979424036) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1895.084169001929013) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2842505000000000726) ) ) {
                result[0] += 0.0011563848027900574;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.34850948509485491) ) ) {
                  result[0] += -0.00280074767051474;
                } else {
                  result[0] += -0.01197186331192541;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8089500000000001689) ) ) {
                result[0] += -0.0018135468553281216;
              } else {
                result[0] += 0.00523383656883197;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3600110000000000809) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3292335000000000678) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5508500000000001728) ) ) {
                  result[0] += 0.008557751283222675;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2553.815469141473386) ) ) {
                    result[0] += -0.003304206437370637;
                  } else {
                    result[0] += 0.005045953909866122;
                  }
                }
              } else {
                result[0] += -0.005465806981823961;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3645.188716455099438) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3604886952753205698) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.16323529411765136) ) ) {
                    result[0] += -0.0009723548864461991;
                  } else {
                    result[0] += 0.007869542873085873;
                  }
                } else {
                  result[0] += 0.013996928287011195;
                }
              } else {
                result[0] += 0.025113208715053816;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.96720430107527378) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3096000000000000418) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1294500000000000373) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4503745000000000664) ) ) {
                  result[0] += -0.002418458083809885;
                } else {
                  result[0] += 0.003981020954161322;
                }
              } else {
                result[0] += 0.011536288570933277;
              }
            } else {
              result[0] += -0.005194968846272499;
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.15454545454545965) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8133500000000001284) ) ) {
                result[0] += -0.008543298074160046;
              } else {
                result[0] += 0.0013797849601708534;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09725000000000001699) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.292095000000000049) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.24542300000000003) ) ) {
                    result[0] += -2.8832843395794336e-05;
                  } else {
                    result[0] += -0.0012156982035805412;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2960395000000000665) ) ) {
                    result[0] += 0.009048309157982184;
                  } else {
                    result[0] += 0.0005494925941614562;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1448500000000000343) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.46688034188034422) ) ) {
                    result[0] += -0.0066647336478186095;
                  } else {
                    result[0] += -0.0005948260846901157;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.775242712123145) ) ) {
                    result[0] += 0.0001818101320578429;
                  } else {
                    result[0] += -0.0028817492863079455;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9092500000000002247) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.906550000000000078) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002350000000000000092) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.476627348186981603) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5967355000000001963) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06212817787824550381) ) ) {
              result[0] += 0.0058530717166794324;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.459748843357567827) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.080650406504065186) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3838015000000000732) ) ) {
                    result[0] += 0.0021070623004244286;
                  } else {
                    result[0] += -0.0028442186007925133;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06340000000000002578) ) ) {
                    result[0] += 0.0072189497741650495;
                  } else {
                    result[0] += 0.0012906834783115127;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.624854312354312436) ) ) {
                  result[0] += -0.004334340202016698;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1131695334055241864) ) ) {
                    result[0] += -0.0015916981910244312;
                  } else {
                    result[0] += 0.0018973844936406236;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.345490716180373525) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.734790763099285149) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9605980159284618347) ) ) {
                  result[0] += -0.004018174733320704;
                } else {
                  result[0] += 0.001047777806569875;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.650157000000000096) ) ) {
                  result[0] += -0.0014472593459347789;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.795073692711489421) ) ) {
                    result[0] += 0.0022946398728243013;
                  } else {
                    result[0] += 0.00010402135275023284;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.813466494845362931) ) ) {
                result[0] += -0.0060164503335675915;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7144390000000001573) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.8269148480958517) ) ) {
                    result[0] += 0.006602555234180481;
                  } else {
                    result[0] += -0.002523394248000757;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2836.592125003699493) ) ) {
                    result[0] += -0.0064353246276361445;
                  } else {
                    result[0] += -0.00012790981987048587;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8835500000000000576) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.903993855606759045) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.95916666666667005) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.416344086021505966) ) ) {
                  result[0] += -0.002443179156064158;
                } else {
                  result[0] += -0.01176612988998153;
                }
              } else {
                result[0] += 0.0019333091398515505;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.608333333333333837) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1924404709589289386) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.021627906976744438) ) ) {
                    result[0] += 0.0035549789149269878;
                  } else {
                    result[0] += -0.0015670721486344935;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.385685967107739669) ) ) {
                    result[0] += 0.00743831802273923;
                  } else {
                    result[0] += 0.0010451835689322983;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.865124740124740388) ) ) {
                  result[0] += -0.0052110327515856114;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001950000000000000127) ) ) {
                    result[0] += -0.00020727985330633617;
                  } else {
                    result[0] += -0.002861679147942655;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.08304056212073618) ) ) {
              result[0] += -0.010898328374750662;
            } else {
              result[0] += 0.0005312918929690762;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006350000000000000609) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.20633533276206828) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.402002926650814052) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7354420558372239958) ) ) {
                result[0] += -0.0025065545040602053;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08403493318258596634) ) ) {
                  result[0] += 0.00019795623626150643;
                } else {
                  result[0] += 0.0062206044435578174;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6292775000000000452) ) ) {
                result[0] += -0.007158842372748136;
              } else {
                result[0] += -0.002274908980525665;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4337075000000000791) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4114490000000000092) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3277444909504425019) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3083306738637045519) ) ) {
                    result[0] += 0.0013686403360437301;
                  } else {
                    result[0] += 0.010446270919351205;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4474500000000000699) ) ) {
                    result[0] += 0.0022052346291797486;
                  } else {
                    result[0] += -0.004591440516140857;
                  }
                }
              } else {
                result[0] += -0.007480554268626733;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4156551824015537466) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4131013443293440335) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7114500000000001378) ) ) {
                    result[0] += 0.0003981066265434563;
                  } else {
                    result[0] += 0.006703818845009231;
                  }
                } else {
                  result[0] += 0.009050043980852844;
                }
              } else {
                result[0] += -0.0019807488790660956;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006750000000000001658) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.858148893360161313) ) ) {
              result[0] += -0.006928872547508135;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2156942646659316121) ) ) {
                result[0] += 0.005939217797140638;
              } else {
                result[0] += -0.003692207747767681;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09637116304413635703) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.244758237056055705) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07571443317376934379) ) ) {
                    result[0] += 0.0007234136759196457;
                  } else {
                    result[0] += -0.005092524958381334;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.27475490196078578) ) ) {
                    result[0] += -0.006112223063463484;
                  } else {
                    result[0] += -0.011641455096061674;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3018320000000000447) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8789000000000001256) ) ) {
                    result[0] += -9.080695121540485e-05;
                  } else {
                    result[0] += -0.002156917268073108;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06795000000000002427) ) ) {
                    result[0] += 0.00943072875561287;
                  } else {
                    result[0] += -8.015581218164413e-05;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1172585597165276133) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06647167380074837928) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1151258696119916852) ) ) {
                    result[0] += -0.002373298186262857;
                  } else {
                    result[0] += 0.00395883558410517;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08165000000000001423) ) ) {
                    result[0] += 0.004523638078533729;
                  } else {
                    result[0] += -0.00012495773486513663;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9003500000000000947) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1233406754772393699) ) ) {
                    result[0] += -0.0029225096398544474;
                  } else {
                    result[0] += 2.653076178206053e-05;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8687.587824109948997) ) ) {
                    result[0] += 0.005478109019281517;
                  } else {
                    result[0] += -4.650907556397707e-05;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7701.814954046463754) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08712000899935153087) ) ) {
          result[0] += 0.0044870872778720785;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1380658852819209581) ) ) {
            result[0] += -0.0008953539378683892;
          } else {
            result[0] += 0.0029072932459044167;
          }
        }
      } else {
        result[0] += 0.007569891358951061;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1018125874525257907) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09637116304413635703) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09005480525100587053) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2594500000000000139) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9508000000000000895) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02533779707363225178) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4685515000000000652) ) ) {
                  result[0] += 0.009938558265212264;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5739275000000000349) ) ) {
                    result[0] += -0.0054498943956330734;
                  } else {
                    result[0] += 0.0031173648280021075;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.041987179487180448) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.854322937228583434) ) ) {
                    result[0] += -9.783066042074491e-05;
                  } else {
                    result[0] += 0.006445012379866273;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3600110000000000809) ) ) {
                    result[0] += 0.00040656024855829833;
                  } else {
                    result[0] += -0.005995300258266644;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)13763.95786997891082) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2558.400231127621282) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.48254401942926783) ) ) {
                    result[0] += -0.0013761155387371092;
                  } else {
                    result[0] += 0.005477689806023106;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2904.128485139186523) ) ) {
                    result[0] += -0.0060132389786748345;
                  } else {
                    result[0] += -0.0009209665619899889;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)20233.89840428002572) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7501045000000000629) ) ) {
                    result[0] += 0.004323118416492737;
                  } else {
                    result[0] += -0.0003189990484170559;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.01556210116731517566) ) ) {
                    result[0] += 0.0010165426328058733;
                  } else {
                    result[0] += -0.001129339999235246;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8283110000000001305) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06624646256753281837) ) ) {
                result[0] += 0.00042472383616721615;
              } else {
                result[0] += -0.007224604841739302;
              }
            } else {
              result[0] += 0.0009726162309687587;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.080540540540540828) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0419270344431006553) ) ) {
              result[0] += -0.0006789102817155243;
            } else {
              result[0] += 0.0022054607878547634;
            }
          } else {
            result[0] += -0.009527562236700843;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9247500000000000719) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5136625000000001329) ) ) {
            result[0] += 3.9518874898105294e-05;
          } else {
            result[0] += 0.007938214466992074;
          }
        } else {
          result[0] += -0.0008513100312929447;
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01763478653336062602) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.903993855606759045) ) ) {
          result[0] += 0.0015630966701351348;
        } else {
          result[0] += 0.0044324133189039714;
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1116920601014284448) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1803500000000000381) ) ) {
            result[0] += -0.010257337582780187;
          } else {
            result[0] += 0.0012608279067337464;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1233406754772393699) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02708747139162712148) ) ) {
              result[0] += -0.0017738129998147725;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6705900000000001304) ) ) {
                result[0] += 0.0006559869529610904;
              } else {
                result[0] += 0.005155268610199076;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)21270.70408175692864) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11901.15478194124989) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5601305000000001977) ) ) {
                  result[0] += 0.002762362493878758;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1380658852819209581) ) ) {
                    result[0] += -0.007208325551504682;
                  } else {
                    result[0] += -0.001975412429895966;
                  }
                }
              } else {
                result[0] += -0.009815505232979744;
              }
            } else {
              result[0] += 0.0015648138553087955;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3902.354245376167455) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3688.285112543364903) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3632.223837678870041) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2686500000000000554) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3958771599324090729) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5169.137920194380968) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2960395000000000665) ) ) {
                result[0] += -0.003040550563835781;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3653893359693760057) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6849.80118175048392) ) ) {
                    result[0] += -0.0033493112522315687;
                  } else {
                    result[0] += 0.004623751511932185;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1821500000000000341) ) ) {
                    result[0] += 0.01747205079170935;
                  } else {
                    result[0] += 0.002350064804675441;
                  }
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1900.973197986588957) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9308500000000000663) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1427700348432055788) ) ) {
                    result[0] += 0.005014871223976635;
                  } else {
                    result[0] += 0.00041327226995798734;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2395.919566910411959) ) ) {
                    result[0] += -0.006020786841615652;
                  } else {
                    result[0] += -0.0015411061906457806;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1827.122553020618625) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8238500000000000822) ) ) {
                    result[0] += -0.0009434312264789024;
                  } else {
                    result[0] += -0.009928013659405464;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1397500000000000409) ) ) {
                    result[0] += 3.8478651189922634e-06;
                  } else {
                    result[0] += -0.00318529243943446;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4058348495350315166) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.12185) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6130430000000001156) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4391930000000000556) ) ) {
                    result[0] += -0.0032819554296430937;
                  } else {
                    result[0] += -0.01586993074067001;
                  }
                } else {
                  result[0] += 0.002759555706507856;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6785500000000000975) ) ) {
                  result[0] += 0.008620444030251003;
                } else {
                  result[0] += -0.004629938495028502;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4664.784318267557865) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1780500000000000138) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1691500000000000503) ) ) {
                    result[0] += -0.0003908421456612971;
                  } else {
                    result[0] += 0.006583980661372541;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2134500000000000564) ) ) {
                    result[0] += 0.001938464045572213;
                  } else {
                    result[0] += -0.003140314972072785;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4131013443293440335) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3606.555973432984047) ) ) {
                    result[0] += 0.012062067875734505;
                  } else {
                    result[0] += 0.0009915958048630979;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4154419428488258514) ) ) {
                    result[0] += -0.0060839773483887995;
                  } else {
                    result[0] += 7.371254980803871e-05;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2866500000000000714) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.028850145288502382) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.785363700564971845) ) ) {
                result[0] += 0.0015719402731535223;
              } else {
                result[0] += -0.0039410496067236265;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.02658071352879077) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5641.056814807182491) ) ) {
                  result[0] += -3.975147286100987e-05;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4578375000000000639) ) ) {
                    result[0] += 0.015911933391733548;
                  } else {
                    result[0] += 0.0039008348197960467;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2221.82791069670111) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1035.301558117577088) ) ) {
                    result[0] += 0.002681810539132584;
                  } else {
                    result[0] += -0.0051054400706273505;
                  }
                } else {
                  result[0] += 0.008438071239352734;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2933500000000000552) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3263.750040760352022) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3752770000000000272) ) ) {
                  result[0] += -0.0025412214866511375;
                } else {
                  result[0] += -0.009696281287678974;
                }
              } else {
                result[0] += 0.0011958511921027395;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3062135551683158874) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3115.942419799886466) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2740.110132415889893) ) ) {
                    result[0] += -0.0019044862468442988;
                  } else {
                    result[0] += 0.0037777921668198785;
                  }
                } else {
                  result[0] += -0.00701427502514166;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6917500000000001981) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3786500000000000421) ) ) {
                    result[0] += 0.0011568072432081773;
                  } else {
                    result[0] += -0.00022467795151883497;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.79393939393940016) ) ) {
                    result[0] += 0.00031061050380470575;
                  } else {
                    result[0] += 0.006857316517860412;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09725000000000001699) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3838015000000000732) ) ) {
            result[0] += -0.0027675347074807588;
          } else {
            result[0] += 0.005141696124988481;
          }
        } else {
          result[0] += -0.00872206968863291;
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5346500000000000696) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5114794848757114876) ) ) {
          result[0] += 0.01964865506977452;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19208.54084854814937) ) ) {
            result[0] += 0.004100796194991631;
          } else {
            result[0] += -0.005199666955211796;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5908000000000001029) ) ) {
          result[0] += -0.009255805996476903;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6641.084587499458394) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3986689308614450034) ) ) {
              result[0] += 0.017500788365213717;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10747.17545795251317) ) ) {
                result[0] += 0.004563774117627862;
              } else {
                result[0] += -0.00529227924340646;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.23986928104575256) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.13831967213114815) ) ) {
                  result[0] += 0.0013558967823142458;
                } else {
                  result[0] += -0.0010821296052342451;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.158823480849580867) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3752770000000000272) ) ) {
                    result[0] += -0.003023537347180928;
                  } else {
                    result[0] += 0.003792862430981178;
                  }
                } else {
                  result[0] += 0.009533265489744312;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2626500000000001056) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.79261363636364734) ) ) {
                  result[0] += -0.010777312224677026;
                } else {
                  result[0] += -0.002092494452015634;
                }
              } else {
                result[0] += 0.002733535153286559;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4043.949467352171723) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5218480000000002006) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041500000000000065) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01565000000000000419) ) ) {
              result[0] += -0.002867139866591793;
            } else {
              result[0] += -0.009315227824452163;
            }
          } else {
            result[0] += 0.0032740088869023863;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2161500000000000365) ) ) {
            result[0] += 0.005286426993664647;
          } else {
            result[0] += 0.0013824758511738872;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.33161350844278559) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1874500000000000333) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0487500000000000086) ) ) {
              result[0] += -0.009011348246267314;
            } else {
              result[0] += 0.0048579718822949845;
            }
          } else {
            result[0] += -0.014628253443689457;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.67375886524823159) ) ) {
            result[0] += 0.005873667804258017;
          } else {
            result[0] += -0.0006892973766274825;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6424500000000000766) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6402500000000000968) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10160.34738444595678) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11761.67842346677571) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4722.925910272198053) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5451500000000001345) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3229585000000000927) ) ) {
                    result[0] += 0.005215349330678783;
                  } else {
                    result[0] += -0.0029615495187621716;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.18820315011250699) ) ) {
                    result[0] += 0.0035122218961774654;
                  } else {
                    result[0] += 0.012590831026402483;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5063.376429866547369) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5908139956411030402) ) ) {
                    result[0] += -0.0024526810592337893;
                  } else {
                    result[0] += -0.010179852530618622;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5486.447841096402954) ) ) {
                    result[0] += 0.002934159460425619;
                  } else {
                    result[0] += -8.53698750759472e-05;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4337075000000000791) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1294500000000000373) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5203.159600494148435) ) ) {
                    result[0] += -0.0020962807811493265;
                  } else {
                    result[0] += -0.006452485159343005;
                  }
                } else {
                  result[0] += -0.014266209952007296;
                }
              } else {
                result[0] += 0.0027161858010009395;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08575000000000000677) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3430250000000000798) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06555000000000001104) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.286523500000000042) ) ) {
                    result[0] += 0.0018462023844785754;
                  } else {
                    result[0] += -0.004296680012023662;
                  }
                } else {
                  result[0] += 0.01489913236285937;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04995000000000000828) ) ) {
                  result[0] += 0.016435707092356453;
                } else {
                  result[0] += 0.005874453169512065;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.86607142857144481) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4277.468016646671458) ) ) {
                  result[0] += 0.00550737508629957;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3566416580975863004) ) ) {
                    result[0] += -0.0038633266991081657;
                  } else {
                    result[0] += -0.013034558728676392;
                  }
                }
              } else {
                result[0] += 0.008724353057953575;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.69345238095239381) ) ) {
            result[0] += 0.011922291521143583;
          } else {
            result[0] += -0.0019930084854833754;
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9210.239199734849535) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2242439134084858454) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5138.591951859688379) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8671500000000000874) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7471500000000000918) ) ) {
                    result[0] += 0.001693033410243797;
                  } else {
                    result[0] += -0.005011635993545539;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5412680000000000824) ) ) {
                    result[0] += 0.007642635264206979;
                  } else {
                    result[0] += 0.0001496002415626555;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8940500000000001224) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4524.630590094714535) ) ) {
                    result[0] += -0.011201892163107002;
                  } else {
                    result[0] += -0.0019778428788771027;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8746480000000000921) ) ) {
                    result[0] += 0.0018993147679393777;
                  } else {
                    result[0] += -0.00319361101785646;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5203.159600494148435) ) ) {
                result[0] += -0.008464682089415943;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5330.906933113767991) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5793.249377164793259) ) ) {
                    result[0] += 3.898976400210832e-05;
                  } else {
                    result[0] += 0.0043423261126041895;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5111.874409617834317) ) ) {
                    result[0] += -0.005001615462998246;
                  } else {
                    result[0] += -0.000561446020955706;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8238500000000000822) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7114500000000001378) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6981500000000001593) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6872500000000001386) ) ) {
                    result[0] += -0.0006802536385643062;
                  } else {
                    result[0] += -0.004739593333357399;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8049.7773975009477) ) ) {
                    result[0] += 0.0046492031647302244;
                  } else {
                    result[0] += -0.004920190717845132;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9548.775787945038246) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.90736842105263804) ) ) {
                    result[0] += 0.001712996633908626;
                  } else {
                    result[0] += -0.002928102491687351;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2508523744426000568) ) ) {
                    result[0] += -0.00018682108495170126;
                  } else {
                    result[0] += -0.005015759490058392;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8488500000000001044) ) ) {
                result[0] += 0.009885413325279238;
              } else {
                result[0] += -0.0003992246658571111;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4955405000000000504) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)11901.15478194124989) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10923.85965081359973) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6934500000000000108) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-28911.59644960196238) ) ) {
                    result[0] += 0.0020537477493722317;
                  } else {
                    result[0] += -0.007892749815914193;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7471500000000000918) ) ) {
                    result[0] += 0.005073753528985531;
                  } else {
                    result[0] += -0.00014893996765637173;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2482395000000000296) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02475000000000000464) ) ) {
                    result[0] += 0.0004292439302198829;
                  } else {
                    result[0] += -0.003246329586399502;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3100855000000000694) ) ) {
                    result[0] += 0.020161429988355014;
                  } else {
                    result[0] += 0.0043509288434829905;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3379937171972570709) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3136152341452576597) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4801450000000000995) ) ) {
                    result[0] += -9.7130272524894e-05;
                  } else {
                    result[0] += 0.004203639219606914;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)20233.89840428002572) ) ) {
                    result[0] += -0.007569687960141933;
                  } else {
                    result[0] += -0.0012015245754501051;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3689335000000000808) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4650500000000000189) ) ) {
                    result[0] += -0.0006617073923493586;
                  } else {
                    result[0] += 0.007175316305111278;
                  }
                } else {
                  result[0] += 0.009593429409802443;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8560500000000000886) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0342500000000000096) ) ) {
                result[0] += -0.007507903220702818;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12314.72915242650379) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1527500000000000246) ) ) {
                    result[0] += 0.0008257762889571856;
                  } else {
                    result[0] += -0.0048062819233259495;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)21270.70408175692864) ) ) {
                    result[0] += 0.002342820008248928;
                  } else {
                    result[0] += -0.002756175509416788;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5006170000000000897) ) ) {
                result[0] += -0.005082923020177495;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5358140000000001235) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)96.58447802197802901) ) ) {
                    result[0] += 0.00711145164091157;
                  } else {
                    result[0] += 0.000867037960369507;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10669.02265293044911) ) ) {
                    result[0] += 0.0031350885118571863;
                  } else {
                    result[0] += -0.0002906203439618537;
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

