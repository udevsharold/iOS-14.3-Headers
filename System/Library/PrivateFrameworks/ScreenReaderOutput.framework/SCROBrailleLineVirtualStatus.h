/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SCROBrailleLineVirtualStatus : NSObject {

	int _alignment;
	NSData* _data;
	long long _length;
	char* _cells;

}

@property (nonatomic,retain) NSData * data;                 //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) int alignment;                 //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long length;              //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) char* cells;                   //@synthesize cells=_cells - In the implementation block
-(char*)cells;
-(void)setLength:(long long)arg1 ;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(long long)length;
-(NSData *)data;
-(void)dealloc;
-(void)setData:(NSData *)arg1 ;
-(void)setCells:(char*)arg1 ;
@end

