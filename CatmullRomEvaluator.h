#pragma once
#pragma warning(disable : 4786)  

#include "curveevaluator.h"
class CatmullRomEvaluator :
    public CurveEvaluator {
public:


    void evaluateCurve(const std::vector<Point>& ptvCtrlPts,
        std::vector<Point>& ptvEvaluatedCurvePts,
        const float& fAniLength,
        const bool& bWrap) const;
    void sortBezierPoints(Point & tg_p1, Point & tg_p2, Point & tg_p3, Point & tg_p4) const;
};


