/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXConditionValidating.h>

@class NSString;

@interface SXPlatformConditionValidator : NSObject <SXConditionValidating> {

	NSString* _platform;

}

@property (nonatomic,copy,readonly) NSString * platform;              //@synthesize platform=_platform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPlatform:(id)arg1 ;
-(NSString *)platform;
-(BOOL)validateCondition:(id)arg1 context:(id)arg2 ;
@end
