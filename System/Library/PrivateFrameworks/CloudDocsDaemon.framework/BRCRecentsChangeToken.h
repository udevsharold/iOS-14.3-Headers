/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BRCRecentsChangeToken : NSObject {

	unsigned long long _notifRank;
	unsigned long long _databaseID;

}

@property (assign,nonatomic) unsigned long long notifRank;               //@synthesize notifRank=_notifRank - In the implementation block
@property (assign,nonatomic) unsigned long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)changeTokenFromData:(id)arg1 ;
-(unsigned long long)databaseID;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(id)toData;
-(id)description;
-(void)setNotifRank:(unsigned long long)arg1 ;
-(unsigned long long)notifRank;
@end

