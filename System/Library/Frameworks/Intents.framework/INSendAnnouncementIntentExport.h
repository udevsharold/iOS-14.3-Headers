/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INAnnouncement, NSArray, NSNumber;


@protocol INSendAnnouncementIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INAnnouncement * announcement; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSNumber * isReply; 
@required
-(id)init;
-(void)setRecipients:(id)arg1;
-(NSArray *)recipients;
-(NSNumber *)isReply;
-(INAnnouncement *)announcement;
-(void)setAnnouncement:(id)arg1;
-(void)setIsReply:(id)arg1;

@end
