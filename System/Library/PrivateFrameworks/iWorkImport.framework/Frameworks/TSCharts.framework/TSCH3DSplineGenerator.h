/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSCharts/TSCharts-Structs.h>
@interface TSCH3DSplineGenerator : NSObject {

	float mDetail;
	float mTension;
	float mAdaptiveThreshold;
	vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >* mControlPts;
	vector<long, std::__1::allocator<long> >* mSplineExclude;

}

@property (assign,nonatomic) float detail; 
@property (assign,nonatomic) float tension; 
@property (assign,nonatomic) float adaptiveThreshold; 
+(id)generator;
-(void)setTension:(float)arg1 ;
-(float)tension;
-(void)setDetail:(float)arg1 ;
-(id)init;
-(BOOL)isClosed;
-(float)detail;
-(vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)controlPts;
-(void)setAdaptiveThreshold:(float)arg1 ;
-(void)generatePoints:(vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)arg1 ;
-(void)calcControlMatrix:(tmat4x4<float>*)arg1 pointNum:(long long)arg2 ;
-(vector<long, std::__1::allocator<long> >*)splineExclude;
-(float)adaptiveThreshold;
@end
