/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INExecutionInfo.h>

@class NSString;

@interface INUserActivityExecutionInfo : INExecutionInfo {

	NSString* _userActivityType;

}

@property (nonatomic,copy,readonly) NSString * userActivityType;              //@synthesize userActivityType=_userActivityType - In the implementation block
+(void)initialize;
-(NSString *)userActivityType;
-(BOOL)canRunOnLocalDevice;
-(id)initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 ;
-(id)_initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 extensionBundleId:(id)arg4 ;
@end

