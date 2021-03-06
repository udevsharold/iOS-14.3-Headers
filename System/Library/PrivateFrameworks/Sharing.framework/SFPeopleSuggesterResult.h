/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFPeopleSuggesterResult : NSObject <NSSecureCoding> {

	unsigned _flags;
	NSString* _contactID;
	NSArray* _handles;
	NSString* _sendersKnownAlias;

}

@property (nonatomic,copy) NSString * contactID;                      //@synthesize contactID=_contactID - In the implementation block
@property (assign,nonatomic) unsigned flags;                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) NSArray * handles;                         //@synthesize handles=_handles - In the implementation block
@property (nonatomic,copy) NSString * sendersKnownAlias;              //@synthesize sendersKnownAlias=_sendersKnownAlias - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)handles;
-(void)setContactID:(NSString *)arg1 ;
-(void)setHandles:(NSArray *)arg1 ;
-(NSString *)contactID;
-(void)setSendersKnownAlias:(NSString *)arg1 ;
-(NSString *)sendersKnownAlias;
-(id)initWithCoder:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(void)encodeWithCoder:(id)arg1 ;
@end

