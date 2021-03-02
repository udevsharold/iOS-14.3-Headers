/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/MPSCNNInstanceNormalizationDataSource.h>

@class MLCTensor, NSString;

@interface _MLCGPUInstanceNormDataSource : NSObject <MPSCNNInstanceNormalizationDataSource> {

	float _varianceEpsilon;
	unsigned long long _channels;
	MLCTensor* _betas;
	MLCTensor* _gammas;

}

@property (nonatomic,readonly) unsigned long long channels;                             //@synthesize channels=_channels - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * betas;                                //@synthesize betas=_betas - In the implementation block
@property (nonatomic,__weak,readonly) MLCTensor * gammas;                               //@synthesize gammas=_gammas - In the implementation block
@property (nonatomic,readonly) float varianceEpsilon;                                   //@synthesize varianceEpsilon=_varianceEpsilon - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFeatureChannels; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)datasourceWithChannels:(unsigned long long)arg1 beta:(id)arg2 gamma:(id)arg3 epsilon:(float)arg4 ;
-(void)purge;
-(BOOL)load;
-(float*)beta;
-(float)epsilon;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MLCTensor *)betas;
-(unsigned long long)channels;
-(MLCTensor *)gammas;
-(float*)gamma;
-(id)label;
-(unsigned long long)numberOfFeatureChannels;
-(float)varianceEpsilon;
-(id)initWithChannels:(unsigned long long)arg1 beta:(id)arg2 gamma:(id)arg3 epsilon:(float)arg4 ;
@end
