/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface FPThreadedCopier : NSObject {

	long long _numberOfInflightCopies;
	NSObject*<OS_dispatch_semaphore> _bufferLimitSemaphore;
	NSMutableArray* _buffers;
	NSObject*<OS_dispatch_queue> _writeQueue;

}

@property (assign,nonatomic) long long numberOfInflightCopies;                                   //@synthesize numberOfInflightCopies=_numberOfInflightCopies - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> bufferLimitSemaphore;              //@synthesize bufferLimitSemaphore=_bufferLimitSemaphore - In the implementation block
@property (nonatomic,retain) NSMutableArray * buffers;                                           //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> writeQueue;                            //@synthesize writeQueue=_writeQueue - In the implementation block
+(id)sharedCopier;
-(id)init;
-(void)setWriteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)beginOperation;
-(int)beginReading:(id)arg1 error:(id*)arg2 ;
-(void)setBuffers:(NSMutableArray *)arg1 ;
-(int)beginWriting:(id)arg1 overwriteDestination:(BOOL)arg2 error:(id*)arg3 ;
-(NSObject*<OS_dispatch_semaphore>)bufferLimitSemaphore;
-(BOOL)finishReading:(int)arg1 writing:(int)arg2 error:(id*)arg3 ;
-(long long)numberOfInflightCopies;
-(void)setNumberOfInflightCopies:(long long)arg1 ;
-(BOOL)copy:(id)arg1 to:(id)arg2 overwriteDestination:(BOOL)arg3 progress:(id)arg4 error:(id*)arg5 ;
-(void)setBufferLimitSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_queue>)writeQueue;
-(NSMutableArray *)buffers;
-(void)endOperation;
@end

