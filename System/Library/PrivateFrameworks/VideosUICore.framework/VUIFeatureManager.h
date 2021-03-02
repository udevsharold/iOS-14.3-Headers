/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VUIFeatureManager : NSObject {

	NSDictionary* _features;

}

@property (nonatomic,retain) NSDictionary * features;              //@synthesize features=_features - In the implementation block
+(id)sharedInstance;
-(NSDictionary *)features;
-(id)init;
-(BOOL)isFeatureEnabled:(id)arg1 ;
-(void)setFeatures:(NSDictionary *)arg1 ;
-(id)osFeatureFlagsJSON;
-(void)setFeatureValue:(BOOL)arg1 forFeature:(id)arg2 ;
-(id)_allFeatures;
-(id)availableFeatures;
@end
