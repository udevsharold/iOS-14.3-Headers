/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSArray, NSAttributedString, NSMutableArray;

@interface CKDBMessage : NSObject {

	NSString* _text;
	NSString* _subject;
	NSString* _address;
	NSString* _groupID;
	NSString* _guid;
	NSString* _madridRoomname;
	NSString* _displayName;
	NSString* _madridService;
	NSString* _madridAccountGUID;
	NSString* _madridChatGUID;
	NSString* _madridChatIdentifier;
	BOOL _isMadrid;
	BOOL _hasBeenRead;
	BOOL _isOutgoing;
	BOOL _isVisibleByDefault;
	BOOL _isAudioMessage;
	long long _madridType;
	long long _identifier;
	NSDate* _date;
	NSArray* _recipients;
	NSString* _plainBody;
	NSAttributedString* _madridAttributedBody;
	NSMutableArray* _mediaObjects;
	NSString* _voicemailString;
	NSString* _madridAccountLogin;

}

@property (nonatomic,copy,readonly) NSString * madridChatGUID;                         //@synthesize madridChatGUID=_madridChatGUID - In the implementation block
@property (nonatomic,readonly) BOOL isVisibleByDefault;                                //@synthesize isVisibleByDefault=_isVisibleByDefault - In the implementation block
@property (assign,nonatomic) long long identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipients; 
@property (nonatomic,readonly) NSArray * mediaObjects;                                 //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,copy,readonly) NSString * attachmentText; 
@property (nonatomic,readonly) BOOL hasAttachments; 
@property (nonatomic,readonly) NSString * plainBody;                                   //@synthesize plainBody=_plainBody - In the implementation block
@property (nonatomic,readonly) NSString * groupID; 
@property (nonatomic,readonly) NSString * text;                                        //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSString * subject;                                     //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * address;                                     //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * formattedAddress; 
@property (nonatomic,readonly) NSString * guid;                                        //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSString * madridRoomname;                              //@synthesize madridRoomname=_madridRoomname - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * madridService;                               //@synthesize madridService=_madridService - In the implementation block
@property (nonatomic,readonly) NSString * madridAccountLogin;                          //@synthesize madridAccountLogin=_madridAccountLogin - In the implementation block
@property (nonatomic,readonly) NSString * madridAccountGUID;                           //@synthesize madridAccountGUID=_madridAccountGUID - In the implementation block
@property (nonatomic,readonly) NSString * madridChatIdentifier;                        //@synthesize madridChatIdentifier=_madridChatIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isMadrid;                                          //@synthesize isMadrid=_isMadrid - In the implementation block
@property (nonatomic,readonly) BOOL hasBeenRead;                                       //@synthesize hasBeenRead=_hasBeenRead - In the implementation block
@property (nonatomic,readonly) BOOL isAudioMessage;                                    //@synthesize isAudioMessage=_isAudioMessage - In the implementation block
@property (nonatomic,readonly) BOOL isOutgoing;                                        //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (nonatomic,readonly) long long madridType;                                   //@synthesize madridType=_madridType - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                          //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSAttributedString * madridAttributedBody;              //@synthesize madridAttributedBody=_madridAttributedBody - In the implementation block
-(NSString *)subject;
-(BOOL)isOutgoing;
-(NSString *)plainBody;
-(NSString *)address;
-(NSDate *)date;
-(NSString *)text;
-(NSArray *)recipients;
-(BOOL)isMadrid;
-(id)alertImage;
-(void)setIdentifier:(long long)arg1 ;
-(id)initWithRecordID:(long long)arg1 ;
-(id)attachmentText:(BOOL)arg1 ;
-(id)voicemailString;
-(id)initWithMadridMessageGUID:(id)arg1 ;
-(BOOL)hasBeenRead;
-(BOOL)hasAttachments;
-(NSString *)attachmentText;
-(BOOL)senderIsVoicemail;
-(NSString *)madridRoomname;
-(NSString *)madridService;
-(NSString *)madridAccountLogin;
-(NSString *)madridAccountGUID;
-(NSAttributedString *)madridAttributedBody;
-(NSString *)madridChatGUID;
-(BOOL)isVisibleByDefault;
-(NSString *)madridChatIdentifier;
-(long long)identifier;
-(id)description;
-(NSArray *)mediaObjects;
-(NSString *)groupID;
-(long long)madridType;
-(NSString *)guid;
-(BOOL)isAudioMessage;
-(NSString *)formattedAddress;
-(NSString *)displayName;
-(id)previewText;
@end

