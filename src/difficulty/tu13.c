#include "prediction.h"
double predict_margin_unit13(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6931000000000000494) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4075.95765845995993) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4314.984009076141774) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2529500000000000637) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2293765000000000109) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.77329192546583947) ) ) {
              sum += (double)0.004334016591424999683;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)21.0056980056980116) ) ) {
                sum += (double)-0.006188290013109118762;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2040000000000000424) ) ) {
                  sum += (double)-0.0003871335929361972741;
                } else {
                  sum += (double)0.002938149699230422403;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1859000000000000374) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.36332607116921167) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.341823491239455102) ) ) {
                  sum += (double)0.0006844642917486650196;
                } else {
                  sum += (double)-0.008162665585231354201;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)27.64814814814815236) ) ) {
                  sum += (double)0.002622245147914587307;
                } else {
                  sum += (double)-0.003202478678268850295;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37171052631579116) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2265500000000000569) ) ) {
                  sum += (double)-0.000106828014279283635;
                } else {
                  sum += (double)-0.006383036704058021871;
                }
              } else {
                sum += (double)-0.009329002805001594331;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3147500000000000298) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.364131000000000038) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2811385000000000134) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.483800421148474602) ) ) {
                  sum += (double)0.008000647387752690687;
                } else {
                  sum += (double)0.0002309807259856001555;
                }
              } else {
                sum += (double)-0.006403239293955041538;
              }
            } else {
              sum += (double)0.008100506094036154237;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)65.9000000000000199) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)54.0480769230769269) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5966879624821318506) ) ) {
                  sum += (double)-0.001350677369546606854;
                } else {
                  sum += (double)0.001469929040463463336;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2811385000000000134) ) ) {
                  sum += (double)0.001162281102142215293;
                } else {
                  sum += (double)0.009741843815326858141;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
                sum += (double)-0.0001727113062852657116;
              } else {
                sum += (double)-0.003579227187334740098;
              }
            }
          }
        }
      } else {
        sum += (double)-0.003762546466592272924;
      }
    } else {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3895.92336932573653) ) ) {
        sum += (double)0.005013462732301327864;
      } else {
        sum += (double)1.784960363231804796e-05;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4508875000000000521) ) ) {
      sum += (double)-0.005993124564634528216;
    } else {
      sum += (double)0.001380158731285008713;
    }
  }
  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.602550000000000141) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.732192000000000065) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5928500000000000991) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4075.95765845995993) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4314.984009076141774) ) ) {
            sum += (double)-0.0001353841142979200904;
          } else {
            sum += (double)-0.003542033635572651353;
          }
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.0043859649122826) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2150355000000000183) ) ) {
              sum += (double)0.003984081937285597654;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.625833333333334352) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2525.933689631679499) ) ) {
                  sum += (double)0.002852329263978113042;
                } else {
                  sum += (double)-0.000328119392431963316;
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1427.611110815408438) ) ) {
                  sum += (double)-0.005899228271446676185;
                } else {
                  sum += (double)0.0001092977888593155242;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9650000000000000799) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03235000000000001069) ) ) {
                sum += (double)-0.0009827962410150863342;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07245000000000001439) ) ) {
                  sum += (double)0.0067240083416244276;
                } else {
                  sum += (double)0.000953589854123722833;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.158666732825883505) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3862854716318727677) ) ) {
                  sum += (double)0.004706718544626377343;
                } else {
                  sum += (double)0.01317532730529407357;
                }
              } else {
                sum += (double)-0.002392455688982368048;
              }
            }
          }
        }
      } else {
        sum += (double)0.003778877550720353799;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9112985503553449051) ) ) {
        sum += (double)-0.001008779214544072624;
      } else {
        sum += (double)-0.005413147411897393027;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6367000000000001547) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.10201429499675285) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.18137886597938291) ) ) {
          sum += (double)-0.0002459446884097465816;
        } else {
          sum += (double)-0.01322931225847479367;
        }
      } else {
        sum += (double)-0.001493239673848746488;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4268500000000000627) ) ) {
        sum += (double)1.878745809067575222e-05;
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.78764044943820721) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)33.18545751633987351) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.62258064516129608) ) ) {
              sum += (double)-0.004614606241193911461;
            } else {
              sum += (double)0.0028051749149408476;
            }
          } else {
            sum += (double)-0.009485198435237356812;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)61.67992424242424931) ) ) {
            sum += (double)0.009199170189988640708;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6066600000000000881) ) ) {
              sum += (double)-0.006261969261228879716;
            } else {
              sum += (double)0.001749145807431154616;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6931000000000000494) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-140.7006809645211831) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-178.4044396117413669) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.602550000000000141) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06255000000000000837) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1995835000000000248) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)13.34272727272727543) ) ) {
                sum += (double)0.005715438713347445986;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04545000000000001122) ) ) {
                  sum += (double)0.0008312976737163593321;
                } else {
                  sum += (double)-0.003789013652265421292;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4895500000000000407) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3693500000000001227) ) ) {
                  sum += (double)-0.0005160874363704625852;
                } else {
                  sum += (double)-0.006174491233898133334;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2818.428842596366849) ) ) {
                  sum += (double)-0.001242795341449577477;
                } else {
                  sum += (double)0.004632046718541673117;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0846500000000000169) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4273500000000000631) ) ) {
                sum += (double)-0.0001284810450368487945;
              } else {
                sum += (double)0.009952637294040247301;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09510000000000000397) ) ) {
                sum += (double)-0.002964890696091471763;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5274700000000001054) ) ) {
                  sum += (double)0.00056048326224141735;
                } else {
                  sum += (double)-0.0008469621705735065316;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.629450000000000176) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2671249432061471585) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3165280000000000871) ) ) {
                sum += (double)-0.009064643314199398103;
              } else {
                sum += (double)-0.002528795993092639721;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1470500000000000418) ) ) {
                sum += (double)-0.004172830814771483557;
              } else {
                sum += (double)0.001450509788320444296;
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)553.1102756892231582) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1455340000000000245) ) ) {
                sum += (double)-0.001318406127952533816;
              } else {
                sum += (double)-5.592533572446940374e-07;
              }
            } else {
              sum += (double)0.003123438730011560832;
            }
          }
        }
      } else {
        sum += (double)0.004241192382932804789;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7799537259712746584) ) ) {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
          sum += (double)-0.001317344573880194908;
        } else {
          sum += (double)-0.00759384119447344217;
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8724076688193924678) ) ) {
          sum += (double)0.005042073846290100712;
        } else {
          sum += (double)-0.0008666012362283358758;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4508875000000000521) ) ) {
      sum += (double)-0.005159020436517498635;
    } else {
      sum += (double)0.00123572478613176418;
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.04759238521836728) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.16263736263736384) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.2232789855072479) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4575560000000000183) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.000750000000000000124) ) ) {
            sum += (double)0.001057532014791763867;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13280.04482759072744) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
                sum += (double)-0.003895418824496027759;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16109.82692390526427) ) ) {
                  sum += (double)0.002154384112575301585;
                } else {
                  sum += (double)0.009672660791146925341;
                }
              }
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-9341.451889697307706) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.934993003731343642) ) ) {
                  sum += (double)-0.00140214256601694392;
                } else {
                  sum += (double)-0.009066488726754499614;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8724.154536341893618) ) ) {
                  sum += (double)0.006126208688976305869;
                } else {
                  sum += (double)-0.001023239319795514078;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.468926000000000065) ) ) {
            sum += (double)0.007064652261333987694;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.65809968847352174) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.609208937198069123) ) ) {
                sum += (double)5.197850748501579165e-05;
              } else {
                sum += (double)0.005385794539065061858;
              }
            } else {
              sum += (double)-0.004425708401857841694;
            }
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5461.791531049890182) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10299.34337366097861) ) ) {
            sum += (double)0.004042809318902189017;
          } else {
            sum += (double)-0.005218023054688854592;
          }
        } else {
          sum += (double)0.005469185198484072599;
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        sum += (double)-0.0001470348803641380504;
      } else {
        sum += (double)-0.008276690891825512486;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4037960000000000438) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3878415000000000612) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.65835065835065976) ) ) {
          sum += (double)0.00470550369649680271;
        } else {
          sum += (double)0.0002369417322990843074;
        }
      } else {
        sum += (double)0.01018215309637208847;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.38981481481481595) ) ) {
        sum += (double)-0.004983146195829264193;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.99679487179488291) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5575500000000001011) ) ) {
            sum += (double)0.004965593119192850818;
          } else {
            sum += (double)-0.001225648375088755383;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5700170000000001069) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1797500000000000486) ) ) {
              sum += (double)-0.001555393924179713627;
            } else {
              sum += (double)-0.01132454754156926244;
            }
          } else {
            sum += (double)-9.28781667268179401e-05;
          }
        }
      }
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-140.7006809645211831) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-178.4044396117413669) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.343125551814233543) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.50390625000000178) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.10414012738853629) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.9791841883936101) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3860500000000000598) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3305000000000000715) ) ) {
                  sum += (double)-3.668325558605641619e-05;
                } else {
                  sum += (double)0.005295318358876927554;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4473500000000000809) ) ) {
                  sum += (double)-0.004904340518752617339;
                } else {
                  sum += (double)-0.0003539497497381912847;
                }
              }
            } else {
              sum += (double)-0.004901506890684614523;
            }
          } else {
            sum += (double)-0.005401053776492079246;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.95854591836734748) ) ) {
            sum += (double)0.007586469704397079926;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4067570000000000907) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3801160000000000649) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1653.788307513030077) ) ) {
                  sum += (double)-0.0001794714951771091724;
                } else {
                  sum += (double)0.002382322765597384619;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2879313601055101812) ) ) {
                  sum += (double)0.0005331239356826318913;
                } else {
                  sum += (double)0.00665454778666071424;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.65809968847352174) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2125.256670419978491) ) ) {
                  sum += (double)0.001193819587297184669;
                } else {
                  sum += (double)-0.00228333041501313028;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5787000000000001032) ) ) {
                  sum += (double)-0.002665791976509246115;
                } else {
                  sum += (double)0.0006926790484430442535;
                }
              }
            }
          }
        }
      } else {
        sum += (double)0.002331245220015619891;
      }
    } else {
      sum += (double)0.003658683239737105415;
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.766806579539440869) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6381087424959873688) ) ) {
        sum += (double)-0.0004342126729184545291;
      } else {
        sum += (double)-0.007408733388537109416;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06135000000000000869) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9638349311435107092) ) ) {
          sum += (double)0.00477317734133479981;
        } else {
          sum += (double)0.0005038021512895574051;
        }
      } else {
        sum += (double)-0.003040599655993199164;
      }
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-835.4162683040583488) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2107554194040927031) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1979168169407865274) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)206.5532786885246139) ) ) {
          sum += (double)-0.0005116115176884317595;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8607500000000000151) ) ) {
            sum += (double)-0.001628273033800756425;
          } else {
            sum += (double)0.006031825192803676877;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.679200000000000137) ) ) {
          sum += (double)0.0005301734169446197745;
        } else {
          sum += (double)-0.007917106011510200922;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4209690000000000931) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.414220500000000047) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3440695281941489325) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.35757575757576632) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3318725000000000702) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2865905000000000258) ) ) {
                  sum += (double)0.0003010063866363903141;
                } else {
                  sum += (double)-0.007792452830387276361;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2765776916165623711) ) ) {
                  sum += (double)-0.0003712231534468914303;
                } else {
                  sum += (double)0.007290838669278003684;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1078240000000000171) ) ) {
                sum += (double)0.0001465708672663597215;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1708000000000000351) ) ) {
                  sum += (double)0.009701546731392963682;
                } else {
                  sum += (double)0.002729816499332214826;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3564740000000000686) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.03970125786163603) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1613500000000000212) ) ) {
                  sum += (double)0.0001948595281685466308;
                } else {
                  sum += (double)0.005768249559492948098;
                }
              } else {
                sum += (double)-0.0002095125502747536292;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4775924739126843899) ) ) {
                sum += (double)-0.01178803841008413053;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7444527670486335014) ) ) {
                  sum += (double)0.007249770832061595838;
                } else {
                  sum += (double)-0.002553180051430243257;
                }
              }
            }
          }
        } else {
          sum += (double)-0.007307926176956618808;
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6931000000000000494) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5071000000000001062) ) ) {
            sum += (double)0.001427174394615491563;
          } else {
            sum += (double)-0.001539649182459850102;
          }
        } else {
          sum += (double)0.0059197387669500251;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.505364806866953398) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1972000000000000142) ) ) {
        sum += (double)-0.0007869756344129668008;
      } else {
        sum += (double)0.004007749986041951769;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5409275000000001166) ) ) {
        sum += (double)-0.001207920084430825526;
      } else {
        sum += (double)-0.01439831079953709896;
      }
    }
  }
  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6957.789300648867538) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7176.629448724414942) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.618667917448405991) ) ) {
        sum += (double)-0.003694241275252865657;
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009350000000000002406) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.810202550637662) ) ) {
            sum += (double)0.007677835474983094564;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1108795000000000197) ) ) {
              sum += (double)0.002108190953770851164;
            } else {
              sum += (double)-0.003672802513209101703;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955385000000000317) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.3556547619047663) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1679115000000000191) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14037.81298809654982) ) ) {
                  sum += (double)0.005993060961068298435;
                } else {
                  sum += (double)-0.006779594827297650422;
                }
              } else {
                sum += (double)-0.01161121968932194923;
              }
            } else {
              sum += (double)-0.0001663363992125720451;
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7867.815501298001436) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9250000000000001554) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3587500000000000688) ) ) {
                  sum += (double)0.001050680720348077645;
                } else {
                  sum += (double)0.009939356154027582241;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22951.36359679786256) ) ) {
                  sum += (double)0.001630092431345647437;
                } else {
                  sum += (double)-0.0004457254592800878709;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4559886699161891932) ) ) {
                sum += (double)0.009917724682690696666;
              } else {
                sum += (double)-0.0001004939114836441919;
              }
            }
          }
        }
      }
    } else {
      sum += (double)0.005864888255838421154;
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6456.091882016088675) ) ) {
      sum += (double)-0.003719200249961902502;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1955385000000000317) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7050000000000000711) ) ) {
          sum += (double)0.0001887181180813517624;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.42045826513912132) ) ) {
            sum += (double)0.0004802989544773437753;
          } else {
            sum += (double)0.0105496901731590171;
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.225314000000000042) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2831453397228142488) ) ) {
            sum += (double)-0.00761841232308338185;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2078490000000000337) ) ) {
              sum += (double)0.002283099513356858564;
            } else {
              sum += (double)-0.004480730055121340261;
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-835.4162683040583488) ) ) {
            sum += (double)-0.0001502802235211522482;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.719320066334991903) ) ) {
              sum += (double)-0.0002312082114290105021;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5409275000000001166) ) ) {
                sum += (double)-0.001161614654605316183;
              } else {
                sum += (double)-0.009121265243060295777;
              }
            }
          }
        }
      }
    }
  }
  return sum;
}
