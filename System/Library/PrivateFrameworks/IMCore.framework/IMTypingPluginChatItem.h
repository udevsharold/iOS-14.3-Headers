/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMTypingChatItem.h>
#import <IMCore/IMPluginChatItemProtocol.h>

@class NSData, IMBalloonPluginDataSource, NSString;

@interface IMTypingPluginChatItem : IMTypingChatItem <IMPluginChatItemProtocol> {

	NSData* _typingIndicatorIcon;
	IMBalloonPluginDataSource* _dataSource;

}

@property (nonatomic,retain) IMBalloonPluginDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSData * typingIndicatorIcon;                      //@synthesize typingIndicatorIcon=_typingIndicatorIcon - In the implementation block
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)__ck_chatItemClass;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(NSString *)type;
-(IMBalloonPluginDataSource *)dataSource;
-(NSData *)typingIndicatorIcon;
-(id)_initWithItem:(id)arg1 dataSource:(id)arg2 ;
@end

