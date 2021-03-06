/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRSetupConfigurationRequest : TRRequestMessage {

	NSString* _deviceName;

}

@property (nonatomic,copy) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
@end

