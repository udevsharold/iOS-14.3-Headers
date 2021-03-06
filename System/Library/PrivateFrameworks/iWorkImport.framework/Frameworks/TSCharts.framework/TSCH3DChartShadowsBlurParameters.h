/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSCharts.framework/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSCH3DChartShadowsBlurParameters : NSObject {

	float mQuality;
	long long mNumPasses;
	long long mShadowSize;
	float mKernelScale;

}

@property (assign,nonatomic) float quality; 
@property (assign,nonatomic) long long numPasses; 
@property (assign,nonatomic) long long shadowSize; 
@property (assign,nonatomic) float kernelScale; 
+(id)paramsWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4 ;
-(float)quality;
-(void)setQuality:(float)arg1 ;
-(long long)shadowSize;
-(void)setShadowSize:(long long)arg1 ;
-(long long)numPasses;
-(float)kernelScale;
-(id)initWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4 ;
-(void)setNumPasses:(long long)arg1 ;
-(void)setKernelScale:(float)arg1 ;
@end

