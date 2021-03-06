/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYStreamTransaction.h>

@protocol SYStreamEventHandlerBlocksSYStreamThroughputCounter;
@class NSDictionary, NSProgress, NSURL, NSOutputStream, NSString;

@interface SYOutputStreamTransaction : NSObject <SYStreamTransaction> {

	NSDictionary* _metadata;
	NSURL* _fileURL;
	NSOutputStream*<SYStreamEventHandlerBlocks>*<SYStreamThroughputCounter> _stream;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                      //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)metadata;
-(void)dealloc;
-(NSOutputStream *)outputStream;
-(NSURL *)fileURL;
-(long long)type;
-(NSProgress *)progress;
-(id)initWithMetadata:(id)arg1 ;
-(BOOL)prepare:(id*)arg1 ;
-(id)finalizeOutput:(id*)arg1 ;
@end

