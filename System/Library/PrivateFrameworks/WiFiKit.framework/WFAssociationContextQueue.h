/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface WFAssociationContextQueue : NSObject {

	NSMutableArray* _queue;

}

@property (nonatomic,retain) NSMutableArray * queue;              //@synthesize queue=_queue - In the implementation block
-(void)push:(id)arg1 ;
-(void)removeAll;
-(id)init;
-(id)pop;
-(void)setQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)queue;
-(id)peek;
-(void)_dumpQueue;
@end
