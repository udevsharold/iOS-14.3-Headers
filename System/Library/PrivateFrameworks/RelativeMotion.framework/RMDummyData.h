/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelativeMotion/RelativeMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RMDummyData : NSObject <NSSecureCoding> {

	SCD_Struct_RM0 _payload;

}

@property (nonatomic,readonly) SCD_Struct_RM0 payload;              //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
-(SCD_Struct_RM0)payload;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPayload:(SCD_Struct_RM0)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

