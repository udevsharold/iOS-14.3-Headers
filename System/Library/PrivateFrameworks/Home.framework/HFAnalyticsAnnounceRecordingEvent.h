/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFAnalyticsEvent.h>

@class NSNumber, NSString;

@interface HFAnalyticsAnnounceRecordingEvent : HFAnalyticsEvent {

	BOOL _recordingInterruptedByUser;
	BOOL _recordingInterruptedBySystem;
	BOOL _recordingInterruptedByRouteChange;
	BOOL _isAReply;
	NSNumber* _recordingDuration;
	NSNumber* _recordingFailed;
	NSNumber* _announceRecordingIsForHome;
	NSString* _announceRecordingIsForRoom;
	NSNumber* _routeChangeInterruptionReason;
	NSString* _recipientAnnouncementID;
	NSString* _processName;

}

@property (nonatomic,retain) NSNumber * recordingDuration;                          //@synthesize recordingDuration=_recordingDuration - In the implementation block
@property (nonatomic,retain) NSNumber * recordingFailed;                            //@synthesize recordingFailed=_recordingFailed - In the implementation block
@property (nonatomic,retain) NSNumber * announceRecordingIsForHome;                 //@synthesize announceRecordingIsForHome=_announceRecordingIsForHome - In the implementation block
@property (nonatomic,copy) NSString * announceRecordingIsForRoom;                   //@synthesize announceRecordingIsForRoom=_announceRecordingIsForRoom - In the implementation block
@property (assign,nonatomic) BOOL recordingInterruptedByUser;                       //@synthesize recordingInterruptedByUser=_recordingInterruptedByUser - In the implementation block
@property (assign,nonatomic) BOOL recordingInterruptedBySystem;                     //@synthesize recordingInterruptedBySystem=_recordingInterruptedBySystem - In the implementation block
@property (assign,nonatomic) BOOL recordingInterruptedByRouteChange;                //@synthesize recordingInterruptedByRouteChange=_recordingInterruptedByRouteChange - In the implementation block
@property (assign,nonatomic) BOOL isAReply;                                         //@synthesize isAReply=_isAReply - In the implementation block
@property (nonatomic,retain) NSNumber * routeChangeInterruptionReason;              //@synthesize routeChangeInterruptionReason=_routeChangeInterruptionReason - In the implementation block
@property (nonatomic,retain) NSString * recipientAnnouncementID;                    //@synthesize recipientAnnouncementID=_recipientAnnouncementID - In the implementation block
@property (nonatomic,retain) NSString * processName;                                //@synthesize processName=_processName - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)processName;
-(NSNumber *)recordingDuration;
-(NSNumber *)recordingFailed;
-(NSNumber *)announceRecordingIsForHome;
-(NSString *)announceRecordingIsForRoom;
-(void)setRecordingFailed:(NSNumber *)arg1 ;
-(id)payload;
-(BOOL)recordingInterruptedByUser;
-(BOOL)recordingInterruptedBySystem;
-(BOOL)recordingInterruptedByRouteChange;
-(NSNumber *)routeChangeInterruptionReason;
-(NSString *)recipientAnnouncementID;
-(void)setRecordingDuration:(NSNumber *)arg1 ;
-(void)setAnnounceRecordingIsForHome:(NSNumber *)arg1 ;
-(void)setAnnounceRecordingIsForRoom:(NSString *)arg1 ;
-(void)setRecordingInterruptedByUser:(BOOL)arg1 ;
-(void)setRecordingInterruptedBySystem:(BOOL)arg1 ;
-(void)setRecordingInterruptedByRouteChange:(BOOL)arg1 ;
-(void)setIsAReply:(BOOL)arg1 ;
-(void)setRouteChangeInterruptionReason:(NSNumber *)arg1 ;
-(void)setRecipientAnnouncementID:(NSString *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)isAReply;
@end
