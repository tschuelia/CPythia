#include "prediction.h"
double predict_margin_unit13(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.66217532467532791) ) ) {
      sum += (double)3.402530964208965862e-05;
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1100.517943387491869) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
          sum += (double)-0.002818846967657169522;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5962403837687776376) ) ) {
            sum += (double)0.005331866566065327634;
          } else {
            sum += (double)-3.742551082864475312e-05;
          }
        }
      } else {
        sum += (double)0.0002618159356139359217;
      }
    }
  } else {
    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.0064516129032306) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0313500000000000098) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4770315000000000527) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3398531389175412643) ) ) {
            sum += (double)-0.006554059212966711206;
          } else {
            sum += (double)-0.00196025200887889545;
          }
        } else {
          sum += (double)0.0003364176031126944852;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2316266331274001722) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0649500000000000216) ) ) {
              sum += (double)0.00302526311012786325;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2627.9895310241468) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1221000000000000141) ) ) {
                  sum += (double)-0.008322909545398850945;
                } else {
                  sum += (double)-0.002350957561865405204;
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2882292173067574903) ) ) {
                  sum += (double)0.002875367174886276234;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3146902490233077776) ) ) {
                    sum += (double)-0.006207572088808625127;
                  } else {
                    sum += (double)0.0004594758607793106102;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.07059800664451998) ) ) {
              sum += (double)0.005192737665733552707;
            } else {
              sum += (double)0.0004199015921247079659;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
            sum += (double)-0.001052376682117371533;
          } else {
            sum += (double)-0.005827504096017828948;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.45993589743590135) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5568739105774286324) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.17376160990712286) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4311851251853566769) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2456.927866336010538) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
                      sum += (double)0.004713344655533219241;
                    } else {
                      sum += (double)-0.002218877286775063507;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0174500000000000037) ) ) {
                      sum += (double)0.0007394261155395266813;
                    } else {
                      sum += (double)0.005435902415059862616;
                    }
                  }
                } else {
                  sum += (double)-0.004498325577539228314;
                }
              } else {
                sum += (double)0.004200683014704884206;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5915500000000001313) ) ) {
                sum += (double)-0.0006284100962835299049;
              } else {
                sum += (double)-0.005815929038424066076;
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3851.015235517284509) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1910.675745379773161) ) ) {
                sum += (double)0.003716456338893567649;
              } else {
                sum += (double)0.009156643322430558715;
              }
            } else {
              sum += (double)0.00110109624613172045;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37840909090909314) ) ) {
            sum += (double)-0.002823021629761319692;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.01582751744766142) ) ) {
              sum += (double)0.005059767028872998347;
            } else {
              sum += (double)-0.001223971982722952406;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9139.728134485791088) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9566.137358918122118) ) ) {
                sum += (double)-5.867777637572463539e-05;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.01582751744766142) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1567817079449065065) ) ) {
                      sum += (double)-0.001281121497432783198;
                    } else {
                      sum += (double)0.005113513144620868318;
                    }
                  } else {
                    sum += (double)-0.0032139895189201911;
                  }
                } else {
                  sum += (double)-0.005564398148102575256;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8844.783695497389999) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2779054249029654367) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1204359241998356339) ) ) {
                    sum += (double)0.002586959375267267568;
                  } else {
                    sum += (double)0.009371882789276178918;
                  }
                } else {
                  sum += (double)0.0008841185045663252796;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5885500000000001286) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.27272012578616867) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1277500000000000302) ) ) {
                      sum += (double)0.001203817833089703814;
                    } else {
                      sum += (double)0.005255790561701543552;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4527450000000000641) ) ) {
                      sum += (double)0.0001109024210143048428;
                    } else {
                      sum += (double)-0.003867311138580403242;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.670454545454545858) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02030850352529866079) ) ) {
                      sum += (double)-0.001648258369303147409;
                    } else {
                      sum += (double)0.00143019261795400269;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                      sum += (double)-0.003024933238769002882;
                    } else {
                      sum += (double)-0.0001054865148821950929;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3106.972830756585154) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.78345184227537601) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
                  sum += (double)0.0006744361876259877091;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03200000000000000761) ) ) {
                      sum += (double)0.001405494377724699796;
                    } else {
                      sum += (double)-0.003494763041987765384;
                    }
                  } else {
                    sum += (double)-0.00532599959820445612;
                  }
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3912.581042876649917) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7030.279293102100382) ) ) {
                    sum += (double)-0.002715251610120750052;
                  } else {
                    sum += (double)0.0009152009207526173992;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3749.11546473725457) ) ) {
                    sum += (double)0.002675076624704513135;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
                      sum += (double)0.003112631088285887967;
                    } else {
                      sum += (double)-0.001076439236206494683;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1850000000000000255) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.45022222222222652) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1078956535486476492) ) ) {
                    sum += (double)0.0005718909610645720289;
                  } else {
                    sum += (double)-0.005732551237118641355;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05764999999999999986) ) ) {
                      sum += (double)-0.0006025944477554665175;
                    } else {
                      sum += (double)-0.006070182339900598474;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.653589743589744199) ) ) {
                      sum += (double)0.003247068894567209894;
                    } else {
                      sum += (double)-8.998521578123605947e-05;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.22431865828092867) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1372018916650266929) ) ) {
                    sum += (double)0.002881516538871544807;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6221500000000000918) ) ) {
                      sum += (double)0.0006994768106727340022;
                    } else {
                      sum += (double)-0.004964328109866605887;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3325620000000000798) ) ) {
                    sum += (double)0.008948082867313059477;
                  } else {
                    sum += (double)0.0006502679653318628938;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3859225000000000572) ) ) {
            sum += (double)-0.0006514026175172991581;
          } else {
            sum += (double)-0.007742616910037444615;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)229.6363636363636545) ) ) {
    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)29304.5719267044733) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2059541029866850392) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)8006.423874351355153) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1137500000000000178) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7689.919473708750047) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.09333333333334792) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03385000000000000508) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3502855000000000829) ) ) {
                      sum += (double)-0.001656764331583310094;
                    } else {
                      sum += (double)0.00136298998016017134;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3472.845654216908315) ) ) {
                      sum += (double)0.005622817214452663533;
                    } else {
                      sum += (double)0.000887225196773187212;
                    }
                  }
                } else {
                  sum += (double)-0.0008330497387137107386;
                }
              } else {
                sum += (double)-0.004250568037802863845;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
                sum += (double)0.002827819029008749475;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7159045000000000547) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4190.954657040626444) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1527886010815981133) ) ) {
                      sum += (double)-0.0009488160720858394718;
                    } else {
                      sum += (double)-0.006312294463119502361;
                    }
                  } else {
                    sum += (double)-0.009230118027179056578;
                  }
                } else {
                  sum += (double)0.001770287856730418108;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9173.564891287333012) ) ) {
              sum += (double)0.006192926902481555272;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4206000000000000294) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                  sum += (double)-0.00212843193289989803;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
                    sum += (double)0.0002217822063214580858;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2839320000000000177) ) ) {
                      sum += (double)0.005850842469557419184;
                    } else {
                      sum += (double)0.00207594405440147305;
                    }
                  }
                }
              } else {
                sum += (double)-0.002234550570024995166;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7092500000000001581) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2691085000000000282) ) ) {
                sum += (double)-0.0004434006786012890835;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04075000000000000844) ) ) {
                  sum += (double)0.0009507958868682128131;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1523500000000000132) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4426700000000000634) ) ) {
                      sum += (double)0.01013274232498626547;
                    } else {
                      sum += (double)0.002331538008901459617;
                    }
                  } else {
                    sum += (double)3.532528049936547277e-05;
                  }
                }
              }
            } else {
              sum += (double)-8.431382364374941937e-06;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001450000000000000334) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1663.13767962321208) ) ) {
                sum += (double)-0.007235693742665414915;
              } else {
                sum += (double)-0.001300423600731521589;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4770315000000000527) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1658.751546212527273) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.01219512195122263) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.591750841750842582) ) ) {
                      sum += (double)0.002264593537979840004;
                    } else {
                      sum += (double)-0.003346453050097488325;
                    }
                  } else {
                    sum += (double)0.008439805668649815948;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2197.409051300025112) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3149.812030383795445) ) ) {
                      sum += (double)-0.008236068946298866558;
                    } else {
                      sum += (double)-3.96919434117216715e-05;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)35.25735294117647811) ) ) {
                      sum += (double)0.001258706919502404617;
                    } else {
                      sum += (double)-0.0005596460549829910484;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.47809523809523924) ) ) {
                  sum += (double)-0.0002560376045254511026;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5029.288454347889456) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2363500000000000323) ) ) {
                      sum += (double)0.002554200760379283369;
                    } else {
                      sum += (double)-0.002925187228629847792;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2404.62816755580252) ) ) {
                      sum += (double)-0.003038965060513428712;
                    } else {
                      sum += (double)-0.0109526610871758974;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.790963257199603031) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5598315000000001485) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1283.269061062331048) ) ) {
              sum += (double)0.0009508413190626204122;
            } else {
              sum += (double)0.0057916484345864154;
            }
          } else {
            sum += (double)0.0001032569885905373149;
          }
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1516.142594860419422) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1222.028157201931208) ) ) {
              sum += (double)-0.001322312867457734083;
            } else {
              sum += (double)-0.007236153462585296833;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02459183207930617718) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09695000000000000839) ) ) {
                sum += (double)-0.000592072281836627406;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.45361298224128177) ) ) {
                  sum += (double)-0.00122191904928433911;
                } else {
                  sum += (double)-0.007328823362360031672;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02640920508781643625) ) ) {
                sum += (double)0.003711215973413496856;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04458582443600670603) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)56.32834040296925338) ) ) {
                      sum += (double)-0.007583468351844828773;
                    } else {
                      sum += (double)-0.000974488131845225084;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0472808499135527957) ) ) {
                      sum += (double)0.004023065115666654354;
                    } else {
                      sum += (double)-0.0006582643188435552753;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4566350000000000686) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.59166666666667567) ) ) {
                      sum += (double)0.005446429032471855093;
                    } else {
                      sum += (double)0.0004603030713945319564;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.14277939042090537) ) ) {
                      sum += (double)-0.0004897971471939778585;
                    } else {
                      sum += (double)0.001178652431151258877;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1331779278199183014) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07618126899281679743) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.04272266684492439376) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.05408888269713012925) ) ) {
              sum += (double)6.220589984476507153e-05;
            } else {
              sum += (double)0.005539974512788829221;
            }
          } else {
            sum += (double)-0.002783339046037266572;
          }
        } else {
          sum += (double)0.007750390460424932786;
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6796000000000000929) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.457966404524975057) ) ) {
            sum += (double)0.003366978731072386294;
          } else {
            sum += (double)-0.0008383736821338893088;
          }
        } else {
          sum += (double)-0.002275497639695434234;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2338600000000000401) ) ) {
      sum += (double)-1.131756210749735206e-05;
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-160227.8577119282854) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2386968934588671598) ) ) {
          sum += (double)0.003717887238794047051;
        } else {
          sum += (double)-0.0006873302308762777252;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4951140000000000541) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03843854959155177525) ) ) {
            sum += (double)-0.005952794704116996446;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8801500000000000989) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1702908340369640727) ) ) {
                sum += (double)-0.005188019297400947062;
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2689713774233481458) ) ) {
                  sum += (double)0.001019044881091733844;
                } else {
                  sum += (double)-0.00231575327251825171;
                }
              }
            } else {
              sum += (double)0.002081727496809398972;
            }
          }
        } else {
          sum += (double)0.0005655431713559146492;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3940500000000000114) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6967396201528700539) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.03940550000000000302) ) ) {
          sum += (double)-0.002753505538478394528;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.695248500000000047) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.775755173515387475) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4843951266831568181) ) ) {
                  sum += (double)0.007528365672113929152;
                } else {
                  sum += (double)0.003419577401868775703;
                }
              } else {
                sum += (double)0.001582691626382298896;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6984108188956750229) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361985000000000334) ) ) {
                  sum += (double)-0.001034053289380419205;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
                    sum += (double)-0.0002161942368604224268;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.76388888888889284) ) ) {
                      sum += (double)0.008754671883540881411;
                    } else {
                      sum += (double)0.002293657136882684602;
                    }
                  }
                }
              } else {
                sum += (double)-0.003541232682474761227;
              }
            }
          } else {
            sum += (double)-0.001949163622330703964;
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444509567657248139) ) ) {
          sum += (double)-0.003270131544767559961;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.80442341124203276) ) ) {
            sum += (double)0.001216350048325110563;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.650443786982250138) ) ) {
              sum += (double)-0.004405214864741436621;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8450000000000000844) ) ) {
                sum += (double)0.001038890457775332827;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.921363443236741575) ) ) {
                  sum += (double)-0.003768851528401579581;
                } else {
                  sum += (double)0.0009341654051281686813;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4236293998663874238) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4033126559258033983) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3755158646863254179) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1366.16280735785358) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.80196078431373152) ) ) {
                sum += (double)-0.0003320539460984154451;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3250715000000000687) ) ) {
                  sum += (double)-0.0008228377445862362916;
                } else {
                  sum += (double)-0.007291041380288365743;
                }
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3488086661974699187) ) ) {
                sum += (double)-6.236297973810444413e-05;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.1251748251748257) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2316266331274001722) ) ) {
                    sum += (double)0.0002917756928784959831;
                  } else {
                    sum += (double)0.007329184166707722152;
                  }
                } else {
                  sum += (double)-0.0002430530549826286036;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.291787790697677352) ) ) {
              sum += (double)0.0002269333361159183457;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.211309523809525501) ) ) {
                sum += (double)-0.007257950313040730482;
              } else {
                sum += (double)-0.001593988492389006697;
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2593.773207383128465) ) ) {
            sum += (double)-0.0006287197115680680541;
          } else {
            sum += (double)0.005254404369073800013;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.754310344827586743) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.978768481788676592) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
              sum += (double)0.0007832356315964801585;
            } else {
              sum += (double)-0.003318649133203206616;
            }
          } else {
            sum += (double)0.0033747049977848405;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5435000000000000941) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009350000000000002406) ) ) {
                  sum += (double)0.0004061278133713072604;
                } else {
                  sum += (double)-0.003814794701489894208;
                }
              } else {
                sum += (double)-0.005408266114659932705;
              }
            } else {
              sum += (double)-0.008144858612373372109;
            }
          } else {
            sum += (double)-0.0006524370133261787712;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02255000000000000407) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1994245490579544811) ) ) {
        sum += (double)0.0006667895509637024928;
      } else {
        sum += (double)0.00465521046790604541;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.314611154752554967) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03705000000000000654) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.811253561253562516) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5192.030210470990824) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3742.494223235453774) ) ) {
                sum += (double)0.0004790638737476524676;
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1911254520728568607) ) ) {
                  sum += (double)0.00168122196448971758;
                } else {
                  sum += (double)0.007724532195643452059;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
                sum += (double)-0.004994071216841395634;
              } else {
                sum += (double)0.0008965712781753855908;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2756805000000000505) ) ) {
              sum += (double)-0.0006812244424602197437;
            } else {
              sum += (double)0.005160373989955320193;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6969500000000000695) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.67902930402930473) ) ) {
              sum += (double)-1.187024846157559849e-05;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2530610000000000359) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6241500000000000936) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1022500000000000214) ) ) {
                      sum += (double)0.001771612197951007031;
                    } else {
                      sum += (double)0.008925708605818840485;
                    }
                  } else {
                    sum += (double)-0.002715425488912204602;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4045.520025272053772) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1291.853035939608844) ) ) {
                      sum += (double)0.004217856379499532356;
                    } else {
                      sum += (double)-0.0003400333688908452269;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953170000000000517) ) ) {
                      sum += (double)-0.003371850804378912457;
                    } else {
                      sum += (double)0.002550418864137793916;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                  sum += (double)0.001766619269680007364;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                    sum += (double)-0.006797758785717969085;
                  } else {
                    sum += (double)-0.0002436327710874986222;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2312300000000000189) ) ) {
              sum += (double)-0.002891068741164172246;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2717.414574262154929) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2197.409051300025112) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.5767590618336893) ) ) {
                    sum += (double)-0.0002184947635172239313;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1854500000000000315) ) ) {
                      sum += (double)-0.01121239405950637952;
                    } else {
                      sum += (double)-0.0002482880186423768593;
                    }
                  }
                } else {
                  sum += (double)-0.0001168992686992617272;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                  sum += (double)0.001064483373192864381;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08513526784538440195) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06045000000000001067) ) ) {
                      sum += (double)0.002275479857581979778;
                    } else {
                      sum += (double)-0.002198580704185761243;
                    }
                  } else {
                    sum += (double)-0.007101748904026552144;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.43376557335367671) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.548804922219870317) ) ) {
            sum += (double)-0.00598598730851925085;
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)237.3704492435913664) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1774.246538787889904) ) ) {
                sum += (double)-0.003941385939584398507;
              } else {
                sum += (double)0.0005969107663253727086;
              }
            } else {
              sum += (double)0.002974477767561612036;
            }
          }
        } else {
          sum += (double)-4.617975443872221469e-05;
        }
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)223.8669250645995135) ) ) {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-120569.0775940371968) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1298745000000000316) ) ) {
          sum += (double)0.0003426602541039351613;
        } else {
          sum += (double)-0.002288427794130132743;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08784999999999999754) ) ) {
          sum += (double)0.005704671307111005597;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)43305.24755796225509) ) ) {
            sum += (double)-0.0004134286857497130089;
          } else {
            sum += (double)0.002802521049447667407;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)142.2522321428571672) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.36135000000000006) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4165800000000000058) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1484500000000000264) ) ) {
                sum += (double)0.003523255606743962674;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
                  sum += (double)-0.001734155900334441143;
                } else {
                  sum += (double)0.0010808509631332001;
                }
              }
            } else {
              sum += (double)0.004787076628379882334;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11018.535337379677) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4524659535674726007) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3095740000000000713) ) ) {
                  sum += (double)-0.0008793505296645168787;
                } else {
                  sum += (double)-0.006337561161637204725;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)35.31041666666667567) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.16869918699187636) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5797500000000000986) ) ) {
                      sum += (double)0.0003858858992129586335;
                    } else {
                      sum += (double)-0.003418096404748742576;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)32.69385026737968047) ) ) {
                      sum += (double)0.003269127197359686463;
                    } else {
                      sum += (double)0.006553606992118090821;
                    }
                  }
                } else {
                  sum += (double)-0.001988308377382682658;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.16869918699187636) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1592430000000000234) ) ) {
                  sum += (double)-0.00299978204250105681;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3436155000000000181) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6840500000000001579) ) ) {
                      sum += (double)0.005909380921227011876;
                    } else {
                      sum += (double)0.002080688106655749579;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.30306122448979878) ) ) {
                      sum += (double)0.0004599409523990596188;
                    } else {
                      sum += (double)0.00501267600187783012;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.158598193308449209) ) ) {
                  sum += (double)0.003076125588690503329;
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)21962.47439012520408) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
                      sum += (double)-0.001008574457011035931;
                    } else {
                      sum += (double)0.002863052365335272062;
                    }
                  } else {
                    sum += (double)-0.003229480409047780307;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24053.73781696207516) ) ) {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5221506565800743127) ) ) {
              sum += (double)-8.536471055884675154e-05;
            } else {
              sum += (double)-0.00547288001280184927;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.41144200626959915) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.08825438027255572) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.87146226415094574) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.73508771929824768) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5732.82001265566214) ) ) {
                      sum += (double)-3.304869780103688237e-05;
                    } else {
                      sum += (double)0.0003904748757668243778;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19099.32569550648986) ) ) {
                      sum += (double)0.006351254123743373808;
                    } else {
                      sum += (double)0.0003125737945631471199;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3699670000000000458) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6339500000000001245) ) ) {
                      sum += (double)0.000658471201668715464;
                    } else {
                      sum += (double)-0.001844673335942593421;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8337.708244919273056) ) ) {
                      sum += (double)-0.005499320790771380051;
                    } else {
                      sum += (double)-0.0004230684254017036319;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.471890500000000046) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4917.478106812183796) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6087500000000001243) ) ) {
                      sum += (double)0.0001540256868839961775;
                    } else {
                      sum += (double)0.008720010985112741642;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)64.09333333333334792) ) ) {
                      sum += (double)-0.004239676273202699561;
                    } else {
                      sum += (double)0.001837221823960906875;
                    }
                  }
                } else {
                  sum += (double)0.005347081577198159116;
                }
              }
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11994.21414222725798) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11222.22816428306942) ) ) {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-20302.8995617723449) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1344370000000000287) ) ) {
                      sum += (double)0.001276326276552522138;
                    } else {
                      sum += (double)-0.002084541236843279449;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9581.734211346893062) ) ) {
                      sum += (double)-0.0003121095414042388536;
                    } else {
                      sum += (double)0.005237930582549286604;
                    }
                  }
                } else {
                  sum += (double)0.005002145113884502031;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1183000000000000163) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)112.2710577188622096) ) ) {
                    sum += (double)-0.002851651551013561353;
                  } else {
                    sum += (double)0.001922066127234745578;
                  }
                } else {
                  sum += (double)-0.005858795355672439392;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9791500000000000759) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05500000000000000722) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.01870773182499101475) ) ) {
              sum += (double)-0.003028068867862904016;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02837773553863971385) ) ) {
                sum += (double)0.003392233285950449657;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09832488768552394287) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2585005000000000774) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8677000000000001378) ) ) {
                      sum += (double)-0.002025520523894895619;
                    } else {
                      sum += (double)0.0001590998617003230777;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)159.4971590909091219) ) ) {
                      sum += (double)-0.005474835135993803836;
                    } else {
                      sum += (double)-0.001679307497977577035;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5049000000000000155) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4348515000000000574) ) ) {
                      sum += (double)-0.0002583904905704755158;
                    } else {
                      sum += (double)0.002430882255761008821;
                    }
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3042628804014196331) ) ) {
                      sum += (double)-0.00356550186410955908;
                    } else {
                      sum += (double)-5.055172151587972781e-05;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2190711269459436339) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1398177495611052923) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.06035185914383755373) ) ) {
                  sum += (double)0.003632555926342568176;
                } else {
                  sum += (double)-0.0007132600465775292258;
                }
              } else {
                sum += (double)0.005657323363150075675;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7650000000000001243) ) ) {
                sum += (double)0.0003700212192888329148;
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4061.155400297998767) ) ) {
                  sum += (double)-6.881873511359715525e-05;
                } else {
                  sum += (double)-0.003577396503984527337;
                }
              }
            }
          }
        } else {
          sum += (double)-0.003618446382103996002;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1854525000000000201) ) ) {
      sum += (double)-0.0001121474339362666891;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5454500000000001014) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1729500000000000204) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6779663431404205909) ) ) {
            sum += (double)0.00170462529331368213;
          } else {
            sum += (double)-0.001222576108941134283;
          }
        } else {
          sum += (double)-0.00235144668584385012;
        }
      } else {
        sum += (double)-0.002744052363744464967;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1965000000000000357) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9548799315404182808) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9554166948649117641) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1900500000000000245) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6795141123970477315) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4528391421342179979) ) ) {
                  sum += (double)0.004464872337290568677;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4302840000000000553) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2114255000000000162) ) ) {
                      sum += (double)0.002560376070504567954;
                    } else {
                      sum += (double)-0.003036747994042151341;
                    }
                  } else {
                    sum += (double)0.003633930094147368346;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8271178460467978333) ) ) {
                  sum += (double)-0.003062757664900291228;
                } else {
                  sum += (double)0.002060361750168282231;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.392166500000000029) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
                  sum += (double)-0.005561083985540793591;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7959100033456006917) ) ) {
                    sum += (double)0.0002867246867204091901;
                  } else {
                    sum += (double)-0.003002533899504882843;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7747129114313702214) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)20.45461734320752001) ) ) {
                    sum += (double)-0.005765008501279813083;
                  } else {
                    sum += (double)0.002110856733919062173;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.624858597285068651) ) ) {
                    sum += (double)0.005517682682963100452;
                  } else {
                    sum += (double)0.0002054139459576988572;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3760500000000000509) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.921363443236741575) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                  sum += (double)0.00344958809046467911;
                } else {
                  sum += (double)0.007046826238515658571;
                }
              } else {
                sum += (double)0.000968794215755454228;
              }
            } else {
              sum += (double)4.133359385778481856e-05;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4222760000000000402) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                sum += (double)-0.004928721952708628624;
              } else {
                sum += (double)0.00136368682056759111;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3860500000000000598) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8127734335609356764) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6734055000000001012) ) ) {
                    sum += (double)0.005188470503658835706;
                  } else {
                    sum += (double)-0.000171157320745442753;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
                    sum += (double)0.001942666686153754485;
                  } else {
                    sum += (double)-0.002265840999692207355;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8127734335609356764) ) ) {
                    sum += (double)-0.005762693107985784532;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1.00000001800250948e-35) ) ) {
                      sum += (double)0.001796629066344460632;
                    } else {
                      sum += (double)-0.002559717047685627564;
                    }
                  }
                } else {
                  sum += (double)0.003060673402348201497;
                }
              }
            }
          } else {
            sum += (double)-0.004529314325288098103;
          }
        }
      } else {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
          sum += (double)-0.001081489483844992648;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.879297427786564834) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6094905000000000461) ) ) {
              sum += (double)-0.003194887590547573937;
            } else {
              sum += (double)0.001040037023384855633;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
                sum += (double)0.008239553430881721083;
              } else {
                sum += (double)0.002203135921544572152;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9023689374824783727) ) ) {
                  sum += (double)0.007102288128662389774;
                } else {
                  sum += (double)-0.0002276757434443668507;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1983.263552118278994) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4045.520025272053772) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)43.5582844574780168) ) ) {
                      sum += (double)0.001975676499125330037;
                    } else {
                      sum += (double)-0.002145767780096778654;
                    }
                  } else {
                    sum += (double)-0.004322927850152876762;
                  }
                } else {
                  sum += (double)0.002053409249298514087;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8426833958685702175) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.8662560233874664339) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)99.74719574087761487) ) ) {
              sum += (double)0.003316477442256767633;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-569.3023343863511627) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5050000000000001155) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2182000000000000328) ) ) {
                    sum += (double)-0.002496045952905093929;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5308159824506151203) ) ) {
                      sum += (double)-4.858547526400888977e-05;
                    } else {
                      sum += (double)0.0005131297039097596629;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09385000000000003062) ) ) {
                      sum += (double)0.0002140686614626207177;
                    } else {
                      sum += (double)-0.001494509785007882901;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2626.389045125775283) ) ) {
                      sum += (double)0.000681627803097261298;
                    } else {
                      sum += (double)0.002991286762802364795;
                    }
                  }
                }
              } else {
                sum += (double)0.00278190600371206213;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.285058977719528484) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.02640920508781643625) ) ) {
                sum += (double)-0.001554134589212999339;
              } else {
                sum += (double)0.001974515113388625349;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4283830000000000693) ) ) {
                sum += (double)-0.002144105396946963463;
              } else {
                sum += (double)-0.005670461939071067339;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9023689374824783727) ) ) {
            sum += (double)-0.004897695696032146502;
          } else {
            sum += (double)0.000293788322718206772;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.895945945945947564) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.446234000000000075) ) ) {
            sum += (double)-0.005862585353464943964;
          } else {
            sum += (double)-0.001505343032234789189;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3724040000000000683) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000000000000799) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
                sum += (double)0.00411496916103302763;
              } else {
                sum += (double)-0.0002906912285479349572;
              }
            } else {
              sum += (double)-0.001119782586067796662;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
              sum += (double)0.0005892007500474561203;
            } else {
              sum += (double)-0.004323882395037813471;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.964433291539125603) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.37349033816425159) ) ) {
        sum += (double)0.002314413933441505054;
      } else {
        sum += (double)-0.001838718037987963939;
      }
    } else {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9650000000000000799) ) ) {
        sum += (double)0.002777747053177395762;
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94281045751634274) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.75154320987654355) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08785000000000002529) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1510.595905575025881) ) ) {
                sum += (double)0.003460040042779347937;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.285058977719528484) ) ) {
                  sum += (double)0.0008651906530764461685;
                } else {
                  sum += (double)-0.002819931336631218907;
                }
              }
            } else {
              sum += (double)-0.003426327746694165545;
            }
          } else {
            sum += (double)0.003150347127556698233;
          }
        } else {
          sum += (double)-0.002367614535968056051;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.927352500000000135) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9934500000000000552) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01185000000000000116) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9999263622974964294) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2144260000000000332) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1766435000000000366) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.036375661375661839) ) ) {
                  sum += (double)-0.001009578224377509102;
                } else {
                  sum += (double)0.002734367286270231612;
                }
              } else {
                sum += (double)0.005070645801391480446;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.81858974358974734) ) ) {
                sum += (double)0.003405128870455708702;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.63725490196079093) ) ) {
                  sum += (double)-0.0031612641039857085;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009350000000000002406) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.22820512820514693) ) ) {
                      sum += (double)-0.0005236633094721869757;
                    } else {
                      sum += (double)0.0002434050765268635727;
                    }
                  } else {
                    sum += (double)0.002037514914894055732;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.978768481788676592) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.7697158305976026238) ) ) {
                  sum += (double)0.00272439596185625188;
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-95.57213752792789307) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)49.6585239618122003) ) ) {
                      sum += (double)0.00295834738953228019;
                    } else {
                      sum += (double)-0.0001239909271774819368;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.460180995475113264) ) ) {
                      sum += (double)-0.004187989427339886168;
                    } else {
                      sum += (double)-0.001061660710024979644;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
                  sum += (double)0.001385233859667945808;
                } else {
                  sum += (double)0.00452735599903901411;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1390121841946631853) ) ) {
                if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2021.296333301971345) ) ) {
                  sum += (double)-0.006256951227161517207;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4900.274382293213421) ) ) {
                      sum += (double)0.001504100304889533293;
                    } else {
                      sum += (double)-0.001791377336768792353;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2821725000000000483) ) ) {
                      sum += (double)-0.001626282411334709511;
                    } else {
                      sum += (double)-0.005989480513593214983;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.310715078210065665) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000000000000799) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45141065830721239) ) ) {
                      sum += (double)0.001927009915357267124;
                    } else {
                      sum += (double)-0.0008351026580619359992;
                    }
                  } else {
                    sum += (double)0.005153365235690285026;
                  }
                } else {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1573.369039635713534) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.407843474118376681) ) ) {
                      sum += (double)-0.005158613966562488294;
                    } else {
                      sum += (double)-0.001089511066017103064;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2571.528544352357585) ) ) {
                      sum += (double)-0.0005189863989774936561;
                    } else {
                      sum += (double)0.003871795999410976644;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8957715509494285078) ) ) {
            sum += (double)-0.004459365740984240836;
          } else {
            sum += (double)-0.0004721341164734476161;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01255000000000000213) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2270140000000000213) ) ) {
            sum += (double)-0.0009627609509484812058;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2004.58624898434573) ) ) {
              sum += (double)0.006579281734785890311;
            } else {
              sum += (double)0.0008786414060236045955;
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9706500000000001238) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.06035185914383755373) ) ) {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)15083.44233543514747) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)12336.40759658668867) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.17654109589042122) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5639.254044705900924) ) ) {
                      sum += (double)0.003805135120989534651;
                    } else {
                      sum += (double)0.001869609651562892123;
                    }
                  } else {
                    sum += (double)-0.0005054440388443020909;
                  }
                } else {
                  sum += (double)0.007165546569754475438;
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)50372.74236767082039) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5028250000000001885) ) ) {
                    sum += (double)-0.003610818657212965053;
                  } else {
                    sum += (double)0.001347989801618580284;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09430950000000000444) ) ) {
                    sum += (double)-0.0003731642857212987734;
                  } else {
                    sum += (double)0.004496908388201378143;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.08774088920105922729) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2391000000000000347) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.03843854959155177525) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9455500000000001126) ) ) {
                      sum += (double)0.002696754273716996542;
                    } else {
                      sum += (double)-0.0001199782449808632954;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.101724137931035408) ) ) {
                      sum += (double)-0.004608884441995727936;
                    } else {
                      sum += (double)0.000340137784036891413;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9163500000000001089) ) ) {
                    sum += (double)-0.0006160207342936316506;
                  } else {
                    sum += (double)-0.006368015943803919873;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1612811956950306047) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03705000000000000654) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2361985000000000334) ) ) {
                      sum += (double)-0.0002454529556716392169;
                    } else {
                      sum += (double)0.002533805878813449614;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.1572954101779138469) ) ) {
                      sum += (double)-0.0002842022705129087319;
                    } else {
                      sum += (double)0.004243129882268335644;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8652500000000000746) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8753585000000000393) ) ) {
                      sum += (double)1.958999634437223194e-05;
                    } else {
                      sum += (double)0.002471136270744438233;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07335000000000001241) ) ) {
                      sum += (double)-0.00428819742139703846;
                    } else {
                      sum += (double)-0.0004235590491955154471;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.05740109609773156457) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.03931893328124715786) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.547022405660377853) ) ) {
                  sum += (double)0.0006767238219086661863;
                } else {
                  sum += (double)-0.001659908145755627923;
                }
              } else {
                sum += (double)-0.005463042145735785837;
              }
            } else {
              sum += (double)0.0004345575213652492792;
            }
          }
        }
      }
    } else {
      sum += (double)-0.003421544070856860631;
    }
  } else {
    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.48596938775510345) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004250000000000001173) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-824.1224939772984044) ) ) {
          sum += (double)0.005306327990872750609;
        } else {
          sum += (double)0.00227775309179760509;
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3192380828539810866) ) ) {
          sum += (double)-0.002711608340875449295;
        } else {
          sum += (double)0.002229503898091965246;
        }
      }
    } else {
      sum += (double)-0.001432210392149819295;
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4472500000000000364) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4587524074502786764) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3661396342123849901) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3239502683350661827) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036930000000000462) ) ) {
              sum += (double)-0.001728072141786140539;
            } else {
              sum += (double)0.001782724389656333312;
            }
          } else {
            sum += (double)-0.003413281060038769743;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4133440879166302429) ) ) {
            sum += (double)0.006307356820161989612;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
              sum += (double)0.00426115146923589181;
            } else {
              sum += (double)-0.001648228614313459973;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01485000000000000209) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.6871843434343435364) ) ) {
            sum += (double)0.00221370559308653285;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.094202898550724834) ) ) {
              sum += (double)-0.003407323717510985818;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-156.7600528121663501) ) ) {
                  sum += (double)0.003870025150488357914;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.100981848184818812) ) ) {
                    sum += (double)-0.002254847486149087928;
                  } else {
                    sum += (double)0.002146334543724834863;
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1396.779958297000576) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.286607142857144837) ) ) {
                    sum += (double)0.002722951614386664304;
                  } else {
                    sum += (double)-0.0005924032565703812869;
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-200.3606350077996296) ) ) {
                    sum += (double)-0.003607722622589517106;
                  } else {
                    sum += (double)0.0004108095816604135091;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[7].missing != -1) && (1) ) ) {
            sum += (double)-0.0006681349745054905413;
          } else {
            sum += (double)0.005424850617780588996;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3726408267520956996) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6291500000000000981) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01395000000000000059) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6200500000000001011) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5938500000000001) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.293597746500404877) ) ) {
                  sum += (double)0.003038820417976964908;
                } else {
                  sum += (double)-0.0005684941865952240899;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3458099438652766922) ) ) {
                  sum += (double)-0.003931628594893561875;
                } else {
                  sum += (double)0.0004803731200610202924;
                }
              }
            } else {
              sum += (double)0.003468096346582510894;
            }
          } else {
            sum += (double)0.004888260908680907603;
          }
        } else {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3578754866530491907) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.154992760675902036) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.154452422829296665) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.852450000000000041) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.09126037187329660849) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.07577460551863703098) ) ) {
                      sum += (double)3.034402791416124348e-05;
                    } else {
                      sum += (double)-0.0046438464388395247;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7781500000000000083) ) ) {
                      sum += (double)-0.001362386674576572055;
                    } else {
                      sum += (double)0.002285189436729081255;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.138110787595931539) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-626.6516628632514312) ) ) {
                      sum += (double)-2.373424938090765816e-05;
                    } else {
                      sum += (double)-0.001566555427710069259;
                    }
                  } else {
                    sum += (double)-0.004070342236796252976;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.746250000000000191) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                    sum += (double)-0.002010904806809309456;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3557370000000000254) ) ) {
                      sum += (double)0.002915523210547134574;
                    } else {
                      sum += (double)0.0001753919219038538768;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4770315000000000527) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1390121841946631853) ) ) {
                      sum += (double)-0.003956311838569022063;
                    } else {
                      sum += (double)-0.0008846493805731058457;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5376165000000000527) ) ) {
                      sum += (double)0.002779959651068218251;
                    } else {
                      sum += (double)-0.001357111659941813257;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7550000000000001155) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1746784584268683549) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2508523744426000568) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7629000000000001336) ) ) {
                      sum += (double)0.006864441315504659497;
                    } else {
                      sum += (double)0.00218738906516244714;
                    }
                  } else {
                    sum += (double)-0.0007453616337669816518;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1889249870736071368) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7372500000000000719) ) ) {
                      sum += (double)-0.005359459402110670727;
                    } else {
                      sum += (double)-0.001042622144717025032;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2338600000000000401) ) ) {
                      sum += (double)-0.001190591457058122428;
                    } else {
                      sum += (double)0.002021469022944827158;
                    }
                  }
                }
              } else {
                sum += (double)0.004135957691528543631;
              }
            }
          } else {
            sum += (double)-0.004275437334462027505;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.095641646489105447) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.66526610644257822) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3065784092638312863) ) ) {
              sum += (double)-0.0002215763245232669229;
            } else {
              sum += (double)-0.004035745193885759315;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2158399509024095386) ) ) {
              sum += (double)-0.00193254651556432999;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3304355872301289465) ) ) {
                sum += (double)0.004310235403210520462;
              } else {
                sum += (double)-0.0003060358660518707006;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.087782058337921853) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01634999999999999995) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001450000000000000334) ) ) {
                sum += (double)-0.006748413287377393564;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3378300000000000192) ) ) {
                  sum += (double)-0.005170715512688503837;
                } else {
                  sum += (double)0.001201776371138918746;
                }
              }
            } else {
              sum += (double)-0.007623210811955221863;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2818837338874919385) ) ) {
              sum += (double)-0.00286449091249003137;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.8232142857142879) ) ) {
                sum += (double)0.002586720666655860975;
              } else {
                sum += (double)-0.0006682695657109632981;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02255000000000000407) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1994245490579544811) ) ) {
        sum += (double)0.0005194021910775731147;
      } else {
        sum += (double)0.004264201342802869006;
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1172.762349355894003) ) ) {
          sum += (double)1.305874582919692428e-05;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2801060000000000771) ) ) {
            sum += (double)-0.00166780192072773191;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1141.227353400294305) ) ) {
              sum += (double)0.004892270561754112623;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03085000000000000242) ) ) {
                sum += (double)0.004252493455890820305;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3473000000000000531) ) ) {
                  sum += (double)0.0004033314980472833106;
                } else {
                  sum += (double)0.003412336505317542772;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.624858597285068651) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7747129114313702214) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6179515000000000979) ) ) {
              sum += (double)-0.007696904323846566823;
            } else {
              sum += (double)0.0004288709585077316597;
            }
          } else {
            sum += (double)0.001468575299961921363;
          }
        } else {
          sum += (double)-0.003978271359904973249;
        }
      }
    }
  }
  return sum;
}
