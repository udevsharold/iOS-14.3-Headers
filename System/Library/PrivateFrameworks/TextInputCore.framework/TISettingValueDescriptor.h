/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIMetricDescriptor.h>

@class NSString;

@interface TISettingValueDescriptor : TIMetricDescriptor {

	NSString* _settingName;

}

@property (retain) NSString * settingName;              //@synthesize settingName=_settingName - In the implementation block
+(id)settingValueDescriptorWithMetricName:(id)arg1 settingName:(id)arg2 ;
-(void)setSettingName:(NSString *)arg1 ;
-(NSString *)settingName;
-(id)initWithMetricName:(id)arg1 settingName:(id)arg2 ;
@end
