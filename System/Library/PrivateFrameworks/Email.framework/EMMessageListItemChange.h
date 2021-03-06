/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol EMMessageListItemChangeSubject, EMMessageListItemChangeSummary, EMMessageListItemChangeFlagColors, EMCollectionItemID;
@class NSArray, NSDate, ECMessageFlags, NSNumber, NSString;

@interface EMMessageListItemChange : NSObject <EFPubliclyDescribable, NSSecureCoding> {

	NSArray* _mailboxObjectIDs;
	NSArray* _mailboxes;
	BOOL _isToMe;
	BOOL _isCCMe;
	NSDate* _date;
	id<EMMessageListItemChangeSubject> _subject;
	id<EMMessageListItemChangeSummary> _summary;
	NSArray* _senderList;
	NSArray* _toList;
	NSArray* _ccList;
	ECMessageFlags* _flags;
	NSNumber* _hasUnflagged;
	id<EMMessageListItemChangeFlagColors> _flagColors;
	NSNumber* _isVIP;
	NSNumber* _isBlocked;
	NSNumber* _hasAttachments;
	NSNumber* _conversationNotificationLevel;
	NSNumber* _count;
	NSNumber* _conversationID;
	id<EMCollectionItemID> _displayMessageItemID;

}

@property (nonatomic,retain) NSDate * date;                                               //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) id<EMMessageListItemChangeSubject> subject;                  //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) id<EMMessageListItemChangeSummary> summary;                    //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSArray * senderList;                                          //@synthesize senderList=_senderList - In the implementation block
@property (nonatomic,copy) NSArray * toList;                                              //@synthesize toList=_toList - In the implementation block
@property (nonatomic,copy) NSArray * ccList;                                              //@synthesize ccList=_ccList - In the implementation block
@property (assign) BOOL isToMe;                                                           //@synthesize isToMe=_isToMe - In the implementation block
@property (assign) BOOL isCCMe;                                                           //@synthesize isCCMe=_isCCMe - In the implementation block
@property (nonatomic,retain) ECMessageFlags * flags;                                      //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSNumber * hasUnflagged;                                     //@synthesize hasUnflagged=_hasUnflagged - In the implementation block
@property (nonatomic,copy) id<EMMessageListItemChangeFlagColors> flagColors;              //@synthesize flagColors=_flagColors - In the implementation block
@property (nonatomic,retain) NSNumber * isVIP;                                            //@synthesize isVIP=_isVIP - In the implementation block
@property (nonatomic,retain) NSNumber * isBlocked;                                        //@synthesize isBlocked=_isBlocked - In the implementation block
@property (nonatomic,retain) NSNumber * hasAttachments;                                   //@synthesize hasAttachments=_hasAttachments - In the implementation block
@property (nonatomic,retain) NSNumber * conversationNotificationLevel;                    //@synthesize conversationNotificationLevel=_conversationNotificationLevel - In the implementation block
@property (nonatomic,retain) NSNumber * count;                                            //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSNumber * conversationID;                                   //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,copy) NSArray * mailboxObjectIDs; 
@property (nonatomic,copy) NSArray * mailboxes; 
@property (nonatomic,retain) id<EMCollectionItemID> displayMessageItemID;                 //@synthesize displayMessageItemID=_displayMessageItemID - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)changeForKeyPaths:(id)arg1 ofItem:(id)arg2 ;
+(id)changeFrom:(id)arg1 to:(id)arg2 ;
+(id)changesForKeyPaths:(id)arg1 ofItems:(id)arg2 ;
-(NSNumber *)isBlocked;
-(id<EMMessageListItemChangeSubject>)subject;
-(id<EMMessageListItemChangeSummary>)summary;
-(NSString *)ef_publicDescription;
-(void)setSubject:(id<EMMessageListItemChangeSubject>)arg1 ;
-(NSNumber *)isVIP;
-(void)setToList:(NSArray *)arg1 ;
-(void)setSenderList:(NSArray *)arg1 ;
-(void)setCcList:(NSArray *)arg1 ;
-(void)setHasAttachments:(NSNumber *)arg1 ;
-(void)setConversationNotificationLevel:(NSNumber *)arg1 ;
-(void)setIsToMe:(BOOL)arg1 ;
-(void)setIsCCMe:(BOOL)arg1 ;
-(void)setMailboxes:(NSArray *)arg1 ;
-(void)setCount:(NSNumber *)arg1 ;
-(NSArray *)mailboxObjectIDs;
-(NSDate *)date;
-(void)setSummary:(id<EMMessageListItemChangeSummary>)arg1 ;
-(NSArray *)toList;
-(NSArray *)ccList;
-(BOOL)isToMe;
-(BOOL)isCCMe;
-(void)setIsBlocked:(NSNumber *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)hasAttachments;
-(NSNumber *)conversationNotificationLevel;
-(void)setMailboxObjectIDs:(NSArray *)arg1 ;
-(NSNumber *)hasUnflagged;
-(id<EMMessageListItemChangeFlagColors>)flagColors;
-(id<EMCollectionItemID>)displayMessageItemID;
-(NSString *)description;
-(void)setFlags:(ECMessageFlags *)arg1 ;
-(void)setConversationID:(NSNumber *)arg1 ;
-(void)setHasUnflagged:(NSNumber *)arg1 ;
-(void)setFlagColors:(id<EMMessageListItemChangeFlagColors>)arg1 ;
-(void)setDisplayMessageItemID:(id<EMCollectionItemID>)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)conversationID;
-(NSNumber *)count;
-(NSArray *)mailboxes;
-(ECMessageFlags *)flags;
-(void)addChange:(id)arg1 ;
-(NSString *)debugDescription;
-(id)_descriptionForInternal:(BOOL)arg1 useDebugDescriptions:(BOOL)arg2 ;
-(id)_changeDescriptionsForInternal:(BOOL)arg1 useDebugDescriptions:(BOOL)arg2 ;
-(BOOL)applyToMessageListItem:(id)arg1 ;
-(void)setIsVIP:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)senderList;
@end

