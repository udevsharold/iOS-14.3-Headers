/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IDSCTPNRValidationMechanism : NSObject <NSCopying> {

	long long _type;
	NSString* _context;

}

@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * context;              //@synthesize context=_context - In the implementation block
+(id)SMSMechanismWithContext:(id)arg1 ;
+(id)SMSLessMechanism;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(id)initWithType:(long long)arg1 context:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)context;
@end
