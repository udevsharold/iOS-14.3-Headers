/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSCH3DExtrusionGeometry.h>

@interface TSCH3DLineExtrusionGeometry : TSCH3DExtrusionGeometry {

	tvec2<float> mYlimits;
	tvec2<float> mXlimits;

}

@property (assign,nonatomic) tvec2<float> ylimits; 
@property (assign,nonatomic) tvec2<float> xlimits; 
+(id)lineFromXValues:(const vector<float, std::__1::allocator<float> >*)arg1 yValues:(const vector<float, std::__1::allocator<float> >*)arg2 ;
-(id)init;
-(void)generateArrays;
-(id)selectionKnobPositions;
-(id)elementsBoundsPositions;
-(void)setSpine:(const vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >*)arg1 ;
-(void)setYlimits:(tvec2<float>)arg1 ;
-(void)setXlimits:(tvec2<float>)arg1 ;
-(tmat3x3<float>)p_rotationMatrixForCrossSectionIndex:(unsigned long long)arg1 ;
-(tmat4x4<float>)matrixAtXPosition:(float)arg1 returningXRangeInfo:(LineExtrusionGeometryXRangeInfo*)arg2 ;
-(tvec2<float>)ylimits;
-(tvec2<float>)xlimits;
@end
