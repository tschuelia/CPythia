#include "prediction.h"
double predict_margin_unit3(union Entry* data) {
  double sum = (double)0;
  unsigned int tmp;
  int nid, cond, fid;  /* used for folded subtrees */
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4550085000000000934) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.7450000000000001066) ) ) {
        sum += (double)-0.005721132984017090334;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.60681818181819125) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2428.189675971083943) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07985000000000001819) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.308777777777778262) ) ) {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3658645000000000369) ) ) {
                      sum += (double)-0.002128011500123301678;
                    } else {
                      sum += (double)0.001371365953526661316;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5120878152759216206) ) ) {
                      sum += (double)-0.003627750145328189051;
                    } else {
                      sum += (double)-0.009041131540564633848;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2087.634986269159981) ) ) {
                    sum += (double)0.001352109332770095977;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.002074688796681379) ) ) {
                      sum += (double)0.00409561741366675381;
                    } else {
                      sum += (double)-0.007405661133765013837;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.920300000000000118) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.07618126899281679743) ) ) {
                    sum += (double)0.005495593218389245062;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2178.807099952505723) ) ) {
                      sum += (double)0.00184492500191267431;
                    } else {
                      sum += (double)-0.003801941041206270688;
                    }
                  }
                } else {
                  sum += (double)-0.009582592401405446228;
                }
              }
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3749.11546473725457) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3840560000000000085) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.006450000000000001739) ) ) {
                    sum += (double)0.004452629208504079936;
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
                      sum += (double)0.002141207597720405729;
                    } else {
                      sum += (double)-0.007672179823879948096;
                    }
                  }
                } else {
                  sum += (double)0.007505418509357380738;
                }
              } else {
                sum += (double)-0.006647168732680030535;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000000000000697) ) ) {
              sum += (double)0.009503985788646482705;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5420.781404110555741) ) ) {
                sum += (double)0.002091323795321551205;
              } else {
                sum += (double)0.006296564477279710699;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.795000000000000151) ) ) {
            sum += (double)0.002682329238019037863;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.737273511647972946) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4143455000000000887) ) ) {
                  sum += (double)-0.01194373828777123454;
                } else {
                  sum += (double)-0.0007644506436311367375;
                }
              } else {
                sum += (double)0.001479529146928594552;
              }
            } else {
              sum += (double)-0.009294765713870840884;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2964705000000000257) ) ) {
          sum += (double)-0.0043781976668162189;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)269.9002463054187615) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
              sum += (double)0.006912523475962740853;
            } else {
              if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)599.5344662300684604) ) ) {
                sum += (double)-0.006397400069460032479;
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.36860497623707644) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)17604.53908125846283) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5915500000000001313) ) ) {
                      sum += (double)0.0006227989451142953471;
                    } else {
                      sum += (double)-0.003073048113597282287;
                    }
                  } else {
                    sum += (double)0.009325967239120946245;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-34049.72333320909092) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)71.22820512820514693) ) ) {
                      sum += (double)0.003450792241878213474;
                    } else {
                      sum += (double)-0.003180242733161676993;
                    }
                  } else {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4626188573480190525) ) ) {
                      sum += (double)-0.002076615902415204166;
                    } else {
                      sum += (double)-0.005942565056345829391;
                    }
                  }
                }
              }
            }
          } else {
            sum += (double)-0.007426422034246269246;
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.7118907180887991126) ) ) {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2027874902874902963) ) ) {
            sum += (double)0.01072290484059267718;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1684877502298116336) ) ) {
              sum += (double)-0.005044361252102732597;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240913000000000016) ) ) {
                sum += (double)-0.00117427468275809908;
              } else {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)51.77495421245422591) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3146.277250048707629) ) ) {
                    sum += (double)0.001432281224624040814;
                  } else {
                    sum += (double)0.009140093777332053068;
                  }
                } else {
                  sum += (double)-0.001015377872015073898;
                }
              }
            }
          }
        } else {
          sum += (double)-0.005665008416096988485;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3146902490233077776) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)482.0848310656759281) ) ) {
          sum += (double)0.0005083963002026449041;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6254210000000001157) ) ) {
            sum += (double)0.005170180687909981497;
          } else {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7236.996653052084184) ) ) {
              sum += (double)0.001695415726659987203;
            } else {
              sum += (double)0.007627950291841646864;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.849423500000000109) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)0.9606451612903227355) ) ) {
            sum += (double)0.005958346705607233014;
          } else {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-626.6516628632514312) ) ) {
              sum += (double)0.003545686836567745782;
            } else {
              if ( UNLIKELY(  (data[7].missing != -1) && (1) ) ) {
                sum += (double)-0.009226767437049863615;
              } else {
                sum += (double)0.0004491522281071731498;
              }
            }
          }
        } else {
          sum += (double)0.009199495214427507242;
        }
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.62019230769231015) ) ) {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
            sum += (double)-0.01155735919914109219;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)18906.11182675446616) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)109.0641025641025834) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
                      sum += (double)-0.003403336813344546522;
                    } else {
                      sum += (double)0.00175615362232600181;
                    }
                  } else {
                    sum += (double)-0.008389882954446413812;
                  }
                } else {
                  sum += (double)0.006938185955597909321;
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9965277359150260805) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.08774088920105922729) ) ) {
                    sum += (double)-0.002665577345536023976;
                  } else {
                    sum += (double)0.005687208728990061045;
                  }
                } else {
                  sum += (double)-0.00370494308467319601;
                }
              }
            } else {
              if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.520019664933700887) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1419531765899220976) ) ) {
                  sum += (double)0.004261543043206888169;
                } else {
                  sum += (double)0.009094482820157607714;
                }
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5142890000000001072) ) ) {
                  sum += (double)-0.00469557571391516354;
                } else {
                  sum += (double)0.005893727473390882564;
                }
              }
            }
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-17639.05176736719659) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
                sum += (double)0.003572802165007500207;
              } else {
                sum += (double)-0.002371068583783792188;
              }
            } else {
              sum += (double)0.01041655503803467185;
            }
          } else {
            sum += (double)-0.00604185968759873241;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2333.321561901081623) ) ) {
          sum += (double)-0.001090235071158564663;
        } else {
          sum += (double)-0.01187055310862671596;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4550085000000000934) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.939964157706095094) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5702500000000001457) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3431500000000000661) ) ) {
            if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.155357142857144304) ) ) {
              sum += (double)0.001240857770898306719;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
                sum += (double)0.0008531141009019159232;
              } else {
                sum += (double)-0.008376231849097436066;
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03705000000000000654) ) ) {
              sum += (double)-0.004110914536279698835;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.07500000000000002498) ) ) {
                sum += (double)0.009550345556411030112;
              } else {
                sum += (double)0.002006606380850622928;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5732.82001265566214) ) ) {
            sum += (double)-0.004838979434881041965;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.2250000000000000333) ) ) {
              sum += (double)-0.003799551309851364588;
            } else {
              sum += (double)0.00486568723572609451;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.924550000000000094) ) ) {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2428.189675971083943) ) ) {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-95.57213752792789307) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.982131478334749675) ) ) {
                      sum += (double)0.008660803592078727964;
                    } else {
                      sum += (double)0.001671085553463687312;
                    }
                  } else {
                    sum += (double)-0.0059644170533908452;
                  }
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1154034132138477414) ) ) {
                    sum += (double)-0.006583314178722285068;
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2508523744426000568) ) ) {
                      sum += (double)0.006251144829258563004;
                    } else {
                      sum += (double)-0.001318409109898692998;
                    }
                  }
                }
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2539.379249415995218) ) ) {
                  sum += (double)0.002537223486552758062;
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.606377583365031558) ) ) {
                    sum += (double)0.008447064023338595601;
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.38051350000000006) ) ) {
                      sum += (double)-0.001501810711101498122;
                    } else {
                      sum += (double)-0.01352850935655046036;
                    }
                  }
                }
              }
            } else {
              sum += (double)-0.00471260383882224354;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000000000000697) ) ) {
              sum += (double)0.009328044577910164781;
            } else {
              sum += (double)0.003289369883058316894;
            }
          }
        } else {
          if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2832.179522677182376) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2912655000000000105) ) ) {
              sum += (double)-0.00843794709827374971;
            } else {
              sum += (double)0.004092494645057602291;
            }
          } else {
            sum += (double)-0.005889469701221393058;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2472640000000000116) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4350000000000000533) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.004450000000000001697) ) ) {
            sum += (double)0.003372157808161896538;
          } else {
            sum += (double)-0.004494321860655017646;
          }
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2059541029866850392) ) ) {
            sum += (double)0.006234578668057101994;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0003500000000000000507) ) ) {
              sum += (double)0.003499104439135984363;
            } else {
              sum += (double)-0.00338227358190838507;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008650000000000001438) ) ) {
          sum += (double)-0.00622142260392109011;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.02085000000000000395) ) ) {
              sum += (double)0.006802271094249934605;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.70619946091644792) ) ) {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-14091.15150991420705) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04715000000000000441) ) ) {
                    sum += (double)0.008246278600526967678;
                  } else {
                    sum += (double)-0.0002561365866353410687;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8628500000000002279) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)10755.47127666017332) ) ) {
                      sum += (double)-0.002728338050818031931;
                    } else {
                      sum += (double)0.004726846431516444798;
                    }
                  } else {
                    sum += (double)-0.009190782861581816079;
                  }
                }
              } else {
                sum += (double)-0.003920843770890435932;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.6549412391405855516) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7246500000000001274) ) ) {
                sum += (double)0.007071882859535958722;
              } else {
                sum += (double)-8.051555199306343789e-05;
              }
            } else {
              sum += (double)-0.004377635563330901404;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.335585585585585822) ) ) {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2602911804898560555) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)7.002364066193854875) ) ) {
            sum += (double)0.008800354692614571414;
          } else {
            sum += (double)0.005955488216769820944;
          }
        } else {
          sum += (double)0.001752233810953230308;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8753585000000000393) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.851479682565888352) ) ) {
            sum += (double)0.003621026866852994613;
          } else {
            sum += (double)-0.001070109740532678008;
          }
        } else {
          sum += (double)0.009716829573916814858;
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.7261363636363658) ) ) {
        if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.767948717948721438) ) ) {
            sum += (double)-0.01130190998665649496;
          } else {
            sum += (double)0.000115232209911669451;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)12.45666166058785862) ) ) {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9.965684599721443604) ) ) {
              sum += (double)-0.003286480934245588487;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7602760000000000629) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.419765446224257488) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9381000000000000449) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
                      sum += (double)0.003687859739989482379;
                    } else {
                      sum += (double)-0.0008890130535052563447;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5090.688026845967215) ) ) {
                      sum += (double)0.004726152423644169182;
                    } else {
                      sum += (double)-0.01017855715710379999;
                    }
                  }
                } else {
                  if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5452.444267353072973) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2447500000000000508) ) ) {
                      sum += (double)0.004991732376604393097;
                    } else {
                      sum += (double)0.0007183690854129829535;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1339500000000000413) ) ) {
                      sum += (double)-0.002428642186794632667;
                    } else {
                      sum += (double)0.002926930681800305779;
                    }
                  }
                }
              } else {
                sum += (double)0.006832117304101776277;
              }
            }
          } else {
            sum += (double)0.01494121142392700052;
          }
        }
      } else {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-16031.30829179268949) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)30.47850877192982821) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2484845401189077485) ) ) {
              sum += (double)0.008041209730922328422;
            } else {
              sum += (double)0.001651867513143842744;
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.856934660369398804) ) ) {
              sum += (double)-0.002434439257564805035;
            } else {
              sum += (double)0.006972178532734905551;
            }
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3965.158948031867112) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3107.181136317587516) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)16.77028985507246617) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.07626592109350838) ) ) {
                  sum += (double)-0.003625044828602425398;
                } else {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.5141168753850328121) ) ) {
                    sum += (double)0.001863670769074105612;
                  } else {
                    sum += (double)0.01384921149073675868;
                  }
                }
              } else {
                sum += (double)-0.004918610593728364559;
              }
            } else {
              sum += (double)0.00664275758404983107;
            }
          } else {
            sum += (double)-0.005395778259689760527;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.7450000000000001066) ) ) {
        sum += (double)-0.004847854960814745005;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
              sum += (double)-0.004827133645832038834;
            } else {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8340500000000000691) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7689.919473708750047) ) ) {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)4.662311216697777816) ) ) {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-156.7600528121663501) ) ) {
                      sum += (double)0.002515513930788846209;
                    } else {
                      sum += (double)-0.004427063429876703857;
                    }
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2923.99720646755668) ) ) {
                      sum += (double)-0.001568316747548489844;
                    } else {
                      sum += (double)0.0008583708485130455345;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.083835341365462668) ) ) {
                    sum += (double)-0.001955162316006736276;
                  } else {
                    sum += (double)0.007124783375148413186;
                  }
                }
              } else {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8250000000000000666) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)45.87142857142858077) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.130274200633482079) ) ) {
                      sum += (double)0.005019310986659297584;
                    } else {
                      sum += (double)-0.003603178697694233833;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3616.651907341595233) ) ) {
                      sum += (double)-0.001661572671025792489;
                    } else {
                      sum += (double)-0.007240152458914457349;
                    }
                  }
                } else {
                  sum += (double)0.005545098465772013881;
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)1.00000001800250948e-35) ) ) {
              sum += (double)0.009984817102953598769;
            } else {
              sum += (double)0.00199642740762588991;
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)2.908568443051202213) ) ) {
            sum += (double)0.001151107822395650232;
          } else {
            sum += (double)-0.005726152039323618125;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)31.34234234234234506) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-26216.36240703851217) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
            if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)23.2322677322677329) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6814500000000002222) ) ) {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5623500000000001275) ) ) {
                  sum += (double)0.001067968133981727708;
                } else {
                  sum += (double)0.01349641855968758408;
                }
              } else {
                sum += (double)-0.0008254344191195163265;
              }
            } else {
              sum += (double)-0.00221021019351635593;
            }
          } else {
            sum += (double)0.0070032244376114711;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4151.245079122973038) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2063695000000000113) ) ) {
              sum += (double)-0.003704232142888413352;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)21962.47439012520408) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5629.325767958667711) ) ) {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4496507448607858781) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5732000000000001538) ) ) {
                      sum += (double)0.008886047410076690703;
                    } else {
                      sum += (double)-0.002307331838988991267;
                    }
                  } else {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3557370000000000254) ) ) {
                      sum += (double)-0.0030768386405769922;
                    } else {
                      sum += (double)-0.006200937303835312928;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6441500000000001114) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3658645000000000369) ) ) {
                      sum += (double)-0.0005567741640802768236;
                    } else {
                      sum += (double)0.009956500965020676289;
                    }
                  } else {
                    sum += (double)-0.004171319369657242038;
                  }
                }
              } else {
                sum += (double)0.006168145156772313759;
              }
            }
          } else {
            sum += (double)-0.004279486290292051562;
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
          sum += (double)0.002165848790249164449;
        } else {
          sum += (double)-0.004311471991183145856;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6572630000000000416) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07449922958397615) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3986990764490913053) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-864.8017076591004297) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7246500000000001274) ) ) {
              sum += (double)0.005102813397990052686;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.975304878048781188) ) ) {
                sum += (double)0.004352561783347450725;
              } else {
                if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-5148.965599026557356) ) ) {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.15085697399527298) ) ) {
                    sum += (double)0.005035860319381578985;
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)9.087782058337921853) ) ) {
                      sum += (double)-0.007093235811056055468;
                    } else {
                      sum += (double)0.003666405592656463586;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9305500000000000993) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.50897851045040099) ) ) {
                      sum += (double)-0.003042898102159842695;
                    } else {
                      sum += (double)0.002531955058367747497;
                    }
                  } else {
                    sum += (double)-0.0105347908336802451;
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.790963257199603031) ) ) {
              sum += (double)0.003133332473387135438;
            } else {
              sum += (double)-0.009675136531049590566;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06815000000000000224) ) ) {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
                sum += (double)0.00173192492056107759;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.4172500000000000653) ) ) {
                  sum += (double)0.002506526972130892518;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4745450000000000501) ) ) {
                    sum += (double)-0.003921718028000413872;
                  } else {
                    sum += (double)-0.01304061054059945865;
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3224500000000000699) ) ) {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-271.4489652655623217) ) ) {
                  sum += (double)0.003154617728880783172;
                } else {
                  sum += (double)-0.003374835923219394671;
                }
              } else {
                sum += (double)0.0004362558619282006097;
              }
            }
          } else {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.147407407407407653) ) ) {
              sum += (double)0.004241709892222305343;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1311.833829054160333) ) ) {
                sum += (double)-0.0006804775966416902336;
              } else {
                sum += (double)-0.01050846014861943692;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9962472961112764924) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.03485000000000000597) ) ) {
              sum += (double)-0.00627499199449618305;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)148.927747252747281) ) ) {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)11458.24876613496417) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)43.41428571428571814) ) ) {
                    sum += (double)0.0007343603785734789712;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1427500000000000158) ) ) {
                      sum += (double)0.003739586141971375666;
                    } else {
                      sum += (double)-0.004960755534043296416;
                    }
                  }
                } else {
                  sum += (double)0.003498585454787483083;
                }
              } else {
                sum += (double)-0.00499667039447065052;
              }
            }
          } else {
            sum += (double)0.007195806513438784448;
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)24.03240740740741188) ) ) {
            sum += (double)-0.0102665517626852193;
          } else {
            sum += (double)-8.083243848485720316e-05;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2491000000000000159) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-499.6086617798037537) ) ) {
          if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)30.43665158371041102) ) ) {
            sum += (double)0.006377762018842814823;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2301.714118936117757) ) ) {
              sum += (double)-0.005557323185767001905;
            } else {
              sum += (double)0.004450770388458470846;
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.147407407407407653) ) ) {
            sum += (double)0.004461213892494538674;
          } else {
            sum += (double)-0.005913772599214655624;
          }
        }
      } else {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9999263622974964294) ) ) {
          sum += (double)0.003355161733855441426;
        } else {
          sum += (double)-0.004967017888092354651;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5401750000000001828) ) ) {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
          sum += (double)0.002736956426739068152;
        } else {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3028.043267225880754) ) ) {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8628500000000002279) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1427.072464577498522) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02135000000000000439) ) ) {
                  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1316846325177797872) ) ) {
                    sum += (double)-0.01208145736537760175;
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
                      sum += (double)0.002546405965578858906;
                    } else {
                      sum += (double)-0.00749325419096799096;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)5.344900589101620803) ) ) {
                    sum += (double)-0.006121108063170687535;
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7092500000000001581) ) ) {
                      sum += (double)0.001673703258817930105;
                    } else {
                      sum += (double)-0.002063886309517466797;
                    }
                  }
                }
              } else {
                sum += (double)0.008181987248804497778;
              }
            } else {
              sum += (double)-0.01061014822390291858;
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.04988135003030733788) ) ) {
              sum += (double)-0.005607373518674534443;
            } else {
              sum += (double)0.00376808741813442101;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.88731060606061618) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9379530110910064833) ) ) {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2106500000000000317) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3283310000000000395) ) ) {
                sum += (double)-0.00251080282899141926;
              } else {
                if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07895000000000000628) ) ) {
                  if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)1040.704691140170553) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
                      sum += (double)0.004526648451366993564;
                    } else {
                      sum += (double)-0.005598879189185059294;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8090500000000001579) ) ) {
                      sum += (double)0.01194908719497302096;
                    } else {
                      sum += (double)0.0008916473435726574893;
                    }
                  }
                } else {
                  sum += (double)0.007251141014174821917;
                }
              }
            } else {
              sum += (double)0.01078653787314912474;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.01465000000000000156) ) ) {
              sum += (double)-0.002023138025231010703;
            } else {
              sum += (double)-0.009386302540993379448;
            }
          }
        } else {
          sum += (double)-0.007986744190139439398;
        }
      }
    } else {
      if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2552661953259802718) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)24.67204301075269157) ) ) {
          sum += (double)0.005854159074021745603;
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2087.634986269159981) ) ) {
            sum += (double)-0.008841088156505479134;
          } else {
            sum += (double)0.004006165235648054788;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.8066835000000001088) ) ) {
          sum += (double)0.002723984551658148023;
        } else {
          sum += (double)0.006276240475480014507;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3744800000000000906) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)20.1043557168784055) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-19912.09767360366459) ) ) {
          sum += (double)0.00184015884345780918;
        } else {
          if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.5350000000000001421) ) ) {
            sum += (double)-0.004745269319176944299;
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)260.2258709753264725) ) ) {
              sum += (double)-0.005414353842308441966;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5915500000000001313) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4995331520331520725) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)16.30142642642643125) ) ) {
                    sum += (double)0.01004646231236257237;
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3912.581042876649917) ) ) {
                      sum += (double)0.004322321350669630982;
                    } else {
                      sum += (double)-0.002781223486574687428;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0001500000000000000411) ) ) {
                    sum += (double)0.009744026517877578744;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.07695000000000001839) ) ) {
                      sum += (double)-0.006164088894395599975;
                    } else {
                      sum += (double)-0.0004935307194094719352;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3688321311376249745) ) ) {
                  if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.7650000000000001243) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13660.08107385601579) ) ) {
                      sum += (double)0.00341205986252168976;
                    } else {
                      sum += (double)-0.002577492980631865011;
                    }
                  } else {
                    if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2865.318948452297718) ) ) {
                      sum += (double)0.000555826464493413175;
                    } else {
                      sum += (double)0.01337630541425147493;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.363139534883722526) ) ) {
                    sum += (double)-0.01482076042023655615;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1427500000000000158) ) ) {
                      sum += (double)-0.00604976951611388078;
                    } else {
                      sum += (double)-0.002166469234181334774;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        sum += (double)-0.003588096489563798175;
      }
    } else {
      if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1396.779958297000576) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)15.25728920409771661) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0313500000000000098) ) ) {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.511579000000000117) ) ) {
                  sum += (double)-0.003434785168389539387;
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.5436705000000000565) ) ) {
                    sum += (double)0.01056928122835368127;
                  } else {
                    sum += (double)-0.001555362315112085968;
                  }
                }
              } else {
                if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.06446597211275277572) ) ) {
                    sum += (double)-0.006375521589013439031;
                  } else {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)18906.11182675446616) ) ) {
                      sum += (double)0.0009689235257394284524;
                    } else {
                      sum += (double)0.008465823981582871333;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)8.648699334543257677) ) ) {
                    sum += (double)0.002650165029418438071;
                  } else {
                    sum += (double)0.01149651705130128043;
                  }
                }
              }
            } else {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08505000000000001448) ) ) {
                sum += (double)0.01049978265989457392;
              } else {
                sum += (double)0.003396797025557664936;
              }
            }
          } else {
            sum += (double)-0.00831858814720935584;
          }
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
            sum += (double)0.005047956304798979603;
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)19887.81802584273828) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7201500000000001789) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4709808304613328223) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.0281746031746124) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4791.91395952250241) ) ) {
                      sum += (double)0.01466337619775454418;
                    } else {
                      sum += (double)0.003718728267229011192;
                    }
                  } else {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3029155602761551269) ) ) {
                      sum += (double)0.006086216713622928307;
                    } else {
                      sum += (double)-0.00188481606339268421;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-94839.3939457742963) ) ) {
                    sum += (double)0.006115884818773280329;
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2470000000000000251) ) ) {
                      sum += (double)-0.005425163305647483225;
                    } else {
                      sum += (double)-0.001579078677731002647;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)26.84219858156028593) ) ) {
                  sum += (double)-0.008311194309735781341;
                } else {
                  sum += (double)-0.0008716116088025333431;
                }
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)54.45833333333334281) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3020500000000000962) ) ) {
                  sum += (double)0.009967422108789493126;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.5049000000000000155) ) ) {
                    sum += (double)-0.005203078904784343671;
                  } else {
                    sum += (double)0.004972341757086241702;
                  }
                }
              } else {
                sum += (double)-0.004722801691172932685;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7.193095877481540334) ) ) {
          sum += (double)0.0003295758843748366291;
        } else {
          sum += (double)-0.007056092001251481477;
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.424420000000000075) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.23303167420814574) ) ) {
      if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6945.123393532623595) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2063695000000000113) ) ) {
          sum += (double)-0.003246179812604103442;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-7866.211076535222674) ) ) {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08505000000000001448) ) ) {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-8461.096702489729068) ) ) {
                if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.50611355962782556) ) ) {
                  sum += (double)0.007735941933555162513;
                } else {
                  sum += (double)9.089884814117977466e-05;
                }
              } else {
                sum += (double)-0.003026888772643791109;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)46.60851063829787932) ) ) {
                sum += (double)0.0009238423619485429915;
              } else {
                sum += (double)-0.006871769799314956899;
              }
            }
          } else {
            if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4958483270806217091) ) ) {
              sum += (double)0.009617355322541171897;
            } else {
              sum += (double)0.001686570670986554813;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.567117117117118319) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
            if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1088.019582622902362) ) ) {
              if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.484296965040338367) ) ) {
                sum += (double)0.00333561141989808423;
              } else {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.240913000000000016) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.008150000000000002728) ) ) {
                    sum += (double)0.004157148648470095596;
                  } else {
                    sum += (double)-0.00659110150519787337;
                  }
                } else {
                  sum += (double)0.0007975312169923333677;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04825000000000000816) ) ) {
                sum += (double)-0.004086021351669326049;
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.08235000000000002041) ) ) {
                  sum += (double)0.009158604558330160628;
                } else {
                  sum += (double)-0.0002653599495556905924;
                }
              }
            }
          } else {
            sum += (double)-0.005830080353983744731;
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1171905010334959446) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-4301.103410471841016) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3264795000000000891) ) ) {
                sum += (double)-0.003873779570921092024;
              } else {
                sum += (double)0.003748122583818722531;
              }
            } else {
              sum += (double)-0.006115383655791641754;
            }
          } else {
            if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)572.059826422058336) ) ) {
              sum += (double)-0.004663524815650414886;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2313484523829452688) ) ) {
                if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2503885000000000693) ) ) {
                  sum += (double)-0.001708097860519630163;
                } else {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)55.45361298224128177) ) ) {
                    sum += (double)0.00944854186280141492;
                  } else {
                    sum += (double)-0.0009347771775645836133;
                  }
                }
              } else {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.3268798599916286629) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7560499999999999998) ) ) {
                    if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2428.189675971083943) ) ) {
                      sum += (double)-0.003191159089926576872;
                    } else {
                      sum += (double)0.001124151300183753388;
                    }
                  } else {
                    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7803500000000002101) ) ) {
                      sum += (double)-0.01184955124550289042;
                    } else {
                      sum += (double)0.00203886005276553324;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06605000000000001148) ) ) {
                    sum += (double)-0.002996164886313552878;
                  } else {
                    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2144260000000000332) ) ) {
                      sum += (double)0.00895919591207474178;
                    } else {
                      sum += (double)0.002323025853669329933;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4337500000000000244) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9350000000000001643) ) ) {
          sum += (double)-0.003005605621508790782;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.6298699906795736103) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2027874902874902963) ) ) {
              sum += (double)0.009818947656440998525;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.3213000000000000855) ) ) {
                sum += (double)0.01071114763144615477;
              } else {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.2060232146152657651) ) ) {
                  sum += (double)-0.004071907123105939982;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
                    sum += (double)-0.004840751241769893944;
                  } else {
                    sum += (double)0.00234755016380070727;
                  }
                }
              }
            }
          } else {
            sum += (double)-0.004419988084612045363;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3345125000000000459) ) ) {
          sum += (double)-0.001858650523177113713;
        } else {
          if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3146902490233077776) ) ) {
            sum += (double)-0.005645099630090921923;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4976500000000000923) ) ) {
              sum += (double)0.009130443043581557006;
            } else {
              sum += (double)0.00126033283532398779;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.198484848484848708) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6133040000000001823) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
          sum += (double)0.003256712157192738575;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.883349826818407013) ) ) {
            sum += (double)0.002189831506043519744;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1427500000000000158) ) ) {
              sum += (double)-0.006748023823687341119;
            } else {
              sum += (double)0.00247983156544116139;
            }
          }
        }
      } else {
        sum += (double)0.0046859034058407854;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)11.07449922958397615) ) ) {
        if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1590.266385994794746) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3986990764490913053) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.6770500000000000407) ) ) {
              sum += (double)0.007124331901419411577;
            } else {
              sum += (double)0.002292123274728011251;
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06045000000000001067) ) ) {
              if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)11.64483714483714571) ) ) {
                sum += (double)0.002309289149503805563;
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5126500000000001611) ) ) {
                  sum += (double)-0.001643691354179871271;
                } else {
                  sum += (double)-0.01201501470098262532;
                }
              }
            } else {
              if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3224500000000000699) ) ) {
                sum += (double)0.002634590160490478568;
              } else {
                sum += (double)-0.0002615458030330713177;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002850000000000000536) ) ) {
            sum += (double)-0.01035043168330420683;
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.007250000000000000368) ) ) {
              sum += (double)0.007751764170126489682;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-626.6516628632514312) ) ) {
                if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4987890206545879113) ) ) {
                  if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)20.80196078431373152) ) ) {
                    sum += (double)0.004540969150657883473;
                  } else {
                    sum += (double)-0.003236359708910660927;
                  }
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.0290500000000000029) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1256.768626091058877) ) ) {
                      sum += (double)-0.008624622173546703241;
                    } else {
                      sum += (double)0.00225707547448857895;
                    }
                  } else {
                    sum += (double)-0.009947061951405907279;
                  }
                }
              } else {
                sum += (double)0.006043814670487166439;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)58.19230769230770051) ) ) {
            if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-32780.76529662315443) ) ) {
              if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3020500000000000962) ) ) {
                sum += (double)0.008816320570677174673;
              } else {
                sum += (double)0.0009424318937770974477;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4283830000000000693) ) ) {
                sum += (double)-0.008265455521476231665;
              } else {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.62019230769231015) ) ) {
                  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.07230000000000001703) ) ) {
                      sum += (double)0.01126097690396627923;
                    } else {
                      sum += (double)-2.39129606343588376e-05;
                    }
                  } else {
                    sum += (double)-0.009538155932730645742;
                  }
                } else {
                  sum += (double)-0.00321333414754602139;
                }
              }
            }
          } else {
            sum += (double)-0.00416707514180864047;
          }
        } else {
          sum += (double)0.004757519086394376012;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)7.412404092071612105) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.550425500000000123) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.5650000000000000577) ) ) {
        sum += (double)-0.005538296516358440225;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-1053.386332019519841) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)3.808101472995090386) ) ) {
              sum += (double)0.002440905247320517522;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6050.676413400918136) ) ) {
                sum += (double)0.002760488810162064349;
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.870650000000000035) ) ) {
                  if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)37.78759398496241317) ) ) {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02255000000000000407) ) ) {
                      sum += (double)-0.001848700592816048417;
                    } else {
                      sum += (double)0.0007897424900115479008;
                    }
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2592.581278167002438) ) ) {
                      sum += (double)0.01439753297435619403;
                    } else {
                      sum += (double)0.002793004780998412616;
                    }
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3791.556210767445464) ) ) {
                    sum += (double)0.001128136068913365101;
                  } else {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2276.637434844240943) ) ) {
                      sum += (double)-0.01431643431421670415;
                    } else {
                      sum += (double)-0.005078626550064446396;
                    }
                  }
                }
              }
            }
          } else {
            if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)26.50897851045040099) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.9930683563748080589) ) ) {
                if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.667349726775957386) ) ) {
                  sum += (double)0.0009649196073478871066;
                } else {
                  sum += (double)-0.007749353498791093989;
                }
              } else {
                sum += (double)-0.008324849181939391121;
              }
            } else {
              sum += (double)-0.00782522938685704765;
            }
          }
        } else {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)2.332274916211522164) ) ) {
            sum += (double)-0.006240104351480003746;
          } else {
            sum += (double)0.002125112898602871982;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)294.2731973911765522) ) ) {
        if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)1.062745098039215907) ) ) {
          sum += (double)0.005305310934125811138;
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-95.57213752792789307) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.255772599929291689) ) ) {
              sum += (double)0.001379478813155472815;
            } else {
              sum += (double)-0.004520035529300742497;
            }
          } else {
            sum += (double)-0.0077612581842663661;
          }
        }
      } else {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-12967.17676313729862) ) ) {
          sum += (double)-3.695922485391528217e-05;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7602760000000000629) ) ) {
            sum += (double)0.003446890319894411504;
          } else {
            sum += (double)0.00501634805726735352;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3283310000000000395) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.86694963214488396) ) ) {
        if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-22332.50306697345877) ) ) {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.90615835777126286) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2312300000000000189) ) ) {
              sum += (double)0.01038452547640408667;
            } else {
              sum += (double)0.001984141697684882119;
            }
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2888715000000000588) ) ) {
              sum += (double)-0.001180543098515966912;
            } else {
              sum += (double)0.005124615797326645579;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1468760000000000343) ) ) {
            sum += (double)-0.003637025904388524033;
          } else {
            if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)9173.564891287333012) ) ) {
              sum += (double)-0.002433195931322947557;
            } else {
              sum += (double)0.0001338521904700534174;
            }
          }
        }
      } else {
        sum += (double)-0.003525674657106821555;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.05665000000000000591) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.9118821962252711133) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.7747129114313702214) ) ) {
              sum += (double)0.008851023447564349694;
            } else {
              sum += (double)-0.004518622782418556076;
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.609811841983204816) ) ) {
              sum += (double)0.01365678205531673135;
            } else {
              sum += (double)0.001730536664003356172;
            }
          }
        } else {
          if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.1869734242044373551) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.643991500000000161) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7708000000000000407) ) ) {
                if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.08706594241544672597) ) ) {
                  sum += (double)0.00905956690150683773;
                } else {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2118118797363109373) ) ) {
                    sum += (double)0.01042350919115516729;
                  } else {
                    if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)42.26872082166200784) ) ) {
                      sum += (double)0.002323685608433113167;
                    } else {
                      sum += (double)-0.002931892358901082209;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)20900.29691740099588) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.9115500000000001934) ) ) {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7821500000000000119) ) ) {
                      sum += (double)-0.009270839608669039986;
                    } else {
                      sum += (double)-0.0008303384473779746363;
                    }
                  } else {
                    sum += (double)-0.01285712213703181159;
                  }
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)29.16869918699187636) ) ) {
                    sum += (double)0.004870180653737360248;
                  } else {
                    sum += (double)-0.004448432630366263955;
                  }
                }
              }
            } else {
              sum += (double)0.006095526022128817424;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5984500000000001485) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4420656524973072266) ) ) {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.04920000000000000762) ) ) {
                  sum += (double)-0.001088866919747604432;
                } else {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.1793500000000000372) ) ) {
                    sum += (double)0.0148061356468873577;
                  } else {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)49.60681818181819125) ) ) {
                      sum += (double)0.01007253314294975083;
                    } else {
                      sum += (double)-0.001010997779552115592;
                    }
                  }
                }
              } else {
                if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06705000000000001237) ) ) {
                  sum += (double)-0.004865792000464661156;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)21.93867243867244454) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)294.2731973911765522) ) ) {
                      sum += (double)-0.005790034438399801163;
                    } else {
                      sum += (double)-1.886844006542612578e-05;
                    }
                  } else {
                    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.6507500000000000506) ) ) {
                      sum += (double)-0.003613302788797304477;
                    } else {
                      sum += (double)0.003611937642427328309;
                    }
                  }
                }
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4612010000000000276) ) ) {
                if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3029155602761551269) ) ) {
                  if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.2527500000000000857) ) ) {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.73128342245989408) ) ) {
                      sum += (double)0.01055852675975745177;
                    } else {
                      sum += (double)-0.001285531726801550931;
                    }
                  } else {
                    sum += (double)-0.006911643618308912183;
                  }
                } else {
                  if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-10400.13848083777884) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)4917.478106812183796) ) ) {
                      sum += (double)0.008383220902755776638;
                    } else {
                      sum += (double)-0.003922221760500133395;
                    }
                  } else {
                    sum += (double)-0.008916902728509019591;
                  }
                }
              } else {
                if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)10.93082137161084688) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4126257761330971996) ) ) {
                    sum += (double)0.008533595963057187539;
                  } else {
                    sum += (double)-0.0008934105479160270834;
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.4978420000000000623) ) ) {
                    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5732.82001265566214) ) ) {
                      sum += (double)-0.00448632938979330164;
                    } else {
                      sum += (double)0.006415880089278887775;
                    }
                  } else {
                    sum += (double)-0.005092698966906260456;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.044849653237345022) ) ) {
          if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)54.45833333333334281) ) ) {
            sum += (double)0.005412954613278147219;
          } else {
            sum += (double)-0.001851592402835128964;
          }
        } else {
          if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2865.318948452297718) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.517120500000000094) ) ) {
              sum += (double)-0.005762976242461148764;
            } else {
              sum += (double)0.00421726132377983013;
            }
          } else {
            sum += (double)-0.01005439972673466235;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.388216000000000061) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)13.53959627329192728) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.6150000000000001021) ) ) {
        sum += (double)-0.003867304841064439242;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.138670463065909688) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1468760000000000343) ) ) {
              sum += (double)-0.00465147901857621178;
            } else {
              if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.8850000000000001199) ) ) {
                if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8450000000000000844) ) ) {
                  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2801060000000000771) ) ) {
                    sum += (double)0.004761827427017438497;
                  } else {
                    sum += (double)-0.004298071602456507087;
                  }
                } else {
                  sum += (double)0.01066798260980198441;
                }
              } else {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5963500000000001577) ) ) {
                  if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.5031527682228830178) ) ) {
                    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3600160000000000582) ) ) {
                      sum += (double)0.001341713354495830931;
                    } else {
                      sum += (double)0.01147647408016261306;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.06925000000000001987) ) ) {
                      sum += (double)-0.004461942902944612301;
                    } else {
                      sum += (double)0.0005351106556094889976;
                    }
                  }
                } else {
                  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4018505548079681078) ) ) {
                    if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)19.84898917704717647) ) ) {
                      sum += (double)0.001771545055481551882;
                    } else {
                      sum += (double)-0.001314355737195994044;
                    }
                  } else {
                    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.0953500000000000042) ) ) {
                      sum += (double)-0.00904335615953733192;
                    } else {
                      sum += (double)-0.002247598621563295582;
                    }
                  }
                }
              }
            }
          } else {
            if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.002250000000000000697) ) ) {
              sum += (double)0.00783510177589274992;
            } else {
              if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-13395.22104316800687) ) ) {
                sum += (double)0.00463440134472906367;
              } else {
                if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)2038.087406351012987) ) ) {
                  if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)786.2947641301196882) ) ) {
                    sum += (double)-0.0001655942714456110521;
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.289274051889615802) ) ) {
                      sum += (double)0.001060482984363487384;
                    } else {
                      sum += (double)0.007329199063029889251;
                    }
                  }
                } else {
                  if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.2503885000000000693) ) ) {
                    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4173837132183961796) ) ) {
                      sum += (double)-0.001308273387600777417;
                    } else {
                      sum += (double)-0.01001395458351163857;
                    }
                  } else {
                    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7166500000000001203) ) ) {
                      sum += (double)0.003722278159385028484;
                    } else {
                      sum += (double)-0.001874542863763804064;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)5.808257918552036436) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)1.714205188864963869) ) ) {
              sum += (double)0.003560161420858084548;
            } else {
              sum += (double)-0.005744637001517183435;
            }
          } else {
            sum += (double)-0.006564655465601918101;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.4749000000000000443) ) ) {
        if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.4369219652904519635) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.580400000000000138) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.1710950000000000248) ) ) {
              sum += (double)-0.002807890299820905034;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.5184500000000001885) ) ) {
                sum += (double)0.01425628171701303661;
              } else {
                if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-6575.003333603138344) ) ) {
                  sum += (double)0.007240529737299217228;
                } else {
                  sum += (double)-0.005896748890169562461;
                }
              }
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.4350000000000000533) ) ) {
              sum += (double)-0.002831847428408835066;
            } else {
              if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3398531389175412643) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.7166500000000001203) ) ) {
                  sum += (double)0.01063437831470405784;
                } else {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8378500000000000947) ) ) {
                    sum += (double)0.002070983482562083807;
                  } else {
                    sum += (double)-0.005214156857173145136;
                  }
                }
              } else {
                sum += (double)-0.003253473135788299657;
              }
            }
          }
        } else {
          sum += (double)-0.003278172824740470566;
        }
      } else {
        if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)3312.681485277902539) ) ) {
          sum += (double)-0.004340530912795560921;
        } else {
          if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)44.45498652291105657) ) ) {
            sum += (double)0.007754522832823932885;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3114755000000000718) ) ) {
              sum += (double)-0.00265883370747663347;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.3368947088135722523) ) ) {
                sum += (double)-0.002589144056635749296;
              } else {
                sum += (double)0.005381699593489270954;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)6.720486111111111605) ) ) {
      if ( UNLIKELY(  (data[7].missing != -1) && (data[7].fvalue <= (double)0.9950000000000001066) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)6.567091454272864226) ) ) {
          sum += (double)-0.001193939496690836011;
        } else {
          sum += (double)-0.009848837516038648487;
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.6626935000000001574) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)5.113654335801698814) ) ) {
            if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.147407407407407653) ) ) {
              sum += (double)0.003670037077901159607;
            } else {
              sum += (double)-0.002947196401541998887;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.3970620000000000815) ) ) {
              sum += (double)0.005942159141414627213;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)7158.326501222521074) ) ) {
                if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (double)57.21666666666667567) ) ) {
                  if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8677000000000001378) ) ) {
                    if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.2552661953259802718) ) ) {
                      sum += (double)0.003815180446556748223;
                    } else {
                      sum += (double)0.001781691147730348531;
                    }
                  } else {
                    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)1.835491146007350638) ) ) {
                      sum += (double)0.004384613772663915367;
                    } else {
                      sum += (double)-0.001079717943022063436;
                    }
                  }
                } else {
                  sum += (double)-0.008897518660138794416;
                }
              } else {
                sum += (double)0.004177101219787119832;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.3819500000000000672) ) ) {
            sum += (double)0.004171725458044070814;
          } else {
            sum += (double)0.001000072638526910669;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (double)0.7091915000000000857) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)62.55844155844156518) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (double)29304.5719267044733) ) ) {
            if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.07945677231391518047) ) ) {
              sum += (double)-0.01039310789044809065;
            } else {
              if ( LIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-3371.239524566822638) ) ) {
                if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.1846000000000000141) ) ) {
                  sum += (double)0.007216866451138690373;
                } else {
                  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (double)22.94680249009621065) ) ) {
                    if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.8050000000000001599) ) ) {
                      sum += (double)0.0002169171670482642562;
                    } else {
                      sum += (double)0.003586237646932069478;
                    }
                  } else {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-24839.74131948253489) ) ) {
                      sum += (double)0.000510409516936732215;
                    } else {
                      sum += (double)-0.004789561437725945239;
                    }
                  }
                }
              } else {
                if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (double)0.8212500000000001465) ) ) {
                  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (double)0.02205000000000000362) ) ) {
                    if ( UNLIKELY(  (data[5].missing != -1) && (data[5].fvalue <= (double)-2353.687490992878338) ) ) {
                      sum += (double)-0.0116794285424759673;
                    } else {
                      sum += (double)-0.00381358452530425893;
                    }
                  } else {
                    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.4029797040248608853) ) ) {
                      sum += (double)0.00299531534100324617;
                    } else {
                      sum += (double)-0.003036988661847607983;
                    }
                  }
                } else {
                  sum += (double)-0.0135825257581764676;
                }
              }
            }
          } else {
            sum += (double)0.007132544708026830951;
          }
        } else {
          sum += (double)-0.003884689109067042921;
        }
      } else {
        if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (double)0.9750000000000000888) ) ) {
          if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (double)0.50611355962782556) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (double)0.06065038394431352536) ) ) {
              sum += (double)0.0007736494129820268911;
            } else {
              sum += (double)0.009981638609136762874;
            }
          } else {
            sum += (double)-0.001704098833425479048;
          }
        } else {
          sum += (double)0.01115883284663308876;
        }
      }
    }
  }
  return sum;
}
