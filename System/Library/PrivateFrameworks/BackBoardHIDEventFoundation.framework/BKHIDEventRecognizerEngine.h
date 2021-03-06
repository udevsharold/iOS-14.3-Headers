/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BKHIDEventProcessor.h>

@class NSMutableArray, NSString;

@interface BKHIDEventRecognizerEngine : NSObject <BKHIDEventProcessor> {

	os_unfair_lock_s _lock;
	NSMutableArray* _recognizers;
	NSMutableArray* _blocks;

}

@property (nonatomic,retain) NSMutableArray * recognizers;              //@synthesize recognizers=_recognizers - In the implementation block
@property (nonatomic,retain) NSMutableArray * blocks;                   //@synthesize blocks=_blocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)processEvent:(inout _IOHIDEvent*)arg1 sender:(id)arg2 dispatcher:(id)arg3 ;
-(NSMutableArray *)blocks;
-(void)removeRecognizer:(id)arg1 ;
-(void)addRecognizer:(id)arg1 recognitionBlock:(/*^block*/id)arg2 ;
-(void)setBlocks:(NSMutableArray *)arg1 ;
-(void)setRecognizers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)recognizers;
@end

