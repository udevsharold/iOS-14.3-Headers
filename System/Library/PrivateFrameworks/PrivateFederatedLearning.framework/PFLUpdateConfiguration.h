/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, MLModelConfiguration;

@interface PFLUpdateConfiguration : NSObject {

	NSString* _identifier;
	NSArray* _layerNames;
	double _normMax;
	unsigned long long _normBinCount;
	MLModelConfiguration* _modelConfiguration;

}

@property (nonatomic,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * layerNames;                                   //@synthesize layerNames=_layerNames - In the implementation block
@property (nonatomic,readonly) double normMax;                                         //@synthesize normMax=_normMax - In the implementation block
@property (nonatomic,readonly) unsigned long long normBinCount;                        //@synthesize normBinCount=_normBinCount - In the implementation block
@property (nonatomic,readonly) MLModelConfiguration * modelConfiguration;              //@synthesize modelConfiguration=_modelConfiguration - In the implementation block
-(NSArray *)layerNames;
-(MLModelConfiguration *)modelConfiguration;
-(NSString *)identifier;
-(double)normMax;
-(unsigned long long)normBinCount;
-(id)initWithIdentifier:(id)arg1 layerNames:(id)arg2 normMax:(double)arg3 normBinCount:(unsigned long long)arg4 modelConfiguration:(id)arg5 ;
@end

