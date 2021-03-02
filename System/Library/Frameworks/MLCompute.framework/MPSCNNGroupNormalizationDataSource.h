/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPSCNNGroupNormalizationDataSource <NSObject,NSCopying>
@property (nonatomic,readonly) unsigned long long numberOfFeatureChannels; 
@property (assign,nonatomic) unsigned long long numberOfGroups; 
@optional
+(BOOL)supportsSecureCoding;
-(float)epsilon;
-(id)updateGammaAndBetaWithCommandBuffer:(id)arg1 groupNormalizationStateBatch:(id)arg2;
-(BOOL)updateGammaAndBetaWithGroupNormalizationStateBatch:(id)arg1;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;

@required
-(float*)beta;
-(unsigned long long)numberOfGroups;
-(void)setNumberOfGroups:(unsigned long long)arg1;
-(float*)gamma;
-(id)label;
-(unsigned long long)numberOfFeatureChannels;

@end
