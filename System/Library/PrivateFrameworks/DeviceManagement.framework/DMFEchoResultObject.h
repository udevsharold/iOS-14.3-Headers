/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFEchoResultObject : CATTaskResultObject {

	NSString* _echo;
	NSString* _resultStatus;

}

@property (nonatomic,copy) NSString * echo;                      //@synthesize echo=_echo - In the implementation block
@property (nonatomic,copy) NSString * resultStatus;              //@synthesize resultStatus=_resultStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)echo;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setResultStatus:(NSString *)arg1 ;
-(void)setEcho:(NSString *)arg1 ;
-(NSString *)resultStatus;
-(void)encodeWithCoder:(id)arg1 ;
@end

