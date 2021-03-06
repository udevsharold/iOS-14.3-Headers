/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CXHandle, NSDictionary;

@interface CXHandoffContext : NSObject <NSSecureCoding> {

	BOOL _outgoing;
	NSString* _handoffIdentifier;
	CXHandle* _remoteHandle;
	NSDictionary* _context;

}

@property (nonatomic,copy,readonly) NSString * handoffIdentifier;                         //@synthesize handoffIdentifier=_handoffIdentifier - In the implementation block
@property (assign,getter=isOutgoing,nonatomic) BOOL outgoing;                             //@synthesize outgoing=_outgoing - In the implementation block
@property (nonatomic,copy) CXHandle * remoteHandle;                                       //@synthesize remoteHandle=_remoteHandle - In the implementation block
@property (nonatomic,copy) NSDictionary * context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(BOOL)isOutgoing;
-(id)init;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)setOutgoing:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSDictionary *)context;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)handoffIdentifier;
-(CXHandle *)remoteHandle;
-(id)initWithHandoffIdentifier:(id)arg1 ;
-(BOOL)isEqualToHandoffContext:(id)arg1 ;
-(void)setRemoteHandle:(CXHandle *)arg1 ;
@end

