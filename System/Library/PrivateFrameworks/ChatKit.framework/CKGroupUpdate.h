/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKGroupUpdate : NSObject {

	unsigned long long _groupUpdateType;
	NSString* _handleID;

}

@property (assign,nonatomic) unsigned long long groupUpdateType;              //@synthesize groupUpdateType=_groupUpdateType - In the implementation block
@property (nonatomic,retain) NSString * handleID;                             //@synthesize handleID=_handleID - In the implementation block
-(NSString *)handleID;
-(id)initWithType:(unsigned long long)arg1 handleID:(id)arg2 ;
-(unsigned long long)groupUpdateType;
-(void)setGroupUpdateType:(unsigned long long)arg1 ;
-(id)description;
-(void)setHandleID:(NSString *)arg1 ;
@end

