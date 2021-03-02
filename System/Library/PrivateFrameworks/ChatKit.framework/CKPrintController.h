/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class CNAvatarImageRenderer, NSCache;

@interface CKPrintController : NSObject {

	BOOL _isPrinting;
	CNAvatarImageRenderer* _avatarImageRenderer;
	NSCache* _avatarCache;

}

@property (nonatomic,retain) CNAvatarImageRenderer * avatarImageRenderer;              //@synthesize avatarImageRenderer=_avatarImageRenderer - In the implementation block
@property (nonatomic,retain) NSCache * avatarCache;                                    //@synthesize avatarCache=_avatarCache - In the implementation block
@property (assign,setter=setPrinting:,nonatomic) BOOL isPrinting;                      //@synthesize isPrinting=_isPrinting - In the implementation block
+(id)sharedInstance;
+(void)printResolvedColors:(id*)arg1 balloonDescriptor:(CKBalloonDescriptor_t*)arg2 coloredBalloonView:(id)arg3 ;
+(id)printTranscriptTextColor;
+(id)printBackgroundColor;
+(id)printBalloonTextColor;
+(id)printAttributes:(id)arg1 ;
-(void)clearAvatarCache;
-(id)init;
-(void)setPrinting:(BOOL)arg1 ;
-(CNAvatarImageRenderer *)avatarImageRenderer;
-(void)setAvatarImageRenderer:(CNAvatarImageRenderer *)arg1 ;
-(NSCache *)avatarCache;
-(void)setAvatarCache:(NSCache *)arg1 ;
-(id)avatarImageForContact:(id)arg1 diameter:(double)arg2 ;
-(BOOL)isPrinting;
@end
