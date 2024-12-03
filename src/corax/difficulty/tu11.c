
#include "prediction.h"

void predict_unit11(union Entry* data, double* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0475712373302734845) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04126507918390250051) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9352500000000000258) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03953087405495988443) ) ) {
          result[0] += -0.005380468185066602;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8488500000000001044) ) ) {
            result[0] += -0.002040676208251487;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)338.662561576354733) ) ) {
              result[0] += 0.002762806420026666;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06647167380074837928) ) ) {
                result[0] += 0.0009009315896614668;
              } else {
                result[0] += -0.0015917687055536252;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9508000000000000895) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03027359610555290306) ) ) {
            result[0] += 0.012919122830225697;
          } else {
            result[0] += -9.29961070155523e-05;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2458.081396306326042) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9826500000000001345) ) ) {
              result[0] += 0.007840418577951858;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.02849025974025974281) ) ) {
                result[0] += -0.0013527133942481378;
              } else {
                result[0] += 0.0008725422348320687;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-929.333568598457191) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.968950000000000089) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02715000000000000399) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2703.412105777776105) ) ) {
                    result[0] += -0.003786301407569772;
                  } else {
                    result[0] += -0.00037239481837757606;
                  }
                } else {
                  result[0] += 0.0011663031721191046;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01225000000000000221) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                    result[0] += -0.0005907722513402646;
                  } else {
                    result[0] += 0.002494008444769814;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03324520994880592051) ) ) {
                    result[0] += -0.004187716439182948;
                  } else {
                    result[0] += 0.0018646757862319618;
                  }
                }
              }
            } else {
              result[0] += -0.0046196642982508414;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9427500000000000879) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.95875420875421469) ) ) {
          result[0] += 0.0035910790355994063;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01625000000000000402) ) ) {
            result[0] += -0.002860592968423263;
          } else {
            result[0] += 0.0013379917152494638;
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5078910000000002034) ) ) {
          result[0] += -0.01089338952544767;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2932.390892308531875) ) ) {
            result[0] += -0.004055440728381746;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8163.77012159581227) ) ) {
              result[0] += 0.002981099240034064;
            } else {
              result[0] += -0.0019607659818604026;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009944440127977462532) ) ) {
      result[0] += 0.003035320218999203;
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.953361000000000125) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.05533921706643565169) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.48331479421579715) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2740.110132415889893) ) ) {
              result[0] += -0.006122604257033487;
            } else {
              result[0] += -0.00011421975588126781;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05701861194901656354) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.023612328920421536) ) ) {
                result[0] += -4.5619792453031125e-05;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)10669.02265293044911) ) ) {
                  result[0] += 0.004492444378676508;
                } else {
                  result[0] += 0.013030815914637608;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009050000000000002487) ) ) {
                result[0] += 0.0018068701710248335;
              } else {
                result[0] += -0.0021247783155260705;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01611066591465903919) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9605000000000001315) ) ) {
              result[0] += 0.0055590171282557535;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1556.733319173369409) ) ) {
                result[0] += 0.0022748085438136006;
              } else {
                result[0] += -0.0018742701062071801;
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9247500000000000719) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03446328318850828271) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3792435000000000112) ) ) {
                  result[0] += 0.004879600771358798;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4725700000000001011) ) ) {
                    result[0] += -0.003885840328034668;
                  } else {
                    result[0] += 0.0012671693839888662;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9207000000000000739) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07464056384323641824) ) ) {
                    result[0] += -0.001306338842974868;
                  } else {
                    result[0] += 9.905448777253246e-06;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3509.586989430135418) ) ) {
                    result[0] += 0.009125321720824224;
                  } else {
                    result[0] += -0.002512229560533311;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2197.008210486540975) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3558.496385149145226) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2594500000000000139) ) ) {
                    result[0] += -0.0002936439684592271;
                  } else {
                    result[0] += -0.0031496987703240977;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4979840000000000377) ) ) {
                    result[0] += -0.011391243303744974;
                  } else {
                    result[0] += -0.002948810887075181;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4277.468016646671458) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004950000000000000407) ) ) {
                    result[0] += 0.003322593192989061;
                  } else {
                    result[0] += -0.0009468931425320895;
                  }
                } else {
                  result[0] += 0.0062021618801208515;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02533779707363225178) ) ) {
          result[0] += -0.005391169177580347;
        } else {
          result[0] += -0.0003678401389062534;
        }
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4725700000000001011) ) ) {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4660265000000000657) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6621500000000001274) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6149500000000001076) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4643995000000000206) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4621460000000000568) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8823.72194961022069) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9257.231014387447431) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4540995000000000448) ) ) {
                    result[0] += -1.0667891430812724e-05;
                  } else {
                    result[0] += 0.005615832987249313;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5736.278277745757805) ) ) {
                    result[0] += 0.0015529440608002165;
                  } else {
                    result[0] += 0.008271141279737066;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8215.850837031795891) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1969500000000000417) ) ) {
                    result[0] += -0.0003222749844552817;
                  } else {
                    result[0] += -0.004585973710405925;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5735500000000001153) ) ) {
                    result[0] += -1.6819328750073584e-05;
                  } else {
                    result[0] += -0.005397346678441325;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.49775381850854217) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3779.661346627155126) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3862.309036383199327) ) ) {
                    result[0] += -0.00039453604573894656;
                  } else {
                    result[0] += 0.005591933473608314;
                  }
                } else {
                  result[0] += -0.006939701110883887;
                }
              } else {
                result[0] += 0.011176303117872545;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2370.398064265408721) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7086000000000000076) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5802500000000001545) ) ) {
                  result[0] += -0.0025920326752084124;
                } else {
                  result[0] += -0.011990745344860932;
                }
              } else {
                result[0] += 0.0009138485460035704;
              }
            } else {
              result[0] += 0.004935616617236823;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.06527693244066057) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.24613422604814517) ) ) {
              result[0] += 0.0005014101287121103;
            } else {
              result[0] += 0.01001694431107791;
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9849.943538396060831) ) ) {
              result[0] += -0.007559956480694162;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)13763.95786997891082) ) ) {
                result[0] += 0.005981610386320235;
              } else {
                result[0] += 0.0005376880954590075;
              }
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11761.67842346677571) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1692.764967136799214) ) ) {
            result[0] += -0.004650489598391264;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4273892915217033517) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2725118062635197291) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-32503.51492044490442) ) ) {
                  result[0] += 0.0030596447395226612;
                } else {
                  result[0] += -0.0017447744510359787;
                }
              } else {
                result[0] += -0.006024871439232755;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22828.66277171849651) ) ) {
                result[0] += 0.0004919906356503722;
              } else {
                result[0] += 0.006744822124554347;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7317246774486193539) ) ) {
            result[0] += -0.006599630958174865;
          } else {
            result[0] += 0.00018765120954002332;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1296327801091326226) ) ) {
        result[0] += -0.00843864546290334;
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.50581395348837432) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1630.741360602702343) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)562.5854813206698282) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4705165000000000597) ) ) {
                result[0] += -0.0037153925210930863;
              } else {
                result[0] += 0.0014907627510847583;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3649912904309082773) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.42430441898527071) ) ) {
                  result[0] += 0.004992010073932662;
                } else {
                  result[0] += -0.0009564800253094474;
                }
              } else {
                result[0] += 0.007433948311552023;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2221.82791069670111) ) ) {
              result[0] += -0.0060177328791934034;
            } else {
              result[0] += -0.000959375576409727;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.31698564593302336) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.6605458221024314) ) ) {
              result[0] += 0.005341393639103572;
            } else {
              result[0] += 0.012645816228887344;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2132500000000000229) ) ) {
              result[0] += -0.005148643666952859;
            } else {
              result[0] += 0.005395880236395437;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4783005000000000728) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4131013443293440335) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12357.92113280423655) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.11758225232954507) ) ) {
            result[0] += 0.0012547349172484477;
          } else {
            result[0] += -0.008770483107881952;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0182500000000000058) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.02658071352879077) ) ) {
              result[0] += 0.0004957744868720036;
            } else {
              result[0] += -0.004658358819727612;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06065038394431352536) ) ) {
              result[0] += -0.0011256774299926988;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.08578431372549744) ) ) {
                result[0] += 0.007970063158165718;
              } else {
                result[0] += 0.0027922206191242937;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4833440790887599814) ) ) {
          result[0] += -0.01534001980956079;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5181399381581147656) ) ) {
            result[0] += 0.00420356873668864;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6791288143489402351) ) ) {
              result[0] += -0.008114673793137161;
            } else {
              result[0] += -0.0005470639634888657;
            }
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1860.92441007674438) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2159.388666833940533) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2838.225789746792998) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.126292728868830112) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1145938035574793623) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2966.685986956896613) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1071921241514602469) ) ) {
                    result[0] += -0.00036606400358096494;
                  } else {
                    result[0] += 0.0028723937119814655;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6705900000000001304) ) ) {
                    result[0] += 0.009451260807937916;
                  } else {
                    result[0] += 5.524836488477857e-05;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.05561224489796146) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2134.80121387119334) ) ) {
                    result[0] += -0.0036988821405052144;
                  } else {
                    result[0] += 0.0014586115175793122;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.33549783549783996) ) ) {
                    result[0] += -0.012323448993842547;
                  } else {
                    result[0] += -0.003416292070113817;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2042500000000000426) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7866.566150133202427) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6934500000000000108) ) ) {
                    result[0] += 0.001995810006529174;
                  } else {
                    result[0] += 0.011588021065485656;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.42430441898527071) ) ) {
                    result[0] += 0.0020908187629469907;
                  } else {
                    result[0] += -0.0012535120442112191;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1753821899233260206) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4780.79918261664443) ) ) {
                    result[0] += 0.0028659960858475717;
                  } else {
                    result[0] += -0.003410140637302564;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2041194872788455739) ) ) {
                    result[0] += -0.003548000311824651;
                  } else {
                    result[0] += 3.051345293712382e-05;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1102500000000000008) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5772832283623651195) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2775211666417710665) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9352500000000000258) ) ) {
                    result[0] += -6.957284299882255e-05;
                  } else {
                    result[0] += 0.00418530355879488;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1252.454359223710526) ) ) {
                    result[0] += 0.0006666605071504471;
                  } else {
                    result[0] += 0.00869173207762566;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.708030962747944415) ) ) {
                  result[0] += -0.002824200382316508;
                } else {
                  result[0] += -0.010166856730230546;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2670.194409694011938) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5931885000000001185) ) ) {
                  result[0] += -0.016938541019361437;
                } else {
                  result[0] += -0.0002485088720113358;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2022.266193993530806) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2224.476427414836053) ) ) {
                    result[0] += 0.0009640620029468157;
                  } else {
                    result[0] += -0.007485097446425805;
                  }
                } else {
                  result[0] += -0.009532805847176655;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)516.3318945478059732) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2933500000000000552) ) ) {
              result[0] += 0.012693103138404322;
            } else {
              result[0] += -0.0009128625555662892;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5988500000000001044) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2368203766333833171) ) ) {
                result[0] += 0.0009396096204688176;
              } else {
                result[0] += -0.009095961487595639;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8283110000000001305) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2192871037289895186) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5701575000000000948) ) ) {
                    result[0] += -0.00031140474830915194;
                  } else {
                    result[0] += 0.002320327410619757;
                  }
                } else {
                  result[0] += 0.006761469671269145;
                }
              } else {
                result[0] += -0.004492373318748982;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1827.122553020618625) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.813466494845362931) ) ) {
            result[0] += -0.00028735850328608965;
          } else {
            result[0] += -0.012836252786828555;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5190295000000001435) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5164445000000000841) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)1.00000001800250948e-35) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8968663066601212375) ) ) {
                  result[0] += 0.005801872782508482;
                } else {
                  result[0] += -0.00033391795831146993;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1656345976266143383) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.11177259235609803) ) ) {
                    result[0] += -0.001468963698108112;
                  } else {
                    result[0] += 0.002821335465884876;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08295000000000000984) ) ) {
                    result[0] += -0.006730445035354205;
                  } else {
                    result[0] += 0.00036670133380247886;
                  }
                }
              }
            } else {
              result[0] += -0.007158826087369182;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1689.611458188829374) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4156551824015537466) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3745321869304507056) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8106115000000001514) ) ) {
                    result[0] += 0.002648093742548827;
                  } else {
                    result[0] += -0.0017383127842296089;
                  }
                } else {
                  result[0] += -0.002700137898494819;
                }
              } else {
                result[0] += 0.0097920522777123;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1661.374751008663452) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6323505000000001486) ) ) {
                  result[0] += -0.012555149753494251;
                } else {
                  result[0] += 0.0004940980707860243;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5241315000000000834) ) ) {
                  result[0] += 0.003698887442806772;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1556.733319173369409) ) ) {
                    result[0] += -0.0017379607004937318;
                  } else {
                    result[0] += -4.551572098534248e-05;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.700000000000001066) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.193950000000000039) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.365726227795193815) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03025000000000000258) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.968950000000000089) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9253005000000000813) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-35.8874746089418224) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01145000000000000011) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004950000000000000407) ) ) {
                    result[0] += 0.000576223453575593;
                  } else {
                    result[0] += -0.0017347317448389388;
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.553444000000000158) ) ) {
                    result[0] += -4.905330901297007e-05;
                  } else {
                    result[0] += 0.0035696909203362585;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
                  result[0] += 0.000719052053190759;
                } else {
                  result[0] += -0.005361372375707244;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.953361000000000125) ) ) {
                result[0] += 0.004873334987563325;
              } else {
                result[0] += 0.0013983809381038373;
              }
            }
          } else {
            result[0] += -0.0033808098587400338;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03335000000000001158) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1617.156145847696735) ) ) {
              result[0] += -0.0020370170769483213;
            } else {
              result[0] += -0.007769573204272316;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5771835000000001825) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-663.4043224984577591) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.441816816816817948) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-970.1019205114903343) ) ) {
                    result[0] += -0.00020481927218483824;
                  } else {
                    result[0] += 0.005027116166748505;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3858855000000000479) ) ) {
                    result[0] += 0.002123315487972872;
                  } else {
                    result[0] += -0.00619014021981149;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8494243075500166329) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9172022279348758245) ) ) {
                    result[0] += -0.010659980302101852;
                  } else {
                    result[0] += -0.0026334238593867195;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8923726800623609234) ) ) {
                    result[0] += 0.005015300191776126;
                  } else {
                    result[0] += -0.0043906894974944845;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6170632668264560694) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.66280257606040438) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04565000000000000308) ) ) {
                    result[0] += -0.004445434941148655;
                  } else {
                    result[0] += -0.0007479941341125119;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09900000000000001854) ) ) {
                    result[0] += 0.0017310768792727096;
                  } else {
                    result[0] += -0.0011298467668293308;
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7144390000000001573) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
                    result[0] += 0.007449548929168857;
                  } else {
                    result[0] += 0.0004984665024247562;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8923726800623609234) ) ) {
                    result[0] += 0.0002106863533062926;
                  } else {
                    result[0] += -0.0011952447690891648;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3428.95033302068623) ) ) {
          result[0] += 0.004918702931292823;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4705165000000000597) ) ) {
            result[0] += -0.007553743519564437;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0590500000000000122) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2131075953897917097) ) ) {
                result[0] += -0.001975284425389867;
              } else {
                result[0] += -0.008588306153164684;
              }
            } else {
              result[0] += 0.0023361441815555974;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2132500000000000229) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.387675230458735864) ) ) {
          result[0] += 0.002229139918563496;
        } else {
          result[0] += 0.007180283864861294;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.365726227795193815) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.037345839847144013) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6533511457093607033) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.8255578093306295) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2651500000000000523) ) ) {
                    result[0] += -0.0033421697504135914;
                  } else {
                    result[0] += -0.0005407625505561074;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2284500000000000142) ) ) {
                    result[0] += 0.0038260957528776446;
                  } else {
                    result[0] += -0.00042162645625685226;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3743000000000000216) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-451.2355754647197159) ) ) {
                    result[0] += 0.01020622984307501;
                  } else {
                    result[0] += 0.0019197799116202673;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5075500000000000567) ) ) {
                    result[0] += 0.002201360617521584;
                  } else {
                    result[0] += -0.001898770473463782;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9354017638884142283) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.005850000000000000165) ) ) {
                  result[0] += -0.007612552345947269;
                } else {
                  result[0] += -0.0020817840724119134;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1381500000000000228) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3914215000000000333) ) ) {
                    result[0] += 0.005762831401322893;
                  } else {
                    result[0] += 0.00012799857018414983;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.529082259054634907) ) ) {
                    result[0] += 0.0005135994851371748;
                  } else {
                    result[0] += -0.0068190572674555515;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8226431302510440746) ) ) {
              result[0] += 0.0009932304294777872;
            } else {
              result[0] += -0.006278839327518523;
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3835500000000000576) ) ) {
            result[0] += 0.005391715979362343;
          } else {
            result[0] += -0.0003087077177819317;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.576757931334203278) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.459935897435898688) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.15064935064935181) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3229585000000000927) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2490000000000000269) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5589555053734368562) ) ) {
                result[0] += -0.0005563529500246179;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08575000000000000677) ) ) {
                  result[0] += 0.006828801620358374;
                } else {
                  result[0] += 0.004237346488295572;
                }
              }
            } else {
              result[0] += -0.001822585692729214;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4301635000000000875) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.416344086021505966) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.193950000000000039) ) ) {
                  result[0] += 0.00028042896243736477;
                } else {
                  result[0] += -0.0081911003863851;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4079010000000000136) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2724.737518907181311) ) ) {
                    result[0] += 0.005087210428330888;
                  } else {
                    result[0] += 0.0009254447905737054;
                  }
                } else {
                  result[0] += -0.0025998899116792163;
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4411580000000000501) ) ) {
                result[0] += 0.006148510098751345;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1360.735594309118596) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4131013443293440335) ) ) {
                    result[0] += -0.0010613315513154293;
                  } else {
                    result[0] += 0.0007016664243384785;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08054401739085483014) ) ) {
                    result[0] += 0.00046978759383744064;
                  } else {
                    result[0] += 0.0029647931012727474;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8968663066601212375) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2192000000000000337) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2619963990829793921) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.549626000000000059) ) ) {
                  result[0] += 0.00555360565168557;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8383500000000000396) ) ) {
                    result[0] += -0.0006333417677937604;
                  } else {
                    result[0] += -0.004366083522523088;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3489680000000000559) ) ) {
                  result[0] += -0.0012186693258105993;
                } else {
                  result[0] += -0.0060402203425876455;
                }
              }
            } else {
              result[0] += 0.003039672085148626;
            }
          } else {
            result[0] += -0.0045013099613576526;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4272223701248312189) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.754650000000000154) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6738500000000001711) ) ) {
              result[0] += 0.001284533970284048;
            } else {
              result[0] += -0.004355888458770747;
            }
          } else {
            result[0] += 0.003103794974359755;
          }
        } else {
          result[0] += 0.010933017983891317;
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.005617977528091345) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6498500000000001497) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5388695000000001123) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3558790000000000564) ) ) {
              result[0] += -0.0065590416439484205;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3757500000000000284) ) ) {
                result[0] += -0.004617924344038292;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2128690457793445678) ) ) {
                  result[0] += -0.0013978709116191591;
                } else {
                  result[0] += 0.004387951213797307;
                }
              }
            }
          } else {
            result[0] += -0.010713051500802241;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08183313046454290807) ) ) {
            result[0] += -0.002542877474767697;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1526.154173473093351) ) ) {
              result[0] += 0.005374527793359279;
            } else {
              result[0] += 0.0023033102423908806;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001550000000000000379) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2508523744426000568) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1962199642500267183) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1801279406462452659) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04411284851513137123) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.906550000000000078) ) ) {
                    result[0] += -0.006032943388724924;
                  } else {
                    result[0] += -0.00043211697116310617;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
                    result[0] += 0.0009690931048423353;
                  } else {
                    result[0] += -0.0022275510882543343;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.9791666666666668517) ) ) {
                  result[0] += -0.0008649704011642807;
                } else {
                  result[0] += -0.007530113608842243;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1332.881470937780705) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2046649341083811857) ) ) {
                  result[0] += 0.006270325611043423;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6934500000000000108) ) ) {
                    result[0] += 0.004043521036621453;
                  } else {
                    result[0] += -0.0029867700955599234;
                  }
                }
              } else {
                result[0] += 0.008476175994574337;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2921808083424245472) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2842505000000000726) ) ) {
                result[0] += -0.00011817774611372891;
              } else {
                result[0] += -0.008505834146397247;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6111500000000000821) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.343528074243838577) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4337075000000000791) ) ) {
                    result[0] += -0.002376973490590672;
                  } else {
                    result[0] += -0.008584434204279661;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
                    result[0] += 0.0004571152166418687;
                  } else {
                    result[0] += -0.005376662163712308;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2965509996887087385) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3062135551683158874) ) ) {
                    result[0] += 0.004254273003225687;
                  } else {
                    result[0] += -0.0017164678368144465;
                  }
                } else {
                  result[0] += 0.007543545514732238;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006350000000000000609) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004550000000000001092) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2996690000000000187) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2621735000000000593) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7471500000000000918) ) ) {
                    result[0] += -0.0017340508276095922;
                  } else {
                    result[0] += 0.0018149922800402504;
                  }
                } else {
                  result[0] += 0.008057317441127023;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4685515000000000652) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4240352865681720762) ) ) {
                    result[0] += -0.0050787356302188155;
                  } else {
                    result[0] += 0.0007455938622070842;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7328.62747050258622) ) ) {
                    result[0] += -0.0047290601020216995;
                  } else {
                    result[0] += 0.0014029210148640953;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3135840000000000294) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005650000000000001375) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2275235000000000174) ) ) {
                    result[0] += -0.0004024908035508227;
                  } else {
                    result[0] += 0.004467327302323702;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.665550000000000086) ) ) {
                    result[0] += 0.0004274811690912793;
                  } else {
                    result[0] += -0.004514735737056001;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3651455000000000672) ) ) {
                  result[0] += 0.011752146792651807;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.88483844241923038) ) ) {
                    result[0] += 0.0036718745342144113;
                  } else {
                    result[0] += -0.0016487512371859863;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008450000000000000913) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.0121430674124241) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1639.659224807193368) ) ) {
                  result[0] += -0.0018313423078131965;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2214874552651933948) ) ) {
                    result[0] += 0.0012258733468821794;
                  } else {
                    result[0] += 0.006166248905753264;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)38.641839080459782) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2494.752674487995591) ) ) {
                    result[0] += -0.0007155268826491737;
                  } else {
                    result[0] += -0.007753831710443367;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.08304056212073618) ) ) {
                    result[0] += 0.003804052611206636;
                  } else {
                    result[0] += -0.001601283325958449;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-663.4043224984577591) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1276.198284932604565) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2703.412105777776105) ) ) {
                    result[0] += -1.609479090656206e-06;
                  } else {
                    result[0] += 0.00044615591452053927;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4107361159622773816) ) ) {
                    result[0] += -0.001956232760610732;
                  } else {
                    result[0] += 0.0019281099678868582;
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.937500000000000111) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2244500000000000106) ) ) {
                    result[0] += -0.003688182414047563;
                  } else {
                    result[0] += 0.0008981804088198914;
                  }
                } else {
                  result[0] += 0.008648787331353668;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8968663066601212375) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2016500000000000237) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)134.6304347826087167) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.09618603538976878) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6022642703829196309) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4889554961668607369) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1383500000000000285) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7371304289733293658) ) ) {
                  result[0] += 0.0006697930566756051;
                } else {
                  result[0] += 0.00411761444732789;
                }
              } else {
                result[0] += -0.0018930227705435429;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-380.5196435007806031) ) ) {
                result[0] += -0.006766443866755142;
              } else {
                result[0] += -0.0014669984936433224;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4717290968772051563) ) ) {
              result[0] += -0.0035731670684964957;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.288941480206541534) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)19.4281725597490329) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.526463216865693751) ) ) {
                    result[0] += 0.0030599331683143546;
                  } else {
                    result[0] += -0.00022827611705231022;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04025000000000000105) ) ) {
                    result[0] += 0.006800975731618352;
                  } else {
                    result[0] += 0.0016825501046321596;
                  }
                }
              } else {
                result[0] += -0.0021588295198080726;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)404.5624623590170472) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2934.007013777737939) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1644500000000000128) ) ) {
                result[0] += 0.00654977644380187;
              } else {
                result[0] += 0.01198615482988663;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0734500000000000014) ) ) {
                result[0] += 0.0057750907195123335;
              } else {
                result[0] += -0.0028917181654561407;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6731225466545354141) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14721.55785436291444) ) ) {
                result[0] += 0.0018571968030599438;
              } else {
                result[0] += 0.008808435602056136;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.184936040256943768) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)778.083180876904521) ) ) {
                  result[0] += -0.004836996355110675;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.793653083354456057) ) ) {
                    result[0] += 0.0024384724671547937;
                  } else {
                    result[0] += -0.003034161230700571;
                  }
                }
              } else {
                result[0] += 0.0045508856212283675;
              }
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-76331.1691277182108) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01205000000000000168) ) ) {
            result[0] += 0.002273516964460573;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8923726800623609234) ) ) {
              result[0] += -0.0032120575236948847;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1245500000000000079) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17824.9451882581634) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1120500000000000107) ) ) {
                    result[0] += -9.212163116637041e-05;
                  } else {
                    result[0] += -0.0043168693084131154;
                  }
                } else {
                  result[0] += 0.0009051033736524672;
                }
              } else {
                result[0] += 0.0023432311512489564;
              }
            }
          }
        } else {
          result[0] += -0.005175130163998788;
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2244500000000000106) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1481.890421694704628) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3411500000000000088) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1102500000000000008) ) ) {
              result[0] += -0.0014682062563287418;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7554835062195935924) ) ) {
                result[0] += -0.011947418597500817;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2565500000000000558) ) ) {
                  result[0] += -0.0029184624405606935;
                } else {
                  result[0] += -0.007731207427430604;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9354017638884142283) ) ) {
              result[0] += 0.006233137899360259;
            } else {
              result[0] += -0.004206683090440679;
            }
          }
        } else {
          result[0] += 0.002837053792586906;
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.380182360511232664) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4272223701248312189) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4221117431024698496) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2646500000000000519) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3973737470478960754) ) ) {
                    result[0] += -0.007308120556294952;
                  } else {
                    result[0] += 0.000740954534675759;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)516.3318945478059732) ) ) {
                    result[0] += 0.001093030081958892;
                  } else {
                    result[0] += -5.658201371624692e-05;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1874500000000000333) ) ) {
                  result[0] += -0.007722944995384227;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6252724869141016439) ) ) {
                    result[0] += 0.0035547565471928198;
                  } else {
                    result[0] += -0.001126055413233816;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5025500000000000522) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4992000000000000326) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-663.4043224984577591) ) ) {
                    result[0] += 0.00032319876209648186;
                  } else {
                    result[0] += -0.0033056339223717607;
                  }
                } else {
                  result[0] += -0.008657841167049441;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5297127797323987197) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3432.582344911681957) ) ) {
                    result[0] += -0.001041615891059396;
                  } else {
                    result[0] += 0.002809276565914013;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.495352833984574914) ) ) {
                    result[0] += 0.012129570904457626;
                  } else {
                    result[0] += -0.001956830225933642;
                  }
                }
              }
            }
          } else {
            result[0] += -0.00399805129653152;
          }
        } else {
          result[0] += 0.005638524410869102;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9084995485512600277) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5419086073107369783) ) ) {
        result[0] += 0.002215500916419938;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8494243075500166329) ) ) {
          result[0] += -0.009066587827386842;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4248.335231464433491) ) ) {
            result[0] += -0.0036429106400489653;
          } else {
            result[0] += 0.0009486020298000189;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2016500000000000237) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1245500000000000079) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9172022279348758245) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.501700680272109345) ) ) {
              result[0] += -0.006807917537019462;
            } else {
              result[0] += 0.0009053258385571781;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.9345935333859788363) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.793653083354456057) ) ) {
                result[0] += 0.006473071174243807;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08825000000000000899) ) ) {
                  result[0] += 0.004134884845826718;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.774419091590062) ) ) {
                    result[0] += -0.00504231119743758;
                  } else {
                    result[0] += 0.0010568196763680899;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8692129219887744229) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8285405915168699842) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.594626313305680831) ) ) {
                    result[0] += 0.0010059793493400473;
                  } else {
                    result[0] += -0.002528199300716645;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2866500000000000714) ) ) {
                    result[0] += -0.008954540829731874;
                  } else {
                    result[0] += -0.0025730787465012735;
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5735500000000001153) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
                    result[0] += 0.00169643833332884;
                  } else {
                    result[0] += -0.0003055574187367613;
                  }
                } else {
                  result[0] += -0.0042704139375901035;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13449.94112542363109) ) ) {
            result[0] += 0.0018588366008881578;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4524500000000000743) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2347000000000000475) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1168500000000000094) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03255000000000000254) ) ) {
                    result[0] += -0.001971962785715095;
                  } else {
                    result[0] += -0.006365589074936452;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1794.783506543015164) ) ) {
                    result[0] += -0.002350261653905381;
                  } else {
                    result[0] += 0.004790475737080988;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.86811594202898767) ) ) {
                  result[0] += -0.006687660335822728;
                } else {
                  result[0] += -0.0024166511319116324;
                }
              }
            } else {
              result[0] += 0.0010670340040266296;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.344799119427628753) ) ) {
          result[0] += -0.0022983090146210168;
        } else {
          result[0] += 0.008602169178422483;
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.89237451737451856) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.75378787878788067) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15387.68558542448773) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2723500000000000365) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2367000000000000492) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.014709063378759879) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.819347319347319747) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07035000000000000975) ) ) {
                  result[0] += 0.0007410596498707064;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.0350985221674911) ) ) {
                    result[0] += -0.0002522323873732545;
                  } else {
                    result[0] += -0.004640271103648125;
                  }
                }
              } else {
                result[0] += 0.005120580868804779;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1237500000000000128) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2745899061051987888) ) ) {
                  result[0] += -0.003575257251048404;
                } else {
                  result[0] += -0.009980460566947541;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7767500000000001625) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7171.422813562979172) ) ) {
                    result[0] += 0.0004436515649960926;
                  } else {
                    result[0] += -0.009134831506743435;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)20233.89840428002572) ) ) {
                    result[0] += 0.006489207286078504;
                  } else {
                    result[0] += -0.000322638564693061;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.52255000000000007) ) ) {
              result[0] += -0.0006719399137990672;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4154419428488258514) ) ) {
                result[0] += -0.002407967799917228;
              } else {
                result[0] += -0.014332711515815371;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.5141620771046469) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5674000000000000155) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.095327520679633793) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.994444444444445352) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4274500000000000521) ) ) {
                    result[0] += 0.0015687116642665894;
                  } else {
                    result[0] += -0.0023281970354840633;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2932.390892308531875) ) ) {
                    result[0] += -0.005043328690194351;
                  } else {
                    result[0] += -0.00279361338290074;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3391483238137242839) ) ) {
                  result[0] += 0.005695629869671272;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.42430441898527071) ) ) {
                    result[0] += 0.005121784036177073;
                  } else {
                    result[0] += -0.00035971480681262557;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.704793028322441728) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)7701.814954046463754) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6637500000000001732) ) ) {
                    result[0] += 0.001761940940202634;
                  } else {
                    result[0] += -0.0010509538795380672;
                  }
                } else {
                  result[0] += -0.0023513988331180105;
                }
              } else {
                result[0] += -0.0105100596437347;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17824.9451882581634) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17110.8457892469487) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05701861194901656354) ) ) {
                  result[0] += 0.0013200538996623195;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.73863636363636687) ) ) {
                    result[0] += 0.0036120936433121234;
                  } else {
                    result[0] += 0.009399311221199198;
                  }
                }
              } else {
                result[0] += -0.0005557532835110667;
              }
            } else {
              result[0] += -0.0023136944701636557;
            }
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12763.40579176873143) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.2011904761904777) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5357.523801430734238) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4888543444488743783) ) ) {
                result[0] += 0.0072112968222973915;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1606500000000000428) ) ) {
                  result[0] += 0.005000989352602457;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3779.661346627155126) ) ) {
                    result[0] += 0.002040729639574336;
                  } else {
                    result[0] += -0.002346081508509183;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4273892915217033517) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                    result[0] += -0.0002829377710164849;
                  } else {
                    result[0] += -0.007304867219661926;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.12251407129456027) ) ) {
                    result[0] += -0.00021092068291567726;
                  } else {
                    result[0] += 0.008493087864645994;
                  }
                }
              } else {
                result[0] += -0.005904666607207064;
              }
            }
          } else {
            result[0] += 0.008691752033119818;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10562.87122396129962) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1294500000000000373) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.695048309178745605) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01505000000000000261) ) ) {
                  result[0] += 0.002580519346526954;
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11538.33154189746892) ) ) {
                    result[0] += -0.00028942078232320836;
                  } else {
                    result[0] += -0.005808170792561284;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1581026364170406151) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)9421.605627117181939) ) ) {
                    result[0] += -0.0016044609489749497;
                  } else {
                    result[0] += 0.004656139897625279;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07205000000000001681) ) ) {
                    result[0] += 0.0027880669482677587;
                  } else {
                    result[0] += 0.008472125505634354;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.35238095238095468) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.58876050420168369) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10747.17545795251317) ) ) {
                    result[0] += -0.0008076126161886385;
                  } else {
                    result[0] += -0.007543872392221331;
                  }
                } else {
                  result[0] += 0.006925869033597781;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.12251407129456027) ) ) {
                  result[0] += -0.001924701131583134;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.42980295566502669) ) ) {
                    result[0] += -0.013072605950649708;
                  } else {
                    result[0] += -0.007798380048695364;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8697.035538893813282) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5357.523801430734238) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1317028901634673399) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2526500000000000412) ) ) {
                    result[0] += -0.00992223077940471;
                  } else {
                    result[0] += 0.002652972812598947;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9120.266636749798636) ) ) {
                    result[0] += -0.0011562500904787774;
                  } else {
                    result[0] += 0.0034775342165409904;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)8049.7773975009477) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3209000000000000186) ) ) {
                    result[0] += 0.009242774599298098;
                  } else {
                    result[0] += -0.002334630903048049;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8976.618370129126561) ) ) {
                    result[0] += -0.0010556871014115626;
                  } else {
                    result[0] += 0.00626311404028458;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5138.591951859688379) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4913.352940143695378) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6267500000000001403) ) ) {
                    result[0] += -0.00019673112319220927;
                  } else {
                    result[0] += 0.0002218478001723102;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.27475490196078578) ) ) {
                    result[0] += -0.00032284255995800336;
                  } else {
                    result[0] += 0.008809028669883225;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1687573550250007492) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5266.471447463914046) ) ) {
                    result[0] += -0.006171059684548347;
                  } else {
                    result[0] += 0.00014522002647191922;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7767500000000001625) ) ) {
                    result[0] += -0.0004885260678994672;
                  } else {
                    result[0] += -0.006290980661602128;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.6605458221024314) ) ) {
        result[0] += 0.00134549911348152;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6200500000000001011) ) ) {
          result[0] += -0.012531332726065082;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12763.40579176873143) ) ) {
            result[0] += 0.0014803398447232742;
          } else {
            result[0] += -0.006102818082977;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.33573141486810876) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3220420529803963983) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2449000000000000343) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1180500000000000299) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1071921241514602469) ) ) {
              result[0] += 0.008722449987194172;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7813000000000001055) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1386088498927906809) ) ) {
                  result[0] += -0.009635611018560615;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.0225430597771048) ) ) {
                    result[0] += 7.885307759760934e-05;
                  } else {
                    result[0] += -0.004572889197776717;
                  }
                }
              } else {
                result[0] += 0.0018825071909535029;
              }
            }
          } else {
            result[0] += 0.010305700609428089;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1563924358960289418) ) ) {
            result[0] += 0.001077115065983868;
          } else {
            result[0] += -0.008379496424813618;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3959.4405165225985) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4702500000000000013) ) ) {
            result[0] += 0.0058798327394801965;
          } else {
            result[0] += 0.017376376102442904;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8132313610536542337) ) ) {
            result[0] += -0.0066270832909943;
          } else {
            result[0] += 0.006578839905674609;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-836.0042144475063424) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14444.10811475239643) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.46385017421602903) ) ) {
            result[0] += -0.004695143678714668;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.6113130395274915) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2899000000000000465) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.368560367816584411) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.239250000000000046) ) ) {
                    result[0] += 0.001504764664841213;
                  } else {
                    result[0] += 0.006685996744687009;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6903684837426190546) ) ) {
                    result[0] += -0.0042943111067373614;
                  } else {
                    result[0] += 0.0041413389198285255;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1355721953891439735) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3281000000000000028) ) ) {
                    result[0] += -0.010497290446628005;
                  } else {
                    result[0] += -0.0008774978809950586;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7317246774486193539) ) ) {
                    result[0] += 0.0009639662156621188;
                  } else {
                    result[0] += -0.004102466572863984;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3277444909504425019) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)12314.72915242650379) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2192000000000000337) ) ) {
                    result[0] += 0.018626059535278815;
                  } else {
                    result[0] += 0.0010724294507779507;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)17824.9451882581634) ) ) {
                    result[0] += 0.002136123094104244;
                  } else {
                    result[0] += -0.0004162613629554254;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3566416580975863004) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)48.49056603773585294) ) ) {
                    result[0] += -0.006880597639441293;
                  } else {
                    result[0] += 0.0002903156573532182;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6675000000000000933) ) ) {
                    result[0] += -0.0003659214908856931;
                  } else {
                    result[0] += 0.0032321239585864654;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2469500000000000306) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1998500000000000276) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13238.69636896185511) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.02208141321044721) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6017000000000000126) ) ) {
                    result[0] += -0.0026252122431411474;
                  } else {
                    result[0] += -0.009622916860500744;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2368203766333833171) ) ) {
                    result[0] += -0.003464985326079211;
                  } else {
                    result[0] += 0.0015715922697468667;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.79217479674796998) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4803413391557496692) ) ) {
                    result[0] += 0.006451137777195351;
                  } else {
                    result[0] += -0.0015564174126359873;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1466500000000000303) ) ) {
                    result[0] += -0.00045567949231894723;
                  } else {
                    result[0] += 0.0008386552038643473;
                  }
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6484.005380192698794) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.7639318885448958) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2284500000000000142) ) ) {
                    result[0] += -0.010146119671584219;
                  } else {
                    result[0] += -0.007135195658150183;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2110000000000000209) ) ) {
                    result[0] += 0.0002786123176955093;
                  } else {
                    result[0] += -0.0046452746571605755;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.8738636363636445) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.64611005692600187) ) ) {
                    result[0] += -0.005001246058115609;
                  } else {
                    result[0] += 0.0002965262335909803;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1924404709589289386) ) ) {
                    result[0] += -0.0015290983160676148;
                  } else {
                    result[0] += 0.008470135446205685;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4277.468016646671458) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2626500000000001056) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5181500000000001105) ) ) {
                  result[0] += 0.012419999130005842;
                } else {
                  result[0] += -4.614581707945623e-05;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4396.181289187711627) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.90736842105263804) ) ) {
                    result[0] += 0.003293930351515733;
                  } else {
                    result[0] += 0.00010959045825979968;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4046.967284318978272) ) ) {
                    result[0] += -0.008640777721361117;
                  } else {
                    result[0] += -1.7436711568145268e-05;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)5063.376429866547369) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3638500000000000623) ) ) {
                  result[0] += -0.010672112782742342;
                } else {
                  result[0] += -0.0029965042875907235;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07571443317376934379) ) ) {
                  result[0] += 0.004819076474009553;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3096000000000000418) ) ) {
                    result[0] += 0.002181240179748839;
                  } else {
                    result[0] += -0.0027205122160968973;
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 0.003942563253544129;
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)868.0972492193021708) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)753.7197460358141825) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)708.6727958726006591) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)682.5859171509390535) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3162745180867091999) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2601965045881026173) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9247500000000000719) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8194500000000001227) ) ) {
                  result[0] += -0.0009473658113671221;
                } else {
                  result[0] += 0.006490352642641718;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.009944440127977462532) ) ) {
                  result[0] += 0.0018057055122414113;
                } else {
                  result[0] += -0.002255785218507665;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.093171296296296724) ) ) {
                result[0] += -0.003914277291430122;
              } else {
                result[0] += -0.013638020673761313;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.347563200274363493) ) ) {
              result[0] += 0.005118512786885608;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6252724869141016439) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6087968135339727471) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.60043296587724726) ) ) {
                    result[0] += 0.000566176778195889;
                  } else {
                    result[0] += -0.004615520059859625;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2395.919566910411959) ) ) {
                    result[0] += -0.0004258572802579005;
                  } else {
                    result[0] += 0.006144413900473007;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3697500000000000231) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)589.1944314064304535) ) ) {
                    result[0] += -6.763304521137968e-06;
                  } else {
                    result[0] += 0.002955479551862579;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)486.3463921815647382) ) ) {
                    result[0] += -8.130685330821212e-05;
                  } else {
                    result[0] += -0.003646154081497495;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45958279009126635) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4432530062202834631) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2497314722202963466) ) ) {
                result[0] += 0.004484064502200979;
              } else {
                result[0] += -0.005505631339157191;
              }
            } else {
              result[0] += 0.013225484231083693;
            }
          } else {
            result[0] += -0.0028503916990611487;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.909011700273836265) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5480226986128626798) ) ) {
            result[0] += -0.002109748454272989;
          } else {
            result[0] += 0.007028315002769645;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2724.737518907181311) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4574500000000000788) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7045782027770501887) ) ) {
                result[0] += -0.006529922905220462;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.03528574333943801) ) ) {
                  result[0] += 0.0034409881511994565;
                } else {
                  result[0] += -0.004257346019484385;
                }
              }
            } else {
              result[0] += 0.005877037614200981;
            }
          } else {
            result[0] += -0.006940153489347532;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4992000000000000326) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4005.782514566183636) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4462.713921450710586) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)819.6147148111532488) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5897082175521570768) ) ) {
                result[0] += 0.0029281990738528846;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.286050000000000082) ) ) {
                  result[0] += -0.001094699361947386;
                } else {
                  result[0] += -0.01598543262728876;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6533511457093607033) ) ) {
                result[0] += 0.0006785115838631187;
              } else {
                result[0] += 0.005587757418536901;
              }
            }
          } else {
            result[0] += 0.011663768094881627;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)819.6147148111532488) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
              result[0] += 0.0069953725436857845;
            } else {
              result[0] += -0.006269905560215905;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.552093295775335946) ) ) {
              result[0] += -0.001563776433109051;
            } else {
              result[0] += -0.011923497925750225;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.129733520336606567) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5089500000000001245) ) ) {
            result[0] += 0.006809041642575984;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.476627348186981603) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.828427249789739584) ) ) {
                result[0] += 0.0013331782783259172;
              } else {
                result[0] += 0.005087778591889321;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5728500000000000814) ) ) {
                result[0] += 0.0019971365560074025;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6715500000000002023) ) ) {
                  result[0] += -0.008939458871743642;
                } else {
                  result[0] += 6.027125559991547e-05;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)0.8958333333333333703) ) ) {
            result[0] += 0.00027237658785691284;
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4503745000000000664) ) ) {
              result[0] += 0.015298818918747424;
            } else {
              result[0] += 0.0065429993903495295;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)977.7693481096513324) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3649912904309082773) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2867151805696987465) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2098806409843902709) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653967102080309726) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5969286998555723978) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-889.5839568061797991) ) ) {
                  result[0] += 0.0027573473918820813;
                } else {
                  result[0] += -0.0013635021533519726;
                }
              } else {
                result[0] += -0.0015519991214224627;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.452251500000000084) ) ) {
                result[0] += -0.0024160621137061266;
              } else {
                result[0] += -0.010338571923197778;
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.23919669735304952) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.897750673214003925) ) ) {
                result[0] += 0.003983583888026221;
              } else {
                result[0] += 0.008386791047348227;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2548388444636935923) ) ) {
                result[0] += -0.004299343332264131;
              } else {
                result[0] += 0.0018335748007054515;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.209084699453553569) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.041987179487180448) ) ) {
              result[0] += -0.00576610541904013;
            } else {
              result[0] += -0.018422955988019483;
            }
          } else {
            result[0] += 0.0007249572637466703;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4272223701248312189) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4337075000000000791) ) ) {
            result[0] += 0.008971785984018163;
          } else {
            result[0] += 0.001643433271151953;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3579500000000000459) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.00781250000000178) ) ) {
              result[0] += 0.005182260145338621;
            } else {
              result[0] += -0.0009744096065749455;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4229000000000000536) ) ) {
              result[0] += -0.007395123050073801;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4659500000000000863) ) ) {
                result[0] += 0.0015104884522742766;
              } else {
                result[0] += -0.004104572705297857;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1072.091074890846585) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.429971988795520232) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.079059829059831443) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6558.077194235647767) ) ) {
              result[0] += -0.005376113440864794;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5908000000000001029) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3228.941485040616953) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.774419091590062) ) ) {
                    result[0] += 0.006538337000113386;
                  } else {
                    result[0] += -0.0015236347990128366;
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5213898097270787124) ) ) {
                    result[0] += 0.0043580948999616415;
                  } else {
                    result[0] += 0.010431596687990605;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2022010309504783943) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)995.6903744947577479) ) ) {
                    result[0] += 0.00538864088599449;
                  } else {
                    result[0] += 0.00038074176164145556;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6291500000000000981) ) ) {
                    result[0] += -0.007582703956559266;
                  } else {
                    result[0] += -0.001474026755471252;
                  }
                }
              }
            }
          } else {
            result[0] += 0.012077770458579102;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4507.436608844527655) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.385685967107739669) ) ) {
              result[0] += -0.004829030841874178;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3238000000000000322) ) ) {
                result[0] += -0.0023634714861862334;
              } else {
                result[0] += 0.017766377878273808;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3086990000000000567) ) ) {
              result[0] += -0.003096683923540284;
            } else {
              result[0] += -0.01365662387004388;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1153.333993324218) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.52255000000000007) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10398.26697253586644) ) ) {
              result[0] += 0.004638299889104787;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6740.924545030961781) ) ) {
                result[0] += -0.006455973118402618;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1112.565730584552057) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3862.309036383199327) ) ) {
                    result[0] += -0.00397383736390805;
                  } else {
                    result[0] += 0.003885863738123979;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4194.688259547751841) ) ) {
                    result[0] += 0.010372546744155825;
                  } else {
                    result[0] += -0.0004412463878682092;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5826500000000001123) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2754413179479652807) ) ) {
                result[0] += -0.011813202868166874;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3604886952753205698) ) ) {
                  result[0] += -0.0006216333539885016;
                } else {
                  result[0] += -0.011097834076448985;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1094.551388389202884) ) ) {
                result[0] += -0.006586490203055074;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4503745000000000664) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.941722972972973693) ) ) {
                    result[0] += 0.007632727008853921;
                  } else {
                    result[0] += -0.0009024459306200002;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1525564339979418871) ) ) {
                    result[0] += 0.0003866442381239702;
                  } else {
                    result[0] += -0.006949333141392814;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1198.092384839380657) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6562884567030830008) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4114490000000000092) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2888525000000000675) ) ) {
                  result[0] += 0.00181459225186354;
                } else {
                  result[0] += 0.012430642580818996;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5908000000000001029) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4935615000000000419) ) ) {
                    result[0] += -0.00800488093177243;
                  } else {
                    result[0] += -0.0011096890834920985;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.38163074039362721) ) ) {
                    result[0] += 0.0012450096415114722;
                  } else {
                    result[0] += 0.00754145904384737;
                  }
                }
              }
            } else {
              result[0] += -0.0057048710926205295;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1900.973197986588957) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1491.197321246881302) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6267500000000001403) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4154419428488258514) ) ) {
                    result[0] += -0.0046412214077759285;
                  } else {
                    result[0] += 0.0005307437318283233;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2368203766333833171) ) ) {
                    result[0] += 0.0012145001339705147;
                  } else {
                    result[0] += 0.01073535063216301;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1604.502677974852759) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.270242914979758275) ) ) {
                    result[0] += 0.0009306063726961917;
                  } else {
                    result[0] += -0.003499788334052658;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1630.741360602702343) ) ) {
                    result[0] += 0.004394688676704627;
                  } else {
                    result[0] += 1.7227800560488692e-05;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3136152341452576597) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6981500000000001593) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1332.881470937780705) ) ) {
                    result[0] += 0.003210510912407625;
                  } else {
                    result[0] += -0.0044309459197487515;
                  }
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3037930000000000352) ) ) {
                    result[0] += 0.0011076031900068106;
                  } else {
                    result[0] += -0.0005164689536991683;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.203448275862069927) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4935615000000000419) ) ) {
                    result[0] += 0.00032725708900039057;
                  } else {
                    result[0] += -0.005312434159388759;
                  }
                } else {
                  result[0] += -0.008085438432176434;
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
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4780.79918261664443) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4905.045163925654379) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05205000000000000598) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04495000000000001078) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5374500000000000943) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02715000000000000399) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4543500000000000316) ) ) {
                    result[0] += 0.0002710965617610639;
                  } else {
                    result[0] += 0.004266303493305729;
                  }
                } else {
                  result[0] += -0.005611273357873925;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01995000000000000592) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.655630936227951544) ) ) {
                    result[0] += 0.0018766191440512565;
                  } else {
                    result[0] += -0.0030204596663431713;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6695500000000000895) ) ) {
                    result[0] += 0.007228469633583247;
                  } else {
                    result[0] += 0.0009812597907790156;
                  }
                }
              }
            } else {
              result[0] += 0.006368292390690784;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4972.713039862052938) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5401.607521750545857) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.57793522267206576) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
                    result[0] += -0.0003455698433617609;
                  } else {
                    result[0] += -0.0035721472070235905;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7123.512048179920384) ) ) {
                    result[0] += 3.9963860719869906e-05;
                  } else {
                    result[0] += 0.01127341734556901;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.137147335423198236) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653967102080309726) ) ) {
                    result[0] += -0.0017539543169065117;
                  } else {
                    result[0] += 0.004289543203891951;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2731000000000000649) ) ) {
                    result[0] += 0.003642831214344257;
                  } else {
                    result[0] += -0.008067842006222282;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.270242914979758275) ) ) {
                result[0] += 0.0006887559091209211;
              } else {
                result[0] += 0.0066597995051078974;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.418859649122808264) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1626000000000000223) ) ) {
              result[0] += -0.00038699158107418854;
            } else {
              result[0] += -0.014721423701465902;
            }
          } else {
            result[0] += 0.002255264231931962;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4507.436608844527655) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.74737090866123346) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2686500000000000554) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4732.095312547814501) ) ) {
                result[0] += -0.0025850790499793086;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.222539682539683703) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2301.556344757376337) ) ) {
                    result[0] += 0.0005994348288342276;
                  } else {
                    result[0] += -0.0019596091638746363;
                  }
                } else {
                  result[0] += 0.008444690865991266;
                }
              }
            } else {
              result[0] += -0.003354184592788349;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.67567084078712192) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5415710447289395768) ) ) {
                result[0] += 0.0056366943212005065;
              } else {
                result[0] += 0.015268628282840499;
              }
            } else {
              result[0] += -0.00027250522573051667;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4396.181289187711627) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.86811594202898767) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.74246339362618663) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.005617977528091345) ) ) {
                  result[0] += -0.0019202437344756056;
                } else {
                  result[0] += -0.00721862616141214;
                }
              } else {
                result[0] += 0.0044607785006067656;
              }
            } else {
              result[0] += -0.008143960561159212;
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3913.110212643198338) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06675000000000001765) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.319459459459459971) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2520.213847381996857) ) ) {
                    result[0] += 0.003981339239168179;
                  } else {
                    result[0] += -0.0008113304458220959;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04565000000000000308) ) ) {
                    result[0] += -0.003472282408316099;
                  } else {
                    result[0] += -0.008614763861027386;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)1331.549621022016936) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4274500000000000521) ) ) {
                    result[0] += 0.004984955515149715;
                  } else {
                    result[0] += -0.002340129420173645;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.448321891685737661) ) ) {
                    result[0] += 0.000808710632563927;
                  } else {
                    result[0] += 0.008761787719189578;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)4652.199036657647412) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.28464818763326427) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.695048309178745605) ) ) {
                    result[0] += 4.004129029752025e-05;
                  } else {
                    result[0] += -0.0013662844101101244;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3084.240859710316272) ) ) {
                    result[0] += -0.0013767540201693748;
                  } else {
                    result[0] += 0.0014328068315810332;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8940500000000001224) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007150000000000000973) ) ) {
                    result[0] += -0.0011450764996965071;
                  } else {
                    result[0] += -0.0053953115877395695;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2008.65609436553018) ) ) {
                    result[0] += 0.0009380831802494147;
                  } else {
                    result[0] += -0.00274135443348799;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3035.449605533378872) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2966.685986956896613) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1084500000000000047) ) ) {
            result[0] += -0.00878730675444327;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5047.839835708285136) ) ) {
              result[0] += -0.005866383383121236;
            } else {
              result[0] += 0.0008529247875748087;
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6291500000000000981) ) ) {
            result[0] += 0.0007401697769824448;
          } else {
            result[0] += -0.001358439286535396;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6738500000000001711) ) ) {
          result[0] += 0.0038710274854293096;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08955000000000001847) ) ) {
            result[0] += 0.000665549389834724;
          } else {
            result[0] += -0.004540967626745135;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.33392018779342791) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2161500000000000365) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
          result[0] += 0.0011705622331338085;
        } else {
          result[0] += 0.010293462531075603;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.775681341719080208) ) ) {
          result[0] += 0.0034400782575266103;
        } else {
          result[0] += -0.0026376863826544305;
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.828427249789739584) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.357662227858803972) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.68044077134987191) ) ) {
              result[0] += -0.0035812349885134035;
            } else {
              result[0] += 0.0013850021652829102;
            }
          } else {
            result[0] += -0.007977995818975821;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.265006002400961727) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.986813186813187304) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.608333333333333837) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2093.23039061359168) ) ) {
                  result[0] += 0.003889562960017333;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2805.117281170830665) ) ) {
                    result[0] += 0.002019781496577432;
                  } else {
                    result[0] += -0.0015581070009597147;
                  }
                }
              } else {
                result[0] += -0.004089528466099935;
              }
            } else {
              result[0] += 0.006748827750863097;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1306.189448752128555) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.781746031746032521) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8835500000000000576) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1747936067630936063) ) ) {
                    result[0] += 0.002789603436994672;
                  } else {
                    result[0] += -0.006218263085458147;
                  }
                } else {
                  result[0] += -0.008265844934499125;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8493205205092535515) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4147500000000000075) ) ) {
                    result[0] += 0.002347686379132294;
                  } else {
                    result[0] += -0.0007482835943328838;
                  }
                } else {
                  result[0] += -0.0035792817961552174;
                }
              }
            } else {
              result[0] += 0.0028034740311747414;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.50621947496947528) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1195.496933691951881) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3228.941485040616953) ) ) {
              result[0] += 0.003211680189223486;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03324520994880592051) ) ) {
                result[0] += -0.004058301143182652;
              } else {
                result[0] += 0.002465141243233645;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)2520.213847381996857) ) ) {
              result[0] += 0.008270260951226578;
            } else {
              result[0] += 0.0032397194570278226;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1223.821860747523942) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.018205892088713149) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0475712373302734845) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03748475326359510668) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)99.03333333333334565) ) ) {
                    result[0] += 0.0018050396555502096;
                  } else {
                    result[0] += -0.0020729378918344235;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9551500000000000545) ) ) {
                    result[0] += -0.0013929786524441196;
                  } else {
                    result[0] += -0.006788468499987124;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.07146908678389963) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8809500000000000108) ) ) {
                    result[0] += 0.0016250293568490456;
                  } else {
                    result[0] += -0.0009886788251483106;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1487500000000000211) ) ) {
                    result[0] += 0.004049358500166804;
                  } else {
                    result[0] += -0.0021465514117208926;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.203448275862069927) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)3035.449605533378872) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7922500000000001208) ) ) {
                    result[0] += -0.0038966283231907563;
                  } else {
                    result[0] += -0.017605027410607887;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02925000000000000516) ) ) {
                    result[0] += 0.004764824582759786;
                  } else {
                    result[0] += -0.0024332775449107187;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.601724137931035408) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.3783980078854583) ) ) {
                    result[0] += 0.004207975060267849;
                  } else {
                    result[0] += -0.002388741238666307;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.682480850012355589) ) ) {
                    result[0] += -0.005951406248297232;
                  } else {
                    result[0] += 3.885896691237851e-05;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)842.4304686098781758) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)632.5242242904586192) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.752141886213528843) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.34850948509485491) ) ) {
                    result[0] += -0.002994269839568837;
                  } else {
                    result[0] += 0.00048372188357944545;
                  }
                } else {
                  result[0] += 0.0030409234313404144;
                }
              } else {
                result[0] += 0.004032391354138033;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2458590534979424036) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9352500000000000258) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1039.769997802646685) ) ) {
                    result[0] += -0.0006454715895811409;
                  } else {
                    result[0] += -0.0044807121503527576;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-929.333568598457191) ) ) {
                    result[0] += -0.0012887578837267285;
                  } else {
                    result[0] += 0.0038808562591802535;
                  }
                }
              } else {
                result[0] += -0.0076487124419920005;
              }
            }
          }
        }
      }
    }
  }
}

