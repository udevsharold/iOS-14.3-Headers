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

@class NSString, NSNumber;

@interface CTPNRRequestSentInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _success;
	NSString* _token;
	NSNumber* _timeout;

}

@property (assign,nonatomic) BOOL success;                    //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSString * token;                //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSNumber * timeout;              //@synthesize timeout=_timeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setToken:(NSString *)arg1 ;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setTimeout:(NSNumber *)arg1 ;
-(id)init;
-(BOOL)isEqualToCTPNRRequestSentInfo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)timeout;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)token;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)success;
-(void)encodeWithCoder:(id)arg1 ;
@end
