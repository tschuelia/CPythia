#include "prediction.h"
double predict_margin_unit7(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.241598129272460938) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2368519976735115051) ) ) {
        sum += (double)0.0641665831067789183;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4785815030336380005) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.331621512770652771) ) ) {
            sum += (double)0.4349154410512442448;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.268661856651306152) ) ) {
              sum += (double)0.2975071821355450563;
            } else {
              sum += (double)0.1891389208423628898;
            }
          }
        } else {
          sum += (double)0.5314343974745567856;
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3547950088977813721) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1255569979548454285) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2349999994039535522) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08501249924302101135) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.09536933898925781) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.419689863920211792) ) ) {
                    sum += (double)0.01810277142857142849;
                  } else {
                    sum += (double)0.006316999999999998831;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1959500014781951904) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.05555534362792969) ) ) {
                      sum += (double)0.008232500000000001969;
                    } else {
                      sum += (double)0.004250607734806632204;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2592500001192092896) ) ) {
                      sum += (double)0.01209384000000000327;
                    } else {
                      sum += (double)0.005111781818181820175;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.0921499989926815033) ) ) {
                  sum += (double)0.03780698571428572213;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                    sum += (double)0.004000000000000000083;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)63.80952262878417969) ) ) {
                      sum += (double)0.02630101176470588456;
                    } else {
                      sum += (double)0.009809616666666666485;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19934.763671875) ) ) {
                sum += (double)0.01844350070707070563;
              } else {
                sum += (double)0.05151709207161125209;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.13025236129760742) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.118750095367431641) ) ) {
                sum += (double)0.05041871078912553428;
              } else {
                sum += (double)0.1695893358559564523;
              }
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5685199201107025146) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2156829982995986938) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.54285717010498047) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.55965900421142578) ) ) {
                      sum += (double)0.03147729600000000183;
                    } else {
                      sum += (double)0.07229728214559387467;
                    }
                  } else {
                    sum += (double)0.01524594285714286034;
                  }
                } else {
                  sum += (double)0.09512487397459165606;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4472499936819076538) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3449999988079071045) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.23824405670166016) ) ) {
                      sum += (double)0.008107299999999999576;
                    } else {
                      sum += (double)0.004320826666666667884;
                    }
                  } else {
                    sum += (double)0.01157185263157894592;
                  }
                } else {
                  sum += (double)0.02026231428571428905;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.736466825008392334) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
              sum += (double)0.2504786773269084832;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5949999988079071045) ) ) {
                sum += (double)0.2118848331985170308;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1072915010154247284) ) ) {
                  sum += (double)0.1835514498771720071;
                } else {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.745000004768371582) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06864999979734420776) ) ) {
                      sum += (double)0.03952590639386189403;
                    } else {
                      sum += (double)0.01876440000000000052;
                    }
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19490.8876953125) ) ) {
                      sum += (double)0.04090539069310124287;
                    } else {
                      sum += (double)0.108067898404106924;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.350149989128112793) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8865365087985992432) ) ) {
                sum += (double)0.02948412704826038414;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1195999979972839355) ) ) {
                  sum += (double)0.01495862501414827427;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4352.97265625) ) ) {
                    sum += (double)0.009811242105263158833;
                  } else {
                    sum += (double)0.004385966666666667874;
                  }
                }
              }
            } else {
              sum += (double)0.04563951705271243608;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.930000007152557373) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.53977203369140625) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5993340909481048584) ) ) {
              sum += (double)0.100131683394212162;
            } else {
              sum += (double)0.03674807499787035442;
            }
          } else {
            sum += (double)0.2109992763705033081;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2476.5833740234375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.138149995356798172) ) ) {
              sum += (double)0.2960393671585546116;
            } else {
              sum += (double)0.07432192670772676257;
            }
          } else {
            sum += (double)0.3752816343252334264;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4759524911642074585) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9564632177352905273) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2901324927806854248) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02545000053942203522) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2556509822607040405) ) ) {
                sum += (double)0.5788647206223443975;
              } else {
                sum += (double)0.3967039641875100831;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2957499921321868896) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.944613456726074219) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2072999998927116394) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2057824954390525818) ) ) {
                      sum += (double)0.2689256113696481543;
                    } else {
                      sum += (double)0.4241793539610309582;
                    }
                  } else {
                    sum += (double)0.2583032808116589862;
                  }
                } else {
                  sum += (double)0.1459775124851049044;
                }
              } else {
                sum += (double)0.4907415894830141623;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3421449959278106689) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.604779362678527832) ) ) {
                  sum += (double)0.4938433233080682383;
                } else {
                  sum += (double)0.5610203771511634852;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.04416179656982422) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.495692968368530273) ) ) {
                    sum += (double)0.5998804492503903019;
                  } else {
                    sum += (double)0.5581019890360352509;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01390000013634562492) ) ) {
                    sum += (double)0.6845089415525114074;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1729884222149848938) ) ) {
                      sum += (double)0.5844364302508960884;
                    } else {
                      sum += (double)0.655653123611111166;
                    }
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1346499994397163391) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.48928165435791016) ) ) {
                  sum += (double)0.5198150716612880418;
                } else {
                  sum += (double)0.3686446243129109512;
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.444583699107170105) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3972740024328231812) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2195499986410140991) ) ) {
                      sum += (double)0.561051735714285682;
                    } else {
                      sum += (double)0.4993824325566937894;
                    }
                  } else {
                    sum += (double)0.5982537561452340169;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4331500083208084106) ) ) {
                    sum += (double)0.5106669808744330741;
                  } else {
                    sum += (double)0.4285404672736529696;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3335070013999938965) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.84093379974365234) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-18792.2998046875) ) ) {
                sum += (double)0.3767875928468966684;
              } else {
                sum += (double)0.1927163131227998538;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7014499902725219727) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3460583239793777466) ) ) {
                  sum += (double)0.3149484219406393226;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6367999613285064697) ) ) {
                    sum += (double)0.102117021034047184;
                  } else {
                    sum += (double)0.204772486398345499;
                  }
                }
              } else {
                sum += (double)0.120523117483620601;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3800955861806869507) ) ) {
              sum += (double)0.5042708540911902126;
            } else {
              sum += (double)0.2853033154292479723;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.340321898460388184) ) ) {
          sum += (double)0.3543203886264514324;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05709999985992908478) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.871339797973632812) ) ) {
              sum += (double)0.3095958486454432057;
            } else {
              sum += (double)0.1598265821865157976;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
              sum += (double)0.1977849039888082416;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3895944952964782715) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.405001640319824219) ) ) {
                  sum += (double)0.04143198027907752518;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1429999992251396179) ) ) {
                    sum += (double)0.02979051772151898592;
                  } else {
                    sum += (double)0.01741795789473684491;
                  }
                }
              } else {
                sum += (double)0.1269294649219159243;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9965807795524597168) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.20970344543457031) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5800004899501800537) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.061329126358032227) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.044230937957763672) ) ) {
                  sum += (double)0.6208865886013650304;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.848232388496398926) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0185000002384185791) ) ) {
                      sum += (double)0.7287350804232802792;
                    } else {
                      sum += (double)0.6968545777777778172;
                    }
                  } else {
                    sum += (double)0.6481822064855151666;
                  }
                }
              } else {
                sum += (double)0.5776726069604750657;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.066740751266479492) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6137499809265136719) ) ) {
                  sum += (double)0.6760639666091459166;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.792405009269714355) ) ) {
                    sum += (double)0.7751615161161019563;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3976.921142578125) ) ) {
                      sum += (double)0.7393751461119126844;
                    } else {
                      sum += (double)0.6849233439393939138;
                    }
                  }
                }
              } else {
                sum += (double)0.6487780441073401905;
              }
            }
          } else {
            sum += (double)0.4547263948870706174;
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1061500012874603271) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8554465174674987793) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06487137079238891602) ) ) {
                sum += (double)0.8365669873015872948;
              } else {
                sum += (double)0.8638940133333333771;
              }
            } else {
              sum += (double)0.9143879995884773848;
            }
          } else {
            sum += (double)0.7696950289125167322;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.929137885570526123) ) ) {
          sum += (double)0.5374707422819471336;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3869.2119140625) ) ) {
            sum += (double)0.4820640036694922581;
          } else {
            sum += (double)0.2345949928165521892;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9850000143051147461) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.160416603088378906) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5749999880790710449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2335544973611831665) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.608771800994873047) ) ) {
            sum += (double)0.04584930206043956458;
          } else {
            sum += (double)0.009362320000000002099;
          }
        } else {
          sum += (double)0.1576127074228892977;
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)27.35389614105224609) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.824675321578979492) ) ) {
            sum += (double)0.3975816829002653541;
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5307451188564300537) ) ) {
              sum += (double)0.207350345642233036;
            } else {
              sum += (double)0.07004614385964913481;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2953699976205825806) ) ) {
            sum += (double)0.3079778305002904282;
          } else {
            sum += (double)0.4477577061524096735;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4181034862995147705) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.3350000083446502686) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.82857131958007812) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
              sum += (double)0.01839644479638009172;
            } else {
              sum += (double)0.09398769798626166461;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.08950350061058998108) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)68.39925384521484375) ) ) {
                    sum += (double)0.006054567741935485553;
                  } else {
                    sum += (double)0.004000000000000002685;
                  }
                } else {
                  sum += (double)0.00802289000000000127;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)76.91666793823242188) ) ) {
                  sum += (double)0.02612481224489796375;
                } else {
                  sum += (double)0.004000000000000000951;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.79949855804443359) ) ) {
                sum += (double)0.04752412639933165789;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8422262966632843018) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3518999963998794556) ) ) {
                    sum += (double)0.0550076107089791308;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
                      sum += (double)0.008852328571428572448;
                    } else {
                      sum += (double)0.01744683486477680359;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3065999895334243774) ) ) {
                    sum += (double)0.004000000000000001818;
                  } else {
                    sum += (double)0.007951973333333332492;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6759499907493591309) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6182352900505065918) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2200369983911514282) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4975606799125671387) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.935000002384185791) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2774000018835067749) ) ) {
                      sum += (double)0.02228904300173511002;
                    } else {
                      sum += (double)0.04818622524971242355;
                    }
                  } else {
                    sum += (double)0.0761834687530974497;
                  }
                } else {
                  sum += (double)0.1204612325642294285;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.65674591064453125) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2614115029573440552) ) ) {
                    sum += (double)0.1075853169464806303;
                  } else {
                    sum += (double)0.0586158391645848556;
                  }
                } else {
                  sum += (double)0.2243524811611790626;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1087999977171421051) ) ) {
                sum += (double)0.05845057716505957374;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.033021330833435059) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1538999974727630615) ) ) {
                    sum += (double)0.01201364523007856372;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19330.9365234375) ) ) {
                      sum += (double)0.0273754444444444453;
                    } else {
                      sum += (double)0.04776924439731354555;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.80263137817382812) ) ) {
                    sum += (double)0.005758495238095238597;
                  } else {
                    sum += (double)0.01339312500000000225;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7127999961376190186) ) ) {
              sum += (double)0.2359163374032639537;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2728395015001296997) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.870000004768371582) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1497123688459396362) ) ) {
                    sum += (double)0.04808035635394321272;
                  } else {
                    sum += (double)0.02383371251461988832;
                  }
                } else {
                  sum += (double)0.1041076610301693989;
                }
              } else {
                sum += (double)0.1577286688107377988;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)45.13120651245117188) ) ) {
          sum += (double)0.1057154463008415229;
        } else {
          sum += (double)0.3673714297077551039;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4615415036678314209) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.469298362731933594) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.00785000016912817955) ) ) {
              sum += (double)0.5380479368191720679;
            } else {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                sum += (double)0.242600688845651058;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8971.11962890625) ) ) {
                  sum += (double)0.422275583629663942;
                } else {
                  sum += (double)0.3181428702316431711;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3387510031461715698) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.004100000020116567612) ) ) {
                sum += (double)0.6175262225593548537;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.504411697387695312) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3013911545276641846) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3107.2119140625) ) ) {
                      sum += (double)0.4961164831754327764;
                    } else {
                      sum += (double)0.5805820061505452268;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4979.864501953125) ) ) {
                      sum += (double)0.5027483379345221159;
                    } else {
                      sum += (double)0.3861108572232934688;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5872.31591796875) ) ) {
                    sum += (double)0.503201178379220071;
                  } else {
                    sum += (double)0.3683904561592305504;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2125499993562698364) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4032197296619415283) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008900000248104333878) ) ) {
                    sum += (double)0.6553095857142855474;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.230444788932800293) ) ) {
                      sum += (double)0.569880404063252799;
                    } else {
                      sum += (double)0.6340598855527985744;
                    }
                  }
                } else {
                  sum += (double)0.5221981327688591801;
                }
              } else {
                sum += (double)0.4844864013872504094;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3334394991397857666) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.36721611022949219) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10632.30322265625) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.84882545471191406) ) ) {
                  sum += (double)0.4606694573366901246;
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.230650000274181366) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21991.205078125) ) ) {
                      sum += (double)0.2264039670166617668;
                    } else {
                      sum += (double)0.357974207236582076;
                    }
                  } else {
                    sum += (double)0.2179532651486883466;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.66748762130737305) ) ) {
                  sum += (double)0.1123885238861905556;
                } else {
                  sum += (double)0.2427614798262937856;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5384776294231414795) ) ) {
                sum += (double)0.1662593209950499473;
              } else {
                sum += (double)0.06773206976744186592;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4678499996662139893) ) ) {
              sum += (double)0.2294625639909247949;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13523.744140625) ) ) {
                sum += (double)0.5687158817215975937;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.363739013671875) ) ) {
                  sum += (double)0.4873746201716609439;
                } else {
                  sum += (double)0.2626204105608482275;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.638694882392883301) ) ) {
          sum += (double)0.3168354577442548115;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.03650000132620334625) ) ) {
            sum += (double)0.1933634399910879043;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-28151.548828125) ) ) {
              sum += (double)0.2052814575046034706;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.077075004577636719) ) ) {
                sum += (double)0.1106524262025720684;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.391661763191223145) ) ) {
                  sum += (double)0.05428334793474865611;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.780215263366699219) ) ) {
                    sum += (double)0.04773118845205181343;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4020500034093856812) ) ) {
                      sum += (double)0.008570453333333333604;
                    } else {
                      sum += (double)0.03126745634408602259;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9435398280620574951) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6625114977359771729) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5259833037853240967) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06890000030398368835) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.185368753969669342) ) ) {
                  sum += (double)0.6691702481203007924;
                } else {
                  sum += (double)0.5681812654517325312;
                }
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.4415583610534668) ) ) {
                  sum += (double)0.6074841066893786889;
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10444.81787109375) ) ) {
                    sum += (double)0.5577990031712882768;
                  } else {
                    sum += (double)0.4854019761388515541;
                  }
                }
              }
            } else {
              sum += (double)0.4255988085629361928;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5576499998569488525) ) ) {
              sum += (double)0.6091358085273145262;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.74552154541015625) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6023949980735778809) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5523974895477294922) ) ) {
                    sum += (double)0.7486516533333332779;
                  } else {
                    sum += (double)0.6882945570909090316;
                  }
                } else {
                  sum += (double)0.7661497428571428792;
                }
              } else {
                sum += (double)0.6299988590732499283;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7154699862003326416) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2678.4229736328125) ) ) {
              sum += (double)0.6908798497654392579;
            } else {
              sum += (double)0.7606110904050250587;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8327875137329101562) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.213553845882415771) ) ) {
                sum += (double)0.8482947615384616169;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7961159944534301758) ) ) {
                  sum += (double)0.7697098368840761262;
                } else {
                  sum += (double)0.8127015080687830517;
                }
              }
            } else {
              sum += (double)0.9047321398869849762;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6491419970989227295) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.070384562015533447) ) ) {
            sum += (double)0.5156256589386361;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
              sum += (double)0.3547361621024333056;
            } else {
              sum += (double)0.1705575526149862298;
            }
          }
        } else {
          sum += (double)0.5967560886367426765;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4375604987144470215) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.979166507720947266) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3501.4981689453125) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7604500055313110352) ) ) {
            sum += (double)0.3331798610848490383;
          } else {
            sum += (double)0.20881511169254105;
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.120772957801818848) ) ) {
            sum += (double)0.2945574465357767568;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7400000095367431641) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
                sum += (double)0.08580723381864116539;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.337606906890869141) ) ) {
                  sum += (double)0.01312630909090909022;
                } else {
                  sum += (double)0.06123067079337402019;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.13125038146972656) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1813.57403564453125) ) ) {
                  sum += (double)0.09972141513089353981;
                } else {
                  sum += (double)0.04889524892144892637;
                }
              } else {
                sum += (double)0.2701260482244203787;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.82857131958007812) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1344.4930419921875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3151.1885986328125) ) ) {
                sum += (double)0.0667532002504278299;
              } else {
                sum += (double)0.1138673797421550921;
              }
            } else {
              sum += (double)0.01299261538461538371;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07263750210404396057) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.67788457870483398) ) ) {
                  sum += (double)0.007112133333333334542;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.00572760000000000196;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2584426552057266235) ) ) {
                  sum += (double)0.02851963361344538386;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4078999906778335571) ) ) {
                    sum += (double)0.007646340000000001469;
                  } else {
                    sum += (double)0.004000000000000000951;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.01818180084228516) ) ) {
                sum += (double)0.0796251785164665965;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7463951706886291504) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07297449931502342224) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)25.12402915954589844) ) ) {
                      sum += (double)0.01389023157894736862;
                    } else {
                      sum += (double)0.00460096666666666692;
                    }
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09754300117492675781) ) ) {
                      sum += (double)0.07614407120743033053;
                    } else {
                      sum += (double)0.02671336938616938883;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3238500058650970459) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.222748458385467529) ) ) {
                      sum += (double)0.004000000000000000951;
                    } else {
                      sum += (double)0.005083563636363636409;
                    }
                  } else {
                    sum += (double)0.01344251851851852031;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2662331163883209229) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3019385039806365967) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02545000053942203522) ) ) {
                sum += (double)0.2211130638106058865;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2104090005159378052) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6708000004291534424) ) ) {
                    sum += (double)0.02667762352941176543;
                  } else {
                    sum += (double)0.05881229513881933157;
                  }
                } else {
                  sum += (double)0.09205824720659323834;
                }
              }
            } else {
              sum += (double)0.244098310629434212;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5821499824523925781) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005649999948218464851) ) ) {
                sum += (double)0.1227686249999999923;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473865002393722534) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.60548496246337891) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2765000015497207642) ) ) {
                      sum += (double)0.0293601019737097374;
                    } else {
                      sum += (double)0.06613683981419515856;
                    }
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)120.9204177856445312) ) ) {
                      sum += (double)0.02413363084503572509;
                    } else {
                      sum += (double)0.01045688695652174059;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)66.633331298828125) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2694790065288543701) ) ) {
                      sum += (double)0.08764400249084249028;
                    } else {
                      sum += (double)0.030295726609746082;
                    }
                  } else {
                    sum += (double)0.1583262958092480632;
                  }
                }
              }
            } else {
              sum += (double)0.1596293945672440651;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5450000166893005371) ) ) {
        sum += (double)0.1060440646226337713;
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.271474003791809082) ) ) {
          sum += (double)0.5722538574538653666;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.29487133026123047) ) ) {
            sum += (double)0.1138991135802469301;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3812000006437301636) ) ) {
              sum += (double)0.4376006324898737421;
            } else {
              sum += (double)0.3063238017527455948;
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.089089453220367432) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.84388303756713867) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2710979878902435303) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009300000034272670746) ) ) {
              sum += (double)0.5971550907902555272;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5677218437194824219) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2159355059266090393) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2833475619554519653) ) ) {
                    sum += (double)0.1446951509409669379;
                  } else {
                    sum += (double)0.3147052289887363186;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2072999998927116394) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2510962113738059998) ) ) {
                      sum += (double)0.4605713459872574633;
                    } else {
                      sum += (double)0.3764244602025598185;
                    }
                  } else {
                    sum += (double)0.2828113531022949378;
                  }
                }
              } else {
                sum += (double)0.4557494428926217034;
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.339595496654510498) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.345059394836425781) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006800000090152025223) ) ) {
                  sum += (double)0.5585029430749127721;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.300361394882202148) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.323267221450805664) ) ) {
                      sum += (double)0.4713617847151075346;
                    } else {
                      sum += (double)0.5215946260376523869;
                    }
                  } else {
                    sum += (double)0.4353714206143075027;
                  }
                }
              } else {
                sum += (double)0.3000479295391393353;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08044999837875366211) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3367820382118225098) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.74916553497314453) ) ) {
                    sum += (double)0.595180867663208657;
                  } else {
                    sum += (double)0.6633717408477514121;
                  }
                } else {
                  sum += (double)0.5227801530747431258;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7362000048160552979) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4147095084190368652) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3704899996519088745) ) ) {
                      sum += (double)0.542822055379188706;
                    } else {
                      sum += (double)0.6073940487453968196;
                    }
                  } else {
                    sum += (double)0.5112085308961572538;
                  }
                } else {
                  sum += (double)0.469594008917959771;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.05810928344726562) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4298499971628189087) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3374499976634979248) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.723749995231628418) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5654999911785125732) ) ) {
                    sum += (double)0.2517923972050095105;
                  } else {
                    sum += (double)0.4051857601784648044;
                  }
                } else {
                  sum += (double)0.2282539871855571445;
                }
              } else {
                sum += (double)0.1154780732042244989;
              }
            } else {
              sum += (double)0.4361236015637875441;
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4883221089839935303) ) ) {
              sum += (double)0.2377777228640404195;
            } else {
              sum += (double)0.1002833885962425842;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.710898756980895996) ) ) {
          sum += (double)0.2475519503605474736;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-11147.486328125) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.56862163543701172) ) ) {
              sum += (double)0.1872450079598341754;
            } else {
              sum += (double)0.07774087187945050159;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.926653742790222168) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.227607488632202148) ) ) {
                sum += (double)0.0397879749530299226;
              } else {
                sum += (double)0.01878308000000000061;
              }
            } else {
              sum += (double)0.0663587513135513174;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.929581522941589355) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.253601312637329102) ) ) {
                sum += (double)0.5866277835997883994;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4904465079307556152) ) ) {
                  sum += (double)0.6128140212252742858;
                } else {
                  sum += (double)0.6952773337551881871;
                }
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4814514964818954468) ) ) {
                sum += (double)0.6466127266941392726;
              } else {
                sum += (double)0.5268471160779872875;
              }
            }
          } else {
            sum += (double)0.4459537216361106338;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6522914767265319824) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1721500009298324585) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.280848264694213867) ) ) {
                sum += (double)0.6711879641850796441;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.654179573059082031) ) ) {
                  sum += (double)0.7498657731313128627;
                } else {
                  sum += (double)0.7067301409372236387;
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6999500095844268799) ) ) {
                sum += (double)0.6234017230150913358;
              } else {
                sum += (double)0.6877036094017093815;
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8372030258178710938) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1052999980747699738) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8287499845027923584) ) ) {
                  sum += (double)0.7883469326388887755;
                } else {
                  sum += (double)0.835960092307692193;
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1314999982714653015) ) ) {
                  sum += (double)0.7149368336329192664;
                } else {
                  sum += (double)0.7690591279999999808;
                }
              }
            } else {
              sum += (double)0.9025601974025974084;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6745850145816802979) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.070384562015533447) ) ) {
            sum += (double)0.519526119707719114;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3393.7718505859375) ) ) {
              sum += (double)0.3377869094710149733;
            } else {
              sum += (double)0.1220821709948333444;
            }
          }
        } else {
          sum += (double)0.6393548540328310992;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.972972869873046875) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.518558502197265625) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2118285000324249268) ) ) {
          sum += (double)0.1049048426941547318;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2726.510498046875) ) ) {
            sum += (double)0.3803448825473884076;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.32023906707763672) ) ) {
              sum += (double)0.1704721572441355859;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1217.509521484375) ) ) {
                sum += (double)0.2641894964044116945;
              } else {
                sum += (double)0.3739056164432307261;
              }
            }
          }
        }
      } else {
        sum += (double)0.5192851593314277148;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.94999980926513672) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1870384961366653442) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1649999991059303284) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.07786200195550918579) ) ) {
                sum += (double)0.006823046153846155579;
              } else {
                sum += (double)0.01800716038291605425;
              }
            } else {
              sum += (double)0.06238216193027389805;
            }
          } else {
            sum += (double)0.1272642012148736956;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1425554975867271423) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1566.89935302734375) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.06340599060058594) ) ) {
                    sum += (double)0.00557967619047619167;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.04499999992549419403) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.005398066666666667159;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5196000039577484131) ) ) {
                    sum += (double)0.005333057142857143204;
                  } else {
                    sum += (double)0.009643809523809523249;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1353119.9375) ) ) {
                  sum += (double)0.004000000000000000083;
                } else {
                  sum += (double)0.01571875294117647259;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02955000009387731552) ) ) {
                sum += (double)0.02431750588235294039;
              } else {
                sum += (double)0.005484422222222223343;
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.85454463958740234) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2409669980406761169) ) ) {
                sum += (double)0.09408538172413793976;
              } else {
                sum += (double)0.0260490222222222248;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7545999884605407715) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7174240350723266602) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2082865014672279358) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5509499907493591309) ) ) {
                      sum += (double)0.03576268403545256741;
                    } else {
                      sum += (double)0.01121684166666666628;
                    }
                  } else {
                    sum += (double)0.05868370850286906693;
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1520499959588050842) ) ) {
                    sum += (double)0.004680660869565218124;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1911875009536743164) ) ) {
                      sum += (double)0.01116189230769231051;
                    } else {
                      sum += (double)0.02126275294117647291;
                    }
                  }
                }
              } else {
                sum += (double)0.06092049333333333927;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4178429991006851196) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6789383888244628906) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009899999946355819702) ) ) {
              sum += (double)0.3485759463290178384;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6905.39501953125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2134735062718391418) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4955710768699645996) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6694999933242797852) ) ) {
                      sum += (double)0.03180144257466297614;
                    } else {
                      sum += (double)0.05782409001298664114;
                    }
                  } else {
                    sum += (double)0.09827434831671380544;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.560849994421005249) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1129000000655651093) ) ) {
                      sum += (double)0.0667379167068225948;
                    } else {
                      sum += (double)0.1061690875506983434;
                    }
                  } else {
                    sum += (double)0.1658346862851849679;
                  }
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.19551277160644531) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05164999887347221375) ) ) {
                    sum += (double)0.06795600945207770638;
                  } else {
                    if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9200000166893005371) ) ) {
                      sum += (double)0.1204655866327676017;
                    } else {
                      sum += (double)0.2234611732888104052;
                    }
                  }
                } else {
                  sum += (double)0.306875744749871282;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6550000011920928955) ) ) {
              sum += (double)0.0810643801896733518;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.523700028657913208) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4252.95361328125) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.55333328247070312) ) ) {
                    sum += (double)0.04140990231527447163;
                  } else {
                    sum += (double)0.01778875985663082651;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1754499971866607666) ) ) {
                    sum += (double)0.01436249090909090878;
                  } else {
                    sum += (double)0.005401023999999999929;
                  }
                }
              } else {
                sum += (double)0.05850664853485384315;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.136900000274181366) ) ) {
            sum += (double)0.3795810720934901794;
          } else {
            sum += (double)0.2529034748694964918;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4759524911642074585) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.735669940710067749) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2590230107307434082) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.335714340209960938) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04834999889135360718) ) ) {
              sum += (double)0.4627254005714531715;
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1461500003933906555) ) ) {
                sum += (double)0.2525945088062655497;
              } else {
                sum += (double)0.3984605336988246704;
              }
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-10622.55810546875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-35385.27734375) ) ) {
                sum += (double)0.1192425712231497403;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1293999999761581421) ) ) {
                  sum += (double)0.3893787025844694938;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1919394955039024353) ) ) {
                    sum += (double)0.1765881526665213364;
                  } else {
                    sum += (double)0.3249086234729852141;
                  }
                }
              }
            } else {
              sum += (double)0.06441984346036981612;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.36018753051757812) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3398025035858154297) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.005299999844282865524) ) ) {
                sum += (double)0.606704608349507124;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.0793910026550293) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.388250008225440979) ) ) {
                    sum += (double)0.4732213832952808508;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3009945005178451538) ) ) {
                      sum += (double)0.5545456438846032565;
                    } else {
                      sum += (double)0.5259501854738318771;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9238.90087890625) ) ) {
                    sum += (double)0.5104115140501472858;
                  } else {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3839.041748046875) ) ) {
                      sum += (double)0.3234045203956490977;
                    } else {
                      sum += (double)0.4419048236624552595;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2596265822649002075) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08924999833106994629) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3237.344970703125) ) ) {
                    sum += (double)0.6629338958579882313;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3971950113773345947) ) ) {
                      sum += (double)0.5605878983427230455;
                    } else {
                      sum += (double)0.6112207209876544534;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.608510494232177734) ) ) {
                    sum += (double)0.6025920810151486062;
                  } else {
                    sum += (double)0.5113869518805042036;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2580.03076171875) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.656410455703735352) ) ) {
                    sum += (double)0.5486405510367204919;
                  } else {
                    sum += (double)0.465154941528978183;
                  }
                } else {
                  sum += (double)0.6068841704312446517;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5311999917030334473) ) ) {
              sum += (double)0.1868618229251584328;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.723749995231628418) ) ) {
                sum += (double)0.4194181892315658744;
              } else {
                sum += (double)0.315194600611040876;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.092428386211395264) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.23516941070556641) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5773.260986328125) ) ) {
              sum += (double)0.4368310107757754079;
            } else {
              sum += (double)0.2409644249355973877;
            }
          } else {
            sum += (double)0.1505699014736923136;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.935240745544433594) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1808.40313720703125) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.363158002495765686) ) ) {
                sum += (double)0.2100418419862555564;
              } else {
                sum += (double)0.4064746952521604562;
              }
            } else {
              sum += (double)0.09009502122983399641;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17592.8583984375) ) ) {
              sum += (double)0.1167496936851826206;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3620100021362304688) ) ) {
                sum += (double)0.01667799691856199779;
              } else {
                sum += (double)0.03726494082503557098;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4074252396821975708) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6021510064601898193) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04690000042319297791) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2724.4854736328125) ) ) {
              sum += (double)0.6674886852329874332;
            } else {
              sum += (double)0.7302466761904761183;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.539483487606048584) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1309854015707969666) ) ) {
                sum += (double)0.5168443052706396257;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6423999965190887451) ) ) {
                  sum += (double)0.6442484150431728729;
                } else {
                  sum += (double)0.5937239895045197668;
                }
              }
            } else {
              sum += (double)0.6853378503496503349;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.836250007152557373) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0452999994158744812) ) ) {
                sum += (double)0.7079788736797160142;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.379487276077270508) ) ) {
                  sum += (double)0.7310471390804597069;
                } else {
                  sum += (double)0.7826417661538461745;
                }
              }
            } else {
              sum += (double)0.7956775973544972791;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07485000044107437134) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1275.18548583984375) ) ) {
                sum += (double)0.8809460384615385165;
              } else {
                sum += (double)0.8443496962566845454;
              }
            } else {
              sum += (double)0.8026506393204632106;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7006689906120300293) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.08875000104308128357) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.667938947677612305) ) ) {
              sum += (double)0.5277285530025142002;
            } else {
              sum += (double)0.283515395872621867;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.191548466682434082) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5089544951915740967) ) ) {
                sum += (double)0.4978105771336894803;
              } else {
                sum += (double)0.6595728523820593159;
              }
            } else {
              sum += (double)0.4779725058260231307;
            }
          }
        } else {
          sum += (double)0.7015917437084596697;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.258169889450073242) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.47832450270652771) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2441269978880882263) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01260000001639127731) ) ) {
            sum += (double)0.04935886713350440269;
          } else {
            sum += (double)0.1461449685296411227;
          }
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.90476131439208984) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1386.1256103515625) ) ) {
              sum += (double)0.2376598072561568742;
            } else {
              sum += (double)0.08171310420784667905;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.331621512770652771) ) ) {
              sum += (double)0.411090730347031752;
            } else {
              sum += (double)0.2495547827494947468;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2147499993443489075) ) ) {
          sum += (double)0.4365324560189265402;
        } else {
          sum += (double)0.5881347768844162882;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5349999964237213135) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2250000014901161194) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1165430024266242981) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)78.27777862548828125) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4358674287796020508) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2409.73828125) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04784999974071979523) ) ) {
                    sum += (double)0.03960100396466278982;
                  } else {
                    sum += (double)0.02126391111111110982;
                  }
                } else {
                  sum += (double)0.006086800000000000717;
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06000000052154064178) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6797269582748413086) ) ) {
                    sum += (double)0.004000000000000000083;
                  } else {
                    sum += (double)0.005464514285714287475;
                  }
                } else {
                  sum += (double)0.01403793684210526485;
                }
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1050000004470348358) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3171.5555419921875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8829500079154968262) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.06499999947845935822) ) ) {
                      sum += (double)0.004099642953020136461;
                    } else {
                      sum += (double)0.005485742857142858475;
                    }
                  } else {
                    sum += (double)0.008324950000000001099;
                  }
                } else {
                  sum += (double)0.008693599999999999245;
                }
              } else {
                sum += (double)0.009041584000000001814;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.13333368301391602) ) ) {
              sum += (double)0.0855251451607904889;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6400582194328308105) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.03759479522705078) ) ) {
                  sum += (double)0.05010195870818916902;
                } else {
                  sum += (double)0.01517098181818182095;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.8421662747859954834) ) ) {
                  sum += (double)0.01065637500000000265;
                } else {
                  sum += (double)0.004000000000000000951;
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.003849999979138374329) ) ) {
              sum += (double)0.100861273999878584;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7511338293552398682) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1712844967842102051) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1511499956250190735) ) ) {
                    sum += (double)0.01194841904761904938;
                  } else {
                    sum += (double)0.04446015384615385757;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)70.02396392822265625) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1935634985566139221) ) ) {
                      sum += (double)0.0516341518406695163;
                    } else {
                      sum += (double)0.02873348888888888411;
                    }
                  } else {
                    sum += (double)0.06527011570001202412;
                  }
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5545.951904296875) ) ) {
                  sum += (double)0.01721237714285714371;
                } else {
                  sum += (double)0.007065494736842104113;
                }
              }
            }
          } else {
            sum += (double)0.1120983784615385004;
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009450000245124101639) ) ) {
          sum += (double)0.3193437975615058266;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4622579962015151978) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14558.50537109375) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4696499854326248169) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6920999884605407715) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)140.5874176025390625) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5845499932765960693) ) ) {
                      sum += (double)0.03716607937267411149;
                    } else {
                      sum += (double)0.02139492791208790975;
                    }
                  } else {
                    sum += (double)0.009341233763440860011;
                  }
                } else {
                  sum += (double)0.05660078602559732303;
                }
              } else {
                sum += (double)0.07689871364086123262;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.42083358764648438) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4082999974489212036) ) ) {
                  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7199999988079071045) ) ) {
                    sum += (double)0.09736065921726597128;
                  } else {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                      sum += (double)0.017783918807562131;
                    } else {
                      sum += (double)0.05058444983006641499;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.27564048767089844) ) ) {
                    sum += (double)0.1872138452951441767;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1690759956836700439) ) ) {
                      sum += (double)0.03377558207515796163;
                    } else {
                      sum += (double)0.1038552355047900194;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434435039758682251) ) ) {
                  sum += (double)0.1075655205992912811;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)53.95054817199707031) ) ) {
                    sum += (double)0.3485010237143809086;
                  } else {
                    sum += (double)0.1681334225557199469;
                  }
                }
              }
            }
          } else {
            sum += (double)0.261008571794729971;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4595739990472793579) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2412979975342750549) ) ) {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0142500000074505806) ) ) {
            sum += (double)0.4946884465492126792;
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.8902740478515625) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12994.455078125) ) ) {
                sum += (double)0.4535777325456008535;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4878000020980834961) ) ) {
                  sum += (double)0.342831499275133289;
                } else {
                  sum += (double)0.2287020441398504855;
                }
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.93099021911621094) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1958554983139038086) ) ) {
                  sum += (double)0.05996325890412255305;
                } else {
                  sum += (double)0.2006199704268773198;
                }
              } else {
                sum += (double)0.2212777906963997732;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.01363611221313477) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0008499999821651726961) ) ) {
              sum += (double)0.6396456671902875923;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3558439910411834717) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4924.8759765625) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.46641254425048828) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3992000073194503784) ) ) {
                      sum += (double)0.4865541069633427806;
                    } else {
                      sum += (double)0.5163144283296908776;
                    }
                  } else {
                    sum += (double)0.5455644349911221713;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2888119965791702271) ) ) {
                    sum += (double)0.3377737765655681179;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.01013278961181641) ) ) {
                      sum += (double)0.5259950741685787134;
                    } else {
                      sum += (double)0.391318086954604516;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1695500016212463379) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2493.7919921875) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2580661028623580933) ) ) {
                      sum += (double)0.5887818683295169553;
                    } else {
                      sum += (double)0.5345450946570919903;
                    }
                  } else {
                    sum += (double)0.6183516868012590706;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4160854965448379517) ) ) {
                    sum += (double)0.5509399209163718947;
                  } else {
                    sum += (double)0.4651597040770317215;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3344369977712631226) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3040269911289215088) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19665.09765625) ) ) {
                  sum += (double)0.3681191696872420649;
                } else {
                  sum += (double)0.273008348875638629;
                }
              } else {
                sum += (double)0.1362627697343125888;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.82509660720825195) ) ) {
                sum += (double)0.2970849143045834473;
              } else {
                sum += (double)0.6017587173454572724;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.149416446685791016) ) ) {
          sum += (double)0.374939593221714329;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-21199.1005859375) ) ) {
            sum += (double)0.2493827767803621087;
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.897893905639648438) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2798.5384521484375) ) ) {
                sum += (double)0.2799057384090117284;
              } else {
                sum += (double)0.06842405228758170754;
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4784500002861022949) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.754198610782623291) ) ) {
                  sum += (double)0.01171192727272727351;
                } else {
                  sum += (double)0.03093521688003793638;
                }
              } else {
                sum += (double)0.0727650914089347095;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6060760021209716797) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.92969942092895508) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1992.48046875) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6326000094413757324) ) ) {
                  sum += (double)0.5889482331156495887;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4857944995164871216) ) ) {
                    sum += (double)0.6467656400000000305;
                  } else {
                    sum += (double)0.607945538940209973;
                  }
                }
              } else {
                sum += (double)0.5020938546274962277;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7030999958515167236) ) ) {
                sum += (double)0.6469235754338735767;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02355000004172325134) ) ) {
                  sum += (double)0.7353579875000000321;
                } else {
                  sum += (double)0.6821796375135974477;
                }
              }
            }
          } else {
            sum += (double)0.4438036705828779516;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4872.298828125) ) ) {
              sum += (double)0.6587105193397496672;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.67457818984985352) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1173726953566074371) ) ) {
                  sum += (double)0.7448296125603863782;
                } else {
                  sum += (double)0.708672250753098143;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6567690074443817139) ) ) {
                  sum += (double)0.7426209955555556075;
                } else {
                  sum += (double)0.8053696158139534989;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06940000131726264954) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.8496383428573608398) ) ) {
                sum += (double)0.9074657188888888282;
              } else {
                sum += (double)0.8440160097162096031;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)3.323568820953369141) ) ) {
                sum += (double)0.7720509009510136966;
              } else {
                sum += (double)0.8256467100000000059;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.660247504711151123) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.204444408416748047) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
              sum += (double)0.541516262954029326;
            } else {
              sum += (double)0.4218058617413779632;
            }
          } else {
            sum += (double)0.2763846360607414288;
          }
        } else {
          sum += (double)0.5949920256489624748;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5685060024261474609) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.242690086364746094) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5999999940395355225) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473030015826225281) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0005499999970197677612) ) ) {
              sum += (double)0.1075541298886221186;
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1222391426563262939) ) ) {
                sum += (double)0.009804686880466473992;
              } else {
                sum += (double)0.05770526666183398851;
              }
            }
          } else {
            sum += (double)0.1709864756967190147;
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006700000027194619179) ) ) {
            sum += (double)0.3581882168174090886;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.972972869873046875) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1491.6959228515625) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.5401153564453125) ) ) {
                  sum += (double)0.3077556669666725031;
                } else {
                  sum += (double)0.1806761723114744811;
                }
              } else {
                sum += (double)0.4177500927265150876;
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4099999964237213135) ) ) {
                sum += (double)0.04335117038734037642;
              } else {
                sum += (double)0.1833815932301776919;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.972222328186035156) ) ) {
            sum += (double)0.07776162987809862037;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)14.34999990463256836) ) ) {
                sum += (double)0.02606143650793650915;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)507.416656494140625) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.25) ) ) {
                    sum += (double)0.008135700000000000917;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2137999981641769409) ) ) {
                      sum += (double)0.004000000000000002685;
                    } else {
                      sum += (double)0.004623914285714286233;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)225.486114501953125) ) ) {
                    sum += (double)0.01466296000000000266;
                  } else {
                    sum += (double)0.004000000000000000083;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.77473688125610352) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1761699989438056946) ) ) {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1162314973771572113) ) ) {
                    sum += (double)0.01148033333333333371;
                  } else {
                    sum += (double)0.02814611508951406563;
                  }
                } else {
                  sum += (double)0.07863338535061115131;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.108550000935792923) ) ) {
                  sum += (double)0.0492026412955465578;
                } else {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.77305641770362854) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3520500063896179199) ) ) {
                      sum += (double)0.0471975895409715851;
                    } else {
                      sum += (double)0.01694092233445566517;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9866.6044921875) ) ) {
                      sum += (double)0.01233628387096774234;
                    } else {
                      sum += (double)0.004000000000000000951;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2200369983911514282) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01700000045821070671) ) ) {
              sum += (double)0.1480903362074216523;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.58660793304443359) ) ) {
                sum += (double)0.102308032737061419;
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9050000011920928955) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)52.88936233520507812) ) ) {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-7556.8193359375) ) ) {
                      sum += (double)0.02355111146149181656;
                    } else {
                      sum += (double)0.0134426333333333356;
                    }
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-19347.9580078125) ) ) {
                      sum += (double)0.02680198228128460869;
                    } else {
                      sum += (double)0.05942032420544758609;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.60548496246337891) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1720409989356994629) ) ) {
                      sum += (double)0.05625564207125684224;
                    } else {
                      sum += (double)0.1095975567909006215;
                    }
                  } else {
                    sum += (double)0.0148166324295587442;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.418182373046875) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4888.614501953125) ) ) {
                sum += (double)0.1167844971276913169;
              } else {
                if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.75) ) ) {
                  sum += (double)0.07066667388167388597;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2380000054836273193) ) ) {
                    sum += (double)0.01396065225806452162;
                  } else {
                    sum += (double)0.0408777445422535135;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4859.7783203125) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4293383657932281494) ) ) {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7105499804019927979) ) ) {
                    sum += (double)0.2924228145621756147;
                  } else {
                    sum += (double)0.1310288234498689919;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.92083358764648438) ) ) {
                    sum += (double)0.0382620465127926912;
                  } else {
                    sum += (double)0.09949214295846693645;
                  }
                }
              } else {
                sum += (double)0.3538953698801264869;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4390922486782073975) ) ) {
        sum += (double)0.6513046848200313432;
      } else {
        sum += (double)0.4059740885374865105;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4508214890956878662) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.010357707738876343) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.69309568405151367) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2397025004029273987) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03309999965131282806) ) ) {
              sum += (double)0.559938535763002343;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4878000020980834961) ) ) {
                sum += (double)0.3449015969938677983;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.01965522766113281) ) ) {
                  sum += (double)0.1637517381401082384;
                } else {
                  sum += (double)0.2587514092322348858;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3373825103044509888) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.345059394836425781) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01650000084191560745) ) ) {
                  sum += (double)0.6019854303023773889;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6962499916553497314) ) ) {
                    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.586111068725585938) ) ) {
                      sum += (double)0.5112104781195099257;
                    } else {
                      sum += (double)0.440953012859665483;
                    }
                  } else {
                    sum += (double)0.322464965326701769;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9092.9482421875) ) ) {
                  sum += (double)0.4994414869729671969;
                } else {
                  sum += (double)0.2159952244335706928;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08624999970197677612) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.030117273330688477) ) ) {
                  sum += (double)0.5427465425502199237;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)23.3217926025390625) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6965000033378601074) ) ) {
                      sum += (double)0.6587235346744180209;
                    } else {
                      sum += (double)0.5992079083056477407;
                    }
                  } else {
                    sum += (double)0.6754371694869728548;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5561999976634979248) ) ) {
                  sum += (double)0.5611567538945804179;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)17.30985927581787109) ) ) {
                    sum += (double)0.4384324629693165942;
                  } else {
                    sum += (double)0.5149481908068767044;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.88003635406494141) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.55407285690307617) ) ) {
              sum += (double)0.2647250169452886048;
            } else {
              sum += (double)0.454336885170507021;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4687999933958053589) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2553689777851104736) ) ) {
                sum += (double)0.3016555809755179784;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6695129871368408203) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2379499971866607666) ) ) {
                    sum += (double)0.04915751117523260022;
                  } else {
                    sum += (double)0.1791738926290605272;
                  }
                } else {
                  sum += (double)0.2206736257168673554;
                }
              }
            } else {
              sum += (double)0.3404582547787500801;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6018500030040740967) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05140000022947788239) ) ) {
            sum += (double)0.1814918266800870927;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03745000064373016357) ) ) {
              sum += (double)0.149579703699594363;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)9.286492347717285156) ) ) {
                sum += (double)0.06892541078170232038;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2660174965858459473) ) ) {
                  sum += (double)0.03372144563633130976;
                } else {
                  sum += (double)0.01640687416267942733;
                }
              }
            }
          }
        } else {
          sum += (double)0.2814259258965039479;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9435398280620574951) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6206569969654083252) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.14261579513549805) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5366494953632354736) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3556.804443359375) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7758499979972839355) ) ) {
                  sum += (double)0.6104220693130563147;
                } else {
                  sum += (double)0.5185637357429384586;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.13474082946777344) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.368627429008483887) ) ) {
                    sum += (double)0.6318386572398738688;
                  } else {
                    sum += (double)0.5737300393818846045;
                  }
                } else {
                  sum += (double)0.7024525607619047651;
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03225000016391277313) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.65833377838134766) ) ) {
                  sum += (double)0.6956645136045334077;
                } else {
                  sum += (double)0.7343508882352940415;
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-6301.722412109375) ) ) {
                  sum += (double)0.6377138259614282267;
                } else {
                  sum += (double)0.6803210860439243834;
                }
              }
            }
          } else {
            sum += (double)0.4571237095267746686;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7240049839019775391) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.640048980712890625) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02324999962002038956) ) ) {
                sum += (double)0.7921258478614837673;
              } else {
                sum += (double)0.7400548376023277086;
              }
            } else {
              sum += (double)0.6630290271842232963;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3278.4515380859375) ) ) {
              sum += (double)0.7837978665773525089;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.5729678571224212646) ) ) {
                sum += (double)0.9000491710758377062;
              } else {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.233386039733886719) ) ) {
                  sum += (double)0.7907227869301549639;
                } else {
                  sum += (double)0.8656803185185184546;
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6760014891624450684) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.5315792937505661175;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.288537740707397461) ) ) {
              sum += (double)0.2062346357442980671;
            } else {
              sum += (double)0.4159317740576105038;
            }
          }
        } else {
          sum += (double)0.6167910587711961101;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.084967374801635742) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4924194961786270142) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.09545469284057617) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1997.46710205078125) ) ) {
            sum += (double)0.2279487772178516169;
          } else {
            sum += (double)0.07515267182584298156;
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.6150000095367431641) ) ) {
            sum += (double)0.09513948566070230817;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3291770070791244507) ) ) {
              sum += (double)0.4074156569072408529;
            } else {
              sum += (double)0.2412418834346435614;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.584967374801635742) ) ) {
          sum += (double)0.567305928674543769;
        } else {
          sum += (double)0.3063828469922314501;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4149999916553497314) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.75187969207763672) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)75.78889083862304688) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06179999932646751404) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1593.123291015625) ) ) {
                sum += (double)0.01931191578947368329;
              } else {
                sum += (double)0.008709999999999998993;
              }
            } else {
              sum += (double)0.07344051187877392861;
            }
          } else {
            sum += (double)0.1072834487084513566;
          }
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)39.06340599060058594) ) ) {
                sum += (double)0.006792024242424243678;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2079999968409538269) ) ) {
                    sum += (double)0.004000000000000002685;
                  } else {
                    sum += (double)0.004545925000000001007;
                  }
                } else {
                  sum += (double)0.006274490909090910812;
                }
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.64285755157470703) ) ) {
                sum += (double)0.02392590909090909143;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)75.7365570068359375) ) ) {
                  sum += (double)0.009161909090909092085;
                } else {
                  sum += (double)0.004000000000000000951;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1249999962747097015) ) ) {
              sum += (double)0.04229083151515151268;
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.254999995231628418) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)73.310455322265625) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.185000002384185791) ) ) {
                    sum += (double)0.0209281043478260903;
                  } else {
                    sum += (double)0.008319135999999999545;
                  }
                } else {
                  sum += (double)0.006341131034482760248;
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.46666717529296875) ) ) {
                  sum += (double)0.04467763859649123009;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1849715039134025574) ) ) {
                    sum += (double)0.01511993900543900926;
                  } else {
                    sum += (double)0.03617410909090909565;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.08423900604248047) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.01041650772094727) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5963957309722900391) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.636480808258056641) ) ) {
                sum += (double)0.2977613631018052875;
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4688.002685546875) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7274499833583831787) ) ) {
                    sum += (double)0.2234914185161054334;
                  } else {
                    sum += (double)0.1232646107623492915;
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.72561550140380859) ) ) {
                    sum += (double)0.05421939559139785786;
                  } else {
                    sum += (double)0.1192283050685425533;
                  }
                }
              }
            } else {
              sum += (double)0.03930760718954248722;
            }
          } else {
            sum += (double)0.3269335452673185483;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5723760128021240234) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6075429320335388184) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-9005.986328125) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2434595003724098206) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1883427202701568604) ) ) {
                    sum += (double)0.09837645885966778136;
                  } else {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4838169962167739868) ) ) {
                      sum += (double)0.03004244463083674196;
                    } else {
                      sum += (double)0.07368038842221108498;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17599.66064453125) ) ) {
                    sum += (double)0.1430277840481500029;
                  } else {
                    sum += (double)0.04693277976749624103;
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.06695652008056641) ) ) {
                  sum += (double)0.05619276077355077337;
                } else {
                  sum += (double)0.2672185570898817364;
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5582499802112579346) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3889674991369247437) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.00053134560585022) ) ) {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.90307044982910156) ) ) {
                      sum += (double)0.03933262382724488082;
                    } else {
                      sum += (double)0.01722762105263158164;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2940500080585479736) ) ) {
                      sum += (double)0.004325511111111111397;
                    } else {
                      sum += (double)0.013964200000000003;
                    }
                  }
                } else {
                  sum += (double)0.07501415429922189682;
                }
              } else {
                sum += (double)0.07054699960458020447;
              }
            }
          } else {
            sum += (double)0.2385211507331459202;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4620750099420547485) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9299111366271972656) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.25617265701293945) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3168849945068359375) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0142500000074505806) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0004999999910069163889) ) ) {
                sum += (double)0.5972998919828286235;
              } else {
                sum += (double)0.5028466005387580706;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2320639938116073608) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4783000051975250244) ) ) {
                  sum += (double)0.4198047475386210148;
                } else {
                  sum += (double)0.2440242366248141226;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2529499977827072144) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.113793134689331055) ) ) {
                    sum += (double)0.4567262560392399418;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.584776401519775391) ) ) {
                      sum += (double)0.3215546469656737072;
                    } else {
                      sum += (double)0.3817909419170986696;
                    }
                  }
                } else {
                  sum += (double)0.5199008475668612794;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01654999982565641403) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.78706932067871094) ) ) {
                sum += (double)0.5890314714015799646;
              } else {
                sum += (double)0.6522027593984960347;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.042261838912963867) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07135000079870223999) ) ) {
                  sum += (double)0.5468721358493358053;
                } else {
                  sum += (double)0.5873490890926090779;
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7280000150203704834) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)15.08014154434204102) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.406768500804901123) ) ) {
                      sum += (double)0.5057340942290056152;
                    } else {
                      sum += (double)0.4399399430094790842;
                    }
                  } else {
                    sum += (double)0.5745464861558068348;
                  }
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8034999966621398926) ) ) {
                    sum += (double)0.4133525038272198304;
                  } else {
                    sum += (double)0.5125669973815941693;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2665694952011108398) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04179999977350234985) ) ) {
              sum += (double)0.4559066177226265282;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)28.12616825103759766) ) ) {
                sum += (double)0.1150611983929053644;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7260999977588653564) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6707000136375427246) ) ) {
                    sum += (double)0.1810274624633298746;
                  } else {
                    sum += (double)0.3058362976251131071;
                  }
                } else {
                  sum += (double)0.1792466835792187185;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.0625) ) ) {
              sum += (double)0.4786494648391084739;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-27219.2001953125) ) ) {
                sum += (double)0.4270967140366808135;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3639300018548965454) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2091500014066696167) ) ) {
                    sum += (double)0.179095999277765261;
                  } else {
                    sum += (double)0.2779351063703949798;
                  }
                } else {
                  sum += (double)0.3329782204202718088;
                }
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.861360907554626465) ) ) {
          sum += (double)0.388356992229731468;
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.062687098979949951) ) ) {
            sum += (double)0.2735054967687719496;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-33309.6494140625) ) ) {
              sum += (double)0.2170370898697608075;
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.018280982971191406) ) ) {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3350.552978515625) ) ) {
                  sum += (double)0.2738052479213741175;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3422749936580657959) ) ) {
                    sum += (double)0.01616814285714286009;
                  } else {
                    sum += (double)0.07879327807713359944;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07689999788999557495) ) ) {
                  sum += (double)0.08618127916111667508;
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)12.34412956237792969) ) ) {
                    sum += (double)0.05175942949012844047;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3050709962844848633) ) ) {
                      sum += (double)0.01388383999999999972;
                    } else {
                      sum += (double)0.03029593312693498394;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.031677126884460449) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6491389870643615723) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5410194993019104004) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3979768604040145874) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)32.49117469787597656) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.0838222987949848175) ) ) {
                  sum += (double)0.5361487832937139597;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7084999978542327881) ) ) {
                    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3903.8963623046875) ) ) {
                      sum += (double)0.6369566832596410544;
                    } else {
                      sum += (double)0.5811176718262129892;
                    }
                  } else {
                    sum += (double)0.6711536959706959626;
                  }
                }
              } else {
                sum += (double)0.6777071364596229941;
              }
            } else {
              sum += (double)0.4476655848245723046;
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6629000008106231689) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4538.65966796875) ) ) {
                sum += (double)0.5728762212055018566;
              } else {
                sum += (double)0.6675023594788064285;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.308871030807495117) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.52657794952392578) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2040.5130615234375) ) ) {
                    sum += (double)0.6806658340136053642;
                  } else {
                    sum += (double)0.7346898865700484116;
                  }
                } else {
                  sum += (double)0.7500935583333333545;
                }
              } else {
                sum += (double)0.6604065576945929994;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7322590053081512451) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2545975744724273682) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.111979126930236816) ) ) {
                sum += (double)0.8121285076923074886;
              } else {
                sum += (double)0.7465931502547558107;
              }
            } else {
              sum += (double)0.720203958488528917;
            }
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1672.965087890625) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1158499978482723236) ) ) {
                sum += (double)0.8382613997460317545;
              } else {
                sum += (double)0.7728873432175618063;
              }
            } else {
              sum += (double)0.8980021140211640329;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.350865721702575684) ) ) {
          sum += (double)0.5419410525681869206;
        } else {
          if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2566.5250244140625) ) ) {
            sum += (double)0.4945971558894280973;
          } else {
            sum += (double)0.146202657015263221;
          }
        }
      }
    }
  }
  return sum;
}
