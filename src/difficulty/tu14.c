#include "prediction.h"
double predict_margin_unit14(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4626670032739639282) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.240384578704833984) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.5300000011920928955) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1799999997019767761) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8598499894142150879) ) ) {
              sum += (double)0.05405806083531611989;
            } else {
              sum += (double)0.005581380816326532782;
            }
          } else {
            sum += (double)0.09318925516080124594;
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7030478417873382568) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.009349999949336051941) ) ) {
              sum += (double)0.4099519154637446539;
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.147619009017944336) ) ) {
                sum += (double)0.3558092380016295575;
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2476308494806289673) ) ) {
                  sum += (double)0.1491669765004081383;
                } else {
                  sum += (double)0.2482109719665329672;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.258018136024475098) ) ) {
              sum += (double)0.02892715847840103549;
            } else {
              sum += (double)0.1467403858867708244;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4249999970197677612) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.43487167358398438) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1325.5518798828125) ) ) {
              sum += (double)0.08288678795955475853;
            } else {
              sum += (double)0.0142716000000000006;
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.77473688125610352) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1451930031180381775) ) ) {
                sum += (double)0.009062700000000001657;
              } else {
                sum += (double)0.06855363840784756135;
              }
            } else {
              if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1050000004470348358) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)36.04411697387695312) ) ) {
                  sum += (double)0.0198501142857142876;
                } else {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.196600005030632019) ) ) {
                      sum += (double)0.004209475294117650222;
                    } else {
                      sum += (double)0.007539807407407409824;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1662964969873428345) ) ) {
                      sum += (double)0.01153094017857143015;
                    } else {
                      sum += (double)0.00428120000000000063;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6470028162002563477) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4432422071695327759) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.305000007152557373) ) ) {
                      sum += (double)0.01239416603773584903;
                    } else {
                      sum += (double)0.02783685686619718699;
                    }
                  } else {
                    sum += (double)0.03919281975308642335;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1346984952688217163) ) ) {
                    sum += (double)0.01401902000000000183;
                  } else {
                    sum += (double)0.00444883333333333502;
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.5917363166809082) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.91481494903564453) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.19878005981445312) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3201.60986328125) ) ) {
                  sum += (double)0.0794866495788261046;
                } else {
                  sum += (double)0.01802317391304348107;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7651500105857849121) ) ) {
                  sum += (double)0.1889538437817699368;
                } else {
                  sum += (double)0.09942019172821887907;
                }
              }
            } else {
              sum += (double)0.2158478660209960653;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2209069952368736267) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7410667836666107178) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000238418579102) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3237500041723251343) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1921604946255683899) ) ) {
                      sum += (double)0.02687123317864063832;
                    } else {
                      sum += (double)0.05460252513410222136;
                    }
                  } else {
                    sum += (double)0.0943617249384133272;
                  }
                } else {
                  sum += (double)0.09398624185761328409;
                }
              } else {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-12769.51611328125) ) ) {
                  sum += (double)0.02347904182484182589;
                } else {
                  sum += (double)0.008087296000000000762;
                }
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.810000002384185791) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2462499961256980896) ) ) {
                  sum += (double)0.1762691987688476125;
                } else {
                  sum += (double)0.08276282827530363762;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)36.37382316589355469) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1873499974608421326) ) ) {
                    sum += (double)0.02836963188405796851;
                  } else {
                    sum += (double)0.07465775458784762453;
                  }
                } else {
                  sum += (double)0.02055741818181817948;
                }
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.579411745071411133) ) ) {
        sum += (double)0.5452872269559787544;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5713820159435272217) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.59999990463256836) ) ) {
            sum += (double)0.2457033664801266948;
          } else {
            sum += (double)0.1083556787446626479;
          }
        } else {
          sum += (double)0.3499675651267238341;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4603064954280853271) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9199577271938323975) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.28906393051147461) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3215894997119903564) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04635000042617321014) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.03449058532714844) ) ) {
                sum += (double)0.4806216594269701048;
              } else {
                sum += (double)0.5862091593439594517;
              }
            } else {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.499390125274658203) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2695130109786987305) ) ) {
                  sum += (double)0.4650264981922717644;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3013911545276641846) ) ) {
                    sum += (double)0.5522018008343763107;
                  } else {
                    sum += (double)0.4918701683082732923;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-13455.06201171875) ) ) {
                  sum += (double)0.494436638351471669;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.750507116317749023) ) ) {
                    sum += (double)0.3781164926562513018;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2162999957799911499) ) ) {
                      sum += (double)0.2022994982203604464;
                    } else {
                      sum += (double)0.3191026750962247527;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01974999997764825821) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1312201544642448425) ) ) {
                sum += (double)0.6662622601128121991;
              } else {
                sum += (double)0.5980322594812722548;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.373778998851776123) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.09320000186562538147) ) ) {
                  sum += (double)0.5413746758101285472;
                } else {
                  sum += (double)0.4675374721504728104;
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.793604612350463867) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)8.860465049743652344) ) ) {
                    sum += (double)0.567838723525190936;
                  } else {
                    sum += (double)0.6439157012919425327;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7306500077247619629) ) ) {
                    sum += (double)0.5664810720488960838;
                  } else {
                    sum += (double)0.4826509202526053643;
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3334394991397857666) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04004999902099370956) ) ) {
              sum += (double)0.3796142900802900733;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2386270016431808472) ) ) {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3113500028848648071) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)17.29695606231689453) ) ) {
                    sum += (double)0.2884173296142506504;
                  } else {
                    sum += (double)0.182213496294163696;
                  }
                } else {
                  sum += (double)0.07517046131459576008;
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3040269911289215088) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-17307.0947265625) ) ) {
                    sum += (double)0.3925040613173621518;
                  } else {
                    sum += (double)0.2597572348542185328;
                  }
                } else {
                  sum += (double)0.158134490868752059;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4819000065326690674) ) ) {
              sum += (double)0.1918909698863597302;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-14742.8818359375) ) ) {
                sum += (double)0.5297443911928410021;
              } else {
                sum += (double)0.4008366509101601305;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.866363763809204102) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2761.4869384765625) ) ) {
            sum += (double)0.3348931044876626295;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3745680004358291626) ) ) {
              sum += (double)0.03631846168674699588;
            } else {
              sum += (double)0.2071536752072494214;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.274611353874206543) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3108319938182830811) ) ) {
              sum += (double)0.2013748522128726293;
            } else {
              sum += (double)0.0944713588797490289;
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)25.78614711761474609) ) ) {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.97339868545532227) ) ) {
                sum += (double)0.0274379420408163259;
              } else {
                sum += (double)0.06988244260231867011;
              }
            } else {
              sum += (double)0.0125066000000000014;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7429124116897583008) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6219575107097625732) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.60662555694580078) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5080394744873046875) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)18.28444576263427734) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.141082048416137695) ) ) {
                  sum += (double)0.615202642045731829;
                } else {
                  sum += (double)0.5470952527007439947;
                }
              } else {
                sum += (double)0.6811713251154073445;
              }
            } else {
              if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.444736957550048828) ) ) {
                sum += (double)0.636656956823671405;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1693000048398971558) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8440500199794769287) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7572000026702880859) ) ) {
                      sum += (double)0.7099501576893052501;
                    } else {
                      sum += (double)0.7662688222222221457;
                    }
                  } else {
                    sum += (double)0.6908120563383837176;
                  }
                } else {
                  sum += (double)0.6445933837359099083;
                }
              }
            }
          } else {
            sum += (double)0.4610226407015666217;
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7399425208568572998) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3733.5308837890625) ) ) {
              sum += (double)0.6915168789862785603;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8282499909400939941) ) ) {
                sum += (double)0.7471565029853322049;
              } else {
                sum += (double)0.7877453781781460496;
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1074000000953674316) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09740376472473144531) ) ) {
                sum += (double)0.893498435714285888;
              } else {
                sum += (double)0.8509937499999998822;
              }
            } else {
              sum += (double)0.8014448953358209726;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6760014891624450684) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)2.095000028610229492) ) ) {
            sum += (double)0.5261182557097296986;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1675.55401611328125) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.38322877883911133) ) ) {
                sum += (double)0.522227127184780815;
              } else {
                sum += (double)0.299949836444561746;
              }
            } else {
              sum += (double)0.1646942693897976429;
            }
          }
        } else {
          sum += (double)0.6754591928655068189;
        }
      }
    }
  }
  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.995000004768371582) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.436507940292358398) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2118285000324249268) ) ) {
        sum += (double)0.1032363022682789289;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.481987491250038147) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3546340018510818481) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2927275002002716064) ) ) {
              sum += (double)0.3241383076058639845;
            } else {
              sum += (double)0.5030281077838828496;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.05350000038743019104) ) ) {
              sum += (double)0.1872267584904902527;
            } else {
              sum += (double)0.339096750226284438;
            }
          }
        } else {
          sum += (double)0.4978741949704202363;
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7849999964237213135) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3935579955577850342) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.1149999983608722687) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.05499999970197677612) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.09086100012063980103) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8191000223159790039) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1903499960899353027) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)40.48397445678710938) ) ) {
                      sum += (double)0.007163811764705882781;
                    } else {
                      sum += (double)0.004000000000000002685;
                    }
                  } else {
                    sum += (double)0.008131882352941178019;
                  }
                } else {
                  sum += (double)0.007830376470588236784;
                }
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)94.59999847412109375) ) ) {
                  sum += (double)0.01621801868131868621;
                } else {
                  sum += (double)0.004981128756957328013;
                }
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1940.06683349609375) ) ) {
                if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.39136695861816406) ) ) {
                  sum += (double)0.0385132346378767379;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7344500124454498291) ) ) {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1439500004053115845) ) ) {
                      sum += (double)0.007194816000000000579;
                    } else {
                      sum += (double)0.004000000000000000951;
                    }
                  } else {
                    sum += (double)0.01739220000000000349;
                  }
                }
              } else {
                sum += (double)0.05573026314549842791;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.38762664794921875) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06469999998807907104) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)60.25095748901367188) ) ) {
                  if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5291.627685546875) ) ) {
                    sum += (double)0.04967652742449060743;
                  } else {
                    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1785.2689208984375) ) ) {
                      sum += (double)0.02601800000000000293;
                    } else {
                      sum += (double)0.01207041538461538742;
                    }
                  }
                } else {
                  sum += (double)0.1192385741034624469;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1303895041346549988) ) ) {
                  sum += (double)0.02573755789473684483;
                } else {
                  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5490500032901763916) ) ) {
                    sum += (double)0.1597722489949949531;
                  } else {
                    sum += (double)0.08104442313491216909;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2473215013742446899) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)33.65598297119140625) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)89.60434722900390625) ) ) {
                    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4872145652770996094) ) ) {
                      sum += (double)0.01685673111111110969;
                    } else {
                      sum += (double)0.04949485599672059227;
                    }
                  } else {
                    sum += (double)0.0787248204748317304;
                  }
                } else {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.375550001859664917) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3264500051736831665) ) ) {
                      sum += (double)0.004212842857142857188;
                    } else {
                      sum += (double)0.01181138260869565339;
                    }
                  } else {
                    sum += (double)0.02333634285714285966;
                  }
                }
              } else {
                sum += (double)0.05769187773109242523;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)41.9545440673828125) ) ) {
            sum += (double)0.09221724575163400828;
          } else {
            sum += (double)0.2258156087997432726;
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.917500019073486328) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.22333288192749023) ) ) {
            sum += (double)0.1345156990115467799;
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7634499967098236084) ) ) {
              sum += (double)0.3915543801744877928;
            } else {
              sum += (double)0.262548700127737844;
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4623619914054870605) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7387340068817138672) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02455000020563602448) ) ) {
                sum += (double)0.2113293789361332387;
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2579720020294189453) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)34.4404754638671875) ) ) {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1944218575954437256) ) ) {
                      sum += (double)0.1030971876265298487;
                    } else {
                      sum += (double)0.06177043278062870763;
                    }
                  } else {
                    sum += (double)0.01591800107744108239;
                  }
                } else {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-8189.737060546875) ) ) {
                    sum += (double)0.1210427031837803258;
                  } else {
                    sum += (double)0.2215998027370368051;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.2639999985694885254) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1557500064373016357) ) ) {
                  sum += (double)0.006079152941176470086;
                } else {
                  sum += (double)0.0130851405895691629;
                }
              } else {
                sum += (double)0.02480004110966120556;
              }
            }
          } else {
            sum += (double)0.2765649975657663573;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4561454951763153076) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9545539617538452148) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.04838705062866211) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2672735005617141724) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04425000026822090149) ) ) {
              sum += (double)0.5291749558203567849;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)14.34807825088500977) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-5752.160888671875) ) ) {
                  sum += (double)0.4801429518357450132;
                } else {
                  sum += (double)0.3731928407527013714;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2159790024161338806) ) ) {
                  sum += (double)0.1441756891976818111;
                } else {
                  sum += (double)0.328553828367019074;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.340364500880241394) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.490849733352661133) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2744.5994873046875) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-3523.82275390625) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06034999899566173553) ) ) {
                      sum += (double)0.5196377035508239484;
                    } else {
                      sum += (double)0.487111632162454733;
                    }
                  } else {
                    sum += (double)0.4293934591380695331;
                  }
                } else {
                  sum += (double)0.5340488587826608402;
                }
              } else {
                sum += (double)0.3778895556832989611;
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08009999990463256836) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.01450000051409006119) ) ) {
                  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2763.171630859375) ) ) {
                    sum += (double)0.6923190425866235787;
                  } else {
                    sum += (double)0.6112106615384614861;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2201257422566413879) ) ) {
                    sum += (double)0.5417734684016439761;
                  } else {
                    sum += (double)0.6155085555593785562;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.021428585052490234) ) ) {
                  sum += (double)0.6109474603815936433;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3942845016717910767) ) ) {
                    sum += (double)0.5512120946280277822;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4199575036764144897) ) ) {
                      sum += (double)0.3907213055618373732;
                    } else {
                      sum += (double)0.4760388437799371597;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3337879925966262817) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1402209997177124023) ) ) {
              sum += (double)0.3866967732373235433;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4452500045299530029) ) ) {
                sum += (double)0.1273879074065205619;
              } else {
                if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-24028.5302734375) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.18109226226806641) ) ) {
                    sum += (double)0.4158408632588209697;
                  } else {
                    sum += (double)0.2407170855708348767;
                  }
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)41.2653656005859375) ) ) {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6395500004291534424) ) ) {
                      sum += (double)0.2353639279125971928;
                    } else {
                      sum += (double)0.1098134478676941611;
                    }
                  } else {
                    sum += (double)0.2852243245986345044;
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3010499924421310425) ) ) {
              sum += (double)0.4780169349029999015;
            } else {
              sum += (double)0.294636719006651282;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.115217328071594238) ) ) {
          sum += (double)0.3333323013705081217;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3824595063924789429) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-29245.787109375) ) ) {
              sum += (double)0.1176438344609664483;
            } else {
              if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-4324.498779296875) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.196928501129150391) ) ) {
                  sum += (double)0.08839197641604649991;
                } else {
                  sum += (double)0.02428899197994987755;
                }
              } else {
                sum += (double)0.01410761333333333638;
              }
            }
          } else {
            sum += (double)0.2049445634303450614;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7569907009601593018) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6491389870643615723) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.38859033584594727) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5468925237655639648) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02730000019073486328) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4756965041160583496) ) ) {
                  sum += (double)0.6092981481946625477;
                } else {
                  sum += (double)0.709737398692810495;
                }
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.09479834139347076416) ) ) {
                  sum += (double)0.5287393344511746029;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.80193042755126953) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1041000001132488251) ) ) {
                      sum += (double)0.5725993897702363888;
                    } else {
                      sum += (double)0.6213052809739855187;
                    }
                  } else {
                    sum += (double)0.6669005314685314545;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6992000043392181396) ) ) {
                if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-2558.655029296875) ) ) {
                  sum += (double)0.6493482091168064629;
                } else {
                  sum += (double)0.7193853466666665364;
                }
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0610499996691942215) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5894770026206970215) ) ) {
                    sum += (double)0.732360169999999977;
                  } else {
                    sum += (double)0.7766043111111111674;
                  }
                } else {
                  sum += (double)0.6839230006922369931;
                }
              }
            }
          } else {
            sum += (double)0.4254024355569067106;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.749575495719909668) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6171499788761138916) ) ) {
              sum += (double)0.7298332834928229484;
            } else {
              sum += (double)0.7805433145960252173;
            }
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1056000031530857086) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8944000005722045898) ) ) {
                sum += (double)0.8488981518730159825;
              } else {
                sum += (double)0.8915235099999998525;
              }
            } else {
              sum += (double)0.7991397026017429406;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.692272484302520752) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.127672433853149414) ) ) {
            sum += (double)0.5158244088024396268;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (double)-1562.7584228515625) ) ) {
              sum += (double)0.3925024163714029846;
            } else {
              sum += (double)0.1405390427798034192;
            }
          }
        } else {
          sum += (double)0.6801798934249140283;
        }
      }
    }
  }
  return sum;
}
