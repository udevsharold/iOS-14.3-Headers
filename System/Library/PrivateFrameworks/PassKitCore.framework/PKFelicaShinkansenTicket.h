/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSNumber;

@interface PKFelicaShinkansenTicket : NSObject <NSSecureCoding> {

	NSArray* _trains;
	NSNumber* _validityStartDate;
	NSNumber* _validityTerm;

}

@property (nonatomic,copy,readonly) NSArray * trains;                          //@synthesize trains=_trains - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * validityStartDate;              //@synthesize validityStartDate=_validityStartDate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * validityTerm;                   //@synthesize validityTerm=_validityTerm - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSArray *)trains;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)validityTerm;
-(NSNumber *)validityStartDate;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

