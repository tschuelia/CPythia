#include "prediction.h"
double predict_margin_unit5(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.8219787372532004754) ) ) {
    sum += (double)0.003290768115306927973;
  } else {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1719.735022275023994) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3355885000000000118) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3046920000000000184) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2929020000000000512) ) ) {
            sum += (double)-0.0005131065362039490159;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14193.52161079702273) ) ) {
              sum += (double)-0.002956949819585851392;
            } else {
              sum += (double)0.0131739671989121853;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.450904890257991298) ) ) {
            sum += (double)-0.0002265070002001802636;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8150.693065381894485) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.6574074074074101) ) ) {
                sum += (double)0.003353299633003529925;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.451390039818814981) ) ) {
                  sum += (double)-0.01375151261424966374;
                } else {
                  sum += (double)-0.001040082205080581322;
                }
              }
            } else {
              sum += (double)-0.01395178503096428275;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)108.7425925925926009) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)90.80141843971632909) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5036000000000001586) ) ) {
              sum += (double)0.001772992235523297841;
            } else {
              sum += (double)-0.001039811195218464735;
            }
          } else {
            sum += (double)0.0095182143967340576;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8574880766449312075) ) ) {
            sum += (double)-0.006537794618579884781;
          } else {
            sum += (double)0.003987673016344298049;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.173795431680086043) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.848989496077650063) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8518650000000000944) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.42206477732793557) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04280000000000000471) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005950000000000001295) ) ) {
                  sum += (double)-6.535360954790770901e-05;
                } else {
                  sum += (double)-0.009196516382366981893;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
                  sum += (double)0.004958308918391986404;
                } else {
                  sum += (double)-0.004090521567810227396;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9414886987020746334) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.001754385964912952) ) ) {
                  sum += (double)0.004704927311291634204;
                } else {
                  sum += (double)-0.001968455661512472869;
                }
              } else {
                sum += (double)0.0104405938419660331;
              }
            }
          } else {
            sum += (double)-0.006317968326786486954;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007100000000000000408) ) ) {
            sum += (double)-0.007879835023633182181;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8850000000000001199) ) ) {
              sum += (double)0.001432908146311500774;
            } else {
              sum += (double)-0.003966463673631163804;
            }
          }
        }
      } else {
        sum += (double)-0.00999693415556835753;
      }
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-369.2501017531215552) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.16263736263736384) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.42045826513912132) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.037194841087057284) ) ) {
          sum += (double)0.001120070940502143099;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1995835000000000248) ) ) {
            sum += (double)0.004113096387346156999;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2400345000000000395) ) ) {
              sum += (double)-0.01040902159341313381;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.023643244746905046) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.609208937198069123) ) ) {
                  sum += (double)-0.001008525144496168202;
                } else {
                  sum += (double)0.005947489337286433406;
                }
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3811.335963182330033) ) ) {
                  sum += (double)0.00195029113787497624;
                } else {
                  sum += (double)-0.0100280851003527547;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8541500000000000759) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2885.052947763699649) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.2345890410958944) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)34.54131455399061679) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.58149205561072748) ) ) {
                  sum += (double)0.0014439649129422737;
                } else {
                  sum += (double)0.008100488632700637848;
                }
              } else {
                sum += (double)-0.004516721525039149761;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04935000000000001191) ) ) {
                sum += (double)0.01444883302443616784;
              } else {
                sum += (double)-0.001022554625673851659;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
              sum += (double)0.001208372009572281861;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3355885000000000118) ) ) {
                sum += (double)0.01601168711807342271;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1425570779861878579) ) ) {
                  sum += (double)0.0007227220800233565088;
                } else {
                  sum += (double)0.01181504656703187377;
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4800525000000000486) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3662300000000000555) ) ) {
              sum += (double)-0.0007322755439935744754;
            } else {
              sum += (double)-0.01232522996978009829;
            }
          } else {
            sum += (double)0.001230724161674972769;
          }
        }
      }
    } else {
      sum += (double)-0.0005026578904670391847;
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07930000000000002325) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9772030651340998242) ) ) {
        sum += (double)0.005002016643694724013;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7189084634482026948) ) ) {
          sum += (double)-0.008787793918977318194;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5107490000000001196) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7350000000000000977) ) ) {
              sum += (double)-0.001478653264466434991;
            } else {
              sum += (double)0.009285726279971005803;
            }
          } else {
            sum += (double)-0.006797580733058613059;
          }
        }
      }
    } else {
      sum += (double)-0.0138993762192521908;
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-369.2501017531215552) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5968835000000001223) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8575500000000001455) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-552.8487653176190406) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5221245000000001024) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5107490000000001196) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5104547563113605024) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.129078000000000026) ) ) {
                  sum += (double)-0.001208942115186241797;
                } else {
                  sum += (double)0.001655149938681772792;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.656250000000000111) ) ) {
                  sum += (double)-0.000612971634600022186;
                } else {
                  sum += (double)-0.005765660039137818563;
                }
              }
            } else {
              sum += (double)0.008799315455094993202;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5633500000000001284) ) ) {
              sum += (double)-0.004244351043814127179;
            } else {
              sum += (double)0.003190271820710082959;
            }
          }
        } else {
          sum += (double)0.005945273645104927861;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)29.94680432645034784) ) ) {
          sum += (double)-0.008960154401693436882;
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08000000000000001554) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8450000000000000844) ) ) {
              sum += (double)-0.002003465250506767954;
            } else {
              sum += (double)0.004607964476064622603;
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.43934665002081275) ) ) {
              sum += (double)-0.008024238495670108634;
            } else {
              sum += (double)0.002124932905144763344;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        sum += (double)0.008539791100981573499;
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7176.629448724414942) ) ) {
          sum += (double)-0.001856111333744775872;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.533917682926829507) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.305339805825243005) ) ) {
              sum += (double)-0.002708342082987305263;
            } else {
              sum += (double)0.001743677697223037452;
            }
          } else {
            sum += (double)0.01220586124313668801;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07930000000000002325) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.719320066334991903) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.748379282003855284) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6345946031821346756) ) ) {
            sum += (double)0.004256201011915001359;
          } else {
            sum += (double)-0.009716299127147736206;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.395652173913043637) ) ) {
            sum += (double)-0.0003247703882994789921;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5304655000000001452) ) ) {
              sum += (double)0.01382182691494614375;
            } else {
              sum += (double)-0.0001048780691841905702;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.767948717948718329) ) ) {
          sum += (double)-0.01090376839796131613;
        } else {
          sum += (double)-0.001256780686607321439;
        }
      }
    } else {
      sum += (double)-0.0119066973501574299;
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-369.2501017531215552) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2448.48124855514061) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2491.711596340602682) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.06030000000000000637) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5750000000000000666) ) ) {
            sum += (double)-0.004323622819484237469;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22032.49248968554093) ) ) {
              sum += (double)0.0006804154645678039005;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.80085541900848356) ) ) {
                sum += (double)0.0134773770448052832;
              } else {
                sum += (double)0.002949160405838382581;
              }
            }
          }
        } else {
          sum += (double)-0.0002620269566800480622;
        }
      } else {
        sum += (double)-0.00738117683935653017;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8121500000000000385) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4632000000000000561) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09970000000000002471) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5968835000000001223) ) ) {
              sum += (double)-0.002994128951894183682;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1026.429492244415542) ) ) {
                sum += (double)0.008239363622692300049;
              } else {
                sum += (double)-0.003529796698891385712;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-999.6459300448483418) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02595000000000000431) ) ) {
                sum += (double)-0.003193672350196007006;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1600000000000000588) ) ) {
                  sum += (double)0.008547631549322306371;
                } else {
                  sum += (double)-0.0006984347229932384672;
                }
              }
            } else {
              sum += (double)0.006920751865673030814;
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8150000000000000577) ) ) {
            sum += (double)-0.0006636983247291641319;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.06458333333333499) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5885500000000001286) ) ) {
                sum += (double)0.01203253960107802424;
              } else {
                sum += (double)0.0007525371350571851163;
              }
            } else {
              sum += (double)0.015144850357363418;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.197560975609756273) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9520500000000001739) ) ) {
            sum += (double)0.006921706936189097291;
          } else {
            sum += (double)-0.002588485150224654509;
          }
        } else {
          sum += (double)-0.004034394733220400368;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08605000000000000149) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9224771330034489125) ) ) {
        sum += (double)0.003657919070907325945;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8489585963449997053) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04280000000000000471) ) ) {
            sum += (double)-0.009601494706460808604;
          } else {
            sum += (double)0.0001730958430078164757;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1446000000000000341) ) ) {
            sum += (double)0.005239408435764041257;
          } else {
            sum += (double)-0.006325159481808463255;
          }
        }
      }
    } else {
      sum += (double)-0.01045160927713306709;
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-804.0787728647379708) ) ) {
    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1232.321880513280803) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8329925000000001356) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.286409983345097707) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.730992608792824905) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.497098467321646753) ) ) {
              sum += (double)-9.164215343365921169e-05;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4146500000000000186) ) ) {
                sum += (double)-0.000195403945644368203;
              } else {
                sum += (double)0.01199290733504415792;
              }
            }
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2761.008794057032901) ) ) {
              sum += (double)-0.005590786991432064416;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.964433291539125603) ) ) {
                sum += (double)-0.004545065316483857393;
              } else {
                sum += (double)0.007441669967956105608;
              }
            }
          }
        } else {
          sum += (double)0.004769567919153284465;
        }
      } else {
        sum += (double)0.003682441708471402043;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02895000000000000351) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000000000001438) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.14667015835553604) ) ) {
            sum += (double)0.008814510057555732109;
          } else {
            sum += (double)-0.004921065445582443847;
          }
        } else {
          sum += (double)-0.004753182009977098034;
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.807071960297768065) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.170138888888890172) ) ) {
            sum += (double)0.004656673291220897286;
          } else {
            sum += (double)0.01549178249914700753;
          }
        } else {
          sum += (double)0.0009398998799699596462;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05095000000000000223) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)4.742918961447680104) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02635000000000000189) ) ) {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-178.4044396117413669) ) ) {
            sum += (double)-0.003387638194490164966;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5950000000000000844) ) ) {
              sum += (double)-0.002167050127224856744;
            } else {
              sum += (double)0.00661349629711984778;
            }
          }
        } else {
          sum += (double)-0.006634922187404222044;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)10.19149436090225613) ) ) {
          sum += (double)-0.01315104407258798833;
        } else {
          sum += (double)6.683227682687816569e-05;
        }
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01020000000000000247) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.924285714285714599) ) ) {
          sum += (double)0.006333661336127112233;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.409734133790738309) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.719320066334991903) ) ) {
              sum += (double)0.001221304881366955643;
            } else {
              sum += (double)-0.009617242543795125054;
            }
          } else {
            sum += (double)0.0067407567298799001;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-397.5337060502328086) ) ) {
          sum += (double)0.0004108843341869475698;
        } else {
          sum += (double)-0.008621803807971702496;
        }
      }
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-282.5149217182645884) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5968835000000001223) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8575500000000001455) ) ) {
        if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8446000000000001284) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5274700000000001054) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5137965000000001003) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4559886699161891932) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3731231779852481334) ) ) {
                  sum += (double)0.0002393580236419719871;
                } else {
                  sum += (double)0.003241115713594994868;
                }
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9550000000000000711) ) ) {
                  sum += (double)0.000488289190988067741;
                } else {
                  sum += (double)-0.001350897328738581487;
                }
              }
            } else {
              sum += (double)0.007352318164525140087;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07450000000000002454) ) ) {
              sum += (double)-0.005762277815705578281;
            } else {
              sum += (double)-0.0006116132742012177215;
            }
          }
        } else {
          sum += (double)0.0054811677888009884;
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8737000000000000322) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3046920000000000184) ) ) {
            sum += (double)-0.0006058167188778951608;
          } else {
            sum += (double)-0.01237239742689467091;
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-11425.04291619889409) ) ) {
            sum += (double)0.002639157313574949475;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7176.629448724414942) ) ) {
              sum += (double)-0.006849168648919497226;
            } else {
              sum += (double)-0.0009779070786155763702;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6244745000000001545) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1936000000000000221) ) ) {
          sum += (double)0.01326117271504420429;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2448.48124855514061) ) ) {
            sum += (double)-0.001582868177942320679;
          } else {
            sum += (double)0.005691503781238827636;
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.37171052631579116) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.609208937198069123) ) ) {
            sum += (double)0.0005566048902524435267;
          } else {
            sum += (double)0.008295301999513145577;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24848.45518581499709) ) ) {
            sum += (double)0.0007765093157429260422;
          } else {
            sum += (double)-0.009072670270252070415;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-211.5714022873356726) ) ) {
      sum += (double)-0.01045251614387734951;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1566500000000000392) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04705000000000000848) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02635000000000000189) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5950000000000000844) ) ) {
              sum += (double)-0.003012882520165224842;
            } else {
              sum += (double)0.004090376892200422651;
            }
          } else {
            sum += (double)-0.009037871518150900063;
          }
        } else {
          sum += (double)0.004995767018000554956;
        }
      } else {
        sum += (double)-0.006022140211464279726;
      }
    }
  }
  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-282.5149217182645884) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.16263736263736384) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.42045826513912132) ) ) {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3172976259383097353) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4895500000000000407) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.048368298368299811) ) ) {
              sum += (double)-0.00277880999493380779;
            } else {
              sum += (double)-0.01182654877954496947;
            }
          } else {
            sum += (double)-0.0007500416413958041007;
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5648500000000000743) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5001000000000001) ) ) {
              sum += (double)0.0004500385645077927682;
            } else {
              sum += (double)0.009582520137744946279;
            }
          } else {
            sum += (double)-0.008258605053709388091;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3731231779852481334) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03735000000000000819) ) ) {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.625000000000000111) ) ) {
              sum += (double)-0.001094882978344154101;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1708203380254501302) ) ) {
                sum += (double)0.0028014869188200597;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.629450000000000176) ) ) {
                  sum += (double)0.003715857535355133415;
                } else {
                  sum += (double)0.01593109496940193007;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05215000000000000885) ) ) {
              sum += (double)-0.01043776323618871363;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1975.016598631846364) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.36809269162210434) ) ) {
                  sum += (double)-0.0008871172201505225785;
                } else {
                  sum += (double)0.00677221501978772511;
                }
              } else {
                sum += (double)0.008767085321188911387;
              }
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6627.119522556799893) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12044.6643691100453) ) ) {
              sum += (double)0.006054591490955611895;
            } else {
              sum += (double)-0.004282642370793727019;
            }
          } else {
            sum += (double)0.008939002289342197483;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.04759238521836728) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4087500000000000577) ) ) {
          sum += (double)-0.007064103163027382788;
        } else {
          sum += (double)0.001814141685489523885;
        }
      } else {
        sum += (double)-0.0001466552688542945514;
      }
    }
  } else {
    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-200.0588293342066493) ) ) {
      sum += (double)-0.007833687413430127575;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5864845000000001862) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.875000000000000111) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8287289774413838517) ) ) {
            sum += (double)-0.005281233348849509804;
          } else {
            sum += (double)0.002704523331887614956;
          }
        } else {
          sum += (double)0.008126548779646958903;
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)0.9772030651340998242) ) ) {
          sum += (double)0.001192872274951832122;
        } else {
          sum += (double)-0.007457174612294515878;
        }
      }
    }
  }
  return sum;
}
