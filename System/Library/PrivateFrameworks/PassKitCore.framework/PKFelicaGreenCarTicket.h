/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber;

@interface PKFelicaGreenCarTicket : NSObject <NSSecureCoding> {

	BOOL _refunded;
	NSData* _originStation;
	NSData* _destinationStation;
	NSNumber* _validityStartDate;

}

@property (nonatomic,copy,readonly) NSData * originStation;                    //@synthesize originStation=_originStation - In the implementation block
@property (nonatomic,copy,readonly) NSData * destinationStation;               //@synthesize destinationStation=_destinationStation - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * validityStartDate;              //@synthesize validityStartDate=_validityStartDate - In the implementation block
@property (getter=isRefunded,nonatomic,readonly) BOOL refunded;                //@synthesize refunded=_refunded - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isRefunded;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)validityStartDate;
-(NSData *)originStation;
-(NSData *)destinationStation;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

