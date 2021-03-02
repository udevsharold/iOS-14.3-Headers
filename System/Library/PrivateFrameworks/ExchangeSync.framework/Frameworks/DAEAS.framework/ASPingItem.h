/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSNumber;

@interface ASPingItem : ASItem {

	NSArray* _folders;
	NSNumber* _heartBeatInterval;
	NSNumber* _maxFolders;
	NSNumber* _status;

}

@property (nonatomic,retain) NSArray * folders;                         //@synthesize folders=_folders - In the implementation block
@property (nonatomic,retain) NSNumber * heartBeatInterval;              //@synthesize heartBeatInterval=_heartBeatInterval - In the implementation block
@property (nonatomic,retain) NSNumber * maxFolders;                     //@synthesize maxFolders=_maxFolders - In the implementation block
@property (nonatomic,retain) NSNumber * status;                         //@synthesize status=_status - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSNumber *)status;
-(NSNumber *)heartBeatInterval;
-(NSArray *)folders;
-(id)description;
-(void)setFolders:(NSArray *)arg1 ;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)setHeartBeatInterval:(NSNumber *)arg1 ;
-(void)setMaxFolders:(NSNumber *)arg1 ;
-(NSNumber *)maxFolders;
@end
