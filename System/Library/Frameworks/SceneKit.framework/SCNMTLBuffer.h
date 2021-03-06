/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
@interface SCNMTLBuffer : NSObject {

	long long _usedCount;
	id<MTLBuffer> _buffer;
	unsigned long long _offset;
	id _dataSource;

}

@property (assign) long long usedCount;                              //@synthesize usedCount=_usedCount - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> buffer;                   //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) void* contents; 
@property (assign,nonatomic) id dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
-(void)setBuffer:(id<MTLBuffer>)arg1 ;
-(unsigned long long)offset;
-(void)setDataSource:(id)arg1 ;
-(void)dealloc;
-(void)setOffset:(unsigned long long)arg1 ;
-(void*)contents;
-(id<MTLBuffer>)buffer;
-(id)dataSource;
-(long long)usedCount;
-(void)setUsedCount:(long long)arg1 ;
-(long long)decrementUsedCount;
-(void)incrementUsedCount;
@end

