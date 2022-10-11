#include "prediction.h"
double predict_margin_unit8(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.755813953488372325) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04280000000000000471) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02635000000000000189) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003850000000000000557) ) ) {
          sum += (double)-0.005261094144780382141;
        } else {
          sum += (double)0.003407057193393622958;
        }
      } else {
        sum += (double)-0.009379491001199547623;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07735000000000001597) ) ) {
        sum += (double)0.007454136837105915063;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.111850000000000005) ) ) {
          sum += (double)-0.006959818879857477235;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.748379282003855284) ) ) {
            sum += (double)-0.001511174437729132566;
          } else {
            sum += (double)0.003202654633231828609;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.052631578947369029) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5568760000000000376) ) ) {
        sum += (double)0.006668083961435073044;
      } else {
        sum += (double)0.002846941309030875077;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.485097903309652079) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06030000000000000637) ) ) {
          sum += (double)-0.006688238911065622246;
        } else {
          sum += (double)0.000304436417199613449;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-508.9145137714489238) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-771.1535402920288789) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2533790000000000764) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08985000000000002707) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.38860441767068821) ) ) {
                  sum += (double)0.008723853009854166257;
                } else {
                  sum += (double)-0.002358927008172882322;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5750000000000000666) ) ) {
                  sum += (double)0.0002512917758358015311;
                } else {
                  sum += (double)-0.001510023640677726677;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                sum += (double)0.007095548034840561125;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.1119536128456815) ) ) {
                  sum += (double)-3.960413303919241041e-05;
                } else {
                  sum += (double)0.001534793984030477553;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03335000000000001158) ) ) {
              sum += (double)-0.008322340625597255542;
            } else {
              sum += (double)0.0007919626423181610119;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.180416666666666892) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.548884906411788887) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4233480000000000576) ) ) {
                sum += (double)0.009406180506770172797;
              } else {
                sum += (double)0.0009596631212950559528;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-282.5149217182645884) ) ) {
                sum += (double)0.0003629877647369344758;
              } else {
                sum += (double)-0.009093899195429012289;
              }
            }
          } else {
            sum += (double)0.01068018103926960359;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9322500000000001341) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9005500000000000727) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07092506117818180023) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7973500000000001142) ) ) {
          sum += (double)-0.01098983391401118018;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05496214417875824182) ) ) {
            sum += (double)0.001781912063921621764;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8504500000000000393) ) ) {
              sum += (double)0.001033696363159954112;
            } else {
              sum += (double)-0.006227499835435574074;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.845519167301347352) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1751921495685277441) ) ) {
            sum += (double)-0.003357877272481197325;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.048368298368299811) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.943624557260922536) ) ) {
                sum += (double)-3.45254856132426735e-06;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.990196078431373472) ) ) {
                  sum += (double)0.01029534638217673333;
                } else {
                  sum += (double)0.001793095160770694476;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2451500000000000346) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1255500000000000227) ) ) {
                  sum += (double)-0.002222296958897171642;
                } else {
                  sum += (double)0.006051086141506794788;
                }
              } else {
                sum += (double)-0.003002158820862926673;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.34272727272727543) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5081020000000001646) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5308500000000001551) ) ) {
                  sum += (double)0.007711846176931923605;
                } else {
                  sum += (double)0.001270861956523270178;
                }
              } else {
                sum += (double)-0.002268378075242120841;
              }
            } else {
              sum += (double)0.008946320014203885257;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6741120000000001555) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.00605000000000000069) ) ) {
                sum += (double)0.005544303411401540864;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6278290000000000814) ) ) {
                  sum += (double)5.903254590846630293e-06;
                } else {
                  sum += (double)-0.004870595703392809409;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.43934665002081275) ) ) {
                sum += (double)0.01001815732248585201;
              } else {
                sum += (double)-0.0001544949121379794071;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06010339648363197812) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6012.438638779724897) ) ) {
          sum += (double)0.002013452226706033063;
        } else {
          sum += (double)0.008040160175714896815;
        }
      } else {
        sum += (double)-0.0004106956319784299666;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.499725626486190677) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2626.234914654990916) ) ) {
        sum += (double)0.002355088898653663609;
      } else {
        sum += (double)-0.003215866257083848517;
      }
    } else {
      sum += (double)-0.00681028482447977937;
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-85.02663671482834218) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.234750000000000042) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02585000000000000145) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01055000000000000208) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6558653967640264426) ) ) {
              sum += (double)0.01246869470940626702;
            } else {
              sum += (double)0.0003641362886977388765;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01730000000000000634) ) ) {
              sum += (double)-0.005617861646265352032;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1166500000000000176) ) ) {
                sum += (double)0.004493584282285185798;
              } else {
                sum += (double)-0.002660345849000793871;
              }
            }
          }
        } else {
          sum += (double)0.009768728524438346009;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5477000000000001867) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7850000000000001421) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5950000000000000844) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.48317829457365491) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3550000000000000377) ) ) {
                  sum += (double)0.006794785770408170653;
                } else {
                  sum += (double)-0.0004776161146301127368;
                }
              } else {
                sum += (double)-0.002311583916189111423;
              }
            } else {
              sum += (double)0.009178072717613427675;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2325225000000000208) ) ) {
              sum += (double)-0.004993855989210434221;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-106082.2518424642476) ) ) {
                sum += (double)0.005677263301617609462;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.625833333333334352) ) ) {
                  sum += (double)0.0005146231603751136568;
                } else {
                  sum += (double)-0.002245348769023455468;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.14550264550264735) ) ) {
            sum += (double)-0.001215314022007470173;
          } else {
            sum += (double)0.01055309816132523303;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2945000000000000395) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2734000000000000319) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04705000000000000848) ) ) {
            sum += (double)-0.005531778877845935048;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3430250000000000798) ) ) {
              sum += (double)-0.003073725537370378472;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.877454755487101501) ) ) {
                sum += (double)-0.000912774171436223059;
              } else {
                sum += (double)0.006516664845085103595;
              }
            }
          }
        } else {
          sum += (double)-0.005452660591183756261;
        }
      } else {
        sum += (double)3.434591448654102146e-05;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7873798716591523528) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01645000000000000281) ) ) {
        sum += (double)-0.0006302738042130887975;
      } else {
        sum += (double)-0.009382477955233394298;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000000000001438) ) ) {
        sum += (double)-0.004314724741138940833;
      } else {
        sum += (double)0.005477428990924800879;
      }
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9566500000000001114) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8708480000000001775) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.67992424242424931) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-38191.21312166600546) ) ) {
          sum += (double)0.003891991983349434026;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.54131455399061679) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.845519167301347352) ) ) {
              sum += (double)-0.0005345294254724225437;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2448.48124855514061) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4551385000000000569) ) ) {
                  sum += (double)-0.0009000530362024216453;
                } else {
                  sum += (double)0.002141504659441118268;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.04820000000000001367) ) ) {
                  sum += (double)0.009121040214704030993;
                } else {
                  sum += (double)0.002366531700709100395;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.97368421052632215) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6897500000000001963) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
                  sum += (double)-0.003329968685626076303;
                } else {
                  sum += (double)0.003127341101496927244;
                }
              } else {
                sum += (double)-0.01153673902268500563;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12901.09106838494517) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4583000000000000962) ) ) {
                  sum += (double)-0.005083888893268558029;
                } else {
                  sum += (double)0.001501545094390999103;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5221245000000001024) ) ) {
                  sum += (double)0.0009791385934965718234;
                } else {
                  sum += (double)-0.005264581371169205562;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.115000000000000005) ) ) {
          sum += (double)-0.0007511047814383686001;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15269.41089232427839) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.3556547619047663) ) ) {
              sum += (double)-0.005720820470248487444;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.14667015835553604) ) ) {
                sum += (double)0.005422850005093120263;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6747500000000000719) ) ) {
                  sum += (double)-0.0004759378654030863303;
                } else {
                  sum += (double)0.005654732250859916161;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04935000000000001191) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8575500000000001455) ) ) {
                sum += (double)0.01789068728849748866;
              } else {
                sum += (double)0.002233668855222362398;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.634300000000000086) ) ) {
                sum += (double)0.006444777188761041144;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1259065514773265726) ) ) {
                  sum += (double)0.005074436653812194366;
                } else {
                  sum += (double)-0.004205640813055867497;
                }
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.003537133822086934581;
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005950000000000001295) ) ) {
      sum += (double)0.001788035803199891248;
    } else {
      sum += (double)-0.003981117515816189403;
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.062394006547141778) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.964433291539125603) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0539500000000000049) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.955423101024022503) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02595000000000000431) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.210591133004927045) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.186024382991377912) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6345946031821346756) ) ) {
                  sum += (double)0.002551677438979567999;
                } else {
                  sum += (double)-0.001739264233817751533;
                }
              } else {
                sum += (double)0.006057283943477933912;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.04759238521836728) ) ) {
                sum += (double)-0.01185940700068477578;
              } else {
                sum += (double)-0.0002727005075058525161;
              }
            }
          } else {
            sum += (double)0.004671289334054267231;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.42206477732793557) ) ) {
            sum += (double)-0.001990640826840821623;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3801160000000000649) ) ) {
              sum += (double)0.001133224553339509796;
            } else {
              sum += (double)0.01262012726884927105;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1280000000000000304) ) ) {
          sum += (double)-0.002955958701157058045;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3770.886007893999249) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4354.647753189601644) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0249432245900995074) ) ) {
                sum += (double)-0.006969522525230935697;
              } else {
                sum += (double)-0.000285104358465743796;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.35757575757576632) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.807894736842105665) ) ) {
                  sum += (double)0.001396526680962682223;
                } else {
                  sum += (double)-0.009958216804216307033;
                }
              } else {
                sum += (double)0.001091426100883131651;
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3375.186775191655215) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4067570000000000907) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                  sum += (double)0.000508833677859565881;
                } else {
                  sum += (double)0.01156835945552716488;
                }
              } else {
                sum += (double)-0.0004654612386443909454;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.955423101024022503) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8000355076066801852) ) ) {
                  sum += (double)0.0001366664978702820791;
                } else {
                  sum += (double)0.007231367445141313396;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.367299256770635019) ) ) {
                  sum += (double)-0.006238158129411576665;
                } else {
                  sum += (double)0.002098554064547392042;
                }
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.004831640956930775832;
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
      sum += (double)0.0002494731578609206261;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4187725000000000475) ) ) {
        sum += (double)-0.001961841104971181679;
      } else {
        sum += (double)-0.008906293560487476765;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.062394006547141778) ) ) {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.964433291539125603) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-106082.2518424642476) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)163.9651741293532723) ) ) {
          sum += (double)0.006554951187654648598;
        } else {
          sum += (double)9.142792935855207411e-05;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3770.886007893999249) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4314.984009076141774) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4394.664263511215722) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0249432245900995074) ) ) {
                sum += (double)-0.006375097283591242212;
              } else {
                sum += (double)-0.0004159317112114447983;
              }
            } else {
              sum += (double)0.005184815291695970066;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.00649350649350922) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.077254641909815014) ) ) {
                sum += (double)0.0008299732504602341668;
              } else {
                sum += (double)-0.01212860481620151899;
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3953.943999719150725) ) ) {
                sum += (double)-0.003616069492460546701;
              } else {
                sum += (double)0.004915246663445903968;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.065942028985508827) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2225.971173068191092) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.729785247432306772) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4766210000000000724) ) ) {
                  sum += (double)0.003216136265510119181;
                } else {
                  sum += (double)-0.003183592006613833458;
                }
              } else {
                sum += (double)-0.007769355864252866679;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.0650000000000000161) ) ) {
                sum += (double)-0.005618634492122119919;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.383600000000000052) ) ) {
                  sum += (double)-0.0002085997601589108469;
                } else {
                  sum += (double)0.003298268711936900525;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000000000000799) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3172976259383097353) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6508500000000000396) ) ) {
                  sum += (double)-0.007585114687010095086;
                } else {
                  sum += (double)-0.0008098935513989737956;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.14550264550264735) ) ) {
                  sum += (double)0.005829472223364592053;
                } else {
                  sum += (double)-0.0009494645791872701;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3375.186775191655215) ) ) {
                sum += (double)0.007351094702113742003;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03525000000000001049) ) ) {
                  sum += (double)0.003124380736536928188;
                } else {
                  sum += (double)-0.0002144463218103508822;
                }
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.004138965196118008644;
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.23989555815544783) ) ) {
      sum += (double)-0.005786062265634117803;
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1577.474241027566222) ) ) {
        sum += (double)0.001792136666611380841;
      } else {
        sum += (double)-0.004786334400745480798;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.062394006547141778) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0539500000000000049) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.955423101024022503) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6742424242424243097) ) ) {
          sum += (double)0.003536949324388440757;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02595000000000000431) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.533917682926829507) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.990196078431373472) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6345946031821346756) ) ) {
                  sum += (double)0.002842666730810511268;
                } else {
                  sum += (double)-0.00237812872912724748;
                }
              } else {
                sum += (double)0.004539803222206563287;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.04759238521836728) ) ) {
                sum += (double)-0.008289309785399125857;
              } else {
                sum += (double)-0.0002537418761562989697;
              }
            }
          } else {
            sum += (double)0.004027271448930141995;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.656213017751480443) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07735000000000001597) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.42206477732793557) ) ) {
              sum += (double)-0.0005027773221605255118;
            } else {
              sum += (double)0.006222433860766284075;
            }
          } else {
            sum += (double)-0.003856888537054451848;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-15269.41089232427839) ) ) {
            sum += (double)0.002794469636661316495;
          } else {
            sum += (double)0.0158542543476705676;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.053053766696358862) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9638349311435107092) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1280000000000000304) ) ) {
            sum += (double)-0.005623449298113475728;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1936000000000000221) ) ) {
              sum += (double)0.003465398194247276426;
            } else {
              sum += (double)-0.0002838414484129356437;
            }
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.98305084745763338) ) ) {
            sum += (double)0.01001421196838383695;
          } else {
            sum += (double)-0.001395919205094435598;
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3420500000000000762) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-29078.77069867676619) ) ) {
            sum += (double)0.006574249807013946879;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3971575000000001077) ) ) {
              sum += (double)-0.0001574086700624357344;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.025275275275275622) ) ) {
                sum += (double)0.001350855050579116614;
              } else {
                sum += (double)-0.007096390450570979995;
              }
            }
          }
        } else {
          sum += (double)-0.009000490381187786076;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.238308720112518024) ) ) {
      sum += (double)0.001720520419293881855;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.09795000000000000928) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4067570000000000907) ) ) {
          sum += (double)-0.002696302796096617695;
        } else {
          sum += (double)-0.008316529580967211427;
        }
      } else {
        sum += (double)0.002520927314018876937;
      }
    }
  }
  return sum;
}
