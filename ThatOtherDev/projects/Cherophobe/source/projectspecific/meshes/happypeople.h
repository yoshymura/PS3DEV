int happypeoplevertexcount=144;

float happypeoplevertexarray[] = {
1e-006,-0.005001,-11.875,5.9375,-0.005001,-10.2841,5.9375,-5.14703,-8.90625,1e-006,-0.005001,-11.875,5.9375,-5.14703,-8.90625,1e-006,-5.9425,-10.2841,1e-006,-5.9425,-10.2841,5.9375,-5.14703,-8.90625,1e-006,-10.2891,-5.9375,5.9375,-5.14703,-8.90625,5.9375,-8.91125,-5.14203,1e-006,-10.2891,-5.9375,1e-006,-10.2891,-5.9375,5.9375,-8.91125,-5.14203,5.9375,-10.2891,0,1e-006,-10.2891,-5.9375,5.9375,-10.2891,0,1e-006,-11.88,0,1e-006,-11.88,0,5.9375,-10.2891,0,1e-006,-10.2891,5.9375,5.9375,-10.2891,0,5.9375,-8.91125,5.14203,1e-006,-10.2891,5.9375,1e-006,-10.2891,5.9375,5.9375,-8.91125,5.14203,5.9375,-5.14703,8.90625,1e-006,-10.2891,5.9375,5.9375,-5.14703,8.90625,1e-006,-5.9425,10.2841,1e-006,-5.9425,10.2841,5.9375,-5.14703,8.90625,1e-006,-0.005001,11.875,5.9375,-5.14703,8.90625,5.9375,-0.005001,10.2841,1e-006,-0.005001,11.875,1e-006,-0.005001,11.875,5.9375,-0.005001,10.2841,5.9375,5.13702,8.90625,1e-006,-0.005001,11.875,5.9375,5.13702,8.90625,1e-006,5.9325,10.2841,1e-006,5.9325,10.2841,5.9375,5.13702,8.90625,1e-006,10.2791,5.9375,5.9375,5.13702,8.90625,5.9375,8.90125,5.14203,1e-006,10.2791,5.9375,1e-006,10.2791,5.9375,5.9375,8.90125,5.14203,5.9375,10.2791,0,1e-006,10.2791,5.9375,5.9375,10.2791,0,1e-006,11.87,0,1e-006,11.87,0,5.9375,10.2791,0,1e-006,10.2791,-5.9375,5.9375,10.2791,0,5.9375,8.90125,-5.14203,1e-006,10.2791,-5.9375,1e-006,10.2791,-5.9375,5.9375,8.90125,-5.14203,5.9375,5.13702,-8.90625,1e-006,10.2791,-5.9375,5.9375,5.13702,-8.90625,1e-006,5.9325,-10.2841,1e-006,5.9325,-10.2841,5.9375,5.13702,-8.90625,1e-006,-0.005001,-11.875,5.9375,5.13702,-8.90625,5.9375,-0.005001,-10.2841,1e-006,-0.005001,-11.875,5.9375,-0.005001,-10.2841,10.2841,-0.005001,-5.9375,5.9375,-5.14703,-8.90625,5.9375,-5.14703,-8.90625,10.2841,-5.14703,-2.96875,5.9375,-8.91125,-5.14203,5.9375,-8.91125,-5.14203,10.2841,-5.14703,-2.96875,5.9375,-10.2891,0,5.9375,-10.2891,0,10.2841,-5.14703,2.96875,5.9375,-8.91125,5.14203,5.9375,-8.91125,5.14203,10.2841,-5.14703,2.96875,5.9375,-5.14703,8.90625,5.9375,-5.14703,8.90625,10.2841,-0.005001,5.9375,5.9375,-0.005001,10.2841,5.9375,-0.005001,10.2841,10.2841,-0.005001,5.9375,5.9375,5.13702,8.90625,5.9375,5.13702,8.90625,10.2841,5.13702,2.96875,5.9375,8.90125,5.14203,5.9375,8.90125,5.14203,10.2841,5.13702,2.96875,5.9375,10.2791,0,5.9375,10.2791,0,10.2841,5.13702,-2.96875,5.9375,8.90125,-5.14203,5.9375,8.90125,-5.14203,10.2841,5.13702,-2.96875,5.9375,5.13702,-8.90625,5.9375,5.13702,-8.90625,10.2841,-0.005001,-5.9375,5.9375,-0.005001,-10.2841,5.9375,-10.2891,0,10.2841,-5.14703,-2.96875,10.2841,-5.14703,2.96875,10.2841,-5.14703,-2.96875,5.9375,-5.14703,-8.90625,10.2841,-0.005001,-5.9375,10.2841,-0.005001,-5.9375,5.9375,5.13702,-8.90625,10.2841,5.13702,-2.96875,10.2841,5.13702,-2.96875,5.9375,10.2791,0,10.2841,5.13702,2.96875,10.2841,5.13702,2.96875,5.9375,5.13702,8.90625,10.2841,-0.005001,5.9375,10.2841,-0.005001,5.9375,5.9375,-5.14703,8.90625,10.2841,-5.14703,2.96875,11.25,0,0,10.2841,5.13702,-2.96875,10.2841,5.13702,2.96875,10.2841,5.13702,2.96875,10.2841,-0.005001,5.9375,11.25,0,0,11.25,0,0,10.2841,-0.005001,5.9375,10.2841,-5.14703,2.96875,10.2841,-5.14703,2.96875,10.2841,-5.14703,-2.96875,11.25,0,0,11.25,0,0,10.2841,-5.14703,-2.96875,10.2841,-0.005001,-5.9375,10.2841,-0.005001,-5.9375,10.2841,5.13702,-2.96875,11.25,0,0,
};
float happypeopletexturearray[] = {
0.484375,0.749023,0.452975,0.749023,0.425781,0.647113,0.484375,0.749023,0.425781,0.647113,0.452975,0.631348,0.452975,0.631348,0.425781,0.647113,0.367188,0.545203,0.425781,0.647113,0.351487,0.57251,0.367188,0.545203,0.367188,0.545203,0.351487,0.57251,0.25,0.545203,0.367188,0.545203,0.25,0.545203,0.25,0.513672,0.25,0.513672,0.25,0.545203,0.132813,0.545203,0.25,0.545203,0.148513,0.57251,0.132813,0.545203,0.132813,0.545203,0.148513,0.57251,0.074219,0.647113,0.132813,0.545203,0.074219,0.647113,0.047025,0.631348,0.047025,0.631348,0.074219,0.647113,0.015625,0.749023,0.074219,0.647113,0.047025,0.749023,0.015625,0.749023,0.015625,0.749023,0.047025,0.749023,0.074219,0.850934,0.015625,0.749023,0.074219,0.850934,0.047025,0.866699,0.047025,0.866699,0.074219,0.850934,0.132813,0.952844,0.074219,0.850934,0.148513,0.925537,0.132813,0.952844,0.132813,0.952844,0.148513,0.925537,0.25,0.952844,0.132813,0.952844,0.25,0.952844,0.25,0.984375,0.25,0.984375,0.25,0.952844,0.367188,0.952844,0.25,0.952844,0.351487,0.925537,0.367188,0.952844,0.367188,0.952844,0.351487,0.925537,0.425781,0.850934,0.367188,0.952844,0.425781,0.850934,0.452975,0.866699,0.452975,0.866699,0.425781,0.850934,0.484375,0.749023,0.425781,0.850934,0.452975,0.749023,0.484375,0.749023,0.452975,0.749023,0.367188,0.749023,0.425781,0.647113,0.425781,0.647113,0.308594,0.647113,0.351487,0.57251,0.351487,0.57251,0.308594,0.647113,0.25,0.545203,0.25,0.545203,0.191406,0.647113,0.148513,0.57251,0.148513,0.57251,0.191406,0.647113,0.074219,0.647113,0.074219,0.647113,0.132813,0.749023,0.047025,0.749023,0.047025,0.749023,0.132813,0.749023,0.074219,0.850934,0.074219,0.850934,0.191406,0.850934,0.148513,0.925537,0.148513,0.925537,0.191406,0.850934,0.25,0.952844,0.25,0.952844,0.308594,0.850934,0.351487,0.925537,0.351487,0.925537,0.308594,0.850934,0.425781,0.850934,0.425781,0.850934,0.367188,0.749023,0.452975,0.749023,0.25,0.545203,0.308594,0.647113,0.191406,0.647113,0.308594,0.647113,0.425781,0.647113,0.367188,0.749023,0.367188,0.749023,0.425781,0.850934,0.308594,0.850934,0.308594,0.850934,0.25,0.952844,0.191406,0.850934,0.191406,0.850934,0.074219,0.850934,0.132813,0.749023,0.132813,0.749023,0.074219,0.647113,0.191406,0.647113,0.25,0.749123,0.308594,0.850934,0.191406,0.850934,0.191406,0.850934,0.132813,0.749023,0.25,0.749123,0.25,0.749123,0.132813,0.749023,0.191406,0.647113,0.191406,0.647113,0.308594,0.647113,0.25,0.749123,0.25,0.749123,0.308594,0.647113,0.367188,0.749023,0.367188,0.749023,0.308594,0.850934,0.25,0.749123,
};
float happypeoplenormalarray[] = {
0.258819,0,-0.965926,0.501714,0,-0.865033,0.479458,-0.438782,-0.759993,0.258819,0,-0.965926,0.479458,-0.438782,-0.759993,0.258819,-0.482963,-0.836516,0.258819,-0.482963,-0.836516,0.479458,-0.438782,-0.759993,0.258819,-0.836516,-0.482963,0.479458,-0.438782,-0.759993,0.501714,-0.749141,-0.432517,0.258819,-0.836516,-0.482963,0.258819,-0.836516,-0.482963,0.501714,-0.749141,-0.432517,0.479458,-0.877565,0,0.258819,-0.836516,-0.482963,0.479458,-0.877565,0,0.258819,-0.965926,0,0.258819,-0.965926,0,0.479458,-0.877565,0,0.258819,-0.836516,0.482963,0.479458,-0.877565,0,0.501714,-0.749141,0.432517,0.258819,-0.836516,0.482963,0.258819,-0.836516,0.482963,0.501714,-0.749141,0.432517,0.479458,-0.438782,0.759993,0.258819,-0.836516,0.482963,0.479458,-0.438782,0.759993,0.258819,-0.482963,0.836516,0.258819,-0.482963,0.836516,0.479458,-0.438782,0.759993,0.258819,0,0.965926,0.479458,-0.438782,0.759993,0.501714,0,0.865033,0.258819,0,0.965926,0.258819,0,0.965926,0.501714,0,0.865033,0.479458,0.438782,0.759993,0.258819,0,0.965926,0.479458,0.438782,0.759993,0.258819,0.482963,0.836516,0.258819,0.482963,0.836516,0.479458,0.438782,0.759993,0.258819,0.836516,0.482963,0.479458,0.438782,0.759993,0.501714,0.749141,0.432517,0.258819,0.836516,0.482963,0.258819,0.836516,0.482963,0.501714,0.749141,0.432517,0.479458,0.877565,0,0.258819,0.836516,0.482963,0.479458,0.877565,0,0.258819,0.965926,0,0.258819,0.965926,0,0.479458,0.877565,0,0.258819,0.836516,-0.482963,0.479458,0.877565,0,0.501714,0.749141,-0.432517,0.258819,0.836516,-0.482963,0.258819,0.836516,-0.482963,0.501714,0.749141,-0.432517,0.479458,0.438782,-0.759993,0.258819,0.836516,-0.482963,0.479458,0.438782,-0.759993,0.258819,0.482963,-0.836516,0.258819,0.482963,-0.836516,0.479458,0.438782,-0.759993,0.258819,0,-0.965926,0.479458,0.438782,-0.759993,0.501714,0,-0.865033,0.258819,0,-0.965926,0.501714,0,-0.865033,0.865373,1.5e-005,-0.501128,0.479458,-0.438782,-0.759993,0.479458,-0.438782,-0.759993,0.865393,-0.433956,-0.250554,0.501714,-0.749141,-0.432517,0.501714,-0.749141,-0.432517,0.865393,-0.433956,-0.250554,0.479458,-0.877565,0,0.479458,-0.877565,0,0.865393,-0.433956,0.250554,0.501714,-0.749141,0.432517,0.501714,-0.749141,0.432517,0.865393,-0.433956,0.250554,0.479458,-0.438782,0.759993,0.479458,-0.438782,0.759993,0.865373,1.5e-005,0.501128,0.501714,0,0.865033,0.501714,0,0.865033,0.865373,1.5e-005,0.501128,0.479458,0.438782,0.759993,0.479458,0.438782,0.759993,0.865354,0.434022,0.250574,0.501714,0.749141,0.432517,0.501714,0.749141,0.432517,0.865354,0.434022,0.250574,0.479458,0.877565,0,0.479458,0.877565,0,0.865354,0.434022,-0.250574,0.501714,0.749141,-0.432517,0.501714,0.749141,-0.432517,0.865354,0.434022,-0.250574,0.479458,0.438782,-0.759993,0.479458,0.438782,-0.759993,0.865373,1.5e-005,-0.501128,0.501714,0,-0.865033,0.479458,-0.877565,0,0.865393,-0.433956,-0.250554,0.865393,-0.433956,0.250554,0.865393,-0.433956,-0.250554,0.479458,-0.438782,-0.759993,0.865373,1.5e-005,-0.501128,0.865373,1.5e-005,-0.501128,0.479458,0.438782,-0.759993,0.865354,0.434022,-0.250574,0.865354,0.434022,-0.250574,0.479458,0.877565,0,0.865354,0.434022,0.250574,0.865354,0.434022,0.250574,0.479458,0.438782,0.759993,0.865373,1.5e-005,0.501128,0.865373,1.5e-005,0.501128,0.479458,-0.438782,0.759993,0.865393,-0.433956,0.250554,1,8.8e-005,0,0.865354,0.434022,-0.250574,0.865354,0.434022,0.250574,0.865354,0.434022,0.250574,0.865373,1.5e-005,0.501128,1,8.8e-005,0,1,8.8e-005,0,0.865373,1.5e-005,0.501128,0.865393,-0.433956,0.250554,0.865393,-0.433956,0.250554,0.865393,-0.433956,-0.250554,1,8.8e-005,0,1,8.8e-005,0,0.865393,-0.433956,-0.250554,0.865373,1.5e-005,-0.501128,0.865373,1.5e-005,-0.501128,0.865354,0.434022,-0.250574,1,8.8e-005,0,
};
