/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _SYMessageTimerContext : NSObject {

	unsigned long long _seqno;
	NSString* _identifier;

}

@property (assign,nonatomic) unsigned long long seqno;              //@synthesize seqno=_seqno - In the implementation block
@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(unsigned long long)seqno;
-(void)setSeqno:(unsigned long long)arg1 ;
@end

