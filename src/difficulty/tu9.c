#include "prediction.h"
double predict_margin_unit9(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.241598129272460938) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2368519976735115051) ) ) {
        sum += (double)0.09712144937355587926;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.956480801105499268) ) ) {
          sum += (double)0.5578309756085158;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1061.0423583984375) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3457200080156326294) ) ) {
              sum += (double)0.5378356771275316639;
            } else {
              sum += (double)0.3714109349000275784;
            }
          } else {
            sum += (double)0.1847128769966674966;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4035654962062835693) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2250000014901161194) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)50.93333244323730469) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4727.18798828125) ) ) {
                sum += (double)0.04528553308429005692;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.33088207244873047) ) ) {
                  sum += (double)0.03956887777777778198;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09337900206446647644) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.04397500120103359222) ) ) {
                      sum += (double)0.004637874999999999637;
                    } else {
                      sum += (double)0.007047458823529412567;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4468945711851119995) ) ) {
                      sum += (double)0.009926836363636365457;
                    } else {
                      sum += (double)0.02368933913043478473;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08325099945068359375) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.289215087890625) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2145.1326904296875) ) ) {
                    sum += (double)0.01006870967741935879;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)38.61428451538085938) ) ) {
                      sum += (double)0.004450611764705882968;
                    } else {
                      sum += (double)0.004000000000000002685;
                    }
                  } else {
                    sum += (double)0.007053973333333333866;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59821414947509766) ) ) {
                  sum += (double)0.03306456689342403971;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09013000130653381348) ) ) {
                    sum += (double)0.02688742500000000299;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.47222137451171875) ) ) {
                      sum += (double)0.01422956000000000221;
                    } else {
                      sum += (double)0.007405362500000001874;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.685299992561340332) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.85454463958740234) ) ) {
                sum += (double)0.06495792966040697669;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)91.740966796875) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5011.66748046875) ) ) {
                    sum += (double)0.01522898064516129031;
                  } else {
                    sum += (double)0.007074053333333333443;
                  }
                } else {
                  sum += (double)0.03106089229247539774;
                }
              }
            } else {
              sum += (double)0.08839432511501600642;
            }
          }
        } else {
          sum += (double)0.1188444622643102105;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006549999816343188286) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.90461063385009766) ) ) {
            sum += (double)0.1860908195582838542;
          } else {
            sum += (double)0.3814604733031674022;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.209712497889995575) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.64260244369506836) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7400000095367431641) ) ) {
                sum += (double)0.03322689919592601571;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1566600054502487183) ) ) {
                  sum += (double)0.06335032946566943046;
                } else {
                  sum += (double)0.1817596214473195526;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1815500035881996155) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3728000074625015259) ) ) {
                  sum += (double)0.006893688888888888956;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1516425013542175293) ) ) {
                    sum += (double)0.01097213333333333513;
                  } else {
                    sum += (double)0.01896905000000000119;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7410667836666107178) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5753999948501586914) ) ) {
                    sum += (double)0.05270723418557824586;
                  } else {
                    sum += (double)0.1173590687201238464;
                  }
                } else {
                  sum += (double)0.02261111254342365248;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5006805062294006348) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
                  sum += (double)0.2458737466807936478;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3751799017190933228) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.45368385314941406) ) ) {
                      sum += (double)0.07150775281353065338;
                    } else {
                      sum += (double)0.1211375427659880516;
                    }
                  } else {
                    sum += (double)0.2168384233737632727;
                  }
                }
              } else {
                sum += (double)0.267931333082168821;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5070279836654663086) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07905000075697898865) ) ) {
                  sum += (double)0.01620323170308706276;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8487367331981658936) ) ) {
                    sum += (double)0.1335528657978024003;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6900000274181365967) ) ) {
                      sum += (double)0.1278465130252503523;
                    } else {
                      sum += (double)0.02759162899154091186;
                    }
                  }
                }
              } else {
                sum += (double)0.2133183584898079299;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4569820016622543335) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.25617265701293945) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2311585023999214172) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1937955021858215332) ) ) {
                sum += (double)0.2778799757973728912;
              } else {
                sum += (double)0.1738822337690837938;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.681284904479980469) ) ) {
                sum += (double)0.3478673063642672703;
              } else {
                sum += (double)0.5171714760380575759;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999862571712583) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3704449981451034546) ) ) {
                sum += (double)0.6389678473662635527;
              } else {
                sum += (double)0.6977243035714284503;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4924.8759765625) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.91122627258300781) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.908317089080810547) ) ) {
                      sum += (double)0.5122848150331233974;
                    } else {
                      sum += (double)0.4444436128476511594;
                    }
                  } else {
                    sum += (double)0.5422912941352682203;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2926619946956634521) ) ) {
                    sum += (double)0.3739449670120110203;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3222540020942687988) ) ) {
                      sum += (double)0.5213272453510825466;
                    } else {
                      sum += (double)0.4281559717473296112;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3947314918041229248) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.370241507887840271) ) ) {
                      sum += (double)0.5673725628944197297;
                    } else {
                      sum += (double)0.6345443627530363839;
                    }
                  } else {
                    sum += (double)0.5567945629705302046;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7273499965667724609) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1233999989926815033) ) ) {
                      sum += (double)0.5034086723757977833;
                    } else {
                      sum += (double)0.5727245220202937803;
                    }
                  } else {
                    sum += (double)0.466350353831916975;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3337879925966262817) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04179999977350234985) ) ) {
              sum += (double)0.3590943477897252101;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4079499989748001099) ) ) {
                sum += (double)0.09444467065795039695;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1693499982357025146) ) ) {
                  sum += (double)0.1721157211550908839;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1852174997329711914) ) ) {
                    sum += (double)0.1747385787596401896;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.21417760848999023) ) ) {
                      sum += (double)0.3626853018075756885;
                    } else {
                      sum += (double)0.2655174818775902779;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3665769994258880615) ) ) {
              sum += (double)0.4908025528403436866;
            } else {
              sum += (double)0.3352453208641292259;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.75007927417755127) ) ) {
          sum += (double)0.3513855686465815475;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.267136991024017334) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3028285056352615356) ) ) {
              sum += (double)0.3001410105283925933;
            } else {
              sum += (double)0.114173623287982931;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17592.8583984375) ) ) {
              sum += (double)0.1770150059504489726;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3625984936952590942) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.25178241729736328) ) ) {
                  sum += (double)0.04347967199980760228;
                } else {
                  sum += (double)0.01168716000000000026;
                }
              } else {
                sum += (double)0.1143855365792437601;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3519251048564910889) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5837840139865875244) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06955000013113021851) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5057774782180786133) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1291950121521949768) ) ) {
                sum += (double)0.6121650711017740942;
              } else {
                sum += (double)0.6454866160714285428;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2807.538330078125) ) ) {
                sum += (double)0.6838503878485356902;
              } else {
                sum += (double)0.7206886343749999702;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.115455865859985352) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1441270485520362854) ) ) {
                sum += (double)0.5802156382773434595;
              } else {
                sum += (double)0.675830658903133874;
              }
            } else {
              sum += (double)0.515968527096665186;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7147440016269683838) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)22.52560997009277344) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.05229568481445312) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.790023386478424072) ) ) {
                  sum += (double)0.7712037248585724702;
                } else {
                  sum += (double)0.7196929690476190355;
                }
              } else {
                sum += (double)0.8049906455948121486;
              }
            } else {
              sum += (double)0.6670349427516159002;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1021500006318092346) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7910891175270080566) ) ) {
                sum += (double)0.8961742173913043175;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.721825361251831055) ) ) {
                  sum += (double)0.8132814470167512022;
                } else {
                  sum += (double)0.8804576777777777252;
                }
              }
            } else {
              sum += (double)0.781840290709133745;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031407535076141357) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5473549962043762207) ) ) {
            sum += (double)0.5320539098178534987;
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4873500168323516846) ) ) {
              sum += (double)0.6787481699621893405;
            } else {
              sum += (double)0.6114186964726632256;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6745850145816802979) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.917089283466339111) ) ) {
              sum += (double)0.5390494736308916179;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
                sum += (double)0.3904743877069912217;
              } else {
                sum += (double)0.201079982986320599;
              }
            }
          } else {
            sum += (double)0.6178680465744957884;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4365565031766891479) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2219334989786148071) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1052374988794326782) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0722170025110244751) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.17395000159740448) ) ) {
                  sum += (double)0.01503262700854701012;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.39978790283203125) ) ) {
                    sum += (double)0.006386000000000001051;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8704000115394592285) ) ) {
                      sum += (double)0.004234200000000003065;
                    } else {
                      sum += (double)0.005742421052631578073;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.03499999921768903732) ) ) {
                  sum += (double)0.02981169795918367504;
                } else {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.08500000089406967163) ) ) {
                    sum += (double)0.00496216363636363747;
                  } else {
                    sum += (double)0.01911690850202429209;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8808.84814453125) ) ) {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.254999995231628418) ) ) {
                  sum += (double)0.01797995999999999969;
                } else {
                  sum += (double)0.01270960000000000145;
                }
              } else {
                sum += (double)0.03809371818063677501;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.76636362075805664) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.550506591796875) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09995000064373016357) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.269230842590332031) ) ) {
                    sum += (double)0.08291606227223818903;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1577719971537590027) ) ) {
                      sum += (double)0.02599245000000000028;
                    } else {
                      sum += (double)0.01179924705882352994;
                    }
                  }
                } else {
                  sum += (double)0.08701707391109553269;
                }
              } else {
                sum += (double)0.122159344927588967;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3992500007152557373) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6468116641044616699) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10596.75927734375) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1463970020413398743) ) ) {
                      sum += (double)0.01864018181818181963;
                    } else {
                      sum += (double)0.05095342295957284301;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.54285717010498047) ) ) {
                      sum += (double)0.02106793259803921639;
                    } else {
                      sum += (double)0.006304709090909091374;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2249999940395355225) ) ) {
                    sum += (double)0.004000000000000001818;
                  } else {
                    sum += (double)0.007616800000000001694;
                  }
                }
              } else {
                sum += (double)0.08658675419801595274;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.436651468276977539) ) ) {
            sum += (double)0.1988205748444281384;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.87878799438476562) ) ) {
                sum += (double)0.03979276565656564985;
              } else {
                sum += (double)0.01186677084826762499;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09495000168681144714) ) ) {
                sum += (double)0.0570301143216199527;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1878499984741210938) ) ) {
                  sum += (double)0.2034354451792245999;
                } else {
                  sum += (double)0.07096234470291612473;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.431597292423248291) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02309999987483024597) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)31.29963207244873047) ) ) {
              sum += (double)0.2263432414508975143;
            } else {
              sum += (double)0.3754903607025636969;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3019105046987533569) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.651904106140136719) ) ) {
                sum += (double)0.2216656744444868432;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3411679565906524658) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.756099998950958252) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10287.57080078125) ) ) {
                      sum += (double)0.02498141568578393298;
                    } else {
                      sum += (double)0.08285854129116000666;
                    }
                  } else {
                    sum += (double)0.1345279400233714284;
                  }
                } else {
                  sum += (double)0.1590493044216426122;
                }
              }
            } else {
              sum += (double)0.3198199731129982015;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.72554349899291992) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7859893143177032471) ) ) {
              sum += (double)0.2116578154273321966;
            } else {
              sum += (double)0.05701628104777038686;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19366.73046875) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)180.6093063354492188) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1798499971628189087) ) ) {
                  sum += (double)0.02145357777777777766;
                } else {
                  sum += (double)0.04194639383142932665;
                }
              } else {
                sum += (double)0.009105796102150537363;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2043499946594238281) ) ) {
                sum += (double)0.03484757803717020153;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.820113450288772583) ) ) {
                  sum += (double)0.1024877576778974453;
                } else {
                  sum += (double)0.07181388749797225357;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9549999833106994629) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8070119619369506836) ) ) {
          sum += (double)0.09423649147144150251;
        } else {
          sum += (double)0.234149162366878133;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6556589901447296143) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.65630185604095459) ) ) {
            sum += (double)0.4430948880086594266;
          } else {
            sum += (double)0.2429688475179901941;
          }
        } else {
          sum += (double)0.5721073300134867923;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4765664935111999512) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3351185023784637451) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02370000071823596954) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
                sum += (double)0.6240852375570835608;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008249999955296516418) ) ) {
                  sum += (double)0.4689261605034401592;
                } else {
                  sum += (double)0.5341862976678299901;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.584821462631225586) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1563500016927719116) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.183442592620849609) ) ) {
                    sum += (double)0.4427891223223310857;
                  } else {
                    sum += (double)0.4853569330084239741;
                  }
                } else {
                  sum += (double)0.5105368493304075495;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13455.06201171875) ) ) {
                  sum += (double)0.4992980757999254671;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6005999743938446045) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.144444465637207031) ) ) {
                      sum += (double)0.3928394802854466294;
                    } else {
                      sum += (double)0.2649994514005047375;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7032499909400939941) ) ) {
                      sum += (double)0.1358868929355743493;
                    } else {
                      sum += (double)0.2932077973710521812;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1109500005841255188) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3646669983863830566) ) ) {
                sum += (double)0.4980593848146085967;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.485714435577392578) ) ) {
                  sum += (double)0.5528475866835497188;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.369991540908813477) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0009000000136438757181) ) ) {
                      sum += (double)0.6696444755639098245;
                    } else {
                      sum += (double)0.6089353518627325101;
                    }
                  } else {
                    sum += (double)0.6857332288888888794;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.930519461631774902) ) ) {
                sum += (double)0.6053263579271868089;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1959000006318092346) ) ) {
                  sum += (double)0.3450957589665196168;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2007963582873344421) ) ) {
                    sum += (double)0.4778843588434261158;
                  } else {
                    sum += (double)0.5518290423084025731;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3734496086835861206) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3352025002241134644) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19436.537109375) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.94512367248535156) ) ) {
                  sum += (double)0.4043338526659931986;
                } else {
                  sum += (double)0.273694741562192867;
                }
              } else {
                sum += (double)0.2080163762385975335;
              }
            } else {
              sum += (double)0.4442283344103473142;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.05810928344726562) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5148389041423797607) ) ) {
                sum += (double)0.1145096642073202275;
              } else {
                sum += (double)0.249020705348187682;
              }
            } else {
              sum += (double)0.08848486940270612611;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.917300224304199219) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3231.014404296875) ) ) {
            sum += (double)0.3879682869381905208;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3942549973726272583) ) ) {
              sum += (double)0.09096806086956520099;
            } else {
              sum += (double)0.2724968281902560574;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11762.462890625) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.2137451171875) ) ) {
              sum += (double)0.2058052261518644455;
            } else {
              sum += (double)0.09459435608035537957;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1754499971866607666) ) ) {
              sum += (double)0.07744226072511335712;
            } else {
              sum += (double)0.01489522105263158328;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.341569945216178894) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5355575084686279297) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3568.2001953125) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7464500069618225098) ) ) {
                sum += (double)0.60043568778333678;
              } else {
                sum += (double)0.5263553241344036682;
              }
            } else {
              sum += (double)0.6423155701917130367;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2681.0269775390625) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02284999936819076538) ) ) {
                sum += (double)0.7473310749999999558;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5967.938720703125) ) ) {
                  sum += (double)0.6139270416278791442;
                } else {
                  sum += (double)0.6806471198597612293;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1320.23370361328125) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1971.9669189453125) ) ) {
                  sum += (double)0.763044063852068466;
                } else {
                  sum += (double)0.7031712716645477368;
                }
              } else {
                sum += (double)0.7855314079625292933;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0755500011146068573) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.7685725688934326172) ) ) {
              sum += (double)0.9053304566137565512;
            } else {
              sum += (double)0.8679050926406924882;
            }
          } else {
            sum += (double)0.7945501519240163457;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.81709384918212891) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9533487856388092041) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5449129939079284668) ) ) {
              sum += (double)0.5787861172958718159;
            } else {
              sum += (double)0.6957650788326925628;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.081206917762756348) ) ) {
              sum += (double)0.5445557947726961112;
            } else {
              sum += (double)0.3698529108629139972;
            }
          }
        } else {
          sum += (double)0.3842103404527343891;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.580495357513427734) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003049999941140413284) ) ) {
          sum += (double)0.08312772072351487518;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1746900007128715515) ) ) {
            sum += (double)0.07811755238370135523;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.63823556900024414) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1981.63885498046875) ) ) {
                sum += (double)0.3221422581063200785;
              } else {
                sum += (double)0.1384026946011659154;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.87894630432128906) ) ) {
                sum += (double)0.4053441469343753156;
              } else {
                sum += (double)0.3252733883749668875;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.305894374847412109) ) ) {
          sum += (double)0.5444112041247824996;
        } else {
          sum += (double)0.3556252703557410411;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.54761886596679688) ) ) {
          sum += (double)0.09230796138069256862;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09584200009703636169) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2666.22265625) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1727500036358833313) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.004470428571428571377;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40451.748046875) ) ) {
                    sum += (double)0.009512900000000002951;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1985.83795166015625) ) ) {
                  sum += (double)0.01663375187969925312;
                } else {
                  sum += (double)0.00488747826086956532;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3025999963283538818) ) ) {
                sum += (double)0.04358795658442621984;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1700000017881393433) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-77387.9609375) ) ) {
                    sum += (double)0.004000000000000001818;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9335.02685546875) ) ) {
                      sum += (double)0.01037240000000000037;
                    } else {
                      sum += (double)0.006308000000000001106;
                    }
                  }
                } else {
                  sum += (double)0.02133096070707071051;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8397000133991241455) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04224999994039535522) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1575.89300537109375) ) ) {
                    sum += (double)0.03156602128205128477;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3138121366500854492) ) ) {
                    sum += (double)0.03386351043336591898;
                  } else {
                    sum += (double)0.1354610513056403454;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3714815080165863037) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2939.94921875) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)44.29761886596679688) ) ) {
                      sum += (double)0.02422256849780856161;
                    } else {
                      sum += (double)0.01138024262295082162;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3529500067234039307) ) ) {
                      sum += (double)0.004217433333333335359;
                    } else {
                      sum += (double)0.009457428571428573225;
                    }
                  }
                } else {
                  sum += (double)0.07543713230769232003;
                }
              }
            } else {
              sum += (double)0.09958804078930011405;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009450000245124101639) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9699999988079071045) ) ) {
            sum += (double)0.1813784828038684516;
          } else {
            sum += (double)0.3808073164145643341;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8552.767578125) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1865937560796737671) ) ) {
              sum += (double)0.1133645086998816276;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2464894950389862061) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.52360057830810547) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12767.576171875) ) ) {
                    sum += (double)0.09457303486847730423;
                  } else {
                    sum += (double)0.01804942547389424418;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1525499969720840454) ) ) {
                    sum += (double)0.01192865185185185313;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5645000040531158447) ) ) {
                      sum += (double)0.0371023663474692178;
                    } else {
                      sum += (double)0.01655097706476529873;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6782357394695281982) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2931894958019256592) ) ) {
                    sum += (double)0.09517702206178289825;
                  } else {
                    sum += (double)0.03093438887716625299;
                  }
                } else {
                  sum += (double)0.1113105327014243806;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.075439453125) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.059156894683837891) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1231499984860420227) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03035000059753656387) ) ) {
                    sum += (double)0.06222311228948598782;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.537649989128112793) ) ) {
                      sum += (double)0.1490741299013063348;
                    } else {
                      sum += (double)0.07393339317111459474;
                    }
                  }
                } else {
                  sum += (double)0.2000463105229607352;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1636499986052513123) ) ) {
                  sum += (double)0.005719133333333332667;
                } else {
                  sum += (double)0.023972145731532047;
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5736.516357421875) ) ) {
                sum += (double)0.2182066489580743451;
              } else {
                sum += (double)0.4181434670739545556;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9722101092338562012) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.85074520111083984) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02270000055432319641) ) ) {
              sum += (double)0.5565932465092056081;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2988609075546264648) ) ) {
                sum += (double)0.2108673350332755658;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.98650789260864258) ) ) {
                  sum += (double)0.4233960902407019611;
                } else {
                  sum += (double)0.3195164027587839017;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02025000005960464478) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3335030078887939453) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
                  sum += (double)0.5874754894853621012;
                } else {
                  sum += (double)0.5264079640691379236;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1314535737037658691) ) ) {
                  sum += (double)0.6687447487790351142;
                } else {
                  sum += (double)0.5969551608695651268;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7280000150203704834) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345720022916793823) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4215.1318359375) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2704624980688095093) ) ) {
                      sum += (double)0.5455555654889605588;
                    } else {
                      sum += (double)0.4878233508500621207;
                    }
                  } else {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.055418729782104492) ) ) {
                      sum += (double)0.4672523222056201853;
                    } else {
                      sum += (double)0.3338227522337127717;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5826999843120574951) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3210.51611328125) ) ) {
                      sum += (double)0.5619624186563653145;
                    } else {
                      sum += (double)0.416200235310962785;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3740.070556640625) ) ) {
                      sum += (double)0.5446222125439919015;
                    } else {
                      sum += (double)0.623808215483870887;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4047390073537826538) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7725000083446502686) ) ) {
                    sum += (double)0.3328810230563208905;
                  } else {
                    sum += (double)0.4526551386998965976;
                  }
                } else {
                  sum += (double)0.5119747740355873322;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.33650779724121094) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.74452877044677734) ) ) {
              sum += (double)0.1269527692394980256;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7019999921321868896) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09315000101923942566) ) ) {
                  sum += (double)0.5327043044399870642;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2594589889049530029) ) ) {
                    sum += (double)0.2595391288086337789;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.97847223281860352) ) ) {
                      sum += (double)0.4496445792869686597;
                    } else {
                      sum += (double)0.3711239121253129269;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)67.65875244140625) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.5795440673828125) ) ) {
                    sum += (double)0.2905638471879079532;
                  } else {
                    sum += (double)0.1219494707628988733;
                  }
                } else {
                  sum += (double)0.3897473901570473465;
                }
              }
            }
          } else {
            sum += (double)0.139883577477586174;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.149999856948852539) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1127500012516975403) ) ) {
            sum += (double)0.1245595539595315687;
          } else {
            sum += (double)0.3487004787194422639;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25110.431640625) ) ) {
            sum += (double)0.1782815866268788463;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3820239901542663574) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.37689065933227539) ) ) {
                sum += (double)0.03738461562330920585;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1556500047445297241) ) ) {
                  sum += (double)0.02403394666666667026;
                } else {
                  sum += (double)0.0142148210526315804;
                }
              }
            } else {
              sum += (double)0.08842005843712051616;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062593340873718262) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6178399920463562012) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13696.18603515625) ) ) {
            sum += (double)0.4700600129896600476;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5464695096015930176) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4051500707864761353) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4600.56787109375) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8368.16064453125) ) ) {
                    sum += (double)0.6568591851199016007;
                  } else {
                    sum += (double)0.5721431673602567214;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.709856271743774414) ) ) {
                    sum += (double)0.6225064829331162786;
                  } else {
                    sum += (double)0.6924023619047618983;
                  }
                }
              } else {
                sum += (double)0.5300652030824635208;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1555000022053718567) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.874904632568359375) ) ) {
                  sum += (double)0.7394231440750214102;
                } else {
                  sum += (double)0.6958629877913753425;
                }
              } else {
                sum += (double)0.6383412910634338466;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7417580187320709229) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.268427371978759766) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7899999916553497314) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07690000161528587341) ) ) {
                  sum += (double)0.7144021194037004641;
                } else {
                  sum += (double)0.7550868833333334029;
                }
              } else {
                sum += (double)0.7984472438620691115;
              }
            } else {
              sum += (double)0.66651723526412332;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1021500006318092346) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8372030258178710938) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
                  sum += (double)0.8721544842105263262;
                } else {
                  sum += (double)0.8264460498015873124;
                }
              } else {
                sum += (double)0.9062454631072629496;
              }
            } else {
              sum += (double)0.7937401376721654467;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
          sum += (double)0.5411767736080443925;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4958.061279296875) ) ) {
            sum += (double)0.5431090074275636281;
          } else {
            sum += (double)0.2090706940267429148;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.099671125411987305) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8499999940395355225) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.598214387893676758) ) ) {
          sum += (double)0.2019987207752555469;
        } else {
          sum += (double)0.09564971688556270224;
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.59375) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.450182497501373291) ) ) {
            sum += (double)0.3646654814437590431;
          } else {
            sum += (double)0.5355188683192045884;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.03371810913085938) ) ) {
            sum += (double)0.1502766789215839727;
          } else {
            sum += (double)0.392157165724958956;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09375200048089027405) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.39273643493652344) ) ) {
              sum += (double)0.01608448421052631819;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8189000189304351807) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2022000029683113098) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0722170025110244751) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.005306048000000000708;
                  }
                } else {
                  sum += (double)0.006300892307692308909;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1774463504552841187) ) ) {
                  sum += (double)0.004623671428571429418;
                } else {
                  sum += (double)0.0086890947368421078;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38690471649169922) ) ) {
              sum += (double)0.03018828675881163326;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1662964969873428345) ) ) {
                sum += (double)0.01673497931034482675;
              } else {
                sum += (double)0.005844206896551725448;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3545410037040710449) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.78259611129760742) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06244999915361404419) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)47.19888877868652344) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.92500019073486328) ) ) {
                    sum += (double)0.02209284705882352817;
                  } else {
                    sum += (double)0.007489850000000001021;
                  }
                } else {
                  sum += (double)0.07762825150997151868;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
                  sum += (double)0.1191844260407099315;
                } else {
                  sum += (double)0.04383509532278883486;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004499999922700226307) ) ) {
                sum += (double)0.04790598216412490784;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5862999856472015381) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9091331362724304199) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05444999970495700836) ) ) {
                      sum += (double)0.00676152000000000003;
                    } else {
                      sum += (double)0.0211548756756756752;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5545.951904296875) ) ) {
                      sum += (double)0.009495984000000000716;
                    } else {
                      sum += (double)0.004000000000000000951;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)130.2854690551757812) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2331999987363815308) ) ) {
                      sum += (double)0.00849419047619047983;
                    } else {
                      sum += (double)0.03028221754385964845;
                    }
                  } else {
                    sum += (double)0.04469338879946344739;
                  }
                }
              }
            }
          } else {
            sum += (double)0.1161740748434361425;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003999999898951500654) ) ) {
          sum += (double)0.3385435235516132679;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5698890089988708496) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7190.92578125) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2077469974756240845) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8949999809265136719) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13032.2392578125) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6309000253677368164) ) ) {
                      sum += (double)0.04442461158353841477;
                    } else {
                      sum += (double)0.01802948358208955257;
                    }
                  } else {
                    sum += (double)0.01304272307692307814;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.944999992847442627) ) ) {
                    sum += (double)0.1188795616500785551;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
                      sum += (double)0.03106087557354926185;
                    } else {
                      sum += (double)0.06135270868960100016;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3400999903678894043) ) ) {
                  sum += (double)0.1735143683292206251;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.12228298187255859) ) ) {
                    sum += (double)0.1579423372853083485;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5137999951839447021) ) ) {
                      sum += (double)0.02760454949494949711;
                    } else {
                      sum += (double)0.08131063487710231408;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.56818199157714844) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6815336346626281738) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8000000119209289551) ) ) {
                      sum += (double)0.06586196332527501085;
                    } else {
                      sum += (double)0.1592760997517383703;
                    }
                  } else {
                    sum += (double)0.2767363003194336923;
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
                    sum += (double)0.07996918188736681921;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.315007448196411133) ) ) {
                      sum += (double)0.009436709090909094211;
                    } else {
                      sum += (double)0.02597119578931212161;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.53987264633178711) ) ) {
                  sum += (double)0.1551568856829445009;
                } else {
                  sum += (double)0.2912976102552270463;
                }
              }
            }
          } else {
            sum += (double)0.3567772329455236591;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4562695026397705078) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9277135729789733887) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.349175930023193359) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002100000041536986828) ) ) {
              sum += (double)0.6016725525536793517;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412979975342750549) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.509975433349609375) ) ) {
                  sum += (double)0.3981162916760485615;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1929799988865852356) ) ) {
                    sum += (double)0.3899524388632490401;
                  } else {
                    sum += (double)0.2193912623306286391;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3296535015106201172) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3564.0457763671875) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4591999948024749756) ) ) {
                      sum += (double)0.4746846503910209791;
                    } else {
                      sum += (double)0.5239013174613914581;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2799065113067626953) ) ) {
                      sum += (double)0.3600784681421275168;
                    } else {
                      sum += (double)0.4827148264974974734;
                    }
                  }
                } else {
                  sum += (double)0.383336494104050185;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007599999895319342613) ) ) {
                sum += (double)0.6938860545454544893;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2271236181259155273) ) ) {
                  sum += (double)0.579049181591734019;
                } else {
                  sum += (double)0.6314308938370272184;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7143999934196472168) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.280414968729019165) ) ) {
                  sum += (double)0.595079330864711209;
                } else {
                  sum += (double)0.5351204447544699594;
                }
              } else {
                sum += (double)0.4702755804292079733;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3306660056114196777) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04144999943673610687) ) ) {
              sum += (double)0.4404260234419464237;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4572999924421310425) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4013499915599822998) ) ) {
                  sum += (double)0.08408668801384569513;
                } else {
                  sum += (double)0.1778826509070727813;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.239620506763458252) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19138.0205078125) ) ) {
                    sum += (double)0.2764112314325505859;
                  } else {
                    sum += (double)0.173337375023420559;
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.19350481033325195) ) ) {
                    sum += (double)0.4166757028270440255;
                  } else {
                    sum += (double)0.2836172141970125793;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.00078582763671875) ) ) {
              sum += (double)0.5344357589939128239;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.79875850677490234) ) ) {
                sum += (double)0.2820773082895698392;
              } else {
                sum += (double)0.4631434000927134864;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.850671052932739258) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600825071334838867) ) ) {
            sum += (double)0.1270572129257333815;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2103.2374267578125) ) ) {
              sum += (double)0.4110782392144930464;
            } else {
              sum += (double)0.2285496868587704455;
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-25422.712890625) ) ) {
            sum += (double)0.1137283475079798323;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.434132039546966553) ) ) {
              sum += (double)0.03020695645557192055;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.754717886447906494) ) ) {
                sum += (double)0.009016311111111112442;
              } else {
                sum += (double)0.01858225882352941213;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6940864920616149902) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5594.947265625) ) ) {
                sum += (double)0.5962257021018433356;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.81211185455322266) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5209000110626220703) ) ) {
                    sum += (double)0.645030953010956809;
                  } else {
                    sum += (double)0.5939472287320098909;
                  }
                } else {
                  sum += (double)0.6836600357487923052;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0254999995231628418) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.120183311402797699) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.08224678039550781) ) ) {
                    sum += (double)0.7746025217391303563;
                  } else {
                    sum += (double)0.7393767866666666189;
                  }
                } else {
                  sum += (double)0.7046197639499029997;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.470833301544189453) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6194075047969818115) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.263157844543457031) ) ) {
                      sum += (double)0.6539793522707106899;
                    } else {
                      sum += (double)0.6996095368602411879;
                    }
                  } else {
                    sum += (double)0.7257715659442072198;
                  }
                } else {
                  sum += (double)0.6458768318626317839;
                }
              }
            }
          } else {
            sum += (double)0.4508923205043441906;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7741104960441589355) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.53921270370483398) ) ) {
              sum += (double)0.7463303348029360906;
            } else {
              sum += (double)0.7976121169990502136;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08980000019073486328) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8465255200862884521) ) ) {
                sum += (double)0.8690164888888887162;
              } else {
                sum += (double)0.9019960581649832942;
              }
            } else {
              sum += (double)0.8159267374668909278;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.251293659210205078) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.027727305889129639) ) ) {
              sum += (double)0.5237790521279376277;
            } else {
              sum += (double)0.3651745086028173048;
            }
          } else {
            sum += (double)0.2114595875842701089;
          }
        } else {
          sum += (double)0.5964606119002205942;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.851818323135375977) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4529899954795837402) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5200000107288360596) ) ) {
          sum += (double)0.09414760554351335464;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.35267829895019531) ) ) {
            sum += (double)0.2596588903576996787;
          } else {
            sum += (double)0.3877174187002979111;
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.031960964202880859) ) ) {
          sum += (double)0.5877629486850317608;
        } else {
          sum += (double)0.4786730516908502264;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3583880066871643066) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59999990463256836) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3238740265369415283) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1448265016078948975) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1079379990696907043) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3171.4632568359375) ) ) {
                    sum += (double)0.01215335555555555752;
                  } else {
                    sum += (double)0.00570633333333333409;
                  }
                } else {
                  sum += (double)0.02944799897435897845;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.66666603088378906) ) ) {
                  sum += (double)0.01533010774410774671;
                } else {
                  sum += (double)0.09980091491228071376;
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4444958865642547607) ) ) {
                sum += (double)0.1205494914651844135;
              } else {
                sum += (double)0.05566695067003534642;
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2849999964237213135) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1001115739345550537) ) ) {
                  sum += (double)0.01292376470588235682;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1534574553370475769) ) ) {
                    sum += (double)0.005649644444444445329;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.5) ) ) {
                      sum += (double)0.004530564705882352515;
                    } else {
                      sum += (double)0.004000000000000002685;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1208500005304813385) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01530000008642673492) ) ) {
                    sum += (double)0.008944510344827587625;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4605000019073486328) ) ) {
                      sum += (double)0.02464667692307692323;
                    } else {
                      sum += (double)0.01297479999999999987;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)40.83887290954589844) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1531280055642127991) ) ) {
                      sum += (double)0.0149589400000000039;
                    } else {
                      sum += (double)0.005044422222222223057;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5417499840259552002) ) ) {
                      sum += (double)0.004000000000000001818;
                    } else {
                      sum += (double)0.007094053333333334363;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09361699968576431274) ) ) {
                sum += (double)0.05736126554621848866;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.468199998140335083) ) ) {
                  sum += (double)0.00752314594594594762;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1402499973773956299) ) ) {
                    sum += (double)0.01579699047619047628;
                  } else {
                    sum += (double)0.04392889411764706181;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.1180726126987157037;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3112635016441345215) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.788461685180664062) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.521848678588867188) ) ) {
              sum += (double)0.1411681355318405717;
            } else {
              sum += (double)0.2893687914225618329;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9298.3466796875) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2797584980726242065) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6205592453479766846) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.372249990701675415) ) ) {
                    sum += (double)0.1053391550454630815;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2792000025510787964) ) ) {
                      sum += (double)0.04275259665076693028;
                    } else {
                      sum += (double)0.08191560266788459888;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4821999967098236084) ) ) {
                    sum += (double)0.01991921544011544115;
                  } else {
                    sum += (double)0.03256101753535353693;
                  }
                }
              } else {
                sum += (double)0.1096909413146945206;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.56818199157714844) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5959614217281341553) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6037.182373046875) ) ) {
                    sum += (double)0.05356411874545557311;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4388.787841796875) ) ) {
                      sum += (double)0.183413292200310718;
                    } else {
                      sum += (double)0.07275186274509805318;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.870000004768371582) ) ) {
                    sum += (double)0.0446191912480974201;
                  } else {
                    sum += (double)0.007406729411764708185;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434435039758682251) ) ) {
                  sum += (double)0.1538036679579130594;
                } else {
                  sum += (double)0.2729446232061001343;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1339238360524177551) ) ) {
            sum += (double)0.4239220714919930688;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.625) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.670041203498840332) ) ) {
                sum += (double)0.2139330895622658935;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2706499993801116943) ) ) {
                  sum += (double)0.0570702907407407492;
                } else {
                  sum += (double)0.1220085789361862183;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3181999921798706055) ) ) {
                sum += (double)0.3649494799115233223;
              } else {
                sum += (double)0.160629774929165553;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344644904136657715) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.08915424346923828) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.185559496283531189) ) ) {
              sum += (double)0.3614122985416527434;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4167.337890625) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3923530131578445435) ) ) {
                  sum += (double)0.5279001024376417384;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1578999981284141541) ) ) {
                    sum += (double)0.4819121813701263135;
                  } else {
                    sum += (double)0.5085128005630434878;
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5264999866485595703) ) ) {
                  sum += (double)0.362737006573832399;
                } else {
                  sum += (double)0.5264594521699889063;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0497500002384185791) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.02585601806640625) ) ) {
                sum += (double)0.5489688836532810035;
              } else {
                sum += (double)0.433328566883116939;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2836000025272369385) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.74502658843994141) ) ) {
                    sum += (double)0.162135720424825186;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.29695606231689453) ) ) {
                      sum += (double)0.2827394055760071301;
                    } else {
                      sum += (double)0.1808915630033536004;
                    }
                  }
                } else {
                  sum += (double)0.1086262411859240939;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1939000040292739868) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2524869143962860107) ) ) {
                    sum += (double)0.2701552549137911097;
                  } else {
                    sum += (double)0.1226209017041378774;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.21417760848999023) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.62458467483520508) ) ) {
                      sum += (double)0.5272810556630178613;
                    } else {
                      sum += (double)0.4318152795623171336;
                    }
                  } else {
                    sum += (double)0.2647767252554429351;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.45101499557495117) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01829999964684247971) ) ) {
              sum += (double)0.640858314970645826;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7281999886035919189) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3735.6663818359375) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.373778998851776123) ) ) {
                    sum += (double)0.4658865827733326137;
                  } else {
                    sum += (double)0.5574135837276389394;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2396969050168991089) ) ) {
                    sum += (double)0.5964195518659421991;
                  } else {
                    sum += (double)0.5595834700157975572;
                  }
                }
              } else {
                sum += (double)0.4348937055365439397;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5250000059604644775) ) ) {
              sum += (double)0.2948903709602179735;
            } else {
              sum += (double)0.4703849108083462682;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.813309073448181152) ) ) {
          sum += (double)0.3630120811103487166;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6766999959945678711) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4432.196044921875) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.935240745544433594) ) ) {
                sum += (double)0.2204100840887647517;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29298.3828125) ) ) {
                  sum += (double)0.1432304546308583448;
                } else {
                  sum += (double)0.03030654139264990152;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1947.9078369140625) ) ) {
                sum += (double)0.02177854193548387635;
              } else {
                sum += (double)0.07374974460734451398;
              }
            }
          } else {
            sum += (double)0.2402903842656931577;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9435398280620574951) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.733775019645690918) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.725019931793212891) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4613.75537109375) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1007237508893013) ) ) {
                  sum += (double)0.5806398317665765196;
                } else {
                  sum += (double)0.5989257908752573245;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7377000153064727783) ) ) {
                  sum += (double)0.6113828969244925471;
                } else {
                  sum += (double)0.6624920857880184366;
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6345210075378417969) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1220334097743034363) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01655000029131770134) ) ) {
                    sum += (double)0.7630766694444444109;
                  } else {
                    sum += (double)0.7152896024681201226;
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4230.71630859375) ) ) {
                    sum += (double)0.6310374735222468168;
                  } else {
                    sum += (double)0.6909784714059739041;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.688131481409072876) ) ) {
                  sum += (double)0.7900001415204677135;
                } else {
                  sum += (double)0.7438951850524954112;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.14752578735351562) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2347000017762184143) ) ) {
                sum += (double)0.6436118857142857363;
              } else {
                sum += (double)0.5592527996081722019;
              }
            } else {
              sum += (double)0.4348613795297328055;
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02799999993294477463) ) ) {
            sum += (double)0.8823139153846153437;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1803.03936767578125) ) ) {
              sum += (double)0.7854730747151358328;
            } else {
              sum += (double)0.8699701431638104943;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.170329689979553223) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6068294942378997803) ) ) {
            sum += (double)0.4930382764665982576;
          } else {
            sum += (double)0.5718341261219691551;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2471.7059326171875) ) ) {
              sum += (double)0.2889511060811104093;
            } else {
              sum += (double)0.1385278198229571989;
            }
          } else {
            sum += (double)0.5379595575294678911;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.143333196640014648) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7949999868869781494) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2545460015535354614) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08099447935819625854) ) ) {
            sum += (double)0.07404244977261803529;
          } else {
            sum += (double)0.02710082643587726284;
          }
        } else {
          sum += (double)0.1901610783014238415;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.632992476224899292) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1117.9071044921875) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.10267829895019531) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.690241217613220215) ) ) {
                sum += (double)0.4098040737476063566;
              } else {
                sum += (double)0.2555834443861220717;
              }
            } else {
              sum += (double)0.4064271171481530498;
            }
          } else {
            sum += (double)0.1873368011803463462;
          }
        } else {
          sum += (double)0.5650438665385367765;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4184524863958358765) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07300334051251411438) ) ) {
            sum += (double)0.06681984123186220093;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.78259611129760742) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08994349837303161621) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6324500143527984619) ) ) {
                  sum += (double)0.0107553999999999983;
                } else {
                  sum += (double)0.005577023999999999003;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.19112920761108398) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6166000068187713623) ) ) {
                    sum += (double)0.01696754285714285534;
                  } else {
                    sum += (double)0.0312751080963572306;
                  }
                } else {
                  sum += (double)0.06234134936148308381;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.09500000253319740295) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4121000021696090698) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8347373306751251221) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03545000031590461731) ) ) {
                      sum += (double)0.02207876034188034284;
                    } else {
                      sum += (double)0.01002761212121212192;
                    }
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8443999886512756348) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.006254152380952381421;
                    }
                  } else {
                    sum += (double)0.01060138461538461668;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.017657160758972168) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3518999963998794556) ) ) {
                    sum += (double)0.0415552882711734059;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2481500059366226196) ) ) {
                      sum += (double)0.009821587324861521043;
                    } else {
                      sum += (double)0.02014813333333333178;
                    }
                  }
                } else {
                  sum += (double)0.005104295652173913844;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2067451253533363342) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03190000075846910477) ) ) {
              sum += (double)0.2937231242329187419;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2604629993438720703) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1748259961605072021) ) ) {
                  sum += (double)0.04176006244162050463;
                } else {
                  sum += (double)0.09676201148493741855;
                }
              } else {
                sum += (double)0.1884675512021341537;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6866090893745422363) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10068.0869140625) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0299000004306435585) ) ) {
                  sum += (double)0.1410298422031839027;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1954500004649162292) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1831059977412223816) ) ) {
                      sum += (double)0.01707508181818181633;
                    } else {
                      sum += (double)0.03977694564203980432;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19490.8876953125) ) ) {
                      sum += (double)0.02810536988543371403;
                    } else {
                      sum += (double)0.09543202804466095757;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)18.25163364410400391) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.161799997091293335) ) ) {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.75) ) ) {
                      sum += (double)0.03020254123847167932;
                    } else {
                      sum += (double)0.1146429515857626674;
                    }
                  } else {
                    sum += (double)0.1899949441277740403;
                  }
                } else {
                  sum += (double)0.2986246228271559056;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)52.29999923706054688) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9579.81787109375) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-22810.798828125) ) ) {
                    sum += (double)0.01886776783833450655;
                  } else {
                    sum += (double)0.06317689128053281811;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.35314750671386719) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.83758306503295898) ) ) {
                      sum += (double)0.01486352688172043121;
                    } else {
                      sum += (double)0.03269203870495360209;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3947.4403076171875) ) ) {
                      sum += (double)0.01100177391304347878;
                    } else {
                      sum += (double)0.004000000000000000951;
                    }
                  }
                }
              } else {
                sum += (double)0.08228755630362154239;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1866.98406982421875) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6481.059326171875) ) ) {
            sum += (double)0.2447877485341993231;
          } else {
            sum += (double)0.4429543033714166134;
          }
        } else {
          sum += (double)0.08376294396192043856;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4604820013046264648) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.32410335540771484) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3036939948797225952) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02545000053942203522) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.42828273773193359) ) ) {
                sum += (double)0.4766334055369949585;
              } else {
                sum += (double)0.5695913772290809307;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2395025044679641724) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2102814987301826477) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.178099997341632843) ) ) {
                    sum += (double)0.3414915741262544713;
                  } else {
                    sum += (double)0.4269621935449434691;
                  }
                } else {
                  sum += (double)0.1863037943348621328;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07994999736547470093) ) ) {
                  sum += (double)0.3263136648223904923;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.406353682279586792) ) ) {
                    sum += (double)0.557537334366925097;
                  } else {
                    sum += (double)0.4483938551355965418;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01974999997764825821) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3764034956693649292) ) ) {
                sum += (double)0.5542681357433872913;
              } else {
                sum += (double)0.6630742804347825592;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3678065091371536255) ) ) {
                  sum += (double)0.5305416222458603226;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.147989273071289062) ) ) {
                    sum += (double)0.5795051190568023536;
                  } else {
                    sum += (double)0.6305054571428572174;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.22534084320068359) ) ) {
                  sum += (double)0.435542107895591224;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7003500163555145264) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3500.5477294921875) ) ) {
                      sum += (double)0.4943352871543327809;
                    } else {
                      sum += (double)0.6154046398100109228;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4940.68115234375) ) ) {
                      sum += (double)0.514897876696117418;
                    } else {
                      sum += (double)0.4222174421644230291;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3369009941816329956) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24028.5302734375) ) ) {
                sum += (double)0.3909673131389824197;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1912857666611671448) ) ) {
                  sum += (double)0.1747398472551502102;
                } else {
                  sum += (double)0.3108045615917336968;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4652500003576278687) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6056009232997894287) ) ) {
                  sum += (double)0.1666519322608461251;
                } else {
                  sum += (double)0.1061992179564792138;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)19.40902996063232422) ) ) {
                  sum += (double)0.3223883654152656653;
                } else {
                  sum += (double)0.2214669472119245031;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.67706918716430664) ) ) {
              sum += (double)0.4992275398809523645;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.82509660720825195) ) ) {
                sum += (double)0.3036169825298083991;
              } else {
                sum += (double)0.4328274674509395292;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
          sum += (double)0.3021153900621534882;
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03545000031590461731) ) ) {
            sum += (double)0.1892190573391569763;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6375000178813934326) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3895944952964782715) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3244515061378479004) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2399450019001960754) ) ) {
                    sum += (double)0.02277043906705539245;
                  } else {
                    sum += (double)0.01017916190476190509;
                  }
                } else {
                  sum += (double)0.03975922563652327379;
                }
              } else {
                sum += (double)0.1089236986875316421;
              }
            } else {
              sum += (double)0.1617877352678917802;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3479607552289962769) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6562445163726806641) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1195500008761882782) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.031880497932434082) ) ) {
                sum += (double)0.6714008798663324562;
              } else {
                sum += (double)0.6062110874549763162;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412058353424072266) ) ) {
                sum += (double)0.5859360073779107392;
              } else {
                sum += (double)0.4975123860983969304;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992500126361846924) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3672.53662109375) ) ) {
                sum += (double)0.6277122692831720308;
              } else {
                sum += (double)0.6813124825584649935;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05345000140368938446) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5894770026206970215) ) ) {
                  sum += (double)0.735896270000000019;
                } else {
                  sum += (double)0.7678826285714286382;
                }
              } else {
                sum += (double)0.6936509073892773714;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.741619497537612915) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07959999889135360718) ) ) {
              sum += (double)0.7896091625396823854;
            } else {
              sum += (double)0.7368988411186848664;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03894999995827674866) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8496383428573608398) ) ) {
                sum += (double)0.8971805996101364089;
              } else {
                sum += (double)0.8582459619047619892;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0860590226948261261) ) ) {
                sum += (double)0.7923829428276573106;
              } else {
                sum += (double)0.8311552544097693396;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031407535076141357) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1389999985694885254) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.703930854797363281) ) ) {
              sum += (double)0.5601285569081202453;
            } else {
              sum += (double)0.3800499990647339676;
            }
          } else {
            sum += (double)0.6244916065763309598;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6628809869289398193) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.089522480964660645) ) ) {
              sum += (double)0.4750634119844671654;
            } else {
              sum += (double)0.2254523991023837104;
            }
          } else {
            sum += (double)0.5765169491901019905;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.464285612106323242) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.481987491250038147) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2368519976735115051) ) ) {
          sum += (double)0.1238890390850279494;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3546340018510818481) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2927275002002716064) ) ) {
              sum += (double)0.287868101206528948;
            } else {
              sum += (double)0.5028060118960404612;
            }
          } else {
            sum += (double)0.2071091935448645394;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.022637486457824707) ) ) {
          sum += (double)0.5610073723305943894;
        } else {
          sum += (double)0.5014803655171343744;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09099549800157546997) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)72.52777862548828125) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.02499999944120645523) ) ) {
                    sum += (double)0.004364500000000001191;
                  } else {
                    sum += (double)0.008203816666666668977;
                  }
                } else {
                  sum += (double)0.01554911452991452822;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8829500079154968262) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.005958211764705882534;
                  }
                } else {
                  sum += (double)0.01018687499999999975;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.59821414947509766) ) ) {
                sum += (double)0.04638693751962323641;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.66964340209960938) ) ) {
                  sum += (double)0.02039254400000000203;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4629260897636413574) ) ) {
                    sum += (double)0.01163494117647058922;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.89090919494628906) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.35714340209960938) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.69934558868408203) ) ) {
                  sum += (double)0.08821634429252418752;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2149999961256980896) ) ) {
                    sum += (double)0.009498240000000001543;
                  } else {
                    sum += (double)0.02867653505376344461;
                  }
                }
              } else {
                sum += (double)0.127215424689060469;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2743738740682601929) ) ) {
                sum += (double)0.05525441993620414799;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7680511474609375) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12726.97265625) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09735000133514404297) ) ) {
                      sum += (double)0.01006642632575757701;
                    } else {
                      sum += (double)0.02193319310344827786;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.25067710876464844) ) ) {
                      sum += (double)0.01487313333333333161;
                    } else {
                      sum += (double)0.0632436184616114172;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3093499988317489624) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2950000017881393433) ) ) {
                      sum += (double)0.004869651612903227317;
                    } else {
                      sum += (double)0.01076912941176470795;
                    }
                  } else {
                    sum += (double)0.01733864000000000238;
                  }
                }
              }
            }
          }
        } else {
          sum += (double)0.1164079559257946428;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006549999816343188286) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000035762786865) ) ) {
            sum += (double)0.2213003682692308016;
          } else {
            sum += (double)0.4070099080703979966;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5939894914627075195) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8413477540016174316) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7020.048828125) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7981500029563903809) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1706569939851760864) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.52360057830810547) ) ) {
                      sum += (double)0.06249548810586807307;
                    } else {
                      sum += (double)0.01938253333333333356;
                    }
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.31788444519042969) ) ) {
                      sum += (double)0.04538509855420391065;
                    } else {
                      sum += (double)0.11113286717430923;
                    }
                  }
                } else {
                  sum += (double)0.1619116937488649655;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1248499974608421326) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.418182373046875) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9699999988079071045) ) ) {
                      sum += (double)0.05784501252704240398;
                    } else {
                      sum += (double)0.1682860035292204348;
                    }
                  } else {
                    sum += (double)0.1853037974940139332;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1808499991893768311) ) ) {
                    sum += (double)0.39002950982999951;
                  } else {
                    sum += (double)0.1930064250129612524;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7150000035762786865) ) ) {
                sum += (double)0.1085044147525676961;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4060000032186508179) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.60227203369140625) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.86896562576293945) ) ) {
                      sum += (double)0.01931239999999999693;
                    } else {
                      sum += (double)0.008248992592592594916;
                    }
                  } else {
                    sum += (double)0.02424327236477680225;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2905009984970092773) ) ) {
                    sum += (double)0.0331507701297426155;
                  } else {
                    sum += (double)0.05406221446347502652;
                  }
                }
              }
            }
          } else {
            sum += (double)0.3641260820008537791;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4569820016622543335) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.88891696929931641) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
              sum += (double)0.6023682644396326502;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2311585023999214172) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.641333580017089844) ) ) {
                  sum += (double)0.3953893901459548665;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2773634791374206543) ) ) {
                    sum += (double)0.1965865377440668138;
                  } else {
                    sum += (double)0.323544000934758158;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6983999907970428467) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3992000073194503784) ) ) {
                      sum += (double)0.475042105404761994;
                    } else {
                      sum += (double)0.5341339935650774029;
                    }
                  } else {
                    sum += (double)0.413992689630177102;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7270.279052734375) ) ) {
                    sum += (double)0.4801961679358650037;
                  } else {
                    sum += (double)0.2781725715686919065;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02025000005960464478) ) ) {
              sum += (double)0.6423661038932950706;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.00507354736328125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4206569939851760864) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2004518285393714905) ) ) {
                    sum += (double)0.4817035512164689615;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.094047784805297852) ) ) {
                      sum += (double)0.4910829053895193197;
                    } else {
                      sum += (double)0.5938296263122495589;
                    }
                  }
                } else {
                  sum += (double)0.5892002092382813139;
                }
              } else {
                sum += (double)0.4490093493544262127;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.36833286285400391) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-16476.509765625) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2583520114421844482) ) ) {
                sum += (double)0.3514443845362936747;
              } else {
                sum += (double)0.5111140208553899278;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12118.8828125) ) ) {
                sum += (double)0.1599007309122897347;
              } else {
                sum += (double)0.3125107608334725118;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3403905034065246582) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)28.87061405181884766) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.20861244201660156) ) ) {
                  sum += (double)0.1680513549796989192;
                } else {
                  sum += (double)0.2771783368485041255;
                }
              } else {
                sum += (double)0.07640567023002467484;
              }
            } else {
              sum += (double)0.3295431925166949494;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
          sum += (double)0.3080418842347681374;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21581.0751953125) ) ) {
            sum += (double)0.1859225371459631293;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.671597480773925781) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2842.5643310546875) ) ) {
                sum += (double)0.197436596119965363;
              } else {
                sum += (double)0.05505115223499360694;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.041625142097473145) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5919.336181640625) ) ) {
                  sum += (double)0.0380201470716555745;
                } else {
                  sum += (double)0.01974485714285714386;
                }
              } else {
                sum += (double)0.05032488168760865938;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9435398280620574951) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6519050002098083496) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.30224132537841797) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5347345173358917236) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4671999961137771606) ) ) {
                sum += (double)0.5007468226769564712;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4891220033168792725) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.34293699264526367) ) ) {
                    sum += (double)0.5785872645161823646;
                  } else {
                    sum += (double)0.6689646127068333836;
                  }
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1072998940944671631) ) ) {
                    sum += (double)0.5506725373589959061;
                  } else {
                    sum += (double)0.6265756794593089207;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1200214438140392303) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5857160091400146484) ) ) {
                  sum += (double)0.6877319954885391384;
                } else {
                  sum += (double)0.7583613407407406859;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.2876582145690918) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.166165590286254883) ) ) {
                    sum += (double)0.6389926533942088538;
                  } else {
                    sum += (double)0.7038533072315661387;
                  }
                } else {
                  sum += (double)0.6081347760005620939;
                }
              }
            }
          } else {
            sum += (double)0.4428764252668938028;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.119349997490644455) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1851114928722381592) ) ) {
                sum += (double)0.7921457333333332684;
              } else {
                sum += (double)0.7330113538847117249;
              }
            } else {
              sum += (double)0.6925685941820225455;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08980000019073486328) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.061731100082397461) ) ) {
                sum += (double)0.8283223045391255868;
              } else {
                sum += (double)0.8910034190476191496;
              }
            } else {
              sum += (double)0.7948352204939592713;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.170329689979553223) ) ) {
          sum += (double)0.5483064213522609309;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1655.56048583984375) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6478859782218933105) ) ) {
              sum += (double)0.3967080720179212427;
            } else {
              sum += (double)0.5588771992312885351;
            }
          } else {
            sum += (double)0.2157775711802188412;
          }
        }
      }
    }
  }
  return sum;
}
