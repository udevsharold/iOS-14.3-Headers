/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTPNRDataType : NSObject <NSCopying, NSSecureCoding> {

	long long _pnrMechanism;
	NSString* _svcCenterAddr;
	NSString* _destAddr;

}

@property (assign,nonatomic) long long pnrMechanism;                //@synthesize pnrMechanism=_pnrMechanism - In the implementation block
@property (nonatomic,retain) NSString * svcCenterAddr;              //@synthesize svcCenterAddr=_svcCenterAddr - In the implementation block
@property (nonatomic,retain) NSString * destAddr;                   //@synthesize destAddr=_destAddr - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)destAddr;
-(long long)pnrMechanism;
-(void)setDestAddr:(NSString *)arg1 ;
-(NSString *)svcCenterAddr;
-(id)init;
-(void)setSvcCenterAddr:(NSString *)arg1 ;
-(void)setPnrMechanism:(long long)arg1 ;
-(BOOL)isEqualToCTPNRDataType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

