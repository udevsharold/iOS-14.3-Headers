/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:32:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPReadCoordinator;
@class NSMapTable, TSPFinalizeHandlerQueue;

@interface TSPReadCompletionInfo : NSObject {

	NSMapTable* _objects;
	id<TSPReadCoordinator> _readCoordinator;
	TSPFinalizeHandlerQueue* _finalizeHandlerQueue;

}

@property (nonatomic,readonly) NSMapTable * objects;                                        //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) id<TSPReadCoordinator> readCoordinator;                      //@synthesize readCoordinator=_readCoordinator - In the implementation block
@property (nonatomic,readonly) TSPFinalizeHandlerQueue * finalizeHandlerQueue;              //@synthesize finalizeHandlerQueue=_finalizeHandlerQueue - In the implementation block
-(NSMapTable *)objects;
-(id)initWithObjects:(id)arg1 readCoordinator:(id)arg2 finalizeHandlerQueue:(id)arg3 ;
-(TSPFinalizeHandlerQueue *)finalizeHandlerQueue;
-(id<TSPReadCoordinator>)readCoordinator;
@end
