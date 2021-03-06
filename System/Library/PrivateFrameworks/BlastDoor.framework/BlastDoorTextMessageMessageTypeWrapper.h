/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BlastDoorTypingIndicator, BlastDoorMessage, BlastDoorTapBack, BlastDoorBalloonPlugin, BlastDoorSticker, BlastDoorAudioMessage;

@interface BlastDoorTextMessageMessageTypeWrapper : NSObject {

	??? textMessage_MessageType;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) unsigned long long type; 
@property (readonly,nonatomic) BlastDoorTypingIndicator * typingIndicator; 
@property (readonly,nonatomic) BlastDoorMessage * textMessage; 
@property (readonly,nonatomic) BlastDoorTapBack * tapback; 
@property (readonly,nonatomic) BlastDoorBalloonPlugin * balloonPlugin; 
@property (readonly,nonatomic) BlastDoorSticker * sticker; 
@property (readonly,nonatomic) BlastDoorAudioMessage * audioMessage; 
-(id)init;
-(BlastDoorSticker *)sticker;
-(NSString *)description;
-(unsigned long long)type;
-(BlastDoorBalloonPlugin *)balloonPlugin;
-(BlastDoorMessage *)textMessage;
-(BlastDoorTapBack *)tapback;
-(BlastDoorTypingIndicator *)typingIndicator;
-(BlastDoorAudioMessage *)audioMessage;
@end

