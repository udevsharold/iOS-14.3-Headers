/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTAvatarConfigurationMetric.h>

@protocol AVTAvatarConfigurationMetric <NSObject>
@required
-(unsigned long long)distanceFromConfiguration:(id)arg1 toConfiguration:(id)arg2;
-(long long)gapFromDistance:(unsigned long long)arg1;
-(unsigned long long)differenceCountFromDistance:(unsigned long long)arg1;

@end


@class NSString;

@interface AVTAvatarConfigurationMetric : NSObject <AVTAvatarConfigurationMetric>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)distanceFromConfiguration:(id)arg1 toConfiguration:(id)arg2 ;
+(long long)gapFromDistance:(unsigned long long)arg1 ;
+(id)defaultMetric;
+(unsigned long long)differenceCountFromDistance:(unsigned long long)arg1 ;
+(long long)impactForSettingKind:(SCD_Struct_AV4)arg1 ;
+(void)enumerateDifferencesFromConfiguration:(id)arg1 toConfiguration:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)distanceFromConfiguration:(id)arg1 toConfiguration:(id)arg2 ;
-(long long)gapFromDistance:(unsigned long long)arg1 ;
-(unsigned long long)differenceCountFromDistance:(unsigned long long)arg1 ;
@end

