/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OISFUBufferedInputStream.h>

@protocol OISFUBufferedInputStream <SFUInputStream>
@required
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2;
-(BOOL)seekWithinBufferToOffset:(long long)arg1;

@end


@protocol SFUInputStream;
@class NSString;

@interface OISFUBufferedInputStream : NSObject <OISFUBufferedInputStream> {

	id<SFUInputStream> mStream;
	char* mBuffer;
	unsigned long long mBufferSize;
	long long mBufferOffset;
	long long mBufferStart;
	long long mBufferEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStream:(id)arg1 ;
-(BOOL)canSeek;
-(long long)offset;
-(void)dealloc;
-(void)seekToOffset:(long long)arg1 ;
-(void)close;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(id)initWithStream:(id)arg1 dataLength:(long long)arg2 ;
-(id)initWithStream:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(BOOL)seekWithinBufferToOffset:(long long)arg1 ;
@end

