#include "prediction.h"
double predict_margin_unit12(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6241000000000000991) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5787000000000001032) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3483000000000001095) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.234750000000000042) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6513155000000000472) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4317500000000000782) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5137965000000001003) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02595000000000000431) ) ) {
                  sum += (double)-0.001684482282762686045;
                } else {
                  sum += (double)0.001464763009434432838;
                }
              } else {
                sum += (double)0.002924496384582947472;
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7616.47150594170671) ) ) {
                sum += (double)0.001956056798866513159;
              } else {
                sum += (double)-0.004687678791940234554;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
              sum += (double)-0.006716906244751119463;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6928115000000001356) ) ) {
                sum += (double)-0.004176205883664214392;
              } else {
                sum += (double)0.0005143310488453635507;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1262755000000000127) ) ) {
            sum += (double)0.002502019911758124587;
          } else {
            sum += (double)-0.003200281910512985887;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5490000000000000435) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3153.031285119987842) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.117078541717642537) ) ) {
              sum += (double)-0.005278794903779626506;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.221420291016541565) ) ) {
                sum += (double)0.007019221728486988582;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2485500000000000209) ) ) {
                  sum += (double)-0.0006777619208290571341;
                } else {
                  sum += (double)0.002508415548229355092;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06505000000000001059) ) ) {
              sum += (double)0.001416845765128915647;
            } else {
              sum += (double)0.008382112187464894892;
            }
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.93913849603311661) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2097650000000000348) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6960000000000000631) ) ) {
                sum += (double)-0.004402838546243247747;
              } else {
                sum += (double)0.0005829119825865790262;
              }
            } else {
              sum += (double)-0.0002965587030489889148;
            }
          } else {
            sum += (double)0.0005108535046694302924;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3487755000000000716) ) ) {
        sum += (double)-0.006283741840829438867;
      } else {
        sum += (double)-0.0007824951992625862711;
      }
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14037.81298809654982) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-40212.81977157128858) ) ) {
        sum += (double)0.003514279577885095172;
      } else {
        sum += (double)-0.003539986442262756539;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4307545000000000401) ) ) {
        sum += (double)0.01110805012297706729;
      } else {
        sum += (double)0.002010004623141049742;
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6241000000000000991) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5787000000000001032) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.47445536919221709) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.85000000000000497) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5633500000000001284) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5477000000000001867) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1108795000000000197) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.36384460326187096) ) ) {
                  sum += (double)-0.00602753040110777516;
                } else {
                  sum += (double)-0.0004489453489155070202;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1226830000000000143) ) ) {
                  sum += (double)0.00433300507330578507;
                } else {
                  sum += (double)7.762034078892360268e-05;
                }
              }
            } else {
              sum += (double)-0.004300958889010123888;
            }
          } else {
            sum += (double)0.004356694190530298501;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.38860441767068821) ) ) {
            sum += (double)0.008828439564759135716;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1522060000000000357) ) ) {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12628.28396037959465) ) ) {
                sum += (double)0.006627201146517545591;
              } else {
                sum += (double)-0.000154513569385661615;
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5679452574321449676) ) ) {
                sum += (double)-0.003607666003682613934;
              } else {
                sum += (double)0.0007769494606218297185;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1130598082247689234) ) ) {
          sum += (double)0.002864551570387410383;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1043115000000000153) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.99679487179488291) ) ) {
              sum += (double)0.002030591059738969407;
            } else {
              sum += (double)-6.981417935876905393e-05;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8000355076066801852) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3897280000000000189) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5837734839734619596) ) ) {
                  sum += (double)-0.001078475857445270998;
                } else {
                  sum += (double)-0.003737882789849457637;
                }
              } else {
                sum += (double)-0.006358273336753914907;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03870000000000000523) ) ) {
                sum += (double)-0.004493821765772914971;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1255500000000000227) ) ) {
                  sum += (double)0.0053792519470900425;
                } else {
                  sum += (double)-0.0005170298399419709151;
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4037960000000000438) ) ) {
        sum += (double)-0.00510088553834153139;
      } else {
        sum += (double)-0.0003744242169062240392;
      }
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14037.81298809654982) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5368495000000000905) ) ) {
        sum += (double)-0.003215810662467883871;
      } else {
        sum += (double)0.003356768455353426397;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4307545000000000401) ) ) {
        sum += (double)0.009515565658440893956;
      } else {
        sum += (double)0.001721844184050206217;
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6241000000000000991) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5787000000000001032) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7844500000000002027) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07283229837897482739) ) ) {
          sum += (double)-0.005089651463344512655;
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7169500000000000872) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.62731481481482021) ) ) {
              sum += (double)0.0002819707037137681241;
            } else {
              sum += (double)-0.0005936444141298266195;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.80462184873950093) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1553.47651953803188) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3246.901261113256169) ) ) {
                  sum += (double)0.0007723017642876359775;
                } else {
                  sum += (double)-0.005375655551399133834;
                }
              } else {
                sum += (double)0.004819562891533898247;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8650000000000001021) ) ) {
                sum += (double)0.0001561216338791704579;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2563500000000000223) ) ) {
                  sum += (double)0.01518057331686323112;
                } else {
                  sum += (double)0.002788544570291674567;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7909000000000000474) ) ) {
          sum += (double)-0.006000334522582458606;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2125.256670419978491) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.244765702891327486) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.55964912280701995) ) ) {
                sum += (double)-0.0004426036456216377664;
              } else {
                sum += (double)0.003578771533104803046;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2097650000000000348) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5650000000000000577) ) ) {
                  sum += (double)-0.0004331771210107955442;
                } else {
                  sum += (double)-0.009465311466519658531;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0846500000000000169) ) ) {
                  sum += (double)0.005242212621080338635;
                } else {
                  sum += (double)-0.001189742437036211617;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.336734693877551061) ) ) {
              sum += (double)0.001119655300505796895;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.05874436319211619878) ) ) {
                sum += (double)-0.008208585988860256713;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3336520000000000596) ) ) {
                  sum += (double)0.0009958772449863029924;
                } else {
                  sum += (double)-0.004134113156939802323;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3487755000000000716) ) ) {
        sum += (double)-0.004651576015271830823;
      } else {
        sum += (double)-0.0005384451607819749994;
      }
    }
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14037.81298809654982) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.17078410311493286) ) ) {
        sum += (double)-0.004411197442711693208;
      } else {
        sum += (double)0.001636651528577515559;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4307545000000000401) ) ) {
        sum += (double)0.008151384727185746748;
      } else {
        sum += (double)0.001474995293665023501;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02595000000000000431) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.729785247432306772) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1350000000000000366) ) ) {
          sum += (double)-0.002997269500169393638;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3586370000000000391) ) ) {
            sum += (double)0.00549153965968889133;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4209690000000000931) ) ) {
              sum += (double)-0.003544077515805748885;
            } else {
              sum += (double)0.001612671392909158534;
            }
          }
        }
      } else {
        sum += (double)-0.004326637420013440191;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8000355076066801852) ) ) {
        sum += (double)-0.006751810613217507605;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
          sum += (double)-0.005487593524750381847;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6111095000000000832) ) ) {
            sum += (double)0.003525314295477319573;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6928115000000001356) ) ) {
              sum += (double)-0.005685889618364203986;
            } else {
              sum += (double)0.0002382156739956354347;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1224000000000000227) ) ) {
        sum += (double)0.009698005113561463178;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1216226884541793812) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1685.637314167579689) ) ) {
            sum += (double)0.004590627546112481527;
          } else {
            sum += (double)-0.000421588747059568913;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3242500000000000937) ) ) {
            sum += (double)0.002956857344854351907;
          } else {
            sum += (double)-0.001698840406135067056;
          }
        }
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-369.2501017531215552) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001650000000000000208) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
            sum += (double)0.000445605183307157661;
          } else {
            sum += (double)-0.008419117698610404169;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6220500000000001029) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6151500000000001966) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2180.093367256048168) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4081000000000000738) ) ) {
                  sum += (double)-0.0006010109391558426332;
                } else {
                  sum += (double)0.0006180777641715526132;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9638349311435107092) ) ) {
                  sum += (double)0.003261376251679355166;
                } else {
                  sum += (double)-0.0002613670226855099171;
                }
              }
            } else {
              sum += (double)0.006011538388244359703;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6367000000000001547) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1830500000000000183) ) ) {
                sum += (double)-0.006836216543228019853;
              } else {
                sum += (double)0.000573915761136860607;
              }
            } else {
              sum += (double)-0.0002461723505748118703;
            }
          }
        }
      } else {
        sum += (double)-0.004099054301254964963;
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3080910000000000593) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3024760000000000226) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.467454196533900523) ) ) {
        sum += (double)0.0002568554041728725312;
      } else {
        sum += (double)-0.001943899127526201856;
      }
    } else {
      sum += (double)0.006268206588779543474;
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.364131000000000038) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8407000000000001139) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6417500000000001537) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.88106416275430988) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9031987788299341569) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.451390039818814981) ) ) {
                sum += (double)-0.0007032936212623748951;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1613500000000000212) ) ) {
                  sum += (double)0.0004076024252204941425;
                } else {
                  sum += (double)0.007674043562681045171;
                }
              }
            } else {
              sum += (double)-0.002644676999067576816;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3504500000000000393) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3284500000000000752) ) ) {
                sum += (double)-0.001911758326757366554;
              } else {
                sum += (double)-0.0117171272559111455;
              }
            } else {
              sum += (double)-0.001229222397981997918;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3575.274009667960399) ) ) {
            sum += (double)0.003998725862508170636;
          } else {
            sum += (double)-0.002958841215242023238;
          }
        }
      } else {
        sum += (double)-0.01018992612292318745;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3722725000000000617) ) ) {
        sum += (double)0.004631272248848614104;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.618667917448405991) ) ) {
            sum += (double)0.003572375371713013264;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.63750000000000995) ) ) {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8250000000000000666) ) ) {
                sum += (double)-0.004008219659303773399;
              } else {
                sum += (double)-0.01052794251611339008;
              }
            } else {
              sum += (double)0.003675744389493302081;
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000000000000977) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3629000000000000559) ) ) {
              sum += (double)-0.0004479578529219428924;
            } else {
              sum += (double)0.007323128248883907336;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.61180124223603016) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)118.1981481481481495) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3825085000000000846) ) ) {
                  sum += (double)-0.003958011909854656889;
                } else {
                  sum += (double)0.0001050936560016288505;
                }
              } else {
                sum += (double)0.006559629907069723133;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1392500000000000127) ) ) {
                sum += (double)0.001862442764555937618;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)108.7425925925926009) ) ) {
                  sum += (double)-0.002019996171509469852;
                } else {
                  sum += (double)-0.008787015504645159444;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02595000000000000431) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7854755000000001042) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.882665832290363328) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04545000000000001122) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01405000000000000172) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.691015480139064997) ) ) {
              sum += (double)0.00693866132782681045;
            } else {
              sum += (double)-0.001363781186812374705;
            }
          } else {
            sum += (double)-0.002800536857707872345;
          }
        } else {
          sum += (double)0.00350923642132105508;
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009750000000000001721) ) ) {
          sum += (double)-0.005205830763570249396;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3464.436418485187914) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4307545000000000401) ) ) {
              sum += (double)9.796383125154656962e-05;
            } else {
              sum += (double)0.006728982337048436575;
            }
          } else {
            sum += (double)-0.001421340730882775412;
          }
        }
      }
    } else {
      sum += (double)-0.005139182014648473358;
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1224000000000000227) ) ) {
        sum += (double)0.008279103553749425984;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.06301250000000001295) ) ) {
          sum += (double)-0.001900393128861317237;
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4249.125988354198853) ) ) {
            sum += (double)0.004106443199824518463;
          } else {
            sum += (double)-0.000192959809765746109;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.001650000000000000208) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.505364806866953398) ) ) {
          sum += (double)0.001887657456192990118;
        } else {
          sum += (double)-0.005547863052165851599;
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-369.2501017531215552) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4014.854643240365021) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4193.228010564421311) ) ) {
              sum += (double)-0.0001466921891211982187;
            } else {
              sum += (double)-0.005624685787272265536;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5593500000000001249) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4675000000000000822) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.719320066334991903) ) ) {
                  sum += (double)-0.002484320909878628969;
                } else {
                  sum += (double)0.001267731361730686226;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9450000000000000622) ) ) {
                  sum += (double)4.932108688496932984e-05;
                } else {
                  sum += (double)0.008043636101259646343;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2546825051281399466) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2258850621187963037) ) ) {
                  sum += (double)-5.160937855302139487e-05;
                } else {
                  sum += (double)0.006544919851224452641;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3586370000000000391) ) ) {
                  sum += (double)-0.0006144472471778087731;
                } else {
                  sum += (double)-0.007780220983460708721;
                }
              }
            }
          }
        } else {
          sum += (double)-0.003713878052907423118;
        }
      }
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4075.95765845995993) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4314.984009076141774) ) ) {
      sum += (double)-0.0004028739408562144876;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2874875000000000624) ) ) {
        sum += (double)-0.002036241583575348034;
      } else {
        sum += (double)-0.007664090987274967647;
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3895.92336932573653) ) ) {
      sum += (double)0.005852524958826364233;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3430250000000000798) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2914020000000000499) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.464529454022989174) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.37349033816425159) ) ) {
              sum += (double)-0.0009731712316086541274;
            } else {
              sum += (double)0.008139487374613191967;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9150000000000001465) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1653.788307513030077) ) ) {
                sum += (double)-0.0004239980212300211338;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04420000000000001011) ) ) {
                  sum += (double)-0.0005118411451441833146;
                } else {
                  sum += (double)0.006545307580578958381;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.88955479452054842) ) ) {
                sum += (double)-0.01064196266224648815;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1369000000000000217) ) ) {
                  sum += (double)-0.002863791705849423261;
                } else {
                  sum += (double)0.003654091139884289418;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8150000000000000577) ) ) {
            sum += (double)-0.002414427935796708159;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3165280000000000871) ) ) {
              sum += (double)0.01025853457812828974;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2336.682350514520749) ) ) {
                sum += (double)-0.001499393490561820889;
              } else {
                sum += (double)0.006170044952863340711;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.364131000000000038) ) ) {
          sum += (double)-0.006240637688362513959;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3952085000000000736) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3801160000000000649) ) ) {
              sum += (double)-0.001170927746455134458;
            } else {
              sum += (double)0.007708594083442018088;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4209690000000000931) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6601500000000001256) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.276298222740671173) ) ) {
                  sum += (double)-0.009846037966416743697;
                } else {
                  sum += (double)-0.003813670510025012582;
                }
              } else {
                sum += (double)0.002614390699053764384;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4930425000000000502) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.807071960297768065) ) ) {
                  sum += (double)-0.0001146491022220447729;
                } else {
                  sum += (double)0.005941025348209210549;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.008771929824562541) ) ) {
                  sum += (double)0.0002118885069127736127;
                } else {
                  sum += (double)-0.003418760455352489076;
                }
              }
            }
          }
        }
      }
    }
  }
  return sum;
}
