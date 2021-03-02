/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRTextEditingAttributes, NSData;

@interface MRKeyboardMessage : MRProtocolMessage {

	MRTextEditingAttributes* _attributes;

}

@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) NSData * encryptedTextCyphertext; 
@property (nonatomic,readonly) MRTextEditingAttributes * attributes; 
+(id)encryptedMessageWithState:(unsigned long long)arg1 text:(id)arg2 attributes:(id)arg3 usingCryptoSession:(id)arg4 ;
-(MRTextEditingAttributes *)attributes;
-(unsigned long long)state;
-(unsigned long long)type;
-(id)initWithState:(unsigned long long)arg1 encryptedTextCyphertext:(id)arg2 attributes:(id)arg3 ;
-(NSData *)encryptedTextCyphertext;
-(id)decryptedTextUsingCryptoSession:(id)arg1 ;
@end
