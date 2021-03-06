/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKStreamLogStatsTuple : NSObject {

	NSString* _fileAndLine;
	unsigned long long _count;
	unsigned long long _size;

}

@property (nonatomic,retain) NSString * fileAndLine;                //@synthesize fileAndLine=_fileAndLine - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
-(void)setCount:(unsigned long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(unsigned long long)size;
-(unsigned long long)count;
-(NSString *)fileAndLine;
-(void)setFileAndLine:(NSString *)arg1 ;
@end

