/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <IMSharedUtilities/IMRemoteObjectCoding.h>

@interface IMTUConversationItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding> {

	unsigned long long _flags;

}

@property (assign,nonatomic) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
-(id)_newChatItems;
-(BOOL)_hasMessageChatItem;
-(id)copyDictionaryRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(BOOL)isFromMe;
-(id)conversationUUID;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
@end

