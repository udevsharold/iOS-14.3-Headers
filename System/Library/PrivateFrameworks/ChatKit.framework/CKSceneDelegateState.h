/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSDate;

@interface CKSceneDelegateState : NSObject <NSSecureCoding> {

	BOOL _composingNewMessage;
	BOOL _showingInbox;
	NSArray* _unreadLastMessages;
	NSString* _groupID;
	NSDate* _date;
	unsigned long long _filterMode;

}

@property (assign,nonatomic) BOOL composingNewMessage;                   //@synthesize composingNewMessage=_composingNewMessage - In the implementation block
@property (nonatomic,retain) NSString * groupID;                         //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSArray * unreadLastMessages;               //@synthesize unreadLastMessages=_unreadLastMessages - In the implementation block
@property (nonatomic,retain) NSDate * date;                              //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long filterMode;              //@synthesize filterMode=_filterMode - In the implementation block
@property (assign,nonatomic) BOOL showingInbox;                          //@synthesize showingInbox=_showingInbox - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)unarchivingClasses;
-(id)init;
-(void)setGroupID:(NSString *)arg1 ;
-(NSDate *)date;
-(unsigned long long)filterMode;
-(NSArray *)unreadLastMessages;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)showingInbox;
-(id)description;
-(void)setFilterMode:(unsigned long long)arg1 ;
-(void)setShowingInbox:(BOOL)arg1 ;
-(BOOL)composingNewMessage;
-(void)setUnreadLastMessages:(NSArray *)arg1 ;
-(void)setComposingNewMessage:(BOOL)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)groupID;
-(id)initWithUnreadMessages:(id)arg1 groupID:(id)arg2 composingNewMessage:(BOOL)arg3 filterMode:(unsigned long long)arg4 showingInbox:(BOOL)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

