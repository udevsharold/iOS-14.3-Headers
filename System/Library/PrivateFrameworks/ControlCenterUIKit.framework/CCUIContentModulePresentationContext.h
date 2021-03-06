/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/ControlCenterUIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CCUIContentModulePresentationContext : NSObject <NSCopying> {

	long long _environment;

}

@property (nonatomic,readonly) long long environment;              //@synthesize environment=_environment - In the implementation block
+(id)defaultControlCenterPresentationContext;
+(id)defaultAlertPresentationContext;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithEnvironment:(long long)arg1 ;
-(long long)environment;
@end

