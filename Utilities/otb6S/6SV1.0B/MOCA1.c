/* MOCA1.f -- translated by f2c (version 19970805).
   You must link the resulting object file with the libraries:
	-lf2c -lm   (in that order)
*/

#ifdef __cplusplus
extern "C" {
#endif
/* OTB patches: replace "f2c.h" by "otb_6S.h" */
/*#include "f2c.h"*/
#include "otb_6S.h"

/*<       subroutine    moca1(a,inu) >*/
/* Subroutine */ int moca1_(doublereal *a, integer *inu)
{
    /* Initialized data */

    static doublereal acr[2048]	/* was [8][256] */ = { 0.,0.,0.,0.,0.,0.,
	    2500.,2510.,0.,0.,0.,0.,0.,0.,2510.,2520.,0.,0.,0.,0.,0.,0.,2520.,
	    2530.,0.,0.,0.,0.,0.,0.,2530.,2540.,0.,0.,0.,0.,0.,0.,2540.,2550.,
	    0.,0.,0.,0.,0.,0.,2550.,2560.,0.,0.,0.,0.,0.,0.,2560.,2570.,0.,0.,
	    0.,0.,0.,0.,2570.,2580.,0.,0.,0.,0.,0.,0.,2580.,2590.,0.,0.,0.,0.,
	    0.,0.,2590.,2600.,0.,0.,0.,0.,0.,0.,2600.,2610.,0.,0.,0.,0.,0.,0.,
	    2610.,2620.,0.,0.,0.,0.,0.,0.,2620.,2630.,0.,0.,0.,0.,0.,0.,2630.,
	    2640.,0.,0.,0.,0.,0.,0.,2640.,2650.,0.,0.,0.,0.,0.,0.,2650.,2660.,
	    0.,0.,0.,0.,0.,0.,2660.,2670.,0.,0.,0.,0.,0.,0.,2670.,2680.,0.,0.,
	    0.,0.,0.,0.,2680.,2690.,0.,0.,0.,0.,0.,0.,2690.,2700.,0.,0.,0.,0.,
	    0.,0.,2700.,2710.,0.,0.,0.,0.,0.,0.,2710.,2720.,0.,0.,0.,0.,0.,0.,
	    2720.,2730.,0.,0.,0.,0.,0.,0.,2730.,2740.,0.,0.,0.,0.,0.,0.,2740.,
	    2750.,0.,0.,0.,0.,0.,0.,2750.,2760.,0.,0.,0.,0.,0.,0.,2760.,2770.,
	    0.,0.,0.,0.,0.,0.,2770.,2780.,0.,0.,0.,0.,0.,0.,2780.,2790.,0.,0.,
	    0.,0.,0.,0.,2790.,2800.,0.,0.,0.,0.,0.,0.,2800.,2810.,0.,0.,0.,0.,
	    0.,0.,2810.,2820.,0.,0.,0.,0.,0.,0.,2820.,2830.,0.,0.,0.,0.,0.,0.,
	    2830.,2840.,0.,0.,0.,0.,0.,0.,2840.,2850.,0.,0.,0.,0.,0.,0.,2850.,
	    2860.,0.,0.,0.,0.,0.,0.,2860.,2870.,0.,0.,0.,0.,0.,0.,2870.,2880.,
	    0.,0.,0.,0.,0.,0.,2880.,2890.,0.,0.,0.,0.,0.,0.,2890.,2900.,0.,0.,
	    0.,0.,0.,0.,2900.,2910.,0.,0.,0.,0.,0.,0.,2910.,2920.,0.,0.,0.,0.,
	    0.,0.,2920.,2930.,0.,0.,0.,0.,0.,0.,2930.,2940.,0.,0.,0.,0.,0.,0.,
	    2940.,2950.,0.,0.,0.,0.,0.,0.,2950.,2960.,0.,0.,0.,0.,0.,0.,2960.,
	    2970.,0.,0.,0.,0.,0.,0.,2970.,2980.,0.,0.,0.,0.,0.,0.,2980.,2990.,
	    0.,0.,0.,0.,0.,0.,2990.,3e3,0.,0.,0.,0.,0.,0.,3e3,3010.,0.,0.,0.,
	    0.,0.,0.,3010.,3020.,0.,0.,0.,0.,0.,0.,3020.,3030.,0.,0.,0.,0.,0.,
	    0.,3030.,3040.,0.,0.,0.,0.,0.,0.,3040.,3050.,0.,0.,0.,0.,0.,0.,
	    3050.,3060.,0.,0.,0.,0.,0.,0.,3060.,3070.,0.,0.,0.,0.,0.,0.,3070.,
	    3080.,0.,0.,0.,0.,0.,0.,3080.,3090.,0.,0.,0.,0.,0.,0.,3090.,3100.,
	    0.,0.,0.,0.,0.,0.,3100.,3110.,0.,0.,0.,0.,0.,0.,3110.,3120.,0.,0.,
	    0.,0.,0.,0.,3120.,3130.,0.,0.,0.,0.,0.,0.,3130.,3140.,0.,0.,0.,0.,
	    0.,0.,3140.,3150.,0.,0.,0.,0.,0.,0.,3150.,3160.,0.,0.,0.,0.,0.,0.,
	    3160.,3170.,0.,0.,0.,0.,0.,0.,3170.,3180.,0.,0.,0.,0.,0.,0.,3180.,
	    3190.,0.,0.,0.,0.,0.,0.,3190.,3200.,0.,0.,0.,0.,0.,0.,3200.,3210.,
	    0.,0.,0.,0.,0.,0.,3210.,3220.,0.,0.,0.,0.,0.,0.,3220.,3230.,0.,0.,
	    0.,0.,0.,0.,3230.,3240.,0.,0.,0.,0.,0.,0.,3240.,3250.,0.,0.,0.,0.,
	    0.,0.,3250.,3260.,0.,0.,0.,0.,0.,0.,3260.,3270.,0.,0.,0.,0.,0.,0.,
	    3270.,3280.,0.,0.,0.,0.,0.,0.,3280.,3290.,0.,0.,0.,0.,0.,0.,3290.,
	    3300.,0.,0.,0.,0.,0.,0.,3300.,3310.,0.,0.,0.,0.,0.,0.,3310.,3320.,
	    0.,0.,0.,0.,0.,0.,3320.,3330.,0.,0.,0.,0.,0.,0.,3330.,3340.,0.,0.,
	    0.,0.,0.,0.,3340.,3350.,0.,0.,0.,0.,0.,0.,3350.,3360.,0.,0.,0.,0.,
	    0.,0.,3360.,3370.,0.,0.,0.,0.,0.,0.,3370.,3380.,0.,0.,0.,0.,0.,0.,
	    3380.,3390.,0.,0.,0.,0.,0.,0.,3390.,3400.,0.,0.,0.,0.,0.,0.,3400.,
	    3410.,0.,0.,0.,0.,0.,0.,3410.,3420.,0.,0.,0.,0.,0.,0.,3420.,3430.,
	    0.,0.,0.,0.,0.,0.,3430.,3440.,0.,0.,0.,0.,0.,0.,3440.,3450.,0.,0.,
	    0.,0.,0.,0.,3450.,3460.,0.,0.,0.,0.,0.,0.,3460.,3470.,0.,0.,0.,0.,
	    0.,0.,3470.,3480.,0.,0.,0.,0.,0.,0.,3480.,3490.,0.,0.,0.,0.,0.,0.,
	    3490.,3500.,0.,0.,0.,0.,0.,0.,3500.,3510.,0.,0.,0.,0.,0.,0.,3510.,
	    3520.,0.,0.,0.,0.,0.,0.,3520.,3530.,0.,0.,0.,0.,0.,0.,3530.,3540.,
	    0.,0.,0.,0.,0.,0.,3540.,3550.,0.,0.,0.,0.,0.,0.,3550.,3560.,0.,0.,
	    0.,0.,0.,0.,3560.,3570.,0.,0.,0.,0.,0.,0.,3570.,3580.,0.,0.,0.,0.,
	    0.,0.,3580.,3590.,0.,0.,0.,0.,0.,0.,3590.,3600.,0.,0.,0.,0.,0.,0.,
	    3600.,3610.,0.,0.,0.,0.,0.,0.,3610.,3620.,0.,0.,0.,0.,0.,0.,3620.,
	    3630.,0.,0.,0.,0.,0.,0.,3630.,3640.,0.,0.,0.,0.,0.,0.,3640.,3650.,
	    0.,0.,0.,0.,0.,0.,3650.,3660.,0.,0.,0.,0.,0.,0.,3660.,3670.,0.,0.,
	    0.,0.,0.,0.,3670.,3680.,0.,0.,0.,0.,0.,0.,3680.,3690.,0.,0.,0.,0.,
	    0.,0.,3690.,3700.,0.,0.,0.,0.,0.,0.,3700.,3710.,0.,0.,0.,0.,0.,0.,
	    3710.,3720.,0.,0.,0.,0.,0.,0.,3720.,3730.,0.,0.,0.,0.,0.,0.,3730.,
	    3740.,0.,0.,0.,0.,0.,0.,3740.,3750.,0.,0.,0.,0.,0.,0.,3750.,3760.,
	    0.,0.,0.,0.,0.,0.,3760.,3770.,2.6188e-23,7.5648e-7,.14705,
	    -5.9469e-4,.14469,-5.9147e-4,3770.,3780.,1.7237e-22,7.5958e-7,
	    .13909,-5.6296e-4,.13671,-5.596e-4,3780.,3790.,3.0601e-22,
	    3.9946e-7,.13415,-5.447e-4,.13135,-5.3906e-4,3790.,3800.,
	    2.5148e-21,7.6406e-7,.12775,-5.1775e-4,.12533,-5.1417e-4,3800.,
	    3810.,2.5745e-19,6.6661e-7,.10289,-4.1172e-4,.10359,-4.1229e-4,
	    3810.,3820.,2.3471e-18,8.5834e-7,.095064,-3.8496e-4,.093786,
	    -3.8192e-4,3820.,3830.,4.4267e-18,6.1131e-7,.090479,-3.6372e-4,
	    .091063,-3.6128e-4,3830.,3840.,3.7544e-17,9.6342e-7,.083552,
	    -3.3748e-4,.083109,-3.3494e-4,3840.,3850.,6.6043e-17,4.5762e-6,
	    .080581,-2.9237e-4,.1186,-1.9899e-4,3850.,3860.,5.0104e-16,
	    3.0566e-6,.073204,-2.8334e-4,.10085,-1.1404e-4,3860.,3870.,
	    2.5102e-15,5.6505e-6,.066558,-2.4745e-4,.10411,-1.0858e-4,3870.,
	    3880.,1.179e-14,7.1883e-6,.060355,-2.1477e-4,.099433,-1.0798e-4,
	    3880.,3890.,1.7518e-14,1.0491e-5,.058888,-1.6207e-4,.09819,
	    -2.0655e-4,3890.,3900.,1.2334e-13,8.2478e-5,.061162,-4.6855e-5,
	    .099456,-3.0433e-4,3900.,3910.,5.9987e-13,1.9476e-4,.061687,
	    1.0764e-5,.093436,-3.2996e-4,3910.,3920.,1.7948e-12,9.9622e-5,
	    .052116,1.2152e-5,.087699,-2.7025e-4,3920.,3930.,8.3226e-12,
	    3.291e-4,.054625,5.1416e-5,.089131,-2.3629e-4,3930.,3940.,
	    2.0276e-11,2.1725e-4,.045681,6.3672e-5,.093594,-1.044e-4,3940.,
	    3950.,9.452e-11,4.2081e-4,.049658,5.7601e-5,.079407,-1.9603e-4,
	    3950.,3960.,2.0604e-10,4.2113e-4,.043092,7.9797e-5,.08456,
	    -1.0065e-4,3960.,3970.,9.2559e-10,5.2769e-4,.046842,2.13e-5,
	    .070955,-1.5981e-4,3970.,3980.,4.0093e-9,.0016525,.048905,
	    -4.3479e-5,.080584,-1.3211e-4,3980.,3990.,7.2188e-9,.0049631,
	    .047903,3.506e-5,.087341,-2.2515e-4,3990.,4e3,3.5244e-8,.0026406,
	    .044217,-4.3905e-5,.074799,-1.3539e-4,4e3,4010.,1.4041e-7,
	    .0058689,.045795,-7.4645e-5,.073346,-1.7741e-4,4010.,4020.,
	    4.8242e-7,.0031728,.03946,-9.4315e-5,.063747,-1.0552e-4,4020.,
	    4030.,1.5614e-6,.0029789,.03481,-9.4517e-5,.058578,-7.6764e-5,
	    4030.,4040.,2.3212e-6,.011038,.038571,-4.0092e-6,.064826,
	    -1.8611e-4,4040.,4050.,1.0679e-5,.014942,.035924,2.0954e-7,.05826,
	    -1.6362e-4,4050.,4060.,2.5314e-5,.0076112,.028757,-2.7274e-6,
	    .050639,-1.0468e-4,4060.,4070.,8.2488e-5,.019238,.031099,
	    3.2981e-5,.049127,-1.4923e-4,4070.,4080.,1.5838e-4,.010696,
	    .024633,3.8132e-5,.04326,-9.7166e-5,4080.,4090.,5.3014e-4,.027912,
	    .028944,3.4086e-5,.042425,-1.3608e-4,4090.,4100.,.0019236,.031464,
	    .026171,2.5248e-5,.036412,-1.1618e-4,4100.,4110.,.002417,.018774,
	    .023171,3.1047e-5,.032949,-9.3254e-5,4110.,4120.,.0095957,.039252,
	    .027808,-5.0845e-5,.030866,-1.1461e-4,4120.,4130.,.029222,.041309,
	    .025476,-7.0834e-5,.025927,-9.9072e-5,4130.,4140.,.080521,.042144,
	    .023591,-9.2915e-5,.022029,-9.0905e-5,4140.,4150.,.21163,.043454,
	    .019801,-8.4058e-5,.017719,-7.6225e-5,4150.,4160.,.20177,.023178,
	    .017214,-7.6243e-5,.015553,-6.4832e-5,4160.,4170.,.7632,.046725,
	    .01416,-6.3818e-5,.012147,-5.4565e-5,4170.,4180.,1.5947,.047792,
	    .010708,-5.0352e-5,.0083233,-4.2778e-5,4180.,4190.,5.2669,.073957,
	    .0067643,-3.4467e-5,.004319,-2.8069e-5,4190.,4200.,6.4202,.051382,
	    .0036772,-2.2614e-5,9.742e-4,-1.6763e-5,4200.,4210.,9.2445,
	    .052627,.0014938,-1.3915e-5,-.0010491,-6.9012e-6,4210.,4220.,
	    11.75,.05381,-3.2681e-4,-6.6562e-6,-.0028054,1.0375e-6,4220.,
	    4230.,12.919,.055506,-.0017838,-8.5608e-7,-.0042665,7.1579e-6,
	    4230.,4240.,16.381,.089081,-.003049,4.1985e-6,-.0056615,1.1648e-5,
	    4240.,4250.,5.0278,.066105,-.0038255,7.3053e-6,-.0061865,
	    1.7191e-5,4250.,4260.,5.3208,.065464,-.0039797,7.8726e-6,-.006508,
	    1.6403e-5,4260.,4270.,18.844,.088395,-.0034205,5.6382e-6,
	    -.0061631,1.2216e-5,4270.,4280.,24.188,.081391,-.0020758,
	    3.3792e-7,-.004851,6.276e-6,4280.,4290.,20.85,.078388,7.1143e-5,
	    -8.1227e-6,-.0026924,-2.6258e-6,4290.,4300.,16.326,.099662,
	    .003472,-2.1159e-5,8.2032e-4,-1.6489e-5,4300.,4310.,5.9676,
	    .090468,.0087017,-4.1571e-5,.0061894,-3.7687e-5,4310.,4320.,
	    1.4674,.080452,.015334,-6.7528e-5,.012977,-6.4486e-5,4320.,4330.,
	    .26137,.087098,.023749,-9.9448e-5,.02192,-9.8971e-5,4330.,4340.,
	    .017052,.094008,.036064,-1.4594e-4,.035363,-1.4924e-4,4340.,4350.,
	    1.3974e-4,.088019,.056495,-2.2628e-4,.057375,-2.2878e-4,4350.,
	    4360.,2.5708e-10,.017736,.10803,-4.4019e-4,.10523,-4.3455e-4,
	    4360.,4370.,0.,0.,0.,0.,0.,0.,4370.,4380.,0.,0.,0.,0.,0.,0.,4380.,
	    4390.,0.,0.,0.,0.,0.,0.,4390.,4400.,0.,0.,0.,0.,0.,0.,4400.,4410.,
	    0.,0.,0.,0.,0.,0.,4410.,4420.,0.,0.,0.,0.,0.,0.,4420.,4430.,0.,0.,
	    0.,0.,0.,0.,4430.,4440.,0.,0.,0.,0.,0.,0.,4440.,4450.,0.,0.,0.,0.,
	    0.,0.,4450.,4460.,0.,0.,0.,0.,0.,0.,4460.,4470.,0.,0.,0.,0.,0.,0.,
	    4470.,4480.,0.,0.,0.,0.,0.,0.,4480.,4490.,0.,0.,0.,0.,0.,0.,4490.,
	    4500.,0.,0.,0.,0.,0.,0.,4500.,4510.,0.,0.,0.,0.,0.,0.,4510.,4520.,
	    0.,0.,0.,0.,0.,0.,4520.,4530.,0.,0.,0.,0.,0.,0.,4530.,4540.,0.,0.,
	    0.,0.,0.,0.,4540.,4550.,0.,0.,0.,0.,0.,0.,4550.,4560.,0.,0.,0.,0.,
	    0.,0.,4560.,4570.,0.,0.,0.,0.,0.,0.,4570.,4580.,0.,0.,0.,0.,0.,0.,
	    4580.,4590.,0.,0.,0.,0.,0.,0.,4590.,4600.,0.,0.,0.,0.,0.,0.,4600.,
	    4610.,0.,0.,0.,0.,0.,0.,4610.,4620.,0.,0.,0.,0.,0.,0.,4620.,4630.,
	    0.,0.,0.,0.,0.,0.,4630.,4640.,0.,0.,0.,0.,0.,0.,4640.,4650.,0.,0.,
	    0.,0.,0.,0.,4650.,4660.,0.,0.,0.,0.,0.,0.,4660.,4670.,0.,0.,0.,0.,
	    0.,0.,4670.,4680.,0.,0.,0.,0.,0.,0.,4680.,4690.,0.,0.,0.,0.,0.,0.,
	    4690.,4700.,0.,0.,0.,0.,0.,0.,4700.,4710.,0.,0.,0.,0.,0.,0.,4710.,
	    4720.,0.,0.,0.,0.,0.,0.,4720.,4730.,0.,0.,0.,0.,0.,0.,4730.,4740.,
	    0.,0.,0.,0.,0.,0.,4740.,4750.,0.,0.,0.,0.,0.,0.,4750.,4760.,0.,0.,
	    0.,0.,0.,0.,4760.,4770.,0.,0.,0.,0.,0.,0.,4770.,4780.,0.,0.,0.,0.,
	    0.,0.,4780.,4790.,0.,0.,0.,0.,0.,0.,4790.,4800.,0.,0.,0.,0.,0.,0.,
	    4800.,4810.,0.,0.,0.,0.,0.,0.,4810.,4820.,0.,0.,0.,0.,0.,0.,4820.,
	    4830.,0.,0.,0.,0.,0.,0.,4830.,4840.,0.,0.,0.,0.,0.,0.,4840.,4850.,
	    0.,0.,0.,0.,0.,0.,4850.,4860.,0.,0.,0.,0.,0.,0.,4860.,4870.,0.,0.,
	    0.,0.,0.,0.,4870.,4880.,0.,0.,0.,0.,0.,0.,4880.,4890.,0.,0.,0.,0.,
	    0.,0.,4890.,4900.,0.,0.,0.,0.,0.,0.,4900.,4910.,0.,0.,0.,0.,0.,0.,
	    4910.,4920.,0.,0.,0.,0.,0.,0.,4920.,4930.,0.,0.,0.,0.,0.,0.,4930.,
	    4940.,0.,0.,0.,0.,0.,0.,4940.,4950.,0.,0.,0.,0.,0.,0.,4950.,4960.,
	    0.,0.,0.,0.,0.,0.,4960.,4970.,0.,0.,0.,0.,0.,0.,4970.,4980.,0.,0.,
	    0.,0.,0.,0.,4980.,4990.,0.,0.,0.,0.,0.,0.,4990.,5e3,0.,0.,0.,0.,
	    0.,0.,5e3,5010.,0.,0.,0.,0.,0.,0.,5010.,5020.,0.,0.,0.,0.,0.,0.,
	    5020.,5030.,0.,0.,0.,0.,0.,0.,5030.,5040.,0.,0.,0.,0.,0.,0.,5040.,
	    5050.,0.,0.,0.,0.,0.,0.,5050.,5060. };

    integer i__;

/*<        real a(8) >*/
/*<        real acr(8,256) >*/
/*<        integer inu,j,k,i >*/
/*     carbon monoxide (2500 - 5050 cm-1) */

/*<    >*/
    /* Parameter adjustments */
    --a;

    /* Function Body */
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/
/*<    >*/

/*<       do i=1,8 >*/
    for (i__ = 1; i__ <= 8; ++i__) {
/*<       a(i)=acr(i,inu) >*/
	a[i__] = acr[i__ + (*inu << 3) - 9];
/*<       enddo >*/
    }

/*<       return >*/
    return 0;
/*<       end >*/
} /* moca1_ */

#ifdef __cplusplus
	}
#endif
